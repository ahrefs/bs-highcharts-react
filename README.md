# bs-highcharts-react

These are [Bucklescript](https://bucklescript.github.io/) bindings for [highcharts-react](https://github.com/highcharts/highcharts-react), the official [Highcharts](https://www.highcharts.com/) wrapper for React.
🚧 They are not complete. Types can change in a backwards incompatible way between minor versions. 🚧

# Install

```bash
# Needs @ahrefs/bs-highcharts to be installed, to define the chart options
yarn add @ahrefs/bs-highcharts
yarn add @ahrefs/bs-highcharts-react
```

# Setup

Add `bs-highcharts` and `bs-highcharts-react` to `bs-dependencies` in your `bsconfig.json`.

```js
{
  /* ... */
  "bs-dependencies": [
    "reason-react",
    "@ahrefs/bs-highcharts",
    "@ahrefs/bs-highcharts-react"
  ],
  /* ... */
}
```

# Usage Example

In your `Component.re` module:

```reason
let options =
  Highcharts.Options.(
    make(
      ~title=Title.make(~text="My chart", ()),
      ~series=[|Series.line(~data=[|1, 2, 3|], ())|],
      (),
    )
  );

let component = ReasonReact.statelessComponent(__MODULE__);

let make = _children => {
  ...component,
  render: _self =>
    <div> <HighchartsReact highcharts=Highcharts.default options /> </div>,
};
```
