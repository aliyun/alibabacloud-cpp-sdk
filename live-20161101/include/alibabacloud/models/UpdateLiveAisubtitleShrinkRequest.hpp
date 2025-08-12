// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAISUBTITLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAISUBTITLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveAISubtitleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveAISubtitleShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalizedShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_TO_JSON(SrcLanguage, srcLanguage_);
      DARABONBA_PTR_TO_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WordPerLine, wordPerLine_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveAISubtitleShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalizedShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_FROM_JSON(SrcLanguage, srcLanguage_);
      DARABONBA_PTR_FROM_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WordPerLine, wordPerLine_);
    };
    UpdateLiveAISubtitleShrinkRequest() = default ;
    UpdateLiveAISubtitleShrinkRequest(const UpdateLiveAISubtitleShrinkRequest &) = default ;
    UpdateLiveAISubtitleShrinkRequest(UpdateLiveAISubtitleShrinkRequest &&) = default ;
    UpdateLiveAISubtitleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveAISubtitleShrinkRequest() = default ;
    UpdateLiveAISubtitleShrinkRequest& operator=(const UpdateLiveAISubtitleShrinkRequest &) = default ;
    UpdateLiveAISubtitleShrinkRequest& operator=(UpdateLiveAISubtitleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bgColor_ != nullptr
        && this->bgWidthNormalized_ != nullptr && this->borderWidthNormalized_ != nullptr && this->description_ != nullptr && this->dstLanguage_ != nullptr && this->fontColor_ != nullptr
        && this->fontName_ != nullptr && this->fontSizeNormalized_ != nullptr && this->height_ != nullptr && this->maxLines_ != nullptr && this->ownerId_ != nullptr
        && this->positionNormalizedShrink_ != nullptr && this->regionId_ != nullptr && this->showSourceLan_ != nullptr && this->srcLanguage_ != nullptr && this->subtitleId_ != nullptr
        && this->subtitleName_ != nullptr && this->width_ != nullptr && this->wordPerLine_ != nullptr; };
    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string bgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // bgWidthNormalized Field Functions 
    bool hasBgWidthNormalized() const { return this->bgWidthNormalized_ != nullptr;};
    void deleteBgWidthNormalized() { this->bgWidthNormalized_ = nullptr;};
    inline float bgWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(bgWidthNormalized_, 0.0) };
    inline UpdateLiveAISubtitleShrinkRequest& setBgWidthNormalized(float bgWidthNormalized) { DARABONBA_PTR_SET_VALUE(bgWidthNormalized_, bgWidthNormalized) };


    // borderWidthNormalized Field Functions 
    bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
    void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
    inline float borderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
    inline UpdateLiveAISubtitleShrinkRequest& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstLanguage Field Functions 
    bool hasDstLanguage() const { return this->dstLanguage_ != nullptr;};
    void deleteDstLanguage() { this->dstLanguage_ = nullptr;};
    inline string dstLanguage() const { DARABONBA_PTR_GET_DEFAULT(dstLanguage_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setDstLanguage(string dstLanguage) { DARABONBA_PTR_SET_VALUE(dstLanguage_, dstLanguage) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSizeNormalized Field Functions 
    bool hasFontSizeNormalized() const { return this->fontSizeNormalized_ != nullptr;};
    void deleteFontSizeNormalized() { this->fontSizeNormalized_ = nullptr;};
    inline float fontSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(fontSizeNormalized_, 0.0) };
    inline UpdateLiveAISubtitleShrinkRequest& setFontSizeNormalized(float fontSizeNormalized) { DARABONBA_PTR_SET_VALUE(fontSizeNormalized_, fontSizeNormalized) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // maxLines Field Functions 
    bool hasMaxLines() const { return this->maxLines_ != nullptr;};
    void deleteMaxLines() { this->maxLines_ = nullptr;};
    inline int32_t maxLines() const { DARABONBA_PTR_GET_DEFAULT(maxLines_, 0) };
    inline UpdateLiveAISubtitleShrinkRequest& setMaxLines(int32_t maxLines) { DARABONBA_PTR_SET_VALUE(maxLines_, maxLines) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveAISubtitleShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // positionNormalizedShrink Field Functions 
    bool hasPositionNormalizedShrink() const { return this->positionNormalizedShrink_ != nullptr;};
    void deletePositionNormalizedShrink() { this->positionNormalizedShrink_ = nullptr;};
    inline string positionNormalizedShrink() const { DARABONBA_PTR_GET_DEFAULT(positionNormalizedShrink_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setPositionNormalizedShrink(string positionNormalizedShrink) { DARABONBA_PTR_SET_VALUE(positionNormalizedShrink_, positionNormalizedShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showSourceLan Field Functions 
    bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
    void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
    inline bool showSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, false) };
    inline UpdateLiveAISubtitleShrinkRequest& setShowSourceLan(bool showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


    // srcLanguage Field Functions 
    bool hasSrcLanguage() const { return this->srcLanguage_ != nullptr;};
    void deleteSrcLanguage() { this->srcLanguage_ = nullptr;};
    inline string srcLanguage() const { DARABONBA_PTR_GET_DEFAULT(srcLanguage_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setSrcLanguage(string srcLanguage) { DARABONBA_PTR_SET_VALUE(srcLanguage_, srcLanguage) };


    // subtitleId Field Functions 
    bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
    void deleteSubtitleId() { this->subtitleId_ = nullptr;};
    inline string subtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string subtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateLiveAISubtitleShrinkRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wordPerLine Field Functions 
    bool hasWordPerLine() const { return this->wordPerLine_ != nullptr;};
    void deleteWordPerLine() { this->wordPerLine_ = nullptr;};
    inline int32_t wordPerLine() const { DARABONBA_PTR_GET_DEFAULT(wordPerLine_, 0) };
    inline UpdateLiveAISubtitleShrinkRequest& setWordPerLine(int32_t wordPerLine) { DARABONBA_PTR_SET_VALUE(wordPerLine_, wordPerLine) };


  protected:
    // The background color of the subtitles. Color format: RGBA.
    std::shared_ptr<string> bgColor_ = nullptr;
    // The size of the background box. Valid values: [0,1].
    std::shared_ptr<float> bgWidthNormalized_ = nullptr;
    // The font weight. Valid values: [0,1].
    std::shared_ptr<float> borderWidthNormalized_ = nullptr;
    // The description of the subtitle template. The description can be up to 128 characters in length and can contain letters, digits, and special characters.
    std::shared_ptr<string> description_ = nullptr;
    // The target language. Valid values:
    // 
    // *   en-US: English
    // *   zh-CN: Chinese
    // *   es-ES: Spanish
    // *   ru-RU: Russian
    std::shared_ptr<string> dstLanguage_ = nullptr;
    // The font color. Color format: RGBA.
    std::shared_ptr<string> fontColor_ = nullptr;
    // The font. Valid values:
    // 
    // *   KaiTi (default)
    // *   AlibabaPuHuiTi-Regular
    // *   AlibabaPuHuiTi-Bold
    // *   AlibabaPuHuiTi-Light
    // *   NotoSansHans-Regular
    // *   NotoSansHans-Bold
    // *   NotoSansHans-Light
    std::shared_ptr<string> fontName_ = nullptr;
    // The font size. Valid values: [0,1].
    std::shared_ptr<float> fontSizeNormalized_ = nullptr;
    // The height of the preview. Unit: pixels.
    // 
    // The following preview specifications (width x height) are supported:
    // 
    // *   360p (640 x 360)
    // *   360p (360 x 640)
    // *   480p (854 x 480)
    // *   480p (480 x 854)
    // *   720p (1280 x 720)
    // *   720p (720 x 1280)
    // *   1080p (1920 x 1080)
    // *   1080p (1080 x 1920)
    std::shared_ptr<string> height_ = nullptr;
    // The number of displayed lines.
    std::shared_ptr<int32_t> maxLines_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The position of the subtitles relative to the lower-left corner of the screen. The value is a pair of coordinates.
    std::shared_ptr<string> positionNormalizedShrink_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to display the source language. Valid values: true and false. Default value: false.
    std::shared_ptr<bool> showSourceLan_ = nullptr;
    // The source language. Valid values:
    // 
    // *   en-US: English
    // *   zh-CN: Chinese
    // *   ru-RU: Russian
    std::shared_ptr<string> srcLanguage_ = nullptr;
    // The ID of the subtitle template.
    // 
    // This parameter is required.
    std::shared_ptr<string> subtitleId_ = nullptr;
    // The name of the subtitle template. The name can contain digits, letters, and hyphens (-) but cannot start with a hyphen (-).
    std::shared_ptr<string> subtitleName_ = nullptr;
    // The width of the preview. Unit: pixels.
    std::shared_ptr<string> width_ = nullptr;
    // The number of characters per line. Valid values: 1 to 500.
    std::shared_ptr<int32_t> wordPerLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
