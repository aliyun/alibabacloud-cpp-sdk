// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAISUBTITLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAISUBTITLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveAISubtitleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAISubtitleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(BgWidthNormalized, bgWidthNormalized_);
      DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_TO_JSON(CopyFrom, copyFrom_);
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
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WordPerLine, wordPerLine_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAISubtitleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(BgWidthNormalized, bgWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(CopyFrom, copyFrom_);
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
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WordPerLine, wordPerLine_);
    };
    AddLiveAISubtitleShrinkRequest() = default ;
    AddLiveAISubtitleShrinkRequest(const AddLiveAISubtitleShrinkRequest &) = default ;
    AddLiveAISubtitleShrinkRequest(AddLiveAISubtitleShrinkRequest &&) = default ;
    AddLiveAISubtitleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAISubtitleShrinkRequest() = default ;
    AddLiveAISubtitleShrinkRequest& operator=(const AddLiveAISubtitleShrinkRequest &) = default ;
    AddLiveAISubtitleShrinkRequest& operator=(AddLiveAISubtitleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgColor_ == nullptr
        && this->bgWidthNormalized_ == nullptr && this->borderWidthNormalized_ == nullptr && this->copyFrom_ == nullptr && this->description_ == nullptr && this->dstLanguage_ == nullptr
        && this->fontColor_ == nullptr && this->fontName_ == nullptr && this->fontSizeNormalized_ == nullptr && this->height_ == nullptr && this->maxLines_ == nullptr
        && this->ownerId_ == nullptr && this->positionNormalizedShrink_ == nullptr && this->regionId_ == nullptr && this->showSourceLan_ == nullptr && this->srcLanguage_ == nullptr
        && this->subtitleName_ == nullptr && this->width_ == nullptr && this->wordPerLine_ == nullptr; };
    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string getBgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline AddLiveAISubtitleShrinkRequest& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // bgWidthNormalized Field Functions 
    bool hasBgWidthNormalized() const { return this->bgWidthNormalized_ != nullptr;};
    void deleteBgWidthNormalized() { this->bgWidthNormalized_ = nullptr;};
    inline float getBgWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(bgWidthNormalized_, 0.0) };
    inline AddLiveAISubtitleShrinkRequest& setBgWidthNormalized(float bgWidthNormalized) { DARABONBA_PTR_SET_VALUE(bgWidthNormalized_, bgWidthNormalized) };


    // borderWidthNormalized Field Functions 
    bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
    void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
    inline float getBorderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
    inline AddLiveAISubtitleShrinkRequest& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


    // copyFrom Field Functions 
    bool hasCopyFrom() const { return this->copyFrom_ != nullptr;};
    void deleteCopyFrom() { this->copyFrom_ = nullptr;};
    inline string getCopyFrom() const { DARABONBA_PTR_GET_DEFAULT(copyFrom_, "") };
    inline AddLiveAISubtitleShrinkRequest& setCopyFrom(string copyFrom) { DARABONBA_PTR_SET_VALUE(copyFrom_, copyFrom) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddLiveAISubtitleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstLanguage Field Functions 
    bool hasDstLanguage() const { return this->dstLanguage_ != nullptr;};
    void deleteDstLanguage() { this->dstLanguage_ = nullptr;};
    inline string getDstLanguage() const { DARABONBA_PTR_GET_DEFAULT(dstLanguage_, "") };
    inline AddLiveAISubtitleShrinkRequest& setDstLanguage(string dstLanguage) { DARABONBA_PTR_SET_VALUE(dstLanguage_, dstLanguage) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline AddLiveAISubtitleShrinkRequest& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline AddLiveAISubtitleShrinkRequest& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSizeNormalized Field Functions 
    bool hasFontSizeNormalized() const { return this->fontSizeNormalized_ != nullptr;};
    void deleteFontSizeNormalized() { this->fontSizeNormalized_ = nullptr;};
    inline float getFontSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(fontSizeNormalized_, 0.0) };
    inline AddLiveAISubtitleShrinkRequest& setFontSizeNormalized(float fontSizeNormalized) { DARABONBA_PTR_SET_VALUE(fontSizeNormalized_, fontSizeNormalized) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline AddLiveAISubtitleShrinkRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // maxLines Field Functions 
    bool hasMaxLines() const { return this->maxLines_ != nullptr;};
    void deleteMaxLines() { this->maxLines_ = nullptr;};
    inline int32_t getMaxLines() const { DARABONBA_PTR_GET_DEFAULT(maxLines_, 0) };
    inline AddLiveAISubtitleShrinkRequest& setMaxLines(int32_t maxLines) { DARABONBA_PTR_SET_VALUE(maxLines_, maxLines) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveAISubtitleShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // positionNormalizedShrink Field Functions 
    bool hasPositionNormalizedShrink() const { return this->positionNormalizedShrink_ != nullptr;};
    void deletePositionNormalizedShrink() { this->positionNormalizedShrink_ = nullptr;};
    inline string getPositionNormalizedShrink() const { DARABONBA_PTR_GET_DEFAULT(positionNormalizedShrink_, "") };
    inline AddLiveAISubtitleShrinkRequest& setPositionNormalizedShrink(string positionNormalizedShrink) { DARABONBA_PTR_SET_VALUE(positionNormalizedShrink_, positionNormalizedShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveAISubtitleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showSourceLan Field Functions 
    bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
    void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
    inline bool getShowSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, false) };
    inline AddLiveAISubtitleShrinkRequest& setShowSourceLan(bool showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


    // srcLanguage Field Functions 
    bool hasSrcLanguage() const { return this->srcLanguage_ != nullptr;};
    void deleteSrcLanguage() { this->srcLanguage_ = nullptr;};
    inline string getSrcLanguage() const { DARABONBA_PTR_GET_DEFAULT(srcLanguage_, "") };
    inline AddLiveAISubtitleShrinkRequest& setSrcLanguage(string srcLanguage) { DARABONBA_PTR_SET_VALUE(srcLanguage_, srcLanguage) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline AddLiveAISubtitleShrinkRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline AddLiveAISubtitleShrinkRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // wordPerLine Field Functions 
    bool hasWordPerLine() const { return this->wordPerLine_ != nullptr;};
    void deleteWordPerLine() { this->wordPerLine_ = nullptr;};
    inline int32_t getWordPerLine() const { DARABONBA_PTR_GET_DEFAULT(wordPerLine_, 0) };
    inline AddLiveAISubtitleShrinkRequest& setWordPerLine(int32_t wordPerLine) { DARABONBA_PTR_SET_VALUE(wordPerLine_, wordPerLine) };


  protected:
    // The background color of the subtitle. Specify the value in RGBA format.
    shared_ptr<string> bgColor_ {};
    // The background size of the subtitle. Valid values: [0, 1].
    shared_ptr<float> bgWidthNormalized_ {};
    // The font weight. Valid values: [0, 1].
    shared_ptr<float> borderWidthNormalized_ {};
    // The subtitle template to copy from. Set this parameter to the value of SubtitleName.
    shared_ptr<string> copyFrom_ {};
    // The custom description of the subtitle. The description can contain Chinese characters, letters, digits, and special characters, and can be up to 128 characters in length.
    shared_ptr<string> description_ {};
    // The target language for translation. Valid values:
    // - English: en-US
    // - Chinese: zh-CN
    // - Spanish: es-ES
    // - Russian: ru-RU.
    shared_ptr<string> dstLanguage_ {};
    // The font color. Specify the value in RGBA format.
    shared_ptr<string> fontColor_ {};
    // The font. Valid values:
    // - KaiTi: KaiTi (default)
    // - AlibabaPuHuiTi-Regular: Alibaba PuHuiTi Regular
    // - AlibabaPuHuiTi-Bold: Alibaba PuHuiTi Bold
    // - AlibabaPuHuiTi-Light: Alibaba PuHuiTi Light
    // - NotoSansHans-Regular: Noto Sans SC Regular
    // - NotoSansHans-Bold: Noto Sans SC Bold
    // - NotoSansHans-Light: Noto Sans SC Light.
    shared_ptr<string> fontName_ {};
    // The font size. Valid values: [0, 1].
    // 
    // This parameter is required.
    shared_ptr<float> fontSizeNormalized_ {};
    // The height of the preview screen. Unit: px.
    // 
    // The width × height of the preview screen supports only the following specifications:          
    // - Landscape low definition 360P: 640 × 360 
    // - Portrait low definition 360P: 360 × 640
    // - Landscape standard definition 480P: 854 × 480
    // - Portrait standard definition 480P: 480 × 854
    // - Landscape high definition 720P: 1280 × 720
    // - Portrait high definition 720P: 720 × 1280
    // - Landscape ultra-high definition 1080P: 1920 × 1080
    // - Portrait ultra-high definition 1080P: 1080 × 1920.
    shared_ptr<string> height_ {};
    // The number of lines to display.
    shared_ptr<int32_t> maxLines_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The position of the subtitle. The value is the x,y coordinates with the bottom-left corner of the screen as the origin.
    // 
    // > The x and y values must be normalized. The actual values are multiplied by the video height. For example, if the video height is 720p and PositionNormalized is set to [0.1, 0.5], the actual position of the subtitle is x = 72 and y = 360.
    // 
    // This parameter is required.
    shared_ptr<string> positionNormalizedShrink_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // Specifies whether to display the source language. Default value: false.
    shared_ptr<bool> showSourceLan_ {};
    // The source language. Valid values:
    // - English: en-US
    // - Chinese: zh-CN
    // - Russian: ru-RU.
    // 
    // This parameter is required.
    shared_ptr<string> srcLanguage_ {};
    // The name of the subtitle template. The name can contain only digits, letters, and hyphens (-). The name cannot start with a hyphen.
    // 
    // This parameter is required.
    shared_ptr<string> subtitleName_ {};
    // The width of the preview screen. Unit: px.
    shared_ptr<string> width_ {};
    // The number of characters per line. Valid values: integers in the range of [1, 500].
    // 
    // This parameter is required.
    shared_ptr<int32_t> wordPerLine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
