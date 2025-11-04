// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTEXTWATERMARKSOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTEXTWATERMARKSOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& obj) { 
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
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptive_ == nullptr
        && return this->borderColor_ == nullptr && return this->borderWidth_ == nullptr && return this->content_ == nullptr && return this->fontAlpha_ == nullptr && return this->fontColor_ == nullptr
        && return this->fontName_ == nullptr && return this->fontSize_ == nullptr && return this->left_ == nullptr && return this->top_ == nullptr; };
    // adaptive Field Functions 
    bool hasAdaptive() const { return this->adaptive_ != nullptr;};
    void deleteAdaptive() { this->adaptive_ = nullptr;};
    inline string adaptive() const { DARABONBA_PTR_GET_DEFAULT(adaptive_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setAdaptive(string adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };


    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidth Field Functions 
    bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
    void deleteBorderWidth() { this->borderWidth_ = nullptr;};
    inline int32_t borderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fontAlpha Field Functions 
    bool hasFontAlpha() const { return this->fontAlpha_ != nullptr;};
    void deleteFontAlpha() { this->fontAlpha_ = nullptr;};
    inline string fontAlpha() const { DARABONBA_PTR_GET_DEFAULT(fontAlpha_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontAlpha(string fontAlpha) { DARABONBA_PTR_SET_VALUE(fontAlpha_, fontAlpha) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline string left() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline string top() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTextWatermarksOverwriteParams& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // Indicates whether the text size was adjusted based on the output video dimensions. true / false, default: false
    std::shared_ptr<string> adaptive_ = nullptr;
    // The border color.
    std::shared_ptr<string> borderColor_ = nullptr;
    // The border width.
    std::shared_ptr<int32_t> borderWidth_ = nullptr;
    // The watermark text. Base64 encoding is not required. The string must be encoded in UTF-8.
    std::shared_ptr<string> content_ = nullptr;
    // The transparency of the watermark.
    std::shared_ptr<string> fontAlpha_ = nullptr;
    // The color of the text.
    std::shared_ptr<string> fontColor_ = nullptr;
    // The font of the text.
    std::shared_ptr<string> fontName_ = nullptr;
    // The size of the text.
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    // The distance of the watermark from the left edge.
    std::shared_ptr<string> left_ = nullptr;
    // The distance of the watermark from the top edge.
    std::shared_ptr<string> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
