// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateLiveTranscodeTemplateRequest() = default ;
    UpdateLiveTranscodeTemplateRequest(const UpdateLiveTranscodeTemplateRequest &) = default ;
    UpdateLiveTranscodeTemplateRequest(UpdateLiveTranscodeTemplateRequest &&) = default ;
    UpdateLiveTranscodeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeTemplateRequest() = default ;
    UpdateLiveTranscodeTemplateRequest& operator=(const UpdateLiveTranscodeTemplateRequest &) = default ;
    UpdateLiveTranscodeTemplateRequest& operator=(UpdateLiveTranscodeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AudioParams, audioParams_);
        DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioParams, audioParams_);
        DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
      };
      TemplateConfig() = default ;
      TemplateConfig(const TemplateConfig &) = default ;
      TemplateConfig(TemplateConfig &&) = default ;
      TemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateConfig() = default ;
      TemplateConfig& operator=(const TemplateConfig &) = default ;
      TemplateConfig& operator=(TemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoParams& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(Codec, codec_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Gop, gop_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, VideoParams& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(Codec, codec_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Gop, gop_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        VideoParams() = default ;
        VideoParams(const VideoParams &) = default ;
        VideoParams(VideoParams &&) = default ;
        VideoParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoParams() = default ;
        VideoParams& operator=(const VideoParams &) = default ;
        VideoParams& operator=(VideoParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->codec_ == nullptr && this->fps_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->profile_ == nullptr
        && this->width_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline VideoParams& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // codec Field Functions 
        bool hasCodec() const { return this->codec_ != nullptr;};
        void deleteCodec() { this->codec_ = nullptr;};
        inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
        inline VideoParams& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline VideoParams& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // gop Field Functions 
        bool hasGop() const { return this->gop_ != nullptr;};
        void deleteGop() { this->gop_ = nullptr;};
        inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
        inline VideoParams& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline VideoParams& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
        inline VideoParams& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline VideoParams& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The bitrate of the output video. Unit: Kbit/s. Valid values: 1 to 6000.
        shared_ptr<string> bitrate_ {};
        // The encoding type. Valid values:
        // 
        // *   H.264
        // *   H.265
        shared_ptr<string> codec_ {};
        // The frame rate of the output video. Unit: frames per second (FPS). Valid values: 1 to 60.
        shared_ptr<string> fps_ {};
        // The group of pictures (GOP) of the output video. Unit: frame. Valid values: 1 to 3000.
        shared_ptr<string> gop_ {};
        // The height of the output video. Valid values:
        // 
        // *   Height ≥ 128
        // *   max (Height,Width) ≤ 2560
        // *   min（Height,Width）≤ 1440
        // 
        // >  The resolution of a video transcoded by using the H.265 Narrowband HD template cannot exceed 1,280 × 720 pixels.
        shared_ptr<string> height_ {};
        // The video encoding profile. The profile determines how a video is encoded. In most cases, a greater value indicates better image quality and higher resource consumption. Valid values:
        // 
        // *   1: baseline. This value is suitable for mobile devices.
        // *   2: main. This value is suitable for standard-definition devices.
        // *   3: high. This value is suitable for high-definition devices.
        shared_ptr<string> profile_ {};
        // The width of the output video. Valid values:
        // 
        // *   Width ≥ 128
        // *   max (Height,Width) ≤ 2560
        // *   min（Height,Width）≤ 1440
        // 
        // >  The resolution of a video transcoded by using the H.265 Narrowband HD template cannot exceed 1,280 × 720 pixels.
        shared_ptr<string> width_ {};
      };

      class AudioParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioParams& obj) { 
          DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_TO_JSON(Channels, channels_);
          DARABONBA_PTR_TO_JSON(Codec, codec_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
        };
        friend void from_json(const Darabonba::Json& j, AudioParams& obj) { 
          DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
          DARABONBA_PTR_FROM_JSON(Channels, channels_);
          DARABONBA_PTR_FROM_JSON(Codec, codec_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
        };
        AudioParams() = default ;
        AudioParams(const AudioParams &) = default ;
        AudioParams(AudioParams &&) = default ;
        AudioParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioParams() = default ;
        AudioParams& operator=(const AudioParams &) = default ;
        AudioParams& operator=(AudioParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->samplerate_ == nullptr; };
        // bitrate Field Functions 
        bool hasBitrate() const { return this->bitrate_ != nullptr;};
        void deleteBitrate() { this->bitrate_ = nullptr;};
        inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
        inline AudioParams& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


        // channels Field Functions 
        bool hasChannels() const { return this->channels_ != nullptr;};
        void deleteChannels() { this->channels_ = nullptr;};
        inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
        inline AudioParams& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


        // codec Field Functions 
        bool hasCodec() const { return this->codec_ != nullptr;};
        void deleteCodec() { this->codec_ = nullptr;};
        inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
        inline AudioParams& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
        inline AudioParams& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


        // samplerate Field Functions 
        bool hasSamplerate() const { return this->samplerate_ != nullptr;};
        void deleteSamplerate() { this->samplerate_ = nullptr;};
        inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
        inline AudioParams& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


      protected:
        // The bitrate of the output audio. Unit: Kbit/s. Valid values: 1 to 1000.
        shared_ptr<string> bitrate_ {};
        // The number of sound channels. Valid values: 1: mono 2: binaural
        shared_ptr<string> channels_ {};
        // The audio codec. Valid values: AAC MP3
        shared_ptr<string> codec_ {};
        // The audio codec profile. Valid values when the Codec parameter is set to AAC:
        // 
        // *   aac_low
        // *   aac_he
        // *   aac_he_v2
        // *   aac_ld
        shared_ptr<string> profile_ {};
        // The audio sampling rate. Valid values: 22050 to 96000.
        // 
        // Note If you set AudioProfile to aac_ld, the audio sampling rate cannot exceed 44100.
        shared_ptr<string> samplerate_ {};
      };

      virtual bool empty() const override { return this->audioParams_ == nullptr
        && this->videoParams_ == nullptr; };
      // audioParams Field Functions 
      bool hasAudioParams() const { return this->audioParams_ != nullptr;};
      void deleteAudioParams() { this->audioParams_ = nullptr;};
      inline const TemplateConfig::AudioParams & getAudioParams() const { DARABONBA_PTR_GET_CONST(audioParams_, TemplateConfig::AudioParams) };
      inline TemplateConfig::AudioParams getAudioParams() { DARABONBA_PTR_GET(audioParams_, TemplateConfig::AudioParams) };
      inline TemplateConfig& setAudioParams(const TemplateConfig::AudioParams & audioParams) { DARABONBA_PTR_SET_VALUE(audioParams_, audioParams) };
      inline TemplateConfig& setAudioParams(TemplateConfig::AudioParams && audioParams) { DARABONBA_PTR_SET_RVALUE(audioParams_, audioParams) };


      // videoParams Field Functions 
      bool hasVideoParams() const { return this->videoParams_ != nullptr;};
      void deleteVideoParams() { this->videoParams_ = nullptr;};
      inline const TemplateConfig::VideoParams & getVideoParams() const { DARABONBA_PTR_GET_CONST(videoParams_, TemplateConfig::VideoParams) };
      inline TemplateConfig::VideoParams getVideoParams() { DARABONBA_PTR_GET(videoParams_, TemplateConfig::VideoParams) };
      inline TemplateConfig& setVideoParams(const TemplateConfig::VideoParams & videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };
      inline TemplateConfig& setVideoParams(TemplateConfig::VideoParams && videoParams) { DARABONBA_PTR_SET_RVALUE(videoParams_, videoParams) };


    protected:
      // The audio parameters.
      shared_ptr<TemplateConfig::AudioParams> audioParams_ {};
      // The video parameters.
      shared_ptr<TemplateConfig::VideoParams> videoParams_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->templateConfig_ == nullptr && this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLiveTranscodeTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const UpdateLiveTranscodeTemplateRequest::TemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, UpdateLiveTranscodeTemplateRequest::TemplateConfig) };
    inline UpdateLiveTranscodeTemplateRequest::TemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, UpdateLiveTranscodeTemplateRequest::TemplateConfig) };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateConfig(const UpdateLiveTranscodeTemplateRequest::TemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateConfig(UpdateLiveTranscodeTemplateRequest::TemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateLiveTranscodeTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The template name.
    shared_ptr<string> name_ {};
    // The configuration of the template.
    shared_ptr<UpdateLiveTranscodeTemplateRequest::TemplateConfig> templateConfig_ {};
    // The template ID. To obtain the template ID, log on to the [Intelligent Media Services (IMS) console](https://ims.console.aliyun.com/summary), choose Real-time Media Processing > Template Management, and then click the Transcoding tab. Alternatively, find the ID from the response parameters of the [CreateLiveTranscodeTemplate](https://help.aliyun.com/document_detail/449217.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
