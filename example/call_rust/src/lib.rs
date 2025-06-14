// wasm-packd은 wasm-bindgen을 사용하여 자바스크립트 바인딩 파일을 만들고 생성한다.
// wasm-bindgen 상자를 가져옵니다.

use wasm_bindgen::prelude::*;

#[wasm_bindgen]
pub fn calculate_add(a: i32, b: i32) -> i32 {
  return a + b;
}
