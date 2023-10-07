import React, { useState } from 'react';

function Count() {
  const [count, setCount] = useState(0);

  function increment() {
    setCount(count + 1);
  }

  return (
    <div>
      <button onClick={increment}>Click</button>
      <p>Count: {count}</p>
    </div>
  );
}

export default Count;
