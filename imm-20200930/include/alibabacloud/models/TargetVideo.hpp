// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEO_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideo& obj) { 
      DARABONBA_PTR_TO_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_TO_JSON(FilterVideo, filterVideo_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TranscodeVideo, transcodeVideo_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_FROM_JSON(FilterVideo, filterVideo_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TranscodeVideo, transcodeVideo_);
    };
    TargetVideo() = default ;
    TargetVideo(const TargetVideo &) = default ;
    TargetVideo(TargetVideo &&) = default ;
    TargetVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideo() = default ;
    TargetVideo& operator=(const TargetVideo &) = default ;
    TargetVideo& operator=(TargetVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeVideo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeVideo& obj) { 
        DARABONBA_PTR_TO_JSON(AdaptiveResolutionDirection, adaptiveResolutionDirection_);
        DARABONBA_PTR_TO_JSON(BFrames, BFrames_);
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(BitrateOption, bitrateOption_);
        DARABONBA_PTR_TO_JSON(BufferSize, bufferSize_);
        DARABONBA_PTR_TO_JSON(CRF, CRF_);
        DARABONBA_PTR_TO_JSON(Codec, codec_);
        DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_TO_JSON(FrameRateOption, frameRateOption_);
        DARABONBA_PTR_TO_JSON(GOPSize, GOPSize_);
        DARABONBA_PTR_TO_JSON(MaxBitrate, maxBitrate_);
        DARABONBA_PTR_TO_JSON(PixelFormat, pixelFormat_);
        DARABONBA_PTR_TO_JSON(Refs, refs_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(ResolutionOption, resolutionOption_);
        DARABONBA_PTR_TO_JSON(Rotation, rotation_);
        DARABONBA_PTR_TO_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_TO_JSON(VideoSlim, videoSlim_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeVideo& obj) { 
        DARABONBA_PTR_FROM_JSON(AdaptiveResolutionDirection, adaptiveResolutionDirection_);
        DARABONBA_PTR_FROM_JSON(BFrames, BFrames_);
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(BitrateOption, bitrateOption_);
        DARABONBA_PTR_FROM_JSON(BufferSize, bufferSize_);
        DARABONBA_PTR_FROM_JSON(CRF, CRF_);
        DARABONBA_PTR_FROM_JSON(Codec, codec_);
        DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
        DARABONBA_PTR_FROM_JSON(FrameRateOption, frameRateOption_);
        DARABONBA_PTR_FROM_JSON(GOPSize, GOPSize_);
        DARABONBA_PTR_FROM_JSON(MaxBitrate, maxBitrate_);
        DARABONBA_PTR_FROM_JSON(PixelFormat, pixelFormat_);
        DARABONBA_PTR_FROM_JSON(Refs, refs_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(ResolutionOption, resolutionOption_);
        DARABONBA_PTR_FROM_JSON(Rotation, rotation_);
        DARABONBA_PTR_FROM_JSON(ScaleType, scaleType_);
        DARABONBA_PTR_FROM_JSON(VideoSlim, videoSlim_);
      };
      TranscodeVideo() = default ;
      TranscodeVideo(const TranscodeVideo &) = default ;
      TranscodeVideo(TranscodeVideo &&) = default ;
      TranscodeVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeVideo() = default ;
      TranscodeVideo& operator=(const TranscodeVideo &) = default ;
      TranscodeVideo& operator=(TranscodeVideo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adaptiveResolutionDirection_ == nullptr
        && this->BFrames_ == nullptr && this->bitrate_ == nullptr && this->bitrateOption_ == nullptr && this->bufferSize_ == nullptr && this->CRF_ == nullptr
        && this->codec_ == nullptr && this->frameRate_ == nullptr && this->frameRateOption_ == nullptr && this->GOPSize_ == nullptr && this->maxBitrate_ == nullptr
        && this->pixelFormat_ == nullptr && this->refs_ == nullptr && this->resolution_ == nullptr && this->resolutionOption_ == nullptr && this->rotation_ == nullptr
        && this->scaleType_ == nullptr && this->videoSlim_ == nullptr; };
      // adaptiveResolutionDirection Field Functions 
      bool hasAdaptiveResolutionDirection() const { return this->adaptiveResolutionDirection_ != nullptr;};
      void deleteAdaptiveResolutionDirection() { this->adaptiveResolutionDirection_ = nullptr;};
      inline bool getAdaptiveResolutionDirection() const { DARABONBA_PTR_GET_DEFAULT(adaptiveResolutionDirection_, false) };
      inline TranscodeVideo& setAdaptiveResolutionDirection(bool adaptiveResolutionDirection) { DARABONBA_PTR_SET_VALUE(adaptiveResolutionDirection_, adaptiveResolutionDirection) };


      // BFrames Field Functions 
      bool hasBFrames() const { return this->BFrames_ != nullptr;};
      void deleteBFrames() { this->BFrames_ = nullptr;};
      inline int32_t getBFrames() const { DARABONBA_PTR_GET_DEFAULT(BFrames_, 0) };
      inline TranscodeVideo& setBFrames(int32_t BFrames) { DARABONBA_PTR_SET_VALUE(BFrames_, BFrames) };


      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
      inline TranscodeVideo& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // bitrateOption Field Functions 
      bool hasBitrateOption() const { return this->bitrateOption_ != nullptr;};
      void deleteBitrateOption() { this->bitrateOption_ = nullptr;};
      inline string getBitrateOption() const { DARABONBA_PTR_GET_DEFAULT(bitrateOption_, "") };
      inline TranscodeVideo& setBitrateOption(string bitrateOption) { DARABONBA_PTR_SET_VALUE(bitrateOption_, bitrateOption) };


      // bufferSize Field Functions 
      bool hasBufferSize() const { return this->bufferSize_ != nullptr;};
      void deleteBufferSize() { this->bufferSize_ = nullptr;};
      inline int32_t getBufferSize() const { DARABONBA_PTR_GET_DEFAULT(bufferSize_, 0) };
      inline TranscodeVideo& setBufferSize(int32_t bufferSize) { DARABONBA_PTR_SET_VALUE(bufferSize_, bufferSize) };


      // CRF Field Functions 
      bool hasCRF() const { return this->CRF_ != nullptr;};
      void deleteCRF() { this->CRF_ = nullptr;};
      inline float getCRF() const { DARABONBA_PTR_GET_DEFAULT(CRF_, 0.0) };
      inline TranscodeVideo& setCRF(float CRF) { DARABONBA_PTR_SET_VALUE(CRF_, CRF) };


      // codec Field Functions 
      bool hasCodec() const { return this->codec_ != nullptr;};
      void deleteCodec() { this->codec_ = nullptr;};
      inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
      inline TranscodeVideo& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


      // frameRate Field Functions 
      bool hasFrameRate() const { return this->frameRate_ != nullptr;};
      void deleteFrameRate() { this->frameRate_ = nullptr;};
      inline float getFrameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0.0) };
      inline TranscodeVideo& setFrameRate(float frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


      // frameRateOption Field Functions 
      bool hasFrameRateOption() const { return this->frameRateOption_ != nullptr;};
      void deleteFrameRateOption() { this->frameRateOption_ = nullptr;};
      inline string getFrameRateOption() const { DARABONBA_PTR_GET_DEFAULT(frameRateOption_, "") };
      inline TranscodeVideo& setFrameRateOption(string frameRateOption) { DARABONBA_PTR_SET_VALUE(frameRateOption_, frameRateOption) };


      // GOPSize Field Functions 
      bool hasGOPSize() const { return this->GOPSize_ != nullptr;};
      void deleteGOPSize() { this->GOPSize_ = nullptr;};
      inline int32_t getGOPSize() const { DARABONBA_PTR_GET_DEFAULT(GOPSize_, 0) };
      inline TranscodeVideo& setGOPSize(int32_t GOPSize) { DARABONBA_PTR_SET_VALUE(GOPSize_, GOPSize) };


      // maxBitrate Field Functions 
      bool hasMaxBitrate() const { return this->maxBitrate_ != nullptr;};
      void deleteMaxBitrate() { this->maxBitrate_ = nullptr;};
      inline int32_t getMaxBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxBitrate_, 0) };
      inline TranscodeVideo& setMaxBitrate(int32_t maxBitrate) { DARABONBA_PTR_SET_VALUE(maxBitrate_, maxBitrate) };


      // pixelFormat Field Functions 
      bool hasPixelFormat() const { return this->pixelFormat_ != nullptr;};
      void deletePixelFormat() { this->pixelFormat_ = nullptr;};
      inline string getPixelFormat() const { DARABONBA_PTR_GET_DEFAULT(pixelFormat_, "") };
      inline TranscodeVideo& setPixelFormat(string pixelFormat) { DARABONBA_PTR_SET_VALUE(pixelFormat_, pixelFormat) };


      // refs Field Functions 
      bool hasRefs() const { return this->refs_ != nullptr;};
      void deleteRefs() { this->refs_ = nullptr;};
      inline int32_t getRefs() const { DARABONBA_PTR_GET_DEFAULT(refs_, 0) };
      inline TranscodeVideo& setRefs(int32_t refs) { DARABONBA_PTR_SET_VALUE(refs_, refs) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline TranscodeVideo& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // resolutionOption Field Functions 
      bool hasResolutionOption() const { return this->resolutionOption_ != nullptr;};
      void deleteResolutionOption() { this->resolutionOption_ = nullptr;};
      inline string getResolutionOption() const { DARABONBA_PTR_GET_DEFAULT(resolutionOption_, "") };
      inline TranscodeVideo& setResolutionOption(string resolutionOption) { DARABONBA_PTR_SET_VALUE(resolutionOption_, resolutionOption) };


      // rotation Field Functions 
      bool hasRotation() const { return this->rotation_ != nullptr;};
      void deleteRotation() { this->rotation_ = nullptr;};
      inline int32_t getRotation() const { DARABONBA_PTR_GET_DEFAULT(rotation_, 0) };
      inline TranscodeVideo& setRotation(int32_t rotation) { DARABONBA_PTR_SET_VALUE(rotation_, rotation) };


      // scaleType Field Functions 
      bool hasScaleType() const { return this->scaleType_ != nullptr;};
      void deleteScaleType() { this->scaleType_ = nullptr;};
      inline string getScaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
      inline TranscodeVideo& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


      // videoSlim Field Functions 
      bool hasVideoSlim() const { return this->videoSlim_ != nullptr;};
      void deleteVideoSlim() { this->videoSlim_ = nullptr;};
      inline int32_t getVideoSlim() const { DARABONBA_PTR_GET_DEFAULT(videoSlim_, 0) };
      inline TranscodeVideo& setVideoSlim(int32_t videoSlim) { DARABONBA_PTR_SET_VALUE(videoSlim_, videoSlim) };


    protected:
      // Specifies whether to enable adaptation to resolution based on long and short sides. Valid values:
      // 
      // *   true: The format of the **Resolution** parameter is `LongSide×ShortSide`. This is the default value.
      // *   false: The format of the **Resolution** parameter is `Width×Height`.
      shared_ptr<bool> adaptiveResolutionDirection_ {};
      // The number of consecutive B frames. Default value: 3.
      shared_ptr<int32_t> BFrames_ {};
      // The bitrate of the video stream. Unit: bit/s.
      // 
      // > This parameter and the **CRF** parameter are mutually exclusive. If you leave both the parameters empty, the **CRF** parameter with a value of 23 applies.
      shared_ptr<int32_t> bitrate_ {};
      // The video bitrate option. Valid values:
      // 
      // *   fixed: always uses the target bitrate.
      // *   adaptive: uses the source bitrate when the source bitrate is less than the target bitrate.
      // *   fall: returns a failure when the source bitrate is less than the target bitrate.
      // 
      // Default value:
      // 
      // *   fixed for the CreateMediaConvert operation.
      // *   adaptive for the GenerateVideoPlaylist operation.
      // 
      // > This parameter must be used together with the **Bitrate** parameter.
      shared_ptr<string> bitrateOption_ {};
      // The size of the buffer for decoding when the dynamic bitrate is used. Unit: bit/s.
      // 
      // > This parameter must be used together with the **CRF** parameter.
      shared_ptr<int32_t> bufferSize_ {};
      // The constant rate factor (CRF) of the video. The value of this parameter falls within the [0,51] range. A greater indicates lower quality. We recommend that you specify a value within the [18,38] range. This parameter and the **Bitrate** parameter are mutually exclusive.
      shared_ptr<float> CRF_ {};
      // The video coding format. Valid values:
      // 
      // *   copy, h264, h265, and vp9 for the CreateMediaConvert operation. The default value is copy.
      // 
      //     **
      // 
      //     **Warning **When you set the parameter to copy, the video stream is directly copied into the output file and all other parameters in TranscodeVideo do not take effect. The copy value is commonly used in container format conversion scenarios. You cannot use this value in video merging scenarios.
      // 
      // *   h264 and h265 for the GenerateVideoPlaylist operation. The default value is h264.
      shared_ptr<string> codec_ {};
      // The target frame rate. By default, the target frame rate is the same as the source frame rate.
      shared_ptr<float> frameRate_ {};
      // The frame rate option. Valid values:
      // 
      // *   fixed: always uses the target frame rate.
      // *   adaptive: uses the source frame rate when the source frame rate is less than the target frame rate.
      // *   fall: returns a failure if the source frame rate is less than the target frame rate.
      // 
      // Default value:
      // 
      // *   fixed for the CreateMediaConvert operation.
      // *   adaptive for the GenerateVideoPlaylist operation.
      // 
      // > This parameter must be used together with the **FrameRate** parameter.
      shared_ptr<string> frameRateOption_ {};
      // The keyframe interval. Default value: 150.
      // 
      // > This parameter is not available to the GenerateVideoPlaylist operation.
      shared_ptr<int32_t> GOPSize_ {};
      // The maximum bitrate when the dynamic bitrate is used. If you specify this parameter, you must also specify the BufferSize parameter.
      // 
      // > This parameter must be used together with the **CRF** parameter.
      shared_ptr<int32_t> maxBitrate_ {};
      // The pixel format. By default, the pixel format matches that of the source video. Valid values:
      // 
      // *   yuv420p
      // *   yuv422p
      // *   yuv444p
      // *   yuv420p10le
      // *   yuv422p10le
      // *   yuv444p10le
      // *   yuva420p
      // 
      // > You can set the parameter to yuva420p only when you call the CreateMediaConvert operation and set the **Codec** parameter to vp9.
      shared_ptr<string> pixelFormat_ {};
      // The number of reference frames. Default value: 2.
      shared_ptr<int32_t> refs_ {};
      // The target resolution in the `WidthxHeight` format. By default, the target resolution is the same as the source resolution. You can specify both width and height, or only one of them. You can use this parameter together with the **AdaptiveResolutionDirection** parameter to set both the long side and short side or one of them. The value of each side falls within the range of (0,4096].
      // 
      // *   Example 1: If **AdaptiveResolutionDirection** is set to false, `1280x720` specifies a width of 1280 pixels and a height of 720 pixels, `1280x` specifies a width of 1280 pixels and the same height as the source video, and `x720` specifies a height of 720 pixels and the same width as the source video.
      // *   Example 2: If **AdaptiveResolutionDirection** is set to true, `1280x720` specifies a long side of 1280 pixels and a short side of 720 pixels, `1280x` specifies a long side of 1280 pixels and the same short side as the source video, and `x720` specifies a short side of 720 pixels and the same long side as the source video.
      // 
      // > If the source video contains rotation information, the width, height, long side, and short side depend on the frame after rotation (the playback resolution).
      shared_ptr<string> resolution_ {};
      // The resolution option. Valid values:
      // 
      // *   fixed: always uses the target video resolution.
      // *   adaptive: uses the source video resolution when the source video resolution is less than the target video resolution.
      // *   fall: returns a failure when the source video resolution is less than the target video resolution.
      // 
      // Default value:
      // 
      // *   fixed for the CreateMediaConvert operation.
      // *   adaptive for the GenerateVideoPlaylist operation.
      // 
      // > This parameter must be used together with the **Resolution** parameter.
      shared_ptr<string> resolutionOption_ {};
      // The degrees to rotate the video clockwise. Valid values:
      // 
      // *   0 (default)
      // *   90
      // *   180
      // *   270
      shared_ptr<int32_t> rotation_ {};
      // The resizing mode. Valid values:
      // 
      // *   stretch: forcibly stretches the video based on the specified width and height or long side and short side to fill any remaining space. This is the default value.
      // *   crop: proportionally resizes the video to the minimum resolution outside the rectangular shape based on the specified width and height or long side and short side, and crops the parts beyond the rectangular shape from the center.
      // *   fill: proportionally resizes the video to the maximum resolution within the rectangular shape based on the specified width and height or long side and short side, and fills empty space with black from the center.
      // *   fit: proportionally resizes the video to the maximum resolution that fits within the specified width and height or long side and short side.
      // 
      // > This parameter must be used together with the **Resolution** parameter.
      shared_ptr<string> scaleType_ {};
      shared_ptr<int32_t> videoSlim_ {};
    };

    class FilterVideo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterVideo& obj) { 
        DARABONBA_PTR_TO_JSON(Delogos, delogos_);
        DARABONBA_PTR_TO_JSON(Desensitization, desensitization_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
      };
      friend void from_json(const Darabonba::Json& j, FilterVideo& obj) { 
        DARABONBA_PTR_FROM_JSON(Delogos, delogos_);
        DARABONBA_PTR_FROM_JSON(Desensitization, desensitization_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
      };
      FilterVideo() = default ;
      FilterVideo(const FilterVideo &) = default ;
      FilterVideo(FilterVideo &&) = default ;
      FilterVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterVideo() = default ;
      FilterVideo& operator=(const FilterVideo &) = default ;
      FilterVideo& operator=(FilterVideo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Watermarks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Watermarks& obj) { 
          DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
          DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Dx, dx_);
          DARABONBA_PTR_TO_JSON(Dy, dy_);
          DARABONBA_PTR_TO_JSON(FontApha, fontApha_);
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontName, fontName_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(URI, URI_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Watermarks& obj) { 
          DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
          DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Dx, dx_);
          DARABONBA_PTR_FROM_JSON(Dy, dy_);
          DARABONBA_PTR_FROM_JSON(FontApha, fontApha_);
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontName, fontName_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(URI, URI_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
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
        virtual bool empty() const override { return this->borderColor_ == nullptr
        && this->borderWidth_ == nullptr && this->content_ == nullptr && this->duration_ == nullptr && this->dx_ == nullptr && this->dy_ == nullptr
        && this->fontApha_ == nullptr && this->fontColor_ == nullptr && this->fontName_ == nullptr && this->fontSize_ == nullptr && this->height_ == nullptr
        && this->referPos_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr && this->URI_ == nullptr && this->width_ == nullptr; };
        // borderColor Field Functions 
        bool hasBorderColor() const { return this->borderColor_ != nullptr;};
        void deleteBorderColor() { this->borderColor_ = nullptr;};
        inline string getBorderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
        inline Watermarks& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


        // borderWidth Field Functions 
        bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
        void deleteBorderWidth() { this->borderWidth_ = nullptr;};
        inline int32_t getBorderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
        inline Watermarks& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Watermarks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Watermarks& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // dx Field Functions 
        bool hasDx() const { return this->dx_ != nullptr;};
        void deleteDx() { this->dx_ = nullptr;};
        inline float getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, 0.0) };
        inline Watermarks& setDx(float dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


        // dy Field Functions 
        bool hasDy() const { return this->dy_ != nullptr;};
        void deleteDy() { this->dy_ = nullptr;};
        inline float getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, 0.0) };
        inline Watermarks& setDy(float dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


        // fontApha Field Functions 
        bool hasFontApha() const { return this->fontApha_ != nullptr;};
        void deleteFontApha() { this->fontApha_ = nullptr;};
        inline float getFontApha() const { DARABONBA_PTR_GET_DEFAULT(fontApha_, 0.0) };
        inline Watermarks& setFontApha(float fontApha) { DARABONBA_PTR_SET_VALUE(fontApha_, fontApha) };


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
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline Watermarks& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Watermarks& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // referPos Field Functions 
        bool hasReferPos() const { return this->referPos_ != nullptr;};
        void deleteReferPos() { this->referPos_ = nullptr;};
        inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
        inline Watermarks& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline Watermarks& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Watermarks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // URI Field Functions 
        bool hasURI() const { return this->URI_ != nullptr;};
        void deleteURI() { this->URI_ = nullptr;};
        inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
        inline Watermarks& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Watermarks& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The color of the text watermark border. You can specify a color name, such as "red" or "green", or an RGB color code. The default color is #000000.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<string> borderColor_ {};
        // The width of the text watermark border. Unit: pixels. The value must be an integer within the [0,4096] range. Default value: 0.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<int32_t> borderWidth_ {};
        // The content of the text watermark. By default, this parameter is left empty.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<string> content_ {};
        // The duration of watermarking (in seconds). By default, the watermark lasts until the video ends.
        shared_ptr<double> duration_ {};
        // The value of the parameter can be an integer or a decimal.
        // 
        // *   0: indicates that both the offset in pixels and the ratio of the horizontal offset relative to the height of the target resolution are 0. This is the default value.
        // *   An integer: the offset in pixels. Valid values: [1,4096].
        // *   A decimal: the ratio of the horizontal offset relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> dx_ {};
        // The value of the parameter can be an integer or a decimal.
        // 
        // *   0: indicates that both the offset in pixels and the ratio of the vertical offset relative to the height of the target resolution are 0. This is the default value.
        // *   An integer: the offset in pixels. Valid values: [1,4096].
        // *   A decimal: the ratio of the vertical offset relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> dy_ {};
        // The font transparency of the text watermark. Valid values: (0,1]. Default value: 1, which specifies that the text watermark is fully opaque.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<float> fontApha_ {};
        // The color of the text watermark. You can specify a color name, such as "red" or "green", or an RGB color code. The default color is #000000.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<string> fontColor_ {};
        // The font of the text watermark. Valid values:
        // 
        // *   SourceHanSans-Regular (default)
        // *   SourceHanSans-Bold
        // *   SourceHanSerif-Regular
        // *   SourceHanSerif-Bold
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<string> fontName_ {};
        // The size of the text watermark. Default value: 16. The value must be an integer within the (4,120) range.
        // 
        // > This parameter takes effect only when the Type parameter is set to text.
        shared_ptr<int32_t> fontSize_ {};
        // The height of the image watermark. By default, the height is the same as the height of the original watermark file. The value of the parameter can be an integer or a decimal.
        // 
        // *   An integer: the number of pixels excluding the height of the logo. Valid values: [1,4096].
        // *   A decimal: the ratio relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> height_ {};
        // The reference position for adding the watermark. Valid values:
        // 
        // *   topleft: the upper-left corner. This is the default value.
        // *   topright: the upper-right corner.
        // *   bottomright: the lower-right corner.
        // *   bottomleft: the lower-left corner.
        shared_ptr<string> referPos_ {};
        // The start time of watermarking (in seconds). By default, the watermark begins at the start time of the video.
        shared_ptr<double> startTime_ {};
        // The watermark type. Valid values:
        // 
        // *   text: a text watermark. This is the default value.
        // *   file: a still or animated image watermark.
        shared_ptr<string> type_ {};
        // The Object Storage Service (OSS) URI of the watermark file. The watermark file can be a PNG or MOV file.
        // 
        // The URI is in the `oss://<bucket>/<object>` format, where `<bucket>` is the name of the bucket in the same region as the current project and `<object>` is the path of the object with the extension included.
        // 
        // > This parameter takes effect only when the Type parameter is set to file.
        shared_ptr<string> URI_ {};
        // The width of the image watermark. By default, the width is the same as the width of the original watermark file. The value of the parameter can be an integer or a decimal.
        // 
        // *   An integer: the number of pixels excluding the width of the logo. Valid values: [1,4096].
        // *   A decimal: the ratio relative to the width of the target resolution. Valid values: (0,1).
        shared_ptr<float> width_ {};
      };

      class Desensitization : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Desensitization& obj) { 
          DARABONBA_PTR_TO_JSON(Face, face_);
          DARABONBA_PTR_TO_JSON(LicensePlate, licensePlate_);
        };
        friend void from_json(const Darabonba::Json& j, Desensitization& obj) { 
          DARABONBA_PTR_FROM_JSON(Face, face_);
          DARABONBA_PTR_FROM_JSON(LicensePlate, licensePlate_);
        };
        Desensitization() = default ;
        Desensitization(const Desensitization &) = default ;
        Desensitization(Desensitization &&) = default ;
        Desensitization(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Desensitization() = default ;
        Desensitization& operator=(const Desensitization &) = default ;
        Desensitization& operator=(Desensitization &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LicensePlate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LicensePlate& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(MinSize, minSize_);
          };
          friend void from_json(const Darabonba::Json& j, LicensePlate& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
          };
          LicensePlate() = default ;
          LicensePlate(const LicensePlate &) = default ;
          LicensePlate(LicensePlate &&) = default ;
          LicensePlate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LicensePlate() = default ;
          LicensePlate& operator=(const LicensePlate &) = default ;
          LicensePlate& operator=(LicensePlate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->minSize_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline LicensePlate& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline LicensePlate& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        protected:
          // The minimum confidence threshold. Valid values: 0 to 1. Default value: 0.
          shared_ptr<float> confidence_ {};
          // The minimum threshold for license plate size. This parameter does not take effect if the width or height of the bounding box of a license plate falls below the specified minimum threshold. Default value: 0.
          shared_ptr<int32_t> minSize_ {};
        };

        class Face : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Face& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(MinSize, minSize_);
          };
          friend void from_json(const Darabonba::Json& j, Face& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
          };
          Face() = default ;
          Face(const Face &) = default ;
          Face(Face &&) = default ;
          Face(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Face() = default ;
          Face& operator=(const Face &) = default ;
          Face& operator=(Face &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->minSize_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Face& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline Face& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        protected:
          // The minimum confidence threshold. Valid values: 0 to 1. Default value: 0.
          shared_ptr<float> confidence_ {};
          // This parameter does not take effect if the width or height of the bounding box of a face falls below the specified minimum threshold. Default value: 0.
          shared_ptr<int32_t> minSize_ {};
        };

        virtual bool empty() const override { return this->face_ == nullptr
        && this->licensePlate_ == nullptr; };
        // face Field Functions 
        bool hasFace() const { return this->face_ != nullptr;};
        void deleteFace() { this->face_ = nullptr;};
        inline const Desensitization::Face & getFace() const { DARABONBA_PTR_GET_CONST(face_, Desensitization::Face) };
        inline Desensitization::Face getFace() { DARABONBA_PTR_GET(face_, Desensitization::Face) };
        inline Desensitization& setFace(const Desensitization::Face & face) { DARABONBA_PTR_SET_VALUE(face_, face) };
        inline Desensitization& setFace(Desensitization::Face && face) { DARABONBA_PTR_SET_RVALUE(face_, face) };


        // licensePlate Field Functions 
        bool hasLicensePlate() const { return this->licensePlate_ != nullptr;};
        void deleteLicensePlate() { this->licensePlate_ = nullptr;};
        inline const Desensitization::LicensePlate & getLicensePlate() const { DARABONBA_PTR_GET_CONST(licensePlate_, Desensitization::LicensePlate) };
        inline Desensitization::LicensePlate getLicensePlate() { DARABONBA_PTR_GET(licensePlate_, Desensitization::LicensePlate) };
        inline Desensitization& setLicensePlate(const Desensitization::LicensePlate & licensePlate) { DARABONBA_PTR_SET_VALUE(licensePlate_, licensePlate) };
        inline Desensitization& setLicensePlate(Desensitization::LicensePlate && licensePlate) { DARABONBA_PTR_SET_RVALUE(licensePlate_, licensePlate) };


      protected:
        // The settings for face anonymization.
        shared_ptr<Desensitization::Face> face_ {};
        // The settings for license plate anonymization.
        shared_ptr<Desensitization::LicensePlate> licensePlate_ {};
      };

      class Delogos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Delogos& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Dx, dx_);
          DARABONBA_PTR_TO_JSON(Dy, dy_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Delogos& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Dx, dx_);
          DARABONBA_PTR_FROM_JSON(Dy, dy_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Delogos() = default ;
        Delogos(const Delogos &) = default ;
        Delogos(Delogos &&) = default ;
        Delogos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Delogos() = default ;
        Delogos& operator=(const Delogos &) = default ;
        Delogos& operator=(Delogos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->dx_ == nullptr && this->dy_ == nullptr && this->height_ == nullptr && this->referPos_ == nullptr && this->startTime_ == nullptr
        && this->width_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Delogos& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // dx Field Functions 
        bool hasDx() const { return this->dx_ != nullptr;};
        void deleteDx() { this->dx_ = nullptr;};
        inline float getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, 0.0) };
        inline Delogos& setDx(float dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


        // dy Field Functions 
        bool hasDy() const { return this->dy_ != nullptr;};
        void deleteDy() { this->dy_ = nullptr;};
        inline float getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, 0.0) };
        inline Delogos& setDy(float dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Delogos& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // referPos Field Functions 
        bool hasReferPos() const { return this->referPos_ != nullptr;};
        void deleteReferPos() { this->referPos_ = nullptr;};
        inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
        inline Delogos& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline Delogos& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Delogos& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The duration of the blur in seconds. By default, the blur lasts until the end of the video.
        shared_ptr<double> duration_ {};
        // The value of the parameter can be an integer or a decimal.
        // 
        // *   0: indicates that both the offset in pixels and the ratio of the horizontal offset relative to the height of the target resolution are 0. This is the default value.
        // *   An integer: the offset in pixels. Valid values: [1,4096].
        // *   A decimal: the ratio of the horizontal offset relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> dx_ {};
        // Default value: 0. The value of the parameter can be an integer or a decimal.
        // 
        // *   0: indicates that both the offset in pixels and the ratio of the vertical offset relative to the height of the target resolution are 0. This is the default value.
        // *   An integer: the offset in pixels. Valid values: [1,4096].
        // *   A decimal: the ratio of the vertical offset relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> dy_ {};
        // The height of the blur. The default value is 1.0, which specifies that the blur is as high as the video. The value can be a decimal or an integer.
        // 
        // *   An integer: the number of pixels. Valid values: [1,4096].
        // *   A decimal: the ratio relative to the height of the target resolution. Valid values: (0,1).
        shared_ptr<float> height_ {};
        // The reference position of the blur. Valid values:
        // 
        // *   topleft: the upper-left corner. This is the default value.
        // *   topright: the upper-right corner.
        // *   bottomright: the lower-right corner.
        // *   bottomleft: the lower-left corner.
        shared_ptr<string> referPos_ {};
        // The start time of blurring (in seconds). By default, the blur begins at the start time of the video.
        shared_ptr<double> startTime_ {};
        // The width of the blur. The default value is 1.0, which specifies that the blur is as wide as the video. The value can be a decimal or an integer.
        // 
        // *   An integer: the number of pixels. Valid values: [1,4096].
        // *   A decimal: the ratio relative to the width of the target resolution. Valid values: (0,1).
        shared_ptr<float> width_ {};
      };

      virtual bool empty() const override { return this->delogos_ == nullptr
        && this->desensitization_ == nullptr && this->speed_ == nullptr && this->watermarks_ == nullptr; };
      // delogos Field Functions 
      bool hasDelogos() const { return this->delogos_ != nullptr;};
      void deleteDelogos() { this->delogos_ = nullptr;};
      inline const vector<FilterVideo::Delogos> & getDelogos() const { DARABONBA_PTR_GET_CONST(delogos_, vector<FilterVideo::Delogos>) };
      inline vector<FilterVideo::Delogos> getDelogos() { DARABONBA_PTR_GET(delogos_, vector<FilterVideo::Delogos>) };
      inline FilterVideo& setDelogos(const vector<FilterVideo::Delogos> & delogos) { DARABONBA_PTR_SET_VALUE(delogos_, delogos) };
      inline FilterVideo& setDelogos(vector<FilterVideo::Delogos> && delogos) { DARABONBA_PTR_SET_RVALUE(delogos_, delogos) };


      // desensitization Field Functions 
      bool hasDesensitization() const { return this->desensitization_ != nullptr;};
      void deleteDesensitization() { this->desensitization_ = nullptr;};
      inline const FilterVideo::Desensitization & getDesensitization() const { DARABONBA_PTR_GET_CONST(desensitization_, FilterVideo::Desensitization) };
      inline FilterVideo::Desensitization getDesensitization() { DARABONBA_PTR_GET(desensitization_, FilterVideo::Desensitization) };
      inline FilterVideo& setDesensitization(const FilterVideo::Desensitization & desensitization) { DARABONBA_PTR_SET_VALUE(desensitization_, desensitization) };
      inline FilterVideo& setDesensitization(FilterVideo::Desensitization && desensitization) { DARABONBA_PTR_SET_RVALUE(desensitization_, desensitization) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline float getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
      inline FilterVideo& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // watermarks Field Functions 
      bool hasWatermarks() const { return this->watermarks_ != nullptr;};
      void deleteWatermarks() { this->watermarks_ = nullptr;};
      inline const vector<FilterVideo::Watermarks> & getWatermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, vector<FilterVideo::Watermarks>) };
      inline vector<FilterVideo::Watermarks> getWatermarks() { DARABONBA_PTR_GET(watermarks_, vector<FilterVideo::Watermarks>) };
      inline FilterVideo& setWatermarks(const vector<FilterVideo::Watermarks> & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
      inline FilterVideo& setWatermarks(vector<FilterVideo::Watermarks> && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


    protected:
      // The configurations for blurring a rectangular area of the video. This parameter is used to remove logos from videos, such as TV channel logos.
      shared_ptr<vector<FilterVideo::Delogos>> delogos_ {};
      // The video anonymization settings.
      // 
      // > 
      // 
      // *   This parameter only applies to the CreateMediaConvertTask operation.
      shared_ptr<FilterVideo::Desensitization> desensitization_ {};
      // The video playback speed. Valid values: [0.5,1.0]. Default value: 1.0.
      // 
      // > 
      // 
      // *   This parameter specifies the ratio of the playback speed of the output media file to the default playback speed of the source media file. It does not indicate transcoding acceleration.
      // 
      // > 
      // 
      // *   This parameter only applies to the CreateMediaConvertTask operation.
      shared_ptr<float> speed_ {};
      // The video watermarks.
      shared_ptr<vector<FilterVideo::Watermarks>> watermarks_ {};
    };

    virtual bool empty() const override { return this->disableVideo_ == nullptr
        && this->filterVideo_ == nullptr && this->stream_ == nullptr && this->transcodeVideo_ == nullptr; };
    // disableVideo Field Functions 
    bool hasDisableVideo() const { return this->disableVideo_ != nullptr;};
    void deleteDisableVideo() { this->disableVideo_ = nullptr;};
    inline bool getDisableVideo() const { DARABONBA_PTR_GET_DEFAULT(disableVideo_, false) };
    inline TargetVideo& setDisableVideo(bool disableVideo) { DARABONBA_PTR_SET_VALUE(disableVideo_, disableVideo) };


    // filterVideo Field Functions 
    bool hasFilterVideo() const { return this->filterVideo_ != nullptr;};
    void deleteFilterVideo() { this->filterVideo_ = nullptr;};
    inline const TargetVideo::FilterVideo & getFilterVideo() const { DARABONBA_PTR_GET_CONST(filterVideo_, TargetVideo::FilterVideo) };
    inline TargetVideo::FilterVideo getFilterVideo() { DARABONBA_PTR_GET(filterVideo_, TargetVideo::FilterVideo) };
    inline TargetVideo& setFilterVideo(const TargetVideo::FilterVideo & filterVideo) { DARABONBA_PTR_SET_VALUE(filterVideo_, filterVideo) };
    inline TargetVideo& setFilterVideo(TargetVideo::FilterVideo && filterVideo) { DARABONBA_PTR_SET_RVALUE(filterVideo_, filterVideo) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int32_t> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
    inline vector<int32_t> getStream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
    inline TargetVideo& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetVideo& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // transcodeVideo Field Functions 
    bool hasTranscodeVideo() const { return this->transcodeVideo_ != nullptr;};
    void deleteTranscodeVideo() { this->transcodeVideo_ = nullptr;};
    inline const TargetVideo::TranscodeVideo & getTranscodeVideo() const { DARABONBA_PTR_GET_CONST(transcodeVideo_, TargetVideo::TranscodeVideo) };
    inline TargetVideo::TranscodeVideo getTranscodeVideo() { DARABONBA_PTR_GET(transcodeVideo_, TargetVideo::TranscodeVideo) };
    inline TargetVideo& setTranscodeVideo(const TargetVideo::TranscodeVideo & transcodeVideo) { DARABONBA_PTR_SET_VALUE(transcodeVideo_, transcodeVideo) };
    inline TargetVideo& setTranscodeVideo(TargetVideo::TranscodeVideo && transcodeVideo) { DARABONBA_PTR_SET_RVALUE(transcodeVideo_, transcodeVideo) };


  protected:
    // Specifies whether to disable video stream generation. Valid values:
    // 
    // *   true: disables video stream generation. No video stream is included in the output file.
    // *   false: does not disable video stream generation. This is the default value.
    shared_ptr<bool> disableVideo_ {};
    // The video processing parameters. This parameter is invalid if **TranscodeVideo** is left empty or **TranscodeVideo.Codec** is set to copy.
    // 
    // > This parameter is not available to the GenerateVideoPlaylist operation.
    shared_ptr<TargetVideo::FilterVideo> filterVideo_ {};
    // The index numbers of video streams. If you do not specify this parameter, the first video stream (the one with the smallest index number) is processed. If the array contains an element greater than 100, all video streams are processed.
    // 
    // *   For example, you can set the parameter to `[0,1]` to process video streams with index numbers 0 and 1, `[1]` to process only the video stream with the index number 1, and `[101]` to process all video streams.
    // 
    // > If you specify an index number but no video stream with the index number is found, the index number is ignored.
    shared_ptr<vector<int32_t>> stream_ {};
    // The video transcoding parameters. If you do not specify this parameter, no video streams are included in the output file.
    // 
    // > We recommend that you do not use this parameter to disable video stream generation.
    shared_ptr<TargetVideo::TranscodeVideo> transcodeVideo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
