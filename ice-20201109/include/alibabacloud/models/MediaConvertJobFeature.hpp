// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURE_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobFeature& obj) { 
      DARABONBA_PTR_TO_JSON(Clip, clip_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(Clip, clip_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    MediaConvertJobFeature() = default ;
    MediaConvertJobFeature(const MediaConvertJobFeature &) = default ;
    MediaConvertJobFeature(MediaConvertJobFeature &&) = default ;
    MediaConvertJobFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobFeature() = default ;
    MediaConvertJobFeature& operator=(const MediaConvertJobFeature &) = default ;
    MediaConvertJobFeature& operator=(MediaConvertJobFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Watermarks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Watermarks& obj) { 
        DARABONBA_PTR_TO_JSON(Adaptive, adaptive_);
        DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
        DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(FontAlpha, fontAlpha_);
        DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
        DARABONBA_PTR_TO_JSON(FontName, fontName_);
        DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
      };
      friend void from_json(const Darabonba::Json& j, Watermarks& obj) { 
        DARABONBA_PTR_FROM_JSON(Adaptive, adaptive_);
        DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
        DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(FontAlpha, fontAlpha_);
        DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
        DARABONBA_PTR_FROM_JSON(FontName, fontName_);
        DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
      };
      Watermarks() = default ;
      Watermarks(const Watermarks &) = default ;
      Watermarks(Watermarks &&) = default ;
      Watermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Watermarks() = default ;
      Watermarks& operator=(const Watermarks &) = default ;
      Watermarks& operator=(Watermarks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adaptive_ == nullptr
        && this->borderColor_ == nullptr && this->borderWidth_ == nullptr && this->content_ == nullptr && this->fontAlpha_ == nullptr && this->fontColor_ == nullptr
        && this->fontName_ == nullptr && this->fontSize_ == nullptr && this->height_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr
        && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
      // adaptive Field Functions 
      bool hasAdaptive() const { return this->adaptive_ != nullptr;};
      void deleteAdaptive() { this->adaptive_ = nullptr;};
      inline string getAdaptive() const { DARABONBA_PTR_GET_DEFAULT(adaptive_, "") };
      inline Watermarks& setAdaptive(string adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };


      // borderColor Field Functions 
      bool hasBorderColor() const { return this->borderColor_ != nullptr;};
      void deleteBorderColor() { this->borderColor_ = nullptr;};
      inline string getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
      inline Watermarks& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


      // borderWidth Field Functions 
      bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
      void deleteBorderWidth() { this->borderWidth_ = nullptr;};
      inline string getBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, "") };
      inline Watermarks& setBorderWidth(string borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Watermarks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fontAlpha Field Functions 
      bool hasFontAlpha() const { return this->fontAlpha_ != nullptr;};
      void deleteFontAlpha() { this->fontAlpha_ = nullptr;};
      inline string getFontAlpha() const { DARABONBA_PTR_GET_DEFAULT(fontAlpha_, "") };
      inline Watermarks& setFontAlpha(string fontAlpha) { DARABONBA_PTR_SET_VALUE(fontAlpha_, fontAlpha) };


      // fontColor Field Functions 
      bool hasFontColor() const { return this->fontColor_ != nullptr;};
      void deleteFontColor() { this->fontColor_ = nullptr;};
      inline string getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
      inline Watermarks& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


      // fontName Field Functions 
      bool hasFontName() const { return this->fontName_ != nullptr;};
      void deleteFontName() { this->fontName_ = nullptr;};
      inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
      inline Watermarks& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


      // fontSize Field Functions 
      bool hasFontSize() const { return this->fontSize_ != nullptr;};
      void deleteFontSize() { this->fontSize_ = nullptr;};
      inline string getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, "") };
      inline Watermarks& setFontSize(string fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline Watermarks& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Watermarks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Watermarks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline Watermarks& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
      inline Watermarks& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
      inline Watermarks& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    protected:
      // Specifies whether the font size of the text watermark adapts to the output video resolution.
      // 
      // - `true`: The font size is adaptive.
      // 
      // - `false`: The font size is fixed.
      // 
      // - Default value: `false`.
      shared_ptr<string> adaptive_ {};
      // The border color of the text watermark.
      // 
      // - Default value: `black`.
      shared_ptr<string> borderColor_ {};
      // The border width of the text watermark.
      // 
      // - Unit: pixels.
      // 
      // - Value range: [0, 4096].
      // 
      // - Default value: `0`.
      shared_ptr<string> borderWidth_ {};
      // The content of the text watermark.
      shared_ptr<string> content_ {};
      // The opacity of the font.
      // 
      // - Value range: (0, 1].
      // 
      // - Default value: `1.0`.
      shared_ptr<string> fontAlpha_ {};
      // The font color of the text watermark.
      // 
      // - Default value: `black`.
      shared_ptr<string> fontColor_ {};
      // The font name for the text watermark.
      // 
      // - Default value: `SimSun`.
      shared_ptr<string> fontName_ {};
      // The font size of the text watermark.
      // 
      // - Value range: (4, 120).
      // 
      // - Default value: `16`.
      shared_ptr<string> fontSize_ {};
      // The height of the watermark. If specified, this value overrides the corresponding parameter in the watermark template. You can specify the value in two ways:
      // 
      // - As an integer, representing the height in pixels.
      // 
      //   - Unit: pixels.
      // 
      //   - Value range: [8, 4096].
      // 
      // - As a decimal, representing the ratio of the height to the height of the output video.
      // 
      //   - Value range: (0, 1).
      // 
      //   - Supports up to four decimal places, such as `0.9999`. The system truncates additional digits.
      shared_ptr<string> height_ {};
      // The ID of the watermark template.
      shared_ptr<string> templateId_ {};
      // The type of the watermark.
      // 
      // - `Text`: A text watermark. You must also set the text watermark parameters.
      // 
      // - `Image`: An image watermark. You must also set the image watermark parameters.
      // 
      // Default value: The system automatically determines the type based on the watermark template.
      shared_ptr<string> type_ {};
      // The width of the watermark. If specified, this value overrides the corresponding parameter in the watermark template. You can specify the value in two ways:
      // 
      // - As an integer, representing the width in pixels.
      // 
      //   - Unit: pixels.
      // 
      //   - Value range: [8, 4096].
      // 
      // - As a decimal, representing the ratio of the width to the width of the output video.
      // 
      //   - Value range: (0, 1).
      // 
      //   - Supports up to four decimal places, such as `0.9999`. The system truncates additional digits.
      shared_ptr<string> width_ {};
      // The horizontal offset of the watermark relative to the output video. If specified, this value overrides the corresponding parameter in the watermark template. You can specify the value in two ways:
      // 
      // - As an integer, representing the offset in pixels.
      // 
      //   - Unit: pixels.
      // 
      //   - Value range: [8, 4096].
      // 
      // - As a decimal, representing the ratio of the offset to the width of the output video.
      // 
      //   - Value range: (0, 1).
      // 
      //   - Supports up to four decimal places, such as `0.9999`. The system truncates additional digits.
      shared_ptr<string> x_ {};
      // The vertical offset of the watermark relative to the output video. If specified, this value overrides the corresponding parameter in the watermark template. You can specify the value in two ways:
      // 
      // - As an integer, representing the offset in pixels.
      // 
      //   - Unit: pixels.
      // 
      //   - Value range: [8, 4096].
      // 
      // - As a decimal, representing the ratio of the offset to the height of the output video.
      // 
      //   - Value range: (0, 1).
      // 
      //   - Supports up to four decimal places, such as `0.9999`. The system truncates additional digits.
      shared_ptr<string> y_ {};
    };

    class Clip : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Clip& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigToClipFirstPart, configToClipFirstPart_);
        DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
      };
      friend void from_json(const Darabonba::Json& j, Clip& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigToClipFirstPart, configToClipFirstPart_);
        DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
      };
      Clip() = default ;
      Clip(const Clip &) = default ;
      Clip(Clip &&) = default ;
      Clip(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Clip() = default ;
      Clip& operator=(const Clip &) = default ;
      Clip& operator=(Clip &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimeSpan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimeSpan& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Seek, seek_);
        };
        friend void from_json(const Darabonba::Json& j, TimeSpan& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Seek, seek_);
        };
        TimeSpan() = default ;
        TimeSpan(const TimeSpan &) = default ;
        TimeSpan(TimeSpan &&) = default ;
        TimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimeSpan() = default ;
        TimeSpan& operator=(const TimeSpan &) = default ;
        TimeSpan& operator=(TimeSpan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->end_ == nullptr && this->seek_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline TimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
        inline TimeSpan& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // seek Field Functions 
        bool hasSeek() const { return this->seek_ != nullptr;};
        void deleteSeek() { this->seek_ = nullptr;};
        inline string getSeek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
        inline TimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


      protected:
        // Specifies the duration of the clip, relative to the `Seek` time. By default, the clip extends to the end of the video. You can specify either `Duration` or `End`, but not both. If `End` is specified, `Duration` is ignored.
        // 
        // - Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
        // 
        // - Value range: `[00:00:00.000, 23:59:59.999]` or `[0.000, 86399.999]`.
        // 
        // - Example: `00:01:59.999` or `180.30`.
        shared_ptr<string> duration_ {};
        // Specifies the end time of the clip. You can specify either `End` or `Duration`, but not both. If `End` is specified, `Duration` is ignored.
        // 
        // - Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
        // 
        // - Value range: `[00:00:00.000, 23:59:59.999]` or `[0.000, 86399.999]`.
        // 
        // - Example: `00:01:59.999` or `180.30`.
        shared_ptr<string> end_ {};
        // Specifies the start time of the clip. If this parameter is not set, the clip starts from the beginning of the video.
        // 
        // - Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
        // 
        // - Value range: `[00:00:00.000, 23:59:59.999]` or `[0.000, 86399.999]`.
        // 
        // - Example: `00:01:59.999` or `180.30`.
        shared_ptr<string> seek_ {};
      };

      virtual bool empty() const override { return this->configToClipFirstPart_ == nullptr
        && this->timeSpan_ == nullptr; };
      // configToClipFirstPart Field Functions 
      bool hasConfigToClipFirstPart() const { return this->configToClipFirstPart_ != nullptr;};
      void deleteConfigToClipFirstPart() { this->configToClipFirstPart_ = nullptr;};
      inline string getConfigToClipFirstPart() const { DARABONBA_PTR_GET_DEFAULT(configToClipFirstPart_, "") };
      inline Clip& setConfigToClipFirstPart(string configToClipFirstPart) { DARABONBA_PTR_SET_VALUE(configToClipFirstPart_, configToClipFirstPart) };


      // timeSpan Field Functions 
      bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
      void deleteTimeSpan() { this->timeSpan_ = nullptr;};
      inline const Clip::TimeSpan & getTimeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Clip::TimeSpan) };
      inline Clip::TimeSpan getTimeSpan() { DARABONBA_PTR_GET(timeSpan_, Clip::TimeSpan) };
      inline Clip& setTimeSpan(const Clip::TimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
      inline Clip& setTimeSpan(Clip::TimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


    protected:
      // Specifies whether to clip the first segment before concatenation.
      // 
      // - `true`: The system clips the first segment before concatenation and transcoding.
      // 
      // - `false`: The system first concatenates and transcodes the segments, and then clips the resulting video.
      // 
      // - Default value: `false`.
      shared_ptr<string> configToClipFirstPart_ {};
      // The time span for the clip.
      shared_ptr<Clip::TimeSpan> timeSpan_ {};
    };

    virtual bool empty() const override { return this->clip_ == nullptr
        && this->metadata_ == nullptr && this->watermarks_ == nullptr; };
    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline const MediaConvertJobFeature::Clip & getClip() const { DARABONBA_PTR_GET_CONST(clip_, MediaConvertJobFeature::Clip) };
    inline MediaConvertJobFeature::Clip getClip() { DARABONBA_PTR_GET(clip_, MediaConvertJobFeature::Clip) };
    inline MediaConvertJobFeature& setClip(const MediaConvertJobFeature::Clip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
    inline MediaConvertJobFeature& setClip(MediaConvertJobFeature::Clip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline MediaConvertJobFeature& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline MediaConvertJobFeature& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const vector<MediaConvertJobFeature::Watermarks> & getWatermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<MediaConvertJobFeature::Watermarks>) };
    inline vector<MediaConvertJobFeature::Watermarks> getWatermarks() { DARABONBA_PTR_GET(watermarks_, vector<MediaConvertJobFeature::Watermarks>) };
    inline MediaConvertJobFeature& setWatermarks(const vector<MediaConvertJobFeature::Watermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline MediaConvertJobFeature& setWatermarks(vector<MediaConvertJobFeature::Watermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    // Clip settings.
    shared_ptr<MediaConvertJobFeature::Clip> clip_ {};
    // Specifies the metadata for the output video container format, provided as JSON key-value pairs. Example: `{"key1":"value1","key2":"value2"}`.
    // 
    // - Maximum key length: 64 characters.
    // 
    // - Maximum value length: 512 characters.
    // 
    // You can add a maximum of four metadata key-value pairs.
    shared_ptr<map<string, string>> metadata_ {};
    // A list of watermark settings to overlay on the video. If specified, these settings override the corresponding parameters in the specified watermark template.
    // 
    // - You can add a maximum of four watermarks per transcoding job.
    shared_ptr<vector<MediaConvertJobFeature::Watermarks>> watermarks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
