// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTTEXTLAYERCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTTEXTLAYERCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& obj) { 
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent(const DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent(DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent &&) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& operator=(const DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& operator=(DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->borderColor_ != nullptr
        && this->borderWidthNormalized_ != nullptr && this->color_ != nullptr && this->fontName_ != nullptr && this->sizeNormalized_ != nullptr && this->text_ != nullptr; };
    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidthNormalized Field Functions 
    bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
    void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
    inline float borderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // sizeNormalized Field Functions 
    bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
    void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
    inline float sizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(sizeNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setSizeNormalized(float sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentTextLayerContent& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The color of the text border. Valid values: **0x000000 to 0xffffff**. If the value of this parameter is **""**, this parameter does not take effect.
    std::shared_ptr<string> borderColor_ = nullptr;
    // The normalized value of the width of the text border. The value of this parameter equals the border width divided by the font size.****
    // 
    // The maximum width of the text border is **16**, even if the border width calculated based on this parameter is greater than **16**.
    std::shared_ptr<float> borderWidthNormalized_ = nullptr;
    // The color of the text. Valid values: **0x000000 to 0xffffff**.
    std::shared_ptr<string> color_ = nullptr;
    // The font of the text, which is specified by the system. Valid values:
    // 
    // *   **KaiTi**
    // *   **AlibabaPuHuiTi-Regular**
    // *   **AlibabaPuHuiTi-Bold**
    // *   **NAlibabaPuHuiTi-Light**
    // *   **NotoSansHans-Regular**
    // *   **NotoSansHans-Bold**
    // *   **NotoSansHans-Light**
    // 
    // ****
    std::shared_ptr<string> fontName_ = nullptr;
    // The normalized value of the font size of the text.
    // 
    // The value of this parameter equals the font size divided by the output height.**** The maximum font size of the text is **1,024**, even if the font size calculated based on this parameter is greater than **1,024**. If the value of this parameter is **-1**, this parameter does not take effect.
    std::shared_ptr<float> sizeNormalized_ = nullptr;
    // The content of the text.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
