// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUESTPANESTEXTS_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUESTPANESTEXTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestPanesTextsBoxColor.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestPanesTextsFontColor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartStreamingOutShrinkRequestPanesTexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutShrinkRequestPanesTexts& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(BoxAlpha, boxAlpha_);
      DARABONBA_PTR_TO_JSON(BoxBorderw, boxBorderw_);
      DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
      DARABONBA_PTR_TO_JSON(Display, display_);
      DARABONBA_PTR_TO_JSON(Font, font_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(HasBox, hasBox_);
      DARABONBA_PTR_TO_JSON(Layer, layer_);
      DARABONBA_PTR_TO_JSON(Texture, texture_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, StartStreamingOutShrinkRequestPanesTexts& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(BoxAlpha, boxAlpha_);
      DARABONBA_PTR_FROM_JSON(BoxBorderw, boxBorderw_);
      DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
      DARABONBA_PTR_FROM_JSON(Display, display_);
      DARABONBA_PTR_FROM_JSON(Font, font_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(HasBox, hasBox_);
      DARABONBA_PTR_FROM_JSON(Layer, layer_);
      DARABONBA_PTR_FROM_JSON(Texture, texture_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    StartStreamingOutShrinkRequestPanesTexts() = default ;
    StartStreamingOutShrinkRequestPanesTexts(const StartStreamingOutShrinkRequestPanesTexts &) = default ;
    StartStreamingOutShrinkRequestPanesTexts(StartStreamingOutShrinkRequestPanesTexts &&) = default ;
    StartStreamingOutShrinkRequestPanesTexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutShrinkRequestPanesTexts() = default ;
    StartStreamingOutShrinkRequestPanesTexts& operator=(const StartStreamingOutShrinkRequestPanesTexts &) = default ;
    StartStreamingOutShrinkRequestPanesTexts& operator=(StartStreamingOutShrinkRequestPanesTexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alpha_ == nullptr
        && return this->boxAlpha_ == nullptr && return this->boxBorderw_ == nullptr && return this->boxColor_ == nullptr && return this->display_ == nullptr && return this->font_ == nullptr
        && return this->fontColor_ == nullptr && return this->fontSize_ == nullptr && return this->hasBox_ == nullptr && return this->layer_ == nullptr && return this->texture_ == nullptr
        && return this->x_ == nullptr && return this->y_ == nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline double alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setAlpha(double alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // boxAlpha Field Functions 
    bool hasBoxAlpha() const { return this->boxAlpha_ != nullptr;};
    void deleteBoxAlpha() { this->boxAlpha_ = nullptr;};
    inline double boxAlpha() const { DARABONBA_PTR_GET_DEFAULT(boxAlpha_, 0.0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setBoxAlpha(double boxAlpha) { DARABONBA_PTR_SET_VALUE(boxAlpha_, boxAlpha) };


    // boxBorderw Field Functions 
    bool hasBoxBorderw() const { return this->boxBorderw_ != nullptr;};
    void deleteBoxBorderw() { this->boxBorderw_ = nullptr;};
    inline int32_t boxBorderw() const { DARABONBA_PTR_GET_DEFAULT(boxBorderw_, 0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setBoxBorderw(int32_t boxBorderw) { DARABONBA_PTR_SET_VALUE(boxBorderw_, boxBorderw) };


    // boxColor Field Functions 
    bool hasBoxColor() const { return this->boxColor_ != nullptr;};
    void deleteBoxColor() { this->boxColor_ = nullptr;};
    inline const Models::StartStreamingOutShrinkRequestPanesTextsBoxColor & boxColor() const { DARABONBA_PTR_GET_CONST(boxColor_, Models::StartStreamingOutShrinkRequestPanesTextsBoxColor) };
    inline Models::StartStreamingOutShrinkRequestPanesTextsBoxColor boxColor() { DARABONBA_PTR_GET(boxColor_, Models::StartStreamingOutShrinkRequestPanesTextsBoxColor) };
    inline StartStreamingOutShrinkRequestPanesTexts& setBoxColor(const Models::StartStreamingOutShrinkRequestPanesTextsBoxColor & boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };
    inline StartStreamingOutShrinkRequestPanesTexts& setBoxColor(Models::StartStreamingOutShrinkRequestPanesTextsBoxColor && boxColor) { DARABONBA_PTR_SET_RVALUE(boxColor_, boxColor) };


    // display Field Functions 
    bool hasDisplay() const { return this->display_ != nullptr;};
    void deleteDisplay() { this->display_ = nullptr;};
    inline string display() const { DARABONBA_PTR_GET_DEFAULT(display_, "") };
    inline StartStreamingOutShrinkRequestPanesTexts& setDisplay(string display) { DARABONBA_PTR_SET_VALUE(display_, display) };


    // font Field Functions 
    bool hasFont() const { return this->font_ != nullptr;};
    void deleteFont() { this->font_ = nullptr;};
    inline int32_t font() const { DARABONBA_PTR_GET_DEFAULT(font_, 0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setFont(int32_t font) { DARABONBA_PTR_SET_VALUE(font_, font) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline const Models::StartStreamingOutShrinkRequestPanesTextsFontColor & fontColor() const { DARABONBA_PTR_GET_CONST(fontColor_, Models::StartStreamingOutShrinkRequestPanesTextsFontColor) };
    inline Models::StartStreamingOutShrinkRequestPanesTextsFontColor fontColor() { DARABONBA_PTR_GET(fontColor_, Models::StartStreamingOutShrinkRequestPanesTextsFontColor) };
    inline StartStreamingOutShrinkRequestPanesTexts& setFontColor(const Models::StartStreamingOutShrinkRequestPanesTextsFontColor & fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };
    inline StartStreamingOutShrinkRequestPanesTexts& setFontColor(Models::StartStreamingOutShrinkRequestPanesTextsFontColor && fontColor) { DARABONBA_PTR_SET_RVALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // hasBox Field Functions 
    bool hasHasBox() const { return this->hasBox_ != nullptr;};
    void deleteHasBox() { this->hasBox_ = nullptr;};
    inline bool hasBox() const { DARABONBA_PTR_GET_DEFAULT(hasBox_, false) };
    inline StartStreamingOutShrinkRequestPanesTexts& setHasBox(bool hasBox) { DARABONBA_PTR_SET_VALUE(hasBox_, hasBox) };


    // layer Field Functions 
    bool hasLayer() const { return this->layer_ != nullptr;};
    void deleteLayer() { this->layer_ = nullptr;};
    inline int32_t layer() const { DARABONBA_PTR_GET_DEFAULT(layer_, 0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setLayer(int32_t layer) { DARABONBA_PTR_SET_VALUE(layer_, layer) };


    // texture Field Functions 
    bool hasTexture() const { return this->texture_ != nullptr;};
    void deleteTexture() { this->texture_ = nullptr;};
    inline string texture() const { DARABONBA_PTR_GET_DEFAULT(texture_, "") };
    inline StartStreamingOutShrinkRequestPanesTexts& setTexture(string texture) { DARABONBA_PTR_SET_VALUE(texture_, texture) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline double x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setX(double x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline double y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline StartStreamingOutShrinkRequestPanesTexts& setY(double y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<double> alpha_ = nullptr;
    std::shared_ptr<double> boxAlpha_ = nullptr;
    std::shared_ptr<int32_t> boxBorderw_ = nullptr;
    std::shared_ptr<Models::StartStreamingOutShrinkRequestPanesTextsBoxColor> boxColor_ = nullptr;
    std::shared_ptr<string> display_ = nullptr;
    std::shared_ptr<int32_t> font_ = nullptr;
    std::shared_ptr<Models::StartStreamingOutShrinkRequestPanesTextsFontColor> fontColor_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<bool> hasBox_ = nullptr;
    std::shared_ptr<int32_t> layer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> texture_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> x_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
