// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBOFFICEWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_WEBOFFICEWATERMARK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class WebofficeWatermark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebofficeWatermark& obj) { 
      DARABONBA_PTR_TO_JSON(FillStyle, fillStyle_);
      DARABONBA_PTR_TO_JSON(Font, font_);
      DARABONBA_PTR_TO_JSON(Horizontal, horizontal_);
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Vertical, vertical_);
    };
    friend void from_json(const Darabonba::Json& j, WebofficeWatermark& obj) { 
      DARABONBA_PTR_FROM_JSON(FillStyle, fillStyle_);
      DARABONBA_PTR_FROM_JSON(Font, font_);
      DARABONBA_PTR_FROM_JSON(Horizontal, horizontal_);
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Vertical, vertical_);
    };
    WebofficeWatermark() = default ;
    WebofficeWatermark(const WebofficeWatermark &) = default ;
    WebofficeWatermark(WebofficeWatermark &&) = default ;
    WebofficeWatermark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebofficeWatermark() = default ;
    WebofficeWatermark& operator=(const WebofficeWatermark &) = default ;
    WebofficeWatermark& operator=(WebofficeWatermark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fillStyle_ == nullptr
        && return this->font_ == nullptr && return this->horizontal_ == nullptr && return this->rotate_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr
        && return this->vertical_ == nullptr; };
    // fillStyle Field Functions 
    bool hasFillStyle() const { return this->fillStyle_ != nullptr;};
    void deleteFillStyle() { this->fillStyle_ = nullptr;};
    inline string fillStyle() const { DARABONBA_PTR_GET_DEFAULT(fillStyle_, "") };
    inline WebofficeWatermark& setFillStyle(string fillStyle) { DARABONBA_PTR_SET_VALUE(fillStyle_, fillStyle) };


    // font Field Functions 
    bool hasFont() const { return this->font_ != nullptr;};
    void deleteFont() { this->font_ = nullptr;};
    inline string font() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
    inline WebofficeWatermark& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


    // horizontal Field Functions 
    bool hasHorizontal() const { return this->horizontal_ != nullptr;};
    void deleteHorizontal() { this->horizontal_ = nullptr;};
    inline int64_t horizontal() const { DARABONBA_PTR_GET_DEFAULT(horizontal_, 0L) };
    inline WebofficeWatermark& setHorizontal(int64_t horizontal) { DARABONBA_PTR_SET_VALUE(horizontal_, horizontal) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline float rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, 0.0) };
    inline WebofficeWatermark& setRotate(float rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline WebofficeWatermark& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline WebofficeWatermark& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // vertical Field Functions 
    bool hasVertical() const { return this->vertical_ != nullptr;};
    void deleteVertical() { this->vertical_ = nullptr;};
    inline int64_t vertical() const { DARABONBA_PTR_GET_DEFAULT(vertical_, 0L) };
    inline WebofficeWatermark& setVertical(int64_t vertical) { DARABONBA_PTR_SET_VALUE(vertical_, vertical) };


  protected:
    std::shared_ptr<string> fillStyle_ = nullptr;
    std::shared_ptr<string> font_ = nullptr;
    std::shared_ptr<int64_t> horizontal_ = nullptr;
    std::shared_ptr<float> rotate_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<int64_t> vertical_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
