// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTCAPTIONLAYERCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTCAPTIONLAYERCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& obj) { 
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(LineSpaceNormalized, lineSpaceNormalized_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(PtsOffset, ptsOffset_);
      DARABONBA_PTR_TO_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_TO_JSON(SizeNormalized, sizeNormalized_);
      DARABONBA_PTR_TO_JSON(SourceLan, sourceLan_);
      DARABONBA_PTR_TO_JSON(TargetLan, targetLan_);
      DARABONBA_PTR_TO_JSON(WordCountPerLine, wordCountPerLine_);
      DARABONBA_PTR_TO_JSON(WordSpaceNormalized, wordSpaceNormalized_);
      DARABONBA_PTR_TO_JSON(WordsCount, wordsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& obj) { 
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidthNormalized, borderWidthNormalized_);
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(LineSpaceNormalized, lineSpaceNormalized_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(PtsOffset, ptsOffset_);
      DARABONBA_PTR_FROM_JSON(ShowSourceLan, showSourceLan_);
      DARABONBA_PTR_FROM_JSON(SizeNormalized, sizeNormalized_);
      DARABONBA_PTR_FROM_JSON(SourceLan, sourceLan_);
      DARABONBA_PTR_FROM_JSON(TargetLan, targetLan_);
      DARABONBA_PTR_FROM_JSON(WordCountPerLine, wordCountPerLine_);
      DARABONBA_PTR_FROM_JSON(WordSpaceNormalized, wordSpaceNormalized_);
      DARABONBA_PTR_FROM_JSON(WordsCount, wordsCount_);
    };
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent(const DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent(DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent &&) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& operator=(const DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& operator=(DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->borderColor_ == nullptr
        && return this->borderWidthNormalized_ == nullptr && return this->color_ == nullptr && return this->fontName_ == nullptr && return this->lineSpaceNormalized_ == nullptr && return this->locationId_ == nullptr
        && return this->ptsOffset_ == nullptr && return this->showSourceLan_ == nullptr && return this->sizeNormalized_ == nullptr && return this->sourceLan_ == nullptr && return this->targetLan_ == nullptr
        && return this->wordCountPerLine_ == nullptr && return this->wordSpaceNormalized_ == nullptr && return this->wordsCount_ == nullptr; };
    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidthNormalized Field Functions 
    bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
    void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
    inline float borderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // lineSpaceNormalized Field Functions 
    bool hasLineSpaceNormalized() const { return this->lineSpaceNormalized_ != nullptr;};
    void deleteLineSpaceNormalized() { this->lineSpaceNormalized_ = nullptr;};
    inline float lineSpaceNormalized() const { DARABONBA_PTR_GET_DEFAULT(lineSpaceNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setLineSpaceNormalized(float lineSpaceNormalized) { DARABONBA_PTR_SET_VALUE(lineSpaceNormalized_, lineSpaceNormalized) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // ptsOffset Field Functions 
    bool hasPtsOffset() const { return this->ptsOffset_ != nullptr;};
    void deletePtsOffset() { this->ptsOffset_ = nullptr;};
    inline int32_t ptsOffset() const { DARABONBA_PTR_GET_DEFAULT(ptsOffset_, 0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setPtsOffset(int32_t ptsOffset) { DARABONBA_PTR_SET_VALUE(ptsOffset_, ptsOffset) };


    // showSourceLan Field Functions 
    bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
    void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
    inline bool showSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, false) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setShowSourceLan(bool showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


    // sizeNormalized Field Functions 
    bool hasSizeNormalized() const { return this->sizeNormalized_ != nullptr;};
    void deleteSizeNormalized() { this->sizeNormalized_ = nullptr;};
    inline float sizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(sizeNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setSizeNormalized(float sizeNormalized) { DARABONBA_PTR_SET_VALUE(sizeNormalized_, sizeNormalized) };


    // sourceLan Field Functions 
    bool hasSourceLan() const { return this->sourceLan_ != nullptr;};
    void deleteSourceLan() { this->sourceLan_ = nullptr;};
    inline string sourceLan() const { DARABONBA_PTR_GET_DEFAULT(sourceLan_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setSourceLan(string sourceLan) { DARABONBA_PTR_SET_VALUE(sourceLan_, sourceLan) };


    // targetLan Field Functions 
    bool hasTargetLan() const { return this->targetLan_ != nullptr;};
    void deleteTargetLan() { this->targetLan_ = nullptr;};
    inline string targetLan() const { DARABONBA_PTR_GET_DEFAULT(targetLan_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setTargetLan(string targetLan) { DARABONBA_PTR_SET_VALUE(targetLan_, targetLan) };


    // wordCountPerLine Field Functions 
    bool hasWordCountPerLine() const { return this->wordCountPerLine_ != nullptr;};
    void deleteWordCountPerLine() { this->wordCountPerLine_ = nullptr;};
    inline int32_t wordCountPerLine() const { DARABONBA_PTR_GET_DEFAULT(wordCountPerLine_, 0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setWordCountPerLine(int32_t wordCountPerLine) { DARABONBA_PTR_SET_VALUE(wordCountPerLine_, wordCountPerLine) };


    // wordSpaceNormalized Field Functions 
    bool hasWordSpaceNormalized() const { return this->wordSpaceNormalized_ != nullptr;};
    void deleteWordSpaceNormalized() { this->wordSpaceNormalized_ = nullptr;};
    inline float wordSpaceNormalized() const { DARABONBA_PTR_GET_DEFAULT(wordSpaceNormalized_, 0.0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setWordSpaceNormalized(float wordSpaceNormalized) { DARABONBA_PTR_SET_VALUE(wordSpaceNormalized_, wordSpaceNormalized) };


    // wordsCount Field Functions 
    bool hasWordsCount() const { return this->wordsCount_ != nullptr;};
    void deleteWordsCount() { this->wordsCount_ = nullptr;};
    inline int32_t wordsCount() const { DARABONBA_PTR_GET_DEFAULT(wordsCount_, 0) };
    inline DescribeCasterComponentsResponseBodyComponentsComponentCaptionLayerContent& setWordsCount(int32_t wordsCount) { DARABONBA_PTR_SET_VALUE(wordsCount_, wordsCount) };


  protected:
    // The color of the text border.
    // 
    // Valid values: **0x000000 to 0xffffff**. If the value of this parameter is "", this parameter does not take effect.
    std::shared_ptr<string> borderColor_ = nullptr;
    // The normalized value of the width of the text border. The value of this parameter equals the border width divided by the font size.
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
    // The line spacing, which indicates the interval between every two lines.
    std::shared_ptr<float> lineSpaceNormalized_ = nullptr;
    // The location ID of the component. If the value of the ComponentType parameter is caption, the LocationId parameter indicates the channel ID of the video source that is referenced by the component.
    std::shared_ptr<string> locationId_ = nullptr;
    // The offset between the presentation timestamps (PTS) of the subtitles and the audio.
    // 
    // Valid values: **-10000 to 10000**. Default value: **0**.
    std::shared_ptr<int32_t> ptsOffset_ = nullptr;
    // Indicates whether the source language of the subtitles is displayed. Valid values:
    // 
    // *   **true**: The source language is displayed.
    // *   **false**: The source language is not displayed.
    std::shared_ptr<bool> showSourceLan_ = nullptr;
    // The normalized value of the font size of the subtitles. The value of this parameter equals the font size divided by the output height.``
    // 
    // The maximum font size of the subtitles is **1,024**, even if the font size calculated based on this parameter is greater than **1,024**. If the value of this parameter is **-1**, this parameter does not take effect.
    std::shared_ptr<float> sizeNormalized_ = nullptr;
    // The source language of the audio in the video source. Valid values:
    // 
    // *   **en**: English
    // *   **cn**: Chinese
    // *   **es**: Spanish
    // *   **ru**: Russian
    std::shared_ptr<string> sourceLan_ = nullptr;
    // The target language of the audio in the video source. Valid values:
    // 
    // *   **en**: English
    // *   **cn**: Chinese
    // *   **es**: Spanish
    // *   **ru**: Russian
    std::shared_ptr<string> targetLan_ = nullptr;
    // The maximum number of words displayed in each line.
    std::shared_ptr<int32_t> wordCountPerLine_ = nullptr;
    // The word spacing, which indicates the interval between every two words.
    std::shared_ptr<float> wordSpaceNormalized_ = nullptr;
    // The number of words displayed on the component. The value of this parameter can be specified based on the font size.
    // 
    // Valid values: **10 to 50**.
    std::shared_ptr<int32_t> wordsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
