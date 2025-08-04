// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTUSERPANESTEXTS_HPP_
#define ALIBABACLOUD_MODELS_STARTMPUTASKREQUESTUSERPANESTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartMPUTaskRequestUserPanesTexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartMPUTaskRequestUserPanesTexts& obj) { 
      DARABONBA_PTR_TO_JSON(Alpha, alpha_);
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_TO_JSON(Box, box_);
      DARABONBA_PTR_TO_JSON(BoxBorderWidth, boxBorderWidth_);
      DARABONBA_PTR_TO_JSON(BoxColor, boxColor_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(FontType, fontType_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, StartMPUTaskRequestUserPanesTexts& obj) { 
      DARABONBA_PTR_FROM_JSON(Alpha, alpha_);
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_FROM_JSON(Box, box_);
      DARABONBA_PTR_FROM_JSON(BoxBorderWidth, boxBorderWidth_);
      DARABONBA_PTR_FROM_JSON(BoxColor, boxColor_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(FontType, fontType_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    StartMPUTaskRequestUserPanesTexts() = default ;
    StartMPUTaskRequestUserPanesTexts(const StartMPUTaskRequestUserPanesTexts &) = default ;
    StartMPUTaskRequestUserPanesTexts(StartMPUTaskRequestUserPanesTexts &&) = default ;
    StartMPUTaskRequestUserPanesTexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartMPUTaskRequestUserPanesTexts() = default ;
    StartMPUTaskRequestUserPanesTexts& operator=(const StartMPUTaskRequestUserPanesTexts &) = default ;
    StartMPUTaskRequestUserPanesTexts& operator=(StartMPUTaskRequestUserPanesTexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alpha_ != nullptr
        && this->borderColor_ != nullptr && this->borderWidth_ != nullptr && this->box_ != nullptr && this->boxBorderWidth_ != nullptr && this->boxColor_ != nullptr
        && this->fontColor_ != nullptr && this->fontSize_ != nullptr && this->fontType_ != nullptr && this->text_ != nullptr && this->x_ != nullptr
        && this->y_ != nullptr && this->ZOrder_ != nullptr; };
    // alpha Field Functions 
    bool hasAlpha() const { return this->alpha_ != nullptr;};
    void deleteAlpha() { this->alpha_ = nullptr;};
    inline float alpha() const { DARABONBA_PTR_GET_DEFAULT(alpha_, 0.0) };
    inline StartMPUTaskRequestUserPanesTexts& setAlpha(float alpha) { DARABONBA_PTR_SET_VALUE(alpha_, alpha) };


    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline int64_t borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, 0L) };
    inline StartMPUTaskRequestUserPanesTexts& setBorderColor(int64_t borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidth Field Functions 
    bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
    void deleteBorderWidth() { this->borderWidth_ = nullptr;};
    inline int32_t borderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


    // box Field Functions 
    bool hasBox() const { return this->box_ != nullptr;};
    void deleteBox() { this->box_ = nullptr;};
    inline bool box() const { DARABONBA_PTR_GET_DEFAULT(box_, false) };
    inline StartMPUTaskRequestUserPanesTexts& setBox(bool box) { DARABONBA_PTR_SET_VALUE(box_, box) };


    // boxBorderWidth Field Functions 
    bool hasBoxBorderWidth() const { return this->boxBorderWidth_ != nullptr;};
    void deleteBoxBorderWidth() { this->boxBorderWidth_ = nullptr;};
    inline int32_t boxBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(boxBorderWidth_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setBoxBorderWidth(int32_t boxBorderWidth) { DARABONBA_PTR_SET_VALUE(boxBorderWidth_, boxBorderWidth) };


    // boxColor Field Functions 
    bool hasBoxColor() const { return this->boxColor_ != nullptr;};
    void deleteBoxColor() { this->boxColor_ = nullptr;};
    inline int64_t boxColor() const { DARABONBA_PTR_GET_DEFAULT(boxColor_, 0L) };
    inline StartMPUTaskRequestUserPanesTexts& setBoxColor(int64_t boxColor) { DARABONBA_PTR_SET_VALUE(boxColor_, boxColor) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline int32_t fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // fontType Field Functions 
    bool hasFontType() const { return this->fontType_ != nullptr;};
    void deleteFontType() { this->fontType_ = nullptr;};
    inline int32_t fontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline StartMPUTaskRequestUserPanesTexts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline StartMPUTaskRequestUserPanesTexts& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline StartMPUTaskRequestUserPanesTexts& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline StartMPUTaskRequestUserPanesTexts& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<float> alpha_ = nullptr;
    std::shared_ptr<int64_t> borderColor_ = nullptr;
    std::shared_ptr<int32_t> borderWidth_ = nullptr;
    std::shared_ptr<bool> box_ = nullptr;
    std::shared_ptr<int32_t> boxBorderWidth_ = nullptr;
    std::shared_ptr<int64_t> boxColor_ = nullptr;
    std::shared_ptr<int32_t> fontColor_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<int32_t> fontType_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
    std::shared_ptr<int32_t> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
