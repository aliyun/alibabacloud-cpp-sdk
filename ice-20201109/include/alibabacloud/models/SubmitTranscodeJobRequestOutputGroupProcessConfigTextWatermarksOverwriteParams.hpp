// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTEXTWATERMARKSOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTEXTWATERMARKSOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Adaptive, adaptive_);
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FontAlpha, fontAlpha_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Adaptive, adaptive_);
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FontAlpha, fontAlpha_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams(const SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams(SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adaptive_ != nullptr
        && this->borderColor_ != nullptr && this->borderWidth_ != nullptr && this->content_ != nullptr && this->fontAlpha_ != nullptr && this->fontColor_ != nullptr
        && this->fontName_ != nullptr && this->fontSize_ != nullptr && this->left_ != nullptr && this->top_ != nullptr; };
    // adaptive Field Functions 
    bool hasAdaptive() const { return this->adaptive_ != nullptr;};
    void deleteAdaptive() { this->adaptive_ = nullptr;};
    inline string adaptive() const { DARABONBA_PTR_GET_DEFAULT(adaptive_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setAdaptive(string adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };


    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidth Field Functions 
    bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
    void deleteBorderWidth() { this->borderWidth_ = nullptr;};
    inline int32_t borderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fontAlpha Field Functions 
    bool hasFontAlpha() const { return this->fontAlpha_ != nullptr;};
    void deleteFontAlpha() { this->fontAlpha_ = nullptr;};
    inline string fontAlpha() const { DARABONBA_PTR_GET_DEFAULT(fontAlpha_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontAlpha(string fontAlpha) { DARABONBA_PTR_SET_VALUE(fontAlpha_, fontAlpha) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline string left() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline string top() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTextWatermarksOverwriteParams& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // Specifies whether to the font size based on the output video dimensions. true / false, default: false
    std::shared_ptr<string> adaptive_ = nullptr;
    // The outline color of the text watermark. Default value: black. For more information, see BorderColor.
    std::shared_ptr<string> borderColor_ = nullptr;
    // The outline width of the text watermark.
    // 
    // *   Default value: 0.
    // *   Valid values: (0,4096].
    std::shared_ptr<int32_t> borderWidth_ = nullptr;
    // The watermark text. Base64 encoding is not required. The string must be encoded in UTF-8.
    std::shared_ptr<string> content_ = nullptr;
    // The transparency of the text.
    // 
    // *   Valid values: (0,1].
    // *   Default value: 1.
    std::shared_ptr<string> fontAlpha_ = nullptr;
    // The color of the text.
    std::shared_ptr<string> fontColor_ = nullptr;
    // The font of the text. Default value: SimSun.
    std::shared_ptr<string> fontName_ = nullptr;
    // The size of the text.
    // 
    // *   Default value: 16.
    // *   Valid values: (4,120).
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    // The left margin of the text watermark.
    // 
    // *   Default value: 0.
    // *   Valid values: [0,4096].
    std::shared_ptr<string> left_ = nullptr;
    // The top margin of the text.
    // 
    // *   Default value: 0.
    // *   Valid values: [0,4096].
    std::shared_ptr<string> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
