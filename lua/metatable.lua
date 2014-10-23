#!/usr/local/bin/lua

T = { container = { } }

T.mt = {

  __add = function(a, b)
    local c = T.new{}
    for k,v in pairs(T.new(a)) do
      c[k] = v
    end
    for k,v in pairs(T.new(b)) do
      c[k] = v
    end
    return c
  end,

  __sub = function(a, b)
    local c = T.new{}
    for k,v in pairs(T.new(a)) do
      c[k] = v
    end
    for k,v in pairs(T.new(b)) do
      c[k] = nil
    end
    return c
  end,

  __tostring = function(a)
    local l = { }
    for k in pairs(a) do
      l[#l+1] = k;
    end
    return "{"..table.concat(l, ",").."}"
  end
}

T.new = function(t)
  if (t == nil) then t = {} end
  if (getmetatable(t) == T.mt) then return t end
  local r = {}
  for _, b in ipairs(t) do
    r[tostring(b)] = true
  end
  setmetatable(r, T.mt)
  return r
end

T.print = function(t) 
   for k, v in pairs(t.container) do
     print(k)
     print(v)
   end
 end

local mt = {
  __newindex = function(t, k, v)
    t.container[k] = T.new(v)
  end,

  __index = function(t, k)
    return t.container[k]
  end,
}

setmetatable(T, mt)

T["first"] = { "a1", "b1"}
print("elements in table first")
T.print(T)
T["second"] = T["first"] + { "a2", "b2", "a3", "b3"}
print("elements in table first and  second")
T.print(T)
T["third"] = T["second"] - { "a3", "b3" }
print("elements in table first, second and third")
T.print(T)
