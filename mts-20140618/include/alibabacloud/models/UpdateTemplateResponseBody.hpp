// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    UpdateTemplateResponseBody() = default ;
    UpdateTemplateResponseBody(const UpdateTemplateResponseBody &) = default ;
    UpdateTemplateResponseBody(UpdateTemplateResponseBody &&) = default ;
    UpdateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBody() = default ;
    UpdateTemplateResponseBody& operator=(const UpdateTemplateResponseBody &) = default ;
    UpdateTemplateResponseBody& operator=(UpdateTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(Audio, audio_);
        DARABONBA_PTR_TO_JSON(Container, container_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
        DARABONBA_PTR_TO_JSON(Video, video_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(Audio, audio_);
        DARABONBA_PTR_FROM_JSON(Container, container_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
        DARABONBA_PTR_FROM_JSON(Video, video_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Video : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Video& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(BitrateBnd, bitrateBnd_);
          DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
          DARABONBA_PTR_TO_JSON(Codec, codec_);
          DARABONBA_PTR_TO_JSON(Crf, crf_);
          DARABONBA_PTR_TO_JSON(Crop, crop_);
          DARABONBA_PTR_TO_JSON(Degrain, degrain_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Gop, gop_);
          DARABONBA_PTR_TO_JSON(Hdr2sdr, hdr2sdr_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(LongShortMode, longShortMode_);
          DARABONBA_PTR_TO_JSON(MaxFps, maxFps_);
          DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
          DARABONBA_PTR_TO_JSON(NarrowBand, narrowBand_);
          DARABONBA_PTR_TO_JSON(Pad, pad_);
          DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
          DARABONBA_PTR_TO_JSON(Preset, preset_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(Qscale, qscale_);
          DARABONBA_PTR_TO_JSON(Remove, remove_);
          DARABONBA_PTR_TO_JSON(ResoPriority, resoPriority_);
          DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, Video& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(BitrateBnd, bitrateBnd_);
          DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
          DARABONBA_PTR_FROM_JSON(Codec, codec_);
          DARABONBA_PTR_FROM_JSON(Crf, crf_);
          DARABONBA_PTR_FROM_JSON(Crop, crop_);
          DARABONBA_PTR_FROM_JSON(Degrain, degrain_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Gop, gop_);
          DARABONBA_PTR_FROM_JSON(Hdr2sdr, hdr2sdr_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(LongShortMode, longShortMode_);
          DARABONBA_PTR_FROM_JSON(MaxFps, maxFps_);
          DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
          DARABONBA_PTR_FROM_JSON(NarrowBand, narrowBand_);
          DARABONBA_PTR_FROM_JSON(Pad, pad_);
          DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
          DARABONBA_PTR_FROM_JSON(Preset, preset_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
          DARABONBA_PTR_FROM_JSON(Remove, remove_);
          DARABONBA_PTR_FROM_JSON(ResoPriority, resoPriority_);
          DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        Video() = default ;
        Video(const Video &) = default ;
        Video(Video &&) = default ;
        Video(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Video() = default ;
        Video& operator=(const Video &) = default ;
        Video& operator=(Video &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NarrowBand : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NarrowBand& obj) { 
            DARABONBA_PTR_TO_JSON(Abrmax, abrmax_);
            DARABONBA_PTR_TO_JSON(MaxAbrRatio, maxAbrRatio_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, NarrowBand& obj) { 
            DARABONBA_PTR_FROM_JSON(Abrmax, abrmax_);
            DARABONBA_PTR_FROM_JSON(MaxAbrRatio, maxAbrRatio_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          NarrowBand() = default ;
          NarrowBand(const NarrowBand &) = default ;
          NarrowBand(NarrowBand &&) = default ;
          NarrowBand(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NarrowBand() = default ;
          NarrowBand& operator=(const NarrowBand &) = default ;
          NarrowBand& operator=(NarrowBand &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->abrmax_ == nullptr
        && this->maxAbrRatio_ == nullptr && this->version_ == nullptr; };
          // abrmax Field Functions 
          bool hasAbrmax() const { return this->abrmax_ != nullptr;};
          void deleteAbrmax() { this->abrmax_ = nullptr;};
          inline float getAbrmax() const { DARABONBA_PTR_GET_DEFAULT(abrmax_, 0.0) };
          inline NarrowBand& setAbrmax(float abrmax) { DARABONBA_PTR_SET_VALUE(abrmax_, abrmax) };


          // maxAbrRatio Field Functions 
          bool hasMaxAbrRatio() const { return this->maxAbrRatio_ != nullptr;};
          void deleteMaxAbrRatio() { this->maxAbrRatio_ = nullptr;};
          inline float getMaxAbrRatio() const { DARABONBA_PTR_GET_DEFAULT(maxAbrRatio_, 0.0) };
          inline NarrowBand& setMaxAbrRatio(float maxAbrRatio) { DARABONBA_PTR_SET_VALUE(maxAbrRatio_, maxAbrRatio) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline NarrowBand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The upper limit of the dynamic bitrate. If this parameter is set, the average bitrate is in the range of (0, 1000000].
          shared_ptr<float> abrmax_ {};
          // The maximum ratio of the upper limit of dynamic bitrate. If this parameter is set, the value of Abrmax does not exceed x times of the source video bitrate. Valid values: (0,1.0].
          shared_ptr<float> maxAbrRatio_ {};
          // The Narrowband HD version. Only 1.0 may be returned.
          shared_ptr<string> version_ {};
        };

        class BitrateBnd : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BitrateBnd& obj) { 
            DARABONBA_PTR_TO_JSON(Max, max_);
            DARABONBA_PTR_TO_JSON(Min, min_);
          };
          friend void from_json(const Darabonba::Json& j, BitrateBnd& obj) { 
            DARABONBA_PTR_FROM_JSON(Max, max_);
            DARABONBA_PTR_FROM_JSON(Min, min_);
          };
          BitrateBnd() = default ;
          BitrateBnd(const BitrateBnd &) = default ;
          BitrateBnd(BitrateBnd &&) = default ;
          BitrateBnd(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BitrateBnd() = default ;
          BitrateBnd& operator=(const BitrateBnd &) = default ;
          BitrateBnd& operator=(BitrateBnd &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr; };
          // max Field Functions 
          bool hasMax() const { return this->max_ != nullptr;};
          void deleteMax() { this->max_ = nullptr;};
          inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
          inline BitrateBnd& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


          // min Field Functions 
          bool hasMin() const { return this->min_ != nullptr;};
          void deleteMin() { this->min_ = nullptr;};
          inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
          inline BitrateBnd& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        protected:
          // The lower limit of the total bitrate. Unit: Kbit/s.
          shared_ptr<string> max_ {};
          // The pixel format. Valid values: standard pixel formats such as yuv420p and yuvj420p.
          shared_ptr<string> min_ {};
        };

        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->bitrateBnd_ == nullptr && this->bufsize_ == nullptr && this->codec_ == nullptr && this->crf_ == nullptr && this->crop_ == nullptr
        && this->degrain_ == nullptr && this->fps_ == nullptr && this->gop_ == nullptr && this->hdr2sdr_ == nullptr && this->height_ == nullptr
        && this->longShortMode_ == nullptr && this->maxFps_ == nullptr && this->maxrate_ == nullptr && this->narrowBand_ == nullptr && this->pad_ == nullptr
        && this->pixFmt_ == nullptr && this->preset_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->remove_ == nullptr
        && this->resoPriority_ == nullptr && this->scanMode_ == nullptr && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline Video& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // bitrateBnd Field Functions 
        bool hasBitrateBnd() const { return this->bitrateBnd_ != nullptr;};
        void deleteBitrateBnd() { this->bitrateBnd_ = nullptr;};
        inline const Video::BitrateBnd & getBitrateBnd() const { DARABONBA_PTR_GET_CONST(bitrateBnd_, Video::BitrateBnd) };
        inline Video::BitrateBnd getBitrateBnd() { DARABONBA_PTR_GET(bitrateBnd_, Video::BitrateBnd) };
        inline Video& setBitrateBnd(const Video::BitrateBnd & bitrateBnd) { DARABONBA_PTR_SET_VALUE(bitrateBnd_, bitrateBnd) };
        inline Video& setBitrateBnd(Video::BitrateBnd && bitrateBnd) { DARABONBA_PTR_SET_RVALUE(bitrateBnd_, bitrateBnd) };


        // bufsize Field Functions 
        bool hasBufsize() const { return this->bufsize_ != nullptr;};
        void deleteBufsize() { this->bufsize_ = nullptr;};
        inline string getBufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
        inline Video& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


        // codec Field Functions 
        bool hasCodec() const { return this->codec_ != nullptr;};
        void deleteCodec() { this->codec_ = nullptr;};
        inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
        inline Video& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


        // crf Field Functions 
        bool hasCrf() const { return this->crf_ != nullptr;};
        void deleteCrf() { this->crf_ = nullptr;};
        inline string getCrf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
        inline Video& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


        // crop Field Functions 
        bool hasCrop() const { return this->crop_ != nullptr;};
        void deleteCrop() { this->crop_ = nullptr;};
        inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
        inline Video& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


        // degrain Field Functions 
        bool hasDegrain() const { return this->degrain_ != nullptr;};
        void deleteDegrain() { this->degrain_ = nullptr;};
        inline string getDegrain() const { DARABONBA_PTR_GET_DEFAULT(degrain_, "") };
        inline Video& setDegrain(string degrain) { DARABONBA_PTR_SET_VALUE(degrain_, degrain) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline Video& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // gop Field Functions 
        bool hasGop() const { return this->gop_ != nullptr;};
        void deleteGop() { this->gop_ = nullptr;};
        inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
        inline Video& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


        // hdr2sdr Field Functions 
        bool hasHdr2sdr() const { return this->hdr2sdr_ != nullptr;};
        void deleteHdr2sdr() { this->hdr2sdr_ = nullptr;};
        inline string getHdr2sdr() const { DARABONBA_PTR_GET_DEFAULT(hdr2sdr_, "") };
        inline Video& setHdr2sdr(string hdr2sdr) { DARABONBA_PTR_SET_VALUE(hdr2sdr_, hdr2sdr) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline Video& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // longShortMode Field Functions 
        bool hasLongShortMode() const { return this->longShortMode_ != nullptr;};
        void deleteLongShortMode() { this->longShortMode_ = nullptr;};
        inline string getLongShortMode() const { DARABONBA_PTR_GET_DEFAULT(longShortMode_, "") };
        inline Video& setLongShortMode(string longShortMode) { DARABONBA_PTR_SET_VALUE(longShortMode_, longShortMode) };


        // maxFps Field Functions 
        bool hasMaxFps() const { return this->maxFps_ != nullptr;};
        void deleteMaxFps() { this->maxFps_ = nullptr;};
        inline string getMaxFps() const { DARABONBA_PTR_GET_DEFAULT(maxFps_, "") };
        inline Video& setMaxFps(string maxFps) { DARABONBA_PTR_SET_VALUE(maxFps_, maxFps) };


        // maxrate Field Functions 
        bool hasMaxrate() const { return this->maxrate_ != nullptr;};
        void deleteMaxrate() { this->maxrate_ = nullptr;};
        inline string getMaxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
        inline Video& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


        // narrowBand Field Functions 
        bool hasNarrowBand() const { return this->narrowBand_ != nullptr;};
        void deleteNarrowBand() { this->narrowBand_ = nullptr;};
        inline const Video::NarrowBand & getNarrowBand() const { DARABONBA_PTR_GET_CONST(narrowBand_, Video::NarrowBand) };
        inline Video::NarrowBand getNarrowBand() { DARABONBA_PTR_GET(narrowBand_, Video::NarrowBand) };
        inline Video& setNarrowBand(const Video::NarrowBand & narrowBand) { DARABONBA_PTR_SET_VALUE(narrowBand_, narrowBand) };
        inline Video& setNarrowBand(Video::NarrowBand && narrowBand) { DARABONBA_PTR_SET_RVALUE(narrowBand_, narrowBand) };


        // pad Field Functions 
        bool hasPad() const { return this->pad_ != nullptr;};
        void deletePad() { this->pad_ = nullptr;};
        inline string getPad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
        inline Video& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


        // pixFmt Field Functions 
        bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
        void deletePixFmt() { this->pixFmt_ = nullptr;};
        inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
        inline Video& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


        // preset Field Functions 
        bool hasPreset() const { return this->preset_ != nullptr;};
        void deletePreset() { this->preset_ = nullptr;};
        inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
        inline Video& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
        inline Video& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


        // qscale Field Functions 
        bool hasQscale() const { return this->qscale_ != nullptr;};
        void deleteQscale() { this->qscale_ = nullptr;};
        inline string getQscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
        inline Video& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


        // remove Field Functions 
        bool hasRemove() const { return this->remove_ != nullptr;};
        void deleteRemove() { this->remove_ = nullptr;};
        inline string getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
        inline Video& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


        // resoPriority Field Functions 
        bool hasResoPriority() const { return this->resoPriority_ != nullptr;};
        void deleteResoPriority() { this->resoPriority_ = nullptr;};
        inline string getResoPriority() const { DARABONBA_PTR_GET_DEFAULT(resoPriority_, "") };
        inline Video& setResoPriority(string resoPriority) { DARABONBA_PTR_SET_VALUE(resoPriority_, resoPriority) };


        // scanMode Field Functions 
        bool hasScanMode() const { return this->scanMode_ != nullptr;};
        void deleteScanMode() { this->scanMode_ = nullptr;};
        inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
        inline Video& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline Video& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The maximum bitrate of the video. Unit: Kbit/s.
        shared_ptr<string> bitrate_ {};
        // The upper limit of the total bitrate. Unit: Kbit/s.
        shared_ptr<Video::BitrateBnd> bitrateBnd_ {};
        // The level of quality control on the video.
        shared_ptr<string> bufsize_ {};
        // The height of the output video.
        // 
        // *   Unit: pixel.
        // *   Default value: the height of the input video.
        shared_ptr<string> codec_ {};
        // Indicates whether the video stream is deleted. Valid values:
        // 
        // *   **true**: The video stream is deleted.
        // *   **false**: The video stream is retained.
        // *   Default value: **false**.
        shared_ptr<string> crf_ {};
        // The average bitrate of the video. Unit: Kbit/s.
        shared_ptr<string> crop_ {};
        // The average bitrate range of the video.
        shared_ptr<string> degrain_ {};
        // The preset video algorithm. Default value: **medium**. Valid values:
        // 
        // *   **veryfast**
        // *   **fast**
        // *   **medium**
        // *   **slow**
        // *   **slower**
        shared_ptr<string> fps_ {};
        // The width of the video.
        // 
        // *   Unit: pixel.
        // *   Default value: **the width of the input video**.
        shared_ptr<string> gop_ {};
        // Indicates whether the HDR2SDR conversion feature is enabled. If this feature is enabled, high dynamic range (HDR) videos are transcoded to standard dynamic range (SDR) videos.
        shared_ptr<string> hdr2sdr_ {};
        // The level of the independent denoising algorithm.
        shared_ptr<string> height_ {};
        // The size of the buffer.
        // 
        // *   Unit: KB.
        // *   Default value: **6000**.
        shared_ptr<string> longShortMode_ {};
        // The encoding profile. Valid values:
        // 
        // *   **baseline**: applicable to mobile devices.
        // *   **main**: applicable to standard-definition devices.
        // *   **high**: applicable to high-definition devices.
        // *   Default value: **high**.
        shared_ptr<string> maxFps_ {};
        // The maximum frame rate.
        shared_ptr<string> maxrate_ {};
        // The Narrowband HD settings.
        shared_ptr<Video::NarrowBand> narrowBand_ {};
        // The video codec. Default value: **H.264**.
        shared_ptr<string> pad_ {};
        // The black borders added to the video.
        // 
        // *   Format: width:height:left:top.
        // *   Example: 1280:800:0:140.
        shared_ptr<string> pixFmt_ {};
        // The scan mode. Valid values:
        // 
        // *   **interlaced**: An interlaced scan is performed.
        // *   **progressive**: A progressive scan is performed.
        shared_ptr<string> preset_ {};
        // The bitrate quality control factor.
        // 
        // *   Default value if the Codec parameter is set to H.264: **23**. Default value if the Codec parameter is set to H.265: **26**.
        // *   If this parameter is returned, the setting of the Bitrate parameter is invalid.
        shared_ptr<string> profile_ {};
        // The method used to crop the video.
        // 
        // *   **border**: automatically detects and removes borders.
        // *   Value in the width:height:left:top format: crops the video based on custom settings.**** Example: 1280:800:0:140.
        shared_ptr<string> qscale_ {};
        // The maximum number of frames between two keyframes. Default value: **250**.
        shared_ptr<string> remove_ {};
        // The general transcoding configurations.
        shared_ptr<string> resoPriority_ {};
        // The policy of resolution adjustment.
        shared_ptr<string> scanMode_ {};
        // The frame rate.
        // 
        // *   A value of 60 is returned if the frame rate of the input video exceeds 60.
        // *   Default value: the frame rate of the input video.
        shared_ptr<string> width_ {};
      };

      class TransConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TransConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
          DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
          DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
          DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
          DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
          DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
          DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
          DARABONBA_PTR_TO_JSON(TransMode, transMode_);
        };
        friend void from_json(const Darabonba::Json& j, TransConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
          DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
          DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
          DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
          DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
          DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
          DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
          DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
        };
        TransConfig() = default ;
        TransConfig(const TransConfig &) = default ;
        TransConfig(TransConfig &&) = default ;
        TransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TransConfig() = default ;
        TransConfig& operator=(const TransConfig &) = default ;
        TransConfig& operator=(TransConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjDarMethod_ == nullptr
        && this->isCheckAudioBitrate_ == nullptr && this->isCheckAudioBitrateFail_ == nullptr && this->isCheckReso_ == nullptr && this->isCheckResoFail_ == nullptr && this->isCheckVideoBitrate_ == nullptr
        && this->isCheckVideoBitrateFail_ == nullptr && this->transMode_ == nullptr; };
        // adjDarMethod Field Functions 
        bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
        void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
        inline string getAdjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
        inline TransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


        // isCheckAudioBitrate Field Functions 
        bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
        void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
        inline string getIsCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
        inline TransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


        // isCheckAudioBitrateFail Field Functions 
        bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
        void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
        inline string getIsCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
        inline TransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


        // isCheckReso Field Functions 
        bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
        void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
        inline string getIsCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
        inline TransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


        // isCheckResoFail Field Functions 
        bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
        void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
        inline string getIsCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
        inline TransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


        // isCheckVideoBitrate Field Functions 
        bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
        void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
        inline string getIsCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
        inline TransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


        // isCheckVideoBitrateFail Field Functions 
        bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
        void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
        inline string getIsCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
        inline TransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


        // transMode Field Functions 
        bool hasTransMode() const { return this->transMode_ != nullptr;};
        void deleteTransMode() { this->transMode_ = nullptr;};
        inline string getTransMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
        inline TransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


      protected:
        // Indicates whether the video bitrate is checked. If this parameter is set to true and the system detects that the video bitrate of the output file is greater than that of the input file, the video bitrate of the input file is retained after transcoding. Valid values:
        // 
        // *   **true**: The video bitrate is checked.
        // *   **false**: The video bitrate is not checked.
        // *   Default value: **false**.
        shared_ptr<string> adjDarMethod_ {};
        // The transcoding mode. Default value: **onepass**. Valid values:
        // 
        // *   **onepass**
        // *   **twopass**
        // *   **CBR**
        shared_ptr<string> isCheckAudioBitrate_ {};
        // The status of the template. Valid values:
        // 
        // *   **Normal**: The template is normal.
        // *   **Deleted**: The template is deleted.
        shared_ptr<string> isCheckAudioBitrateFail_ {};
        // Indicates whether the video bitrate is checked. This parameter has a higher priority than the IsCheckVideoBitrate parameter. Valid values:
        // 
        // *   **true**: The video bitrate is checked
        // *   **false**: The video bitrate is not checked.
        // *   Default value: **false**.
        shared_ptr<string> isCheckReso_ {};
        // Indicates whether the audio bitrate is checked. This parameter has a higher priority than the IsCheckAudioBitrate parameter. Valid values:
        // 
        // *   **true**: The audio bitrate is checked.
        // *   **false**: The audio bitrate is not checked.
        // *   Default value: **false**.
        shared_ptr<string> isCheckResoFail_ {};
        // Indicates whether the resolution is checked. If this parameter is set to true and the system detects that the resolution of the output file is higher than that of the input file based on the width or height, an error that indicates a transcoding failure is returned. Valid values:
        // 
        // *   **true**: The resolution is checked.
        // *   **false**: The resolution is not checked.
        // *   Default value: **false**.
        shared_ptr<string> isCheckVideoBitrate_ {};
        // The method of resolution adjustment. Default value: **none**. Valid values:
        // 
        // *   rescale: The input video is rescaled.
        // *   crop: The input video is cropped.
        // *   none: No change is made.
        shared_ptr<string> isCheckVideoBitrateFail_ {};
        // Indicates whether the resolution is checked. If the output resolution is higher than the input resolution based on the width or height, the input resolution is retained after transcoding. Valid values:
        // 
        // *   **true**: The resolution is checked.
        // *   **false**: The resolution is not checked.
        // *   Default value: **false**.
        shared_ptr<string> transMode_ {};
      };

      class MuxConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MuxConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Gif, gif_);
          DARABONBA_PTR_TO_JSON(Segment, segment_);
          DARABONBA_PTR_TO_JSON(Webp, webp_);
        };
        friend void from_json(const Darabonba::Json& j, MuxConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Gif, gif_);
          DARABONBA_PTR_FROM_JSON(Segment, segment_);
          DARABONBA_PTR_FROM_JSON(Webp, webp_);
        };
        MuxConfig() = default ;
        MuxConfig(const MuxConfig &) = default ;
        MuxConfig(MuxConfig &&) = default ;
        MuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MuxConfig() = default ;
        MuxConfig& operator=(const MuxConfig &) = default ;
        MuxConfig& operator=(MuxConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Webp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Webp& obj) { 
            DARABONBA_PTR_TO_JSON(Loop, loop_);
          };
          friend void from_json(const Darabonba::Json& j, Webp& obj) { 
            DARABONBA_PTR_FROM_JSON(Loop, loop_);
          };
          Webp() = default ;
          Webp(const Webp &) = default ;
          Webp(Webp &&) = default ;
          Webp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Webp() = default ;
          Webp& operator=(const Webp &) = default ;
          Webp& operator=(Webp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->loop_ == nullptr; };
          // loop Field Functions 
          bool hasLoop() const { return this->loop_ != nullptr;};
          void deleteLoop() { this->loop_ = nullptr;};
          inline string getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
          inline Webp& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


        protected:
          // The transmuxing configurations for GIF.
          shared_ptr<string> loop_ {};
        };

        class Segment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Segment& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
          };
          friend void from_json(const Darabonba::Json& j, Segment& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
          };
          Segment() = default ;
          Segment(const Segment &) = default ;
          Segment(Segment &&) = default ;
          Segment(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Segment() = default ;
          Segment& operator=(const Segment &) = default ;
          Segment& operator=(Segment &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->duration_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
          inline Segment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        protected:
          // The name of the template.
          shared_ptr<string> duration_ {};
        };

        class Gif : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Gif& obj) { 
            DARABONBA_PTR_TO_JSON(DitherMode, ditherMode_);
            DARABONBA_PTR_TO_JSON(FinalDelay, finalDelay_);
            DARABONBA_PTR_TO_JSON(IsCustomPalette, isCustomPalette_);
            DARABONBA_PTR_TO_JSON(Loop, loop_);
          };
          friend void from_json(const Darabonba::Json& j, Gif& obj) { 
            DARABONBA_PTR_FROM_JSON(DitherMode, ditherMode_);
            DARABONBA_PTR_FROM_JSON(FinalDelay, finalDelay_);
            DARABONBA_PTR_FROM_JSON(IsCustomPalette, isCustomPalette_);
            DARABONBA_PTR_FROM_JSON(Loop, loop_);
          };
          Gif() = default ;
          Gif(const Gif &) = default ;
          Gif(Gif &&) = default ;
          Gif(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Gif() = default ;
          Gif& operator=(const Gif &) = default ;
          Gif& operator=(Gif &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ditherMode_ == nullptr
        && this->finalDelay_ == nullptr && this->isCustomPalette_ == nullptr && this->loop_ == nullptr; };
          // ditherMode Field Functions 
          bool hasDitherMode() const { return this->ditherMode_ != nullptr;};
          void deleteDitherMode() { this->ditherMode_ = nullptr;};
          inline string getDitherMode() const { DARABONBA_PTR_GET_DEFAULT(ditherMode_, "") };
          inline Gif& setDitherMode(string ditherMode) { DARABONBA_PTR_SET_VALUE(ditherMode_, ditherMode) };


          // finalDelay Field Functions 
          bool hasFinalDelay() const { return this->finalDelay_ != nullptr;};
          void deleteFinalDelay() { this->finalDelay_ = nullptr;};
          inline string getFinalDelay() const { DARABONBA_PTR_GET_DEFAULT(finalDelay_, "") };
          inline Gif& setFinalDelay(string finalDelay) { DARABONBA_PTR_SET_VALUE(finalDelay_, finalDelay) };


          // isCustomPalette Field Functions 
          bool hasIsCustomPalette() const { return this->isCustomPalette_ != nullptr;};
          void deleteIsCustomPalette() { this->isCustomPalette_ = nullptr;};
          inline string getIsCustomPalette() const { DARABONBA_PTR_GET_DEFAULT(isCustomPalette_, "") };
          inline Gif& setIsCustomPalette(string isCustomPalette) { DARABONBA_PTR_SET_VALUE(isCustomPalette_, isCustomPalette) };


          // loop Field Functions 
          bool hasLoop() const { return this->loop_ != nullptr;};
          void deleteLoop() { this->loop_ = nullptr;};
          inline string getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
          inline Gif& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


        protected:
          // The loop count.
          shared_ptr<string> ditherMode_ {};
          // The color dithering algorithm of the palette. Valid values: sierra and bayer.
          shared_ptr<string> finalDelay_ {};
          // The segment configurations.
          shared_ptr<string> isCustomPalette_ {};
          // Indicates whether the custom palette is used.
          shared_ptr<string> loop_ {};
        };

        virtual bool empty() const override { return this->gif_ == nullptr
        && this->segment_ == nullptr && this->webp_ == nullptr; };
        // gif Field Functions 
        bool hasGif() const { return this->gif_ != nullptr;};
        void deleteGif() { this->gif_ = nullptr;};
        inline const MuxConfig::Gif & getGif() const { DARABONBA_PTR_GET_CONST(gif_, MuxConfig::Gif) };
        inline MuxConfig::Gif getGif() { DARABONBA_PTR_GET(gif_, MuxConfig::Gif) };
        inline MuxConfig& setGif(const MuxConfig::Gif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
        inline MuxConfig& setGif(MuxConfig::Gif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


        // segment Field Functions 
        bool hasSegment() const { return this->segment_ != nullptr;};
        void deleteSegment() { this->segment_ = nullptr;};
        inline const MuxConfig::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, MuxConfig::Segment) };
        inline MuxConfig::Segment getSegment() { DARABONBA_PTR_GET(segment_, MuxConfig::Segment) };
        inline MuxConfig& setSegment(const MuxConfig::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
        inline MuxConfig& setSegment(MuxConfig::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


        // webp Field Functions 
        bool hasWebp() const { return this->webp_ != nullptr;};
        void deleteWebp() { this->webp_ = nullptr;};
        inline const MuxConfig::Webp & getWebp() const { DARABONBA_PTR_GET_CONST(webp_, MuxConfig::Webp) };
        inline MuxConfig::Webp getWebp() { DARABONBA_PTR_GET(webp_, MuxConfig::Webp) };
        inline MuxConfig& setWebp(const MuxConfig::Webp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
        inline MuxConfig& setWebp(MuxConfig::Webp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


      protected:
        // The duration for which the final frame is paused. Unit: milliseconds.
        shared_ptr<MuxConfig::Gif> gif_ {};
        // The length of the segment. Unit: seconds.
        shared_ptr<MuxConfig::Segment> segment_ {};
        // The loop count.
        shared_ptr<MuxConfig::Webp> webp_ {};
      };

      class Container : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Container& obj) { 
          DARABONBA_PTR_TO_JSON(Format, format_);
        };
        friend void from_json(const Darabonba::Json& j, Container& obj) { 
          DARABONBA_PTR_FROM_JSON(Format, format_);
        };
        Container() = default ;
        Container(const Container &) = default ;
        Container(Container &&) = default ;
        Container(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Container() = default ;
        Container& operator=(const Container &) = default ;
        Container& operator=(Container &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->format_ == nullptr; };
        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Container& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      protected:
        // The container format.
        shared_ptr<string> format_ {};
      };

      class Audio : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Audio& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(Codec, codec_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(Qscale, qscale_);
          DARABONBA_PTR_TO_JSON(Remove, remove_);
          DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, Audio& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(Codec, codec_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
          DARABONBA_PTR_FROM_JSON(Remove, remove_);
          DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        Audio() = default ;
        Audio(const Audio &) = default ;
        Audio(Audio &&) = default ;
        Audio(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Audio() = default ;
        Audio& operator=(const Audio &) = default ;
        Audio& operator=(Audio &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Volume : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Volume& obj) { 
            DARABONBA_PTR_TO_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
            DARABONBA_PTR_TO_JSON(Method, method_);
            DARABONBA_PTR_TO_JSON(PeakLevel, peakLevel_);
            DARABONBA_PTR_TO_JSON(TruePeak, truePeak_);
          };
          friend void from_json(const Darabonba::Json& j, Volume& obj) { 
            DARABONBA_PTR_FROM_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
            DARABONBA_PTR_FROM_JSON(Method, method_);
            DARABONBA_PTR_FROM_JSON(PeakLevel, peakLevel_);
            DARABONBA_PTR_FROM_JSON(TruePeak, truePeak_);
          };
          Volume() = default ;
          Volume(const Volume &) = default ;
          Volume(Volume &&) = default ;
          Volume(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Volume() = default ;
          Volume& operator=(const Volume &) = default ;
          Volume& operator=(Volume &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->integratedLoudnessTarget_ == nullptr
        && this->level_ == nullptr && this->loudnessRangeTarget_ == nullptr && this->method_ == nullptr && this->peakLevel_ == nullptr && this->truePeak_ == nullptr; };
          // integratedLoudnessTarget Field Functions 
          bool hasIntegratedLoudnessTarget() const { return this->integratedLoudnessTarget_ != nullptr;};
          void deleteIntegratedLoudnessTarget() { this->integratedLoudnessTarget_ = nullptr;};
          inline string getIntegratedLoudnessTarget() const { DARABONBA_PTR_GET_DEFAULT(integratedLoudnessTarget_, "") };
          inline Volume& setIntegratedLoudnessTarget(string integratedLoudnessTarget) { DARABONBA_PTR_SET_VALUE(integratedLoudnessTarget_, integratedLoudnessTarget) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Volume& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // loudnessRangeTarget Field Functions 
          bool hasLoudnessRangeTarget() const { return this->loudnessRangeTarget_ != nullptr;};
          void deleteLoudnessRangeTarget() { this->loudnessRangeTarget_ = nullptr;};
          inline string getLoudnessRangeTarget() const { DARABONBA_PTR_GET_DEFAULT(loudnessRangeTarget_, "") };
          inline Volume& setLoudnessRangeTarget(string loudnessRangeTarget) { DARABONBA_PTR_SET_VALUE(loudnessRangeTarget_, loudnessRangeTarget) };


          // method Field Functions 
          bool hasMethod() const { return this->method_ != nullptr;};
          void deleteMethod() { this->method_ = nullptr;};
          inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
          inline Volume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


          // peakLevel Field Functions 
          bool hasPeakLevel() const { return this->peakLevel_ != nullptr;};
          void deletePeakLevel() { this->peakLevel_ = nullptr;};
          inline string getPeakLevel() const { DARABONBA_PTR_GET_DEFAULT(peakLevel_, "") };
          inline Volume& setPeakLevel(string peakLevel) { DARABONBA_PTR_SET_VALUE(peakLevel_, peakLevel) };


          // truePeak Field Functions 
          bool hasTruePeak() const { return this->truePeak_ != nullptr;};
          void deleteTruePeak() { this->truePeak_ = nullptr;};
          inline string getTruePeak() const { DARABONBA_PTR_GET_DEFAULT(truePeak_, "") };
          inline Volume& setTruePeak(string truePeak) { DARABONBA_PTR_SET_VALUE(truePeak_, truePeak) };


        protected:
          // The expected volume.
          // 
          // *   This parameter takes effect only if the value of Method is dynamic.
          // *   Unit: decibel.
          // *   Valid values: [-70,-5].
          // *   Default value: -6.
          shared_ptr<string> integratedLoudnessTarget_ {};
          // The increased volume relative to the volume of the input audio.
          // 
          // *   This parameter takes effect only if the value of Method is linear.
          // *   Unit: decibel.
          // *   Valid values: less than or equal to 20.
          // *   Default value: -20.
          shared_ptr<string> level_ {};
          // The range of the volume relative to the expected volume.
          // 
          // *   This parameter takes effect only if the value of Method is dynamic.
          // *   Unit: decibel.
          // *   Valid values: [1,20].
          // *   Default value: 8.
          shared_ptr<string> loudnessRangeTarget_ {};
          // The volume adjustment method. Valid values:
          // 
          // *   **auto**
          // *   **dynamic**
          // *   **linear**
          shared_ptr<string> method_ {};
          // The volume adjustment coefficient.
          // 
          // This parameter takes effect only if the value of Method is adaptive.
          // 
          // Valid values: [0,1].
          // 
          // Default value: 0.9.
          shared_ptr<string> peakLevel_ {};
          // The peak volume.
          // 
          // *   This parameter takes effect only if the value of Method is dynamic.
          // *   Unit: decibel.
          // *   Valid values: [-9,0].
          // *   Default value: -1.
          shared_ptr<string> truePeak_ {};
        };

        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->remove_ == nullptr
        && this->samplerate_ == nullptr && this->volume_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline Audio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
        inline Audio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


        // codec Field Functions 
        bool hasCodec() const { return this->codec_ != nullptr;};
        void deleteCodec() { this->codec_ = nullptr;};
        inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
        inline Audio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
        inline Audio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


        // qscale Field Functions 
        bool hasQscale() const { return this->qscale_ != nullptr;};
        void deleteQscale() { this->qscale_ = nullptr;};
        inline string getQscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
        inline Audio& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


        // remove Field Functions 
        bool hasRemove() const { return this->remove_ != nullptr;};
        void deleteRemove() { this->remove_ = nullptr;};
        inline string getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
        inline Audio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


        // samplerate Field Functions 
        bool hasSamplerate() const { return this->samplerate_ != nullptr;};
        void deleteSamplerate() { this->samplerate_ = nullptr;};
        inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
        inline Audio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline const Audio::Volume & getVolume() const { DARABONBA_PTR_GET_CONST(volume_, Audio::Volume) };
        inline Audio::Volume getVolume() { DARABONBA_PTR_GET(volume_, Audio::Volume) };
        inline Audio& setVolume(const Audio::Volume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
        inline Audio& setVolume(Audio::Volume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


      protected:
        // The ID of the transcoding template.
        shared_ptr<string> bitrate_ {};
        // The audio bitrate of the output file.
        // 
        // *   Valid values: 8 to 1000.****
        // *   Unit: Kbit/s.
        // *   Default value: **128**.
        shared_ptr<string> channels_ {};
        // The sampling rate.
        // 
        // *   Unit: Hz.
        // *   Default value: **44100**.
        shared_ptr<string> codec_ {};
        // Indicates whether the audio stream is deleted.
        // 
        // *   **true**: The audio stream is deleted.
        // *   **false**: The audio stream is retained.
        // *   Default value: **false**.
        shared_ptr<string> profile_ {};
        // The number of sound channels. Default value: **2**.
        shared_ptr<string> qscale_ {};
        // The audio codec format. Default value: **aac**. Valid values:
        // 
        // *   **aac**
        // *   **mp3**
        // *   **vorbis**
        // *   **flac**
        shared_ptr<string> remove_ {};
        // The level of the independent denoising algorithm.
        shared_ptr<string> samplerate_ {};
        // The volume control configurations.
        shared_ptr<Audio::Volume> volume_ {};
      };

      virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->id_ == nullptr && this->muxConfig_ == nullptr && this->name_ == nullptr && this->state_ == nullptr
        && this->transConfig_ == nullptr && this->video_ == nullptr; };
      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const Template::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, Template::Audio) };
      inline Template::Audio getAudio() { DARABONBA_PTR_GET(audio_, Template::Audio) };
      inline Template& setAudio(const Template::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline Template& setAudio(Template::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // container Field Functions 
      bool hasContainer() const { return this->container_ != nullptr;};
      void deleteContainer() { this->container_ = nullptr;};
      inline const Template::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, Template::Container) };
      inline Template::Container getContainer() { DARABONBA_PTR_GET(container_, Template::Container) };
      inline Template& setContainer(const Template::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
      inline Template& setContainer(Template::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Template& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // muxConfig Field Functions 
      bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
      void deleteMuxConfig() { this->muxConfig_ = nullptr;};
      inline const Template::MuxConfig & getMuxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Template::MuxConfig) };
      inline Template::MuxConfig getMuxConfig() { DARABONBA_PTR_GET(muxConfig_, Template::MuxConfig) };
      inline Template& setMuxConfig(const Template::MuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
      inline Template& setMuxConfig(Template::MuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Template& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // transConfig Field Functions 
      bool hasTransConfig() const { return this->transConfig_ != nullptr;};
      void deleteTransConfig() { this->transConfig_ = nullptr;};
      inline const Template::TransConfig & getTransConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Template::TransConfig) };
      inline Template::TransConfig getTransConfig() { DARABONBA_PTR_GET(transConfig_, Template::TransConfig) };
      inline Template& setTransConfig(const Template::TransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
      inline Template& setTransConfig(Template::TransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


      // video Field Functions 
      bool hasVideo() const { return this->video_ != nullptr;};
      void deleteVideo() { this->video_ = nullptr;};
      inline const Template::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, Template::Video) };
      inline Template::Video getVideo() { DARABONBA_PTR_GET(video_, Template::Video) };
      inline Template& setVideo(const Template::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
      inline Template& setVideo(Template::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    protected:
      // The audio codec settings.
      shared_ptr<Template::Audio> audio_ {};
      // The container format.
      shared_ptr<Template::Container> container_ {};
      // The container configurations.
      shared_ptr<string> id_ {};
      // The transmuxing configurations for WebP.
      shared_ptr<Template::MuxConfig> muxConfig_ {};
      // The audio codec configurations.
      shared_ptr<string> name_ {};
      // The transmuxing configurations.
      shared_ptr<string> state_ {};
      // Indicates whether the audio bitrate is checked. If the bitrate of the output audio is greater than the bitrate of the input audio, the bitrate of the input audio is retained after transcoding. In this case, the specified audio bitrate does not take effect. This parameter has a lower priority than the IsCheckAudioBitrateFail parameter. Valid values:
      // 
      // *   **true**: The audio bitrate is checked.
      // 
      // *   **false**: The audio bitrate is not checked.
      // 
      // *   Default value:
      // 
      //     *   If the parameter is left empty and the codec of the output audio is different from that of the input audio, the default value is false.
      //     *   If the parameter is left empty and the codec of the output audio is the same as that of the input audio, the default value is true.
      shared_ptr<Template::TransConfig> transConfig_ {};
      // The video codec configurations.
      shared_ptr<Template::Video> video_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const UpdateTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, UpdateTemplateResponseBody::Template) };
    inline UpdateTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, UpdateTemplateResponseBody::Template) };
    inline UpdateTemplateResponseBody& setTemplate(const UpdateTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline UpdateTemplateResponseBody& setTemplate(UpdateTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The type of the transcoding template.
    shared_ptr<string> requestId_ {};
    // The type of the transcoding template.
    shared_ptr<UpdateTemplateResponseBody::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
