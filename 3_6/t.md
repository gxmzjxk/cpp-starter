## Reference from Lego
Lego 文档及示例：[弹性布局 Flex](http://admin.bytedance.com/rogue/lego/#flex)

**Basic**

``` jsx
<div>
    <Flex style={{marginBottom: '10px'}}>
        <Flex.Item><div style={{background: '#f5f5f5'}}>Block</div></Flex.Item>
        <Flex.Item><div style={{textAlign: 'center', background: '#f5f5f5'}}>Block</div></Flex.Item>
    </Flex>
</div>
```

**Wrap**

``` jsx
<Flex wrap="wrap">
    <div style={{marginRight: '5px', padding: '5px', background: '#f5f5f5'}}>Block</div>
    <div style={{marginRight: '5px', padding: '5px', background: '#f5f5f5'}}>Block</div>
    <div style={{padding: '5px', background: '#f5f5f5'}}>Block</div>
</Flex>
```

**Align**

``` jsx
<div>
    <Flex justify="center" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
    <Flex justify="end" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
    <Flex justify="between" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
    <Flex align="start" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
    <Flex align="end" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
    <Flex align="baseline" style={{marginBottom: '10px'}}>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
        <div style={{width: '80px', margin: '9px', background: '#f5f5f5'}}>Block</div>
    </Flex>
</div>
```
