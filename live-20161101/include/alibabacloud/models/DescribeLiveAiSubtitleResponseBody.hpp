// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubtitleConfigs, subtitleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubtitleConfigs, subtitleConfigs_);
    };
    DescribeLiveAISubtitleResponseBody() = default ;
    DescribeLiveAISubtitleResponseBody(const DescribeLiveAISubtitleResponseBody &) = default ;
    DescribeLiveAISubtitleResponseBody(DescribeLiveAISubtitleResponseBody &&) = default ;
    DescribeLiveAISubtitleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBody() = default ;
    DescribeLiveAISubtitleResponseBody& operator=(const DescribeLiveAISubtitleResponseBody &) = default ;
    DescribeLiveAISubtitleResponseBody& operator=(DescribeLiveAISubtitleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubtitleConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubtitleConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
      };
      friend void from_json(const Darabonba::Json& j, SubtitleConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
      };
      SubtitleConfigs() = default ;
      SubtitleConfigs(const SubtitleConfigs &) = default ;
      SubtitleConfigs(SubtitleConfigs &&) = default ;
      SubtitleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubtitleConfigs() = default ;
      SubtitleConfigs& operator=(const SubtitleConfigs &) = default ;
      SubtitleConfigs& operator=(SubtitleConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubtitleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubtitleConfig& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SubtitleConfig& obj) { 
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
        SubtitleConfig() = default ;
        SubtitleConfig(const SubtitleConfig &) = default ;
        SubtitleConfig(SubtitleConfig &&) = default ;
        SubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubtitleConfig() = default ;
        SubtitleConfig& operator=(const SubtitleConfig &) = default ;
        SubtitleConfig& operator=(SubtitleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RulesRefer : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RulesRefer& obj) { 
            DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
          };
          friend void from_json(const Darabonba::Json& j, RulesRefer& obj) { 
            DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
          };
          RulesRefer() = default ;
          RulesRefer(const RulesRefer &) = default ;
          RulesRefer(RulesRefer &&) = default ;
          RulesRefer(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RulesRefer() = default ;
          RulesRefer& operator=(const RulesRefer &) = default ;
          RulesRefer& operator=(RulesRefer &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rulesId_ == nullptr; };
          // rulesId Field Functions 
          bool hasRulesId() const { return this->rulesId_ != nullptr;};
          void deleteRulesId() { this->rulesId_ = nullptr;};
          inline const vector<string> & getRulesId() const { DARABONBA_PTR_GET_CONST(rulesId_, vector<string>) };
          inline vector<string> getRulesId() { DARABONBA_PTR_GET(rulesId_, vector<string>) };
          inline RulesRefer& setRulesId(const vector<string> & rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };
          inline RulesRefer& setRulesId(vector<string> && rulesId) { DARABONBA_PTR_SET_RVALUE(rulesId_, rulesId) };


        protected:
          shared_ptr<vector<string>> rulesId_ {};
        };

        class PositionNormalized : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PositionNormalized& obj) { 
            DARABONBA_PTR_TO_JSON(Position, position_);
          };
          friend void from_json(const Darabonba::Json& j, PositionNormalized& obj) { 
            DARABONBA_PTR_FROM_JSON(Position, position_);
          };
          PositionNormalized() = default ;
          PositionNormalized(const PositionNormalized &) = default ;
          PositionNormalized(PositionNormalized &&) = default ;
          PositionNormalized(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PositionNormalized() = default ;
          PositionNormalized& operator=(const PositionNormalized &) = default ;
          PositionNormalized& operator=(PositionNormalized &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->position_ == nullptr; };
          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline const vector<float> & getPosition() const { DARABONBA_PTR_GET_CONST(position_, vector<float>) };
          inline vector<float> getPosition() { DARABONBA_PTR_GET(position_, vector<float>) };
          inline PositionNormalized& setPosition(const vector<float> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
          inline PositionNormalized& setPosition(vector<float> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


        protected:
          shared_ptr<vector<float>> position_ {};
        };

        virtual bool empty() const override { return this->bgColor_ == nullptr
        && this->bgWidthNormalized_ == nullptr && this->borderWidthNormalized_ == nullptr && this->description_ == nullptr && this->dstLanguage_ == nullptr && this->fontColor_ == nullptr
        && this->fontName_ == nullptr && this->fontSizeNormalized_ == nullptr && this->height_ == nullptr && this->maxLines_ == nullptr && this->positionNormalized_ == nullptr
        && this->rulesRefer_ == nullptr && this->showSourceLan_ == nullptr && this->srcLanguage_ == nullptr && this->subtitleId_ == nullptr && this->subtitleName_ == nullptr
        && this->width_ == nullptr && this->wordPerline_ == nullptr; };
        // bgColor Field Functions 
        bool hasBgColor() const { return this->bgColor_ != nullptr;};
        void deleteBgColor() { this->bgColor_ = nullptr;};
        inline string getBgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
        inline SubtitleConfig& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


        // bgWidthNormalized Field Functions 
        bool hasBgWidthNormalized() const { return this->bgWidthNormalized_ != nullptr;};
        void deleteBgWidthNormalized() { this->bgWidthNormalized_ = nullptr;};
        inline float getBgWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(bgWidthNormalized_, 0.0) };
        inline SubtitleConfig& setBgWidthNormalized(float bgWidthNormalized) { DARABONBA_PTR_SET_VALUE(bgWidthNormalized_, bgWidthNormalized) };


        // borderWidthNormalized Field Functions 
        bool hasBorderWidthNormalized() const { return this->borderWidthNormalized_ != nullptr;};
        void deleteBorderWidthNormalized() { this->borderWidthNormalized_ = nullptr;};
        inline float getBorderWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(borderWidthNormalized_, 0.0) };
        inline SubtitleConfig& setBorderWidthNormalized(float borderWidthNormalized) { DARABONBA_PTR_SET_VALUE(borderWidthNormalized_, borderWidthNormalized) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SubtitleConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dstLanguage Field Functions 
        bool hasDstLanguage() const { return this->dstLanguage_ != nullptr;};
        void deleteDstLanguage() { this->dstLanguage_ = nullptr;};
        inline string getDstLanguage() const { DARABONBA_PTR_GET_DEFAULT(dstLanguage_, "") };
        inline SubtitleConfig& setDstLanguage(string dstLanguage) { DARABONBA_PTR_SET_VALUE(dstLanguage_, dstLanguage) };


        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
        inline SubtitleConfig& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontName Field Functions 
        bool hasFontName() const { return this->fontName_ != nullptr;};
        void deleteFontName() { this->fontName_ = nullptr;};
        inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
        inline SubtitleConfig& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


        // fontSizeNormalized Field Functions 
        bool hasFontSizeNormalized() const { return this->fontSizeNormalized_ != nullptr;};
        void deleteFontSizeNormalized() { this->fontSizeNormalized_ = nullptr;};
        inline string getFontSizeNormalized() const { DARABONBA_PTR_GET_DEFAULT(fontSizeNormalized_, "") };
        inline SubtitleConfig& setFontSizeNormalized(string fontSizeNormalized) { DARABONBA_PTR_SET_VALUE(fontSizeNormalized_, fontSizeNormalized) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline SubtitleConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // maxLines Field Functions 
        bool hasMaxLines() const { return this->maxLines_ != nullptr;};
        void deleteMaxLines() { this->maxLines_ = nullptr;};
        inline int32_t getMaxLines() const { DARABONBA_PTR_GET_DEFAULT(maxLines_, 0) };
        inline SubtitleConfig& setMaxLines(int32_t maxLines) { DARABONBA_PTR_SET_VALUE(maxLines_, maxLines) };


        // positionNormalized Field Functions 
        bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
        void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
        inline const SubtitleConfig::PositionNormalized & getPositionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, SubtitleConfig::PositionNormalized) };
        inline SubtitleConfig::PositionNormalized getPositionNormalized() { DARABONBA_PTR_GET(positionNormalized_, SubtitleConfig::PositionNormalized) };
        inline SubtitleConfig& setPositionNormalized(const SubtitleConfig::PositionNormalized & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
        inline SubtitleConfig& setPositionNormalized(SubtitleConfig::PositionNormalized && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


        // rulesRefer Field Functions 
        bool hasRulesRefer() const { return this->rulesRefer_ != nullptr;};
        void deleteRulesRefer() { this->rulesRefer_ = nullptr;};
        inline const SubtitleConfig::RulesRefer & getRulesRefer() const { DARABONBA_PTR_GET_CONST(rulesRefer_, SubtitleConfig::RulesRefer) };
        inline SubtitleConfig::RulesRefer getRulesRefer() { DARABONBA_PTR_GET(rulesRefer_, SubtitleConfig::RulesRefer) };
        inline SubtitleConfig& setRulesRefer(const SubtitleConfig::RulesRefer & rulesRefer) { DARABONBA_PTR_SET_VALUE(rulesRefer_, rulesRefer) };
        inline SubtitleConfig& setRulesRefer(SubtitleConfig::RulesRefer && rulesRefer) { DARABONBA_PTR_SET_RVALUE(rulesRefer_, rulesRefer) };


        // showSourceLan Field Functions 
        bool hasShowSourceLan() const { return this->showSourceLan_ != nullptr;};
        void deleteShowSourceLan() { this->showSourceLan_ = nullptr;};
        inline int32_t getShowSourceLan() const { DARABONBA_PTR_GET_DEFAULT(showSourceLan_, 0) };
        inline SubtitleConfig& setShowSourceLan(int32_t showSourceLan) { DARABONBA_PTR_SET_VALUE(showSourceLan_, showSourceLan) };


        // srcLanguage Field Functions 
        bool hasSrcLanguage() const { return this->srcLanguage_ != nullptr;};
        void deleteSrcLanguage() { this->srcLanguage_ = nullptr;};
        inline string getSrcLanguage() const { DARABONBA_PTR_GET_DEFAULT(srcLanguage_, "") };
        inline SubtitleConfig& setSrcLanguage(string srcLanguage) { DARABONBA_PTR_SET_VALUE(srcLanguage_, srcLanguage) };


        // subtitleId Field Functions 
        bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
        void deleteSubtitleId() { this->subtitleId_ = nullptr;};
        inline string getSubtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
        inline SubtitleConfig& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


        // subtitleName Field Functions 
        bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
        void deleteSubtitleName() { this->subtitleName_ = nullptr;};
        inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
        inline SubtitleConfig& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline SubtitleConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // wordPerline Field Functions 
        bool hasWordPerline() const { return this->wordPerline_ != nullptr;};
        void deleteWordPerline() { this->wordPerline_ = nullptr;};
        inline int32_t getWordPerline() const { DARABONBA_PTR_GET_DEFAULT(wordPerline_, 0) };
        inline SubtitleConfig& setWordPerline(int32_t wordPerline) { DARABONBA_PTR_SET_VALUE(wordPerline_, wordPerline) };


      protected:
        // The background color of the subtitles.
        shared_ptr<string> bgColor_ {};
        // The size of the background image.
        shared_ptr<float> bgWidthNormalized_ {};
        // The font weight.
        shared_ptr<float> borderWidthNormalized_ {};
        // The description of the template.
        shared_ptr<string> description_ {};
        // The language to which the subtitles are translated.
        shared_ptr<string> dstLanguage_ {};
        // The font color.
        shared_ptr<string> fontColor_ {};
        // The font.
        shared_ptr<string> fontName_ {};
        // The font size.
        shared_ptr<string> fontSizeNormalized_ {};
        // The height of the preview image.
        shared_ptr<string> height_ {};
        // The number of displayed lines.
        shared_ptr<int32_t> maxLines_ {};
        // The position of the subtitles.
        shared_ptr<SubtitleConfig::PositionNormalized> positionNormalized_ {};
        // The ID of the subtitle rule.
        shared_ptr<SubtitleConfig::RulesRefer> rulesRefer_ {};
        // Indicates whether the source language of the subtitle is displayed.
        shared_ptr<int32_t> showSourceLan_ {};
        // The source language of the subtitles.
        shared_ptr<string> srcLanguage_ {};
        // The ID of the subtitle template.
        shared_ptr<string> subtitleId_ {};
        // The name of the subtitle template.
        shared_ptr<string> subtitleName_ {};
        // The width of the preview image.
        shared_ptr<string> width_ {};
        // The number of words per line.
        shared_ptr<int32_t> wordPerline_ {};
      };

      virtual bool empty() const override { return this->subtitleConfig_ == nullptr; };
      // subtitleConfig Field Functions 
      bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
      void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
      inline const vector<SubtitleConfigs::SubtitleConfig> & getSubtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, vector<SubtitleConfigs::SubtitleConfig>) };
      inline vector<SubtitleConfigs::SubtitleConfig> getSubtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, vector<SubtitleConfigs::SubtitleConfig>) };
      inline SubtitleConfigs& setSubtitleConfig(const vector<SubtitleConfigs::SubtitleConfig> & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
      inline SubtitleConfigs& setSubtitleConfig(vector<SubtitleConfigs::SubtitleConfig> && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


    protected:
      shared_ptr<vector<SubtitleConfigs::SubtitleConfig>> subtitleConfig_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subtitleConfigs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAISubtitleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subtitleConfigs Field Functions 
    bool hasSubtitleConfigs() const { return this->subtitleConfigs_ != nullptr;};
    void deleteSubtitleConfigs() { this->subtitleConfigs_ = nullptr;};
    inline const DescribeLiveAISubtitleResponseBody::SubtitleConfigs & getSubtitleConfigs() const { DARABONBA_PTR_GET_CONST(subtitleConfigs_, DescribeLiveAISubtitleResponseBody::SubtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBody::SubtitleConfigs getSubtitleConfigs() { DARABONBA_PTR_GET(subtitleConfigs_, DescribeLiveAISubtitleResponseBody::SubtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBody& setSubtitleConfigs(const DescribeLiveAISubtitleResponseBody::SubtitleConfigs & subtitleConfigs) { DARABONBA_PTR_SET_VALUE(subtitleConfigs_, subtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBody& setSubtitleConfigs(DescribeLiveAISubtitleResponseBody::SubtitleConfigs && subtitleConfigs) { DARABONBA_PTR_SET_RVALUE(subtitleConfigs_, subtitleConfigs) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the subtitle templates.
    shared_ptr<DescribeLiveAISubtitleResponseBody::SubtitleConfigs> subtitleConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
