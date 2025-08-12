// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGSSUBTITLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized.hpp>
#include <alibabacloud/models/DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(BgWidthNormalized, bgWidthNormalized_);
      DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstLanguage, dstLanguage_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(FontSizeNormalized, fontSizeNormalized_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MaxLines, maxLines_);
      DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_TO_JSON(RulesRefer, rulesRefer_);
      DARABONBA_PTR_TO_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_TO_JSON(SrcLanguage, srcLanguage_);
      DARABONBA_PTR_TO_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WordPerline, wordPerline_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(BgWidthNormalized, bgWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstLanguage, dstLanguage_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(FontSizeNormalized, fontSizeNormalized_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MaxLines, maxLines_);
      DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_FROM_JSON(RulesRefer, rulesRefer_);
      DARABONBA_PTR_FROM_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_FROM_JSON(SrcLanguage, srcLanguage_);
      DARABONBA_PTR_FROM_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WordPerline, wordPerline_);
    };
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig &&) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& operator=(const DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& operator=(DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgColor_ != nullptr
        && this->bgWidthNormalized_ != nullptr && this->borderWidthNormalized_ != nullptr && this->description_ != nullptr && this->dstLanguage_ != nullptr && this->fontColor_ != nullptr
        && this->fontName_ != nullptr && this->fontSizeNormalized_ != nullptr && this->height_ != nullptr && this->maxLines_ != nullptr && this->positionNormalized_ != nullptr
        && this->rulesRefer_ != nullptr && this->showSourceLan_ != nullptr && this->srcLanguage_ != nullptr && this->subtitleId_ != nullptr && this->subtitleName_ != nullptr
        && this->width_ != nullptr && this->wordPerline_ != nullptr; };
    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string bgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // bgWidthNormalized Field Functions 
    bool hasBgWidthNormalized() const { return this->bgWidthNormalized_ != nullptr;};
    void deleteBgWidthNormalized() { this->bgWidthNormalized_ = nullptr;};
    inline float bgWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(bgWidthNormalized_, 0.0) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setBgWidthNormalized(float bgWidthNormalized) { DARABONBA_PTR_SET_VALUE(bgWidthNormalized_, bgWidthNormalized) };


    // borderWidthNormalized Field Functions 
    bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
    void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
    inline float borderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstLanguage Field Functions 
    bool hasDstLanguage() const { return this->dstLanguage_ != nullptr;};
    void deleteDstLanguage() { this->dstLanguage_ = nullptr;};
    inline string dstLanguage() const { DARABONBA_PTR_GET_DEFAULT(dstLanguage_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setDstLanguage(string dstLanguage) { DARABONBA_PTR_SET_VALUE(dstLanguage_, dstLanguage) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSizeNormalized Field Functions 
    bool hasFontSizeNormalized() const { return this->fontSizeNormalized_ != nullptr;};
    void deleteFontSizeNormalized() { this->fontSizeNormalized_ = nullptr;};
    inline string fontSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(fontSizeNormalized_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setFontSizeNormalized(string fontSizeNormalized) { DARABONBA_PTR_SET_VALUE(fontSizeNormalized_, fontSizeNormalized) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // maxLines Field Functions 
    bool hasMaxLines() const { return this->maxLines_ != nullptr;};
    void deleteMaxLines() { this->maxLines_ = nullptr;};
    inline int32_t maxLines() const { DARABONBA_PTR_GET_DEFAULT(maxLines_, 0) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setMaxLines(int32_t maxLines) { DARABONBA_PTR_SET_VALUE(maxLines_, maxLines) };


    // positionNormalized Field Functions 
    bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
    void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
    inline const Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized & positionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized) };
    inline Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized positionNormalized() { DARABONBA_PTR_GET(positionNormalized_, Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setPositionNormalized(const Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setPositionNormalized(Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


    // rulesRefer Field Functions 
    bool hasRulesRefer() const { return this->rulesRefer_ != nullptr;};
    void deleteRulesRefer() { this->rulesRefer_ = nullptr;};
    inline const Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer & rulesRefer() const { DARABONBA_PTR_GET_CONST(rulesRefer_, Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer) };
    inline Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer rulesRefer() { DARABONBA_PTR_GET(rulesRefer_, Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setRulesRefer(const Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer & rulesRefer) { DARABONBA_PTR_SET_VALUE(rulesRefer_, rulesRefer) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setRulesRefer(Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer && rulesRefer) { DARABONBA_PTR_SET_RVALUE(rulesRefer_, rulesRefer) };


    // showSourceLan Field Functions 
    bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
    void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
    inline int32_t showSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, 0) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setShowSourceLan(int32_t showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


    // srcLanguage Field Functions 
    bool hasSrcLanguage() const { return this->srcLanguage_ != nullptr;};
    void deleteSrcLanguage() { this->srcLanguage_ = nullptr;};
    inline string srcLanguage() const { DARABONBA_PTR_GET_DEFAULT(srcLanguage_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setSrcLanguage(string srcLanguage) { DARABONBA_PTR_SET_VALUE(srcLanguage_, srcLanguage) };


    // subtitleId Field Functions 
    bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
    void deleteSubtitleId() { this->subtitleId_ = nullptr;};
    inline string subtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string subtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wordPerline Field Functions 
    bool hasWordPerline() const { return this->wordPerline_ != nullptr;};
    void deleteWordPerline() { this->wordPerline_ = nullptr;};
    inline int32_t wordPerline() const { DARABONBA_PTR_GET_DEFAULT(wordPerline_, 0) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig& setWordPerline(int32_t wordPerline) { DARABONBA_PTR_SET_VALUE(wordPerline_, wordPerline) };


  protected:
    // The background color of the subtitles.
    std::shared_ptr<string> bgColor_ = nullptr;
    // The size of the background image.
    std::shared_ptr<float> bgWidthNormalized_ = nullptr;
    // The font weight.
    std::shared_ptr<float> borderWidthNormalized_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The language to which the subtitles are translated.
    std::shared_ptr<string> dstLanguage_ = nullptr;
    // The font color.
    std::shared_ptr<string> fontColor_ = nullptr;
    // The font.
    std::shared_ptr<string> fontName_ = nullptr;
    // The font size.
    std::shared_ptr<string> fontSizeNormalized_ = nullptr;
    // The height of the preview image.
    std::shared_ptr<string> height_ = nullptr;
    // The number of displayed lines.
    std::shared_ptr<int32_t> maxLines_ = nullptr;
    // The position of the subtitles.
    std::shared_ptr<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigPositionNormalized> positionNormalized_ = nullptr;
    // The ID of the subtitle rule.
    std::shared_ptr<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfigRulesRefer> rulesRefer_ = nullptr;
    // Indicates whether the source language of the subtitle is displayed.
    std::shared_ptr<int32_t> showSourceLan_ = nullptr;
    // The source language of the subtitles.
    std::shared_ptr<string> srcLanguage_ = nullptr;
    // The ID of the subtitle template.
    std::shared_ptr<string> subtitleId_ = nullptr;
    // The name of the subtitle template.
    std::shared_ptr<string> subtitleName_ = nullptr;
    // The width of the preview image.
    std::shared_ptr<string> width_ = nullptr;
    // The number of words per line.
    std::shared_ptr<int32_t> wordPerline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
