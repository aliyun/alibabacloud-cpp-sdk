// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
    };
    GetLiveTranscodeTemplateResponseBody() = default ;
    GetLiveTranscodeTemplateResponseBody(const GetLiveTranscodeTemplateResponseBody &) = default ;
    GetLiveTranscodeTemplateResponseBody(GetLiveTranscodeTemplateResponseBody &&) = default ;
    GetLiveTranscodeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBody() = default ;
    GetLiveTranscodeTemplateResponseBody& operator=(const GetLiveTranscodeTemplateResponseBody &) = default ;
    GetLiveTranscodeTemplateResponseBody& operator=(GetLiveTranscodeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateContent& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      TemplateContent() = default ;
      TemplateContent(const TemplateContent &) = default ;
      TemplateContent(TemplateContent &&) = default ;
      TemplateContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateContent() = default ;
      TemplateContent& operator=(const TemplateContent &) = default ;
      TemplateContent& operator=(TemplateContent &&) = default ;
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
          // The bitrate of the output video.
          shared_ptr<string> bitrate_ {};
          // The encoding type.
          shared_ptr<string> codec_ {};
          // The frame rate of the output video.
          shared_ptr<string> fps_ {};
          // The group of pictures (GOP) of the output video.
          shared_ptr<string> gop_ {};
          // The height of the output video.
          shared_ptr<string> height_ {};
          // The encoding profile.
          shared_ptr<string> profile_ {};
          // The width of the output video.
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
          // The bitrate of the output audio.
          shared_ptr<string> bitrate_ {};
          // The number of sound channels.
          shared_ptr<string> channels_ {};
          // The audio codec.
          shared_ptr<string> codec_ {};
          // The audio codec profile.
          shared_ptr<string> profile_ {};
          // The audio sampling rate.
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

      virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->name_ == nullptr && this->templateConfig_ == nullptr && this->templateId_ == nullptr && this->type_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline TemplateContent& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TemplateContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TemplateContent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline const TemplateContent::TemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, TemplateContent::TemplateConfig) };
      inline TemplateContent::TemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, TemplateContent::TemplateConfig) };
      inline TemplateContent& setTemplateConfig(const TemplateContent::TemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
      inline TemplateContent& setTemplateConfig(TemplateContent::TemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateContent& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TemplateContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The category of the template. Valid values:
      // 
      // *   system
      // *   customized
      shared_ptr<string> category_ {};
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The configuration of the template.
      shared_ptr<TemplateContent::TemplateConfig> templateConfig_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The type of the template.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateContent_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveTranscodeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline const GetLiveTranscodeTemplateResponseBody::TemplateContent & getTemplateContent() const { DARABONBA_PTR_GET_CONST(templateContent_, GetLiveTranscodeTemplateResponseBody::TemplateContent) };
    inline GetLiveTranscodeTemplateResponseBody::TemplateContent getTemplateContent() { DARABONBA_PTR_GET(templateContent_, GetLiveTranscodeTemplateResponseBody::TemplateContent) };
    inline GetLiveTranscodeTemplateResponseBody& setTemplateContent(const GetLiveTranscodeTemplateResponseBody::TemplateContent & templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };
    inline GetLiveTranscodeTemplateResponseBody& setTemplateContent(GetLiveTranscodeTemplateResponseBody::TemplateContent && templateContent) { DARABONBA_PTR_SET_RVALUE(templateContent_, templateContent) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The content of the template.
    shared_ptr<GetLiveTranscodeTemplateResponseBody::TemplateContent> templateContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
