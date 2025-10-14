// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESSUBTITLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequestFramesSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequestFramesSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(alignment, alignment_);
      DARABONBA_PTR_TO_JSON(backgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(font, font_);
      DARABONBA_PTR_TO_JSON(fontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(fontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(maxCharLength, maxCharLength_);
      DARABONBA_PTR_TO_JSON(positionX, positionX_);
      DARABONBA_PTR_TO_JSON(positionY, positionY_);
      DARABONBA_PTR_TO_JSON(textHeight, textHeight_);
      DARABONBA_PTR_TO_JSON(textWidth, textWidth_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequestFramesSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(alignment, alignment_);
      DARABONBA_PTR_FROM_JSON(backgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(font, font_);
      DARABONBA_PTR_FROM_JSON(fontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(fontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(maxCharLength, maxCharLength_);
      DARABONBA_PTR_FROM_JSON(positionX, positionX_);
      DARABONBA_PTR_FROM_JSON(positionY, positionY_);
      DARABONBA_PTR_FROM_JSON(textHeight, textHeight_);
      DARABONBA_PTR_FROM_JSON(textWidth, textWidth_);
    };
    SubmitProjectTaskRequestFramesSubtitle() = default ;
    SubmitProjectTaskRequestFramesSubtitle(const SubmitProjectTaskRequestFramesSubtitle &) = default ;
    SubmitProjectTaskRequestFramesSubtitle(SubmitProjectTaskRequestFramesSubtitle &&) = default ;
    SubmitProjectTaskRequestFramesSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequestFramesSubtitle() = default ;
    SubmitProjectTaskRequestFramesSubtitle& operator=(const SubmitProjectTaskRequestFramesSubtitle &) = default ;
    SubmitProjectTaskRequestFramesSubtitle& operator=(SubmitProjectTaskRequestFramesSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignment_ == nullptr
        && return this->backgroundColor_ == nullptr && return this->font_ == nullptr && return this->fontColor_ == nullptr && return this->fontSize_ == nullptr && return this->maxCharLength_ == nullptr
        && return this->positionX_ == nullptr && return this->positionY_ == nullptr && return this->textHeight_ == nullptr && return this->textWidth_ == nullptr; };
    // alignment Field Functions 
    bool hasAlignment() const { return this->alignment_ != nullptr;};
    void deleteAlignment() { this->alignment_ = nullptr;};
    inline string alignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
    inline SubmitProjectTaskRequestFramesSubtitle& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline string backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
    inline SubmitProjectTaskRequestFramesSubtitle& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // font Field Functions 
    bool hasFont() const { return this->font_ != nullptr;};
    void deleteFont() { this->font_ = nullptr;};
    inline string font() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
    inline SubmitProjectTaskRequestFramesSubtitle& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline SubmitProjectTaskRequestFramesSubtitle& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // maxCharLength Field Functions 
    bool hasMaxCharLength() const { return this->maxCharLength_ != nullptr;};
    void deleteMaxCharLength() { this->maxCharLength_ = nullptr;};
    inline int32_t maxCharLength() const { DARABONBA_PTR_GET_DEFAULT(maxCharLength_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setMaxCharLength(int32_t maxCharLength) { DARABONBA_PTR_SET_VALUE(maxCharLength_, maxCharLength) };


    // positionX Field Functions 
    bool hasPositionX() const { return this->positionX_ != nullptr;};
    void deletePositionX() { this->positionX_ = nullptr;};
    inline int32_t positionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setPositionX(int32_t positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


    // positionY Field Functions 
    bool hasPositionY() const { return this->positionY_ != nullptr;};
    void deletePositionY() { this->positionY_ = nullptr;};
    inline int32_t positionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setPositionY(int32_t positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    // textHeight Field Functions 
    bool hasTextHeight() const { return this->textHeight_ != nullptr;};
    void deleteTextHeight() { this->textHeight_ = nullptr;};
    inline int32_t textHeight() const { DARABONBA_PTR_GET_DEFAULT(textHeight_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setTextHeight(int32_t textHeight) { DARABONBA_PTR_SET_VALUE(textHeight_, textHeight) };


    // textWidth Field Functions 
    bool hasTextWidth() const { return this->textWidth_ != nullptr;};
    void deleteTextWidth() { this->textWidth_ = nullptr;};
    inline int32_t textWidth() const { DARABONBA_PTR_GET_DEFAULT(textWidth_, 0) };
    inline SubmitProjectTaskRequestFramesSubtitle& setTextWidth(int32_t textWidth) { DARABONBA_PTR_SET_VALUE(textWidth_, textWidth) };


  protected:
    std::shared_ptr<string> alignment_ = nullptr;
    std::shared_ptr<string> backgroundColor_ = nullptr;
    std::shared_ptr<string> font_ = nullptr;
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<int32_t> maxCharLength_ = nullptr;
    std::shared_ptr<int32_t> positionX_ = nullptr;
    std::shared_ptr<int32_t> positionY_ = nullptr;
    std::shared_ptr<int32_t> textHeight_ = nullptr;
    std::shared_ptr<int32_t> textWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
