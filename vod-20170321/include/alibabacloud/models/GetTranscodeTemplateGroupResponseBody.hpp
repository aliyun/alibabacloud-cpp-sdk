// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTranscodeTemplateGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroup, transcodeTemplateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTemplateGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroup, transcodeTemplateGroup_);
    };
    GetTranscodeTemplateGroupResponseBody() = default ;
    GetTranscodeTemplateGroupResponseBody(const GetTranscodeTemplateGroupResponseBody &) = default ;
    GetTranscodeTemplateGroupResponseBody(GetTranscodeTemplateGroupResponseBody &&) = default ;
    GetTranscodeTemplateGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTemplateGroupResponseBody() = default ;
    GetTranscodeTemplateGroupResponseBody& operator=(const GetTranscodeTemplateGroupResponseBody &) = default ;
    GetTranscodeTemplateGroupResponseBody& operator=(GetTranscodeTemplateGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeTemplateGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeTemplateGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Locked, locked_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_TO_JSON(TranscodeTemplateList, transcodeTemplateList_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeTemplateGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Locked, locked_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
        DARABONBA_PTR_FROM_JSON(TranscodeTemplateList, transcodeTemplateList_);
      };
      TranscodeTemplateGroup() = default ;
      TranscodeTemplateGroup(const TranscodeTemplateGroup &) = default ;
      TranscodeTemplateGroup(TranscodeTemplateGroup &&) = default ;
      TranscodeTemplateGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeTemplateGroup() = default ;
      TranscodeTemplateGroup& operator=(const TranscodeTemplateGroup &) = default ;
      TranscodeTemplateGroup& operator=(TranscodeTemplateGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeTemplateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeTemplateList& obj) { 
          DARABONBA_PTR_TO_JSON(Audio, audio_);
          DARABONBA_PTR_TO_JSON(Clip, clip_);
          DARABONBA_PTR_TO_JSON(Container, container_);
          DARABONBA_PTR_TO_JSON(CopyrightMark, copyrightMark_);
          DARABONBA_PTR_TO_JSON(Definition, definition_);
          DARABONBA_PTR_TO_JSON(EncryptSetting, encryptSetting_);
          DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
          DARABONBA_PTR_TO_JSON(PackageSetting, packageSetting_);
          DARABONBA_PTR_TO_JSON(Rotate, rotate_);
          DARABONBA_PTR_TO_JSON(SubtitleList, subtitleList_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
          DARABONBA_PTR_TO_JSON(TraceMark, traceMark_);
          DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
          DARABONBA_PTR_TO_JSON(TranscodeFileRegular, transcodeFileRegular_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplateId, transcodeTemplateId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Video, video_);
          DARABONBA_PTR_TO_JSON(WatermarkIds, watermarkIds_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeTemplateList& obj) { 
          DARABONBA_PTR_FROM_JSON(Audio, audio_);
          DARABONBA_PTR_FROM_JSON(Clip, clip_);
          DARABONBA_PTR_FROM_JSON(Container, container_);
          DARABONBA_PTR_FROM_JSON(CopyrightMark, copyrightMark_);
          DARABONBA_PTR_FROM_JSON(Definition, definition_);
          DARABONBA_PTR_FROM_JSON(EncryptSetting, encryptSetting_);
          DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
          DARABONBA_PTR_FROM_JSON(PackageSetting, packageSetting_);
          DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
          DARABONBA_PTR_FROM_JSON(SubtitleList, subtitleList_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
          DARABONBA_PTR_FROM_JSON(TraceMark, traceMark_);
          DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
          DARABONBA_PTR_FROM_JSON(TranscodeFileRegular, transcodeFileRegular_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplateId, transcodeTemplateId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Video, video_);
          DARABONBA_PTR_FROM_JSON(WatermarkIds, watermarkIds_);
        };
        TranscodeTemplateList() = default ;
        TranscodeTemplateList(const TranscodeTemplateList &) = default ;
        TranscodeTemplateList(TranscodeTemplateList &&) = default ;
        TranscodeTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeTemplateList() = default ;
        TranscodeTemplateList& operator=(const TranscodeTemplateList &) = default ;
        TranscodeTemplateList& operator=(TranscodeTemplateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audio_ == nullptr
        && this->clip_ == nullptr && this->container_ == nullptr && this->copyrightMark_ == nullptr && this->definition_ == nullptr && this->encryptSetting_ == nullptr
        && this->muxConfig_ == nullptr && this->packageSetting_ == nullptr && this->rotate_ == nullptr && this->subtitleList_ == nullptr && this->templateName_ == nullptr
        && this->traceMark_ == nullptr && this->transConfig_ == nullptr && this->transcodeFileRegular_ == nullptr && this->transcodeTemplateId_ == nullptr && this->type_ == nullptr
        && this->video_ == nullptr && this->watermarkIds_ == nullptr; };
        // audio Field Functions 
        bool hasAudio() const { return this->audio_ != nullptr;};
        void deleteAudio() { this->audio_ = nullptr;};
        inline string getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
        inline TranscodeTemplateList& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


        // clip Field Functions 
        bool hasClip() const { return this->clip_ != nullptr;};
        void deleteClip() { this->clip_ = nullptr;};
        inline string getClip() const { DARABONBA_PTR_GET_DEFAULT(clip_, "") };
        inline TranscodeTemplateList& setClip(string clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };


        // container Field Functions 
        bool hasContainer() const { return this->container_ != nullptr;};
        void deleteContainer() { this->container_ = nullptr;};
        inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
        inline TranscodeTemplateList& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


        // copyrightMark Field Functions 
        bool hasCopyrightMark() const { return this->copyrightMark_ != nullptr;};
        void deleteCopyrightMark() { this->copyrightMark_ = nullptr;};
        inline string getCopyrightMark() const { DARABONBA_PTR_GET_DEFAULT(copyrightMark_, "") };
        inline TranscodeTemplateList& setCopyrightMark(string copyrightMark) { DARABONBA_PTR_SET_VALUE(copyrightMark_, copyrightMark) };


        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
        inline TranscodeTemplateList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


        // encryptSetting Field Functions 
        bool hasEncryptSetting() const { return this->encryptSetting_ != nullptr;};
        void deleteEncryptSetting() { this->encryptSetting_ = nullptr;};
        inline string getEncryptSetting() const { DARABONBA_PTR_GET_DEFAULT(encryptSetting_, "") };
        inline TranscodeTemplateList& setEncryptSetting(string encryptSetting) { DARABONBA_PTR_SET_VALUE(encryptSetting_, encryptSetting) };


        // muxConfig Field Functions 
        bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
        void deleteMuxConfig() { this->muxConfig_ = nullptr;};
        inline string getMuxConfig() const { DARABONBA_PTR_GET_DEFAULT(muxConfig_, "") };
        inline TranscodeTemplateList& setMuxConfig(string muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };


        // packageSetting Field Functions 
        bool hasPackageSetting() const { return this->packageSetting_ != nullptr;};
        void deletePackageSetting() { this->packageSetting_ = nullptr;};
        inline string getPackageSetting() const { DARABONBA_PTR_GET_DEFAULT(packageSetting_, "") };
        inline TranscodeTemplateList& setPackageSetting(string packageSetting) { DARABONBA_PTR_SET_VALUE(packageSetting_, packageSetting) };


        // rotate Field Functions 
        bool hasRotate() const { return this->rotate_ != nullptr;};
        void deleteRotate() { this->rotate_ = nullptr;};
        inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
        inline TranscodeTemplateList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


        // subtitleList Field Functions 
        bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
        void deleteSubtitleList() { this->subtitleList_ = nullptr;};
        inline string getSubtitleList() const { DARABONBA_PTR_GET_DEFAULT(subtitleList_, "") };
        inline TranscodeTemplateList& setSubtitleList(string subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline TranscodeTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


        // traceMark Field Functions 
        bool hasTraceMark() const { return this->traceMark_ != nullptr;};
        void deleteTraceMark() { this->traceMark_ = nullptr;};
        inline string getTraceMark() const { DARABONBA_PTR_GET_DEFAULT(traceMark_, "") };
        inline TranscodeTemplateList& setTraceMark(string traceMark) { DARABONBA_PTR_SET_VALUE(traceMark_, traceMark) };


        // transConfig Field Functions 
        bool hasTransConfig() const { return this->transConfig_ != nullptr;};
        void deleteTransConfig() { this->transConfig_ = nullptr;};
        inline string getTransConfig() const { DARABONBA_PTR_GET_DEFAULT(transConfig_, "") };
        inline TranscodeTemplateList& setTransConfig(string transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };


        // transcodeFileRegular Field Functions 
        bool hasTranscodeFileRegular() const { return this->transcodeFileRegular_ != nullptr;};
        void deleteTranscodeFileRegular() { this->transcodeFileRegular_ = nullptr;};
        inline string getTranscodeFileRegular() const { DARABONBA_PTR_GET_DEFAULT(transcodeFileRegular_, "") };
        inline TranscodeTemplateList& setTranscodeFileRegular(string transcodeFileRegular) { DARABONBA_PTR_SET_VALUE(transcodeFileRegular_, transcodeFileRegular) };


        // transcodeTemplateId Field Functions 
        bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
        void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
        inline string getTranscodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
        inline TranscodeTemplateList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TranscodeTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline string getVideo() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
        inline TranscodeTemplateList& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


        // watermarkIds Field Functions 
        bool hasWatermarkIds() const { return this->watermarkIds_ != nullptr;};
        void deleteWatermarkIds() { this->watermarkIds_ = nullptr;};
        inline const vector<string> & getWatermarkIds() const { DARABONBA_PTR_GET_CONST(watermarkIds_, vector<string>) };
        inline vector<string> getWatermarkIds() { DARABONBA_PTR_GET(watermarkIds_, vector<string>) };
        inline TranscodeTemplateList& setWatermarkIds(const vector<string> & watermarkIds) { DARABONBA_PTR_SET_VALUE(watermarkIds_, watermarkIds) };
        inline TranscodeTemplateList& setWatermarkIds(vector<string> && watermarkIds) { DARABONBA_PTR_SET_RVALUE(watermarkIds_, watermarkIds) };


      protected:
        // The audio stream transcoding configuration parameters (JSON string).
        shared_ptr<string> audio_ {};
        // The video clipping configuration (JSON string). For example, set this parameter if you want to extract 5 seconds of content from a video to generate a new video.
        shared_ptr<string> clip_ {};
        // The container format for encapsulating audio and video streams (JSON string).
        shared_ptr<string> container_ {};
        // The copyright watermark information.
        shared_ptr<string> copyrightMark_ {};
        // The definition mark for normal transcoding templates:
        // 
        // - **LD** (low definition)
        // - **SD** (standard definition)
        // - **HD** (high definition)
        // - **FHD** (full high definition)
        // - **OD** (original definition, container format conversion)
        // - **2K**
        // - **4K**
        // - **SQ** (standard audio quality)
        // - **HQ** (high audio quality)
        // 
        // The definition mark for Narrowband HD 1.0 built-in transcoding templates:
        // 
        // - **LD-NBV1** (low definition)
        // - **SD-NBV1** (standard definition)
        // - **HD-NBV1** (high definition)
        // - **FHD-NBV1** (full high definition)
        // - **2K-NBV1**
        // - **4K-NBV1**
        // 
        // > - The definition mark of transcoding templates cannot be modified.
        // > - The audio and video resolution, bitrate, and other parameters of Narrowband HD 1.0 transcoding templates are built into the system and cannot be modified.
        // > - Narrowband HD 1.0 transcoding templates can only be created in FLV, M3U8 (HLS), or MP4 format.
        shared_ptr<string> definition_ {};
        // The transcoding encryption configuration.
        shared_ptr<string> encryptSetting_ {};
        // The segment setting parameters for transcoding. Required for HLS (JSON string).
        shared_ptr<string> muxConfig_ {};
        // The packaging configuration. Only HLS adaptive bitrate streaming packaging and DASH packaging are supported (JSON string).
        shared_ptr<string> packageSetting_ {};
        // The video rotation parameter. Controls the rotation angle of the video. For example, if set to 180, the video is flipped upside down. Value range: `[0,360]`.
        shared_ptr<string> rotate_ {};
        // The subtitle configuration (JSON string).
        shared_ptr<string> subtitleList_ {};
        // The transcoding template name.
        shared_ptr<string> templateName_ {};
        // The tracing watermark information.
        shared_ptr<string> traceMark_ {};
        // The conditional transcoding parameters. Set this parameter if you want to perform basic logic checks based on the bitrate or resolution of the source file before outputting the transcoded video (JSON string).
        shared_ptr<string> transConfig_ {};
        // The custom transcoding output path.
        shared_ptr<string> transcodeFileRegular_ {};
        // The transcoding template ID.
        shared_ptr<string> transcodeTemplateId_ {};
        // The templatetype. Valid values:
        // 
        // - **Normal** (default): a normal transcoding template. The PackageSetting parameter cannot be configured in Settings for this type of template.
        // - **VideoPackage**: a video stream packaging template. This type of template first transcodes and then builds adaptive bitrate streaming. The PackageSetting parameter must be configured in Settings for this type of template.
        // - **SubtitlePackage**: a subtitle packaging template. This type of template does not transcode but only builds the corresponding subtitle information into the adaptive bitrate streaming output file. The PackageSetting parameter must be configured in Settings for this type of template. This type of template cannot exist alone in a template group and must be configured together with a VideoPackage type template. Only one SubtitlePackage template can be configured in a template group.
        shared_ptr<string> type_ {};
        // The video stream transcoding configuration parameters (JSON string).
        shared_ptr<string> video_ {};
        // The IDs of associated image and text watermark templates.
        shared_ptr<vector<string>> watermarkIds_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->isDefault_ == nullptr && this->locked_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->transcodeTemplateGroupId_ == nullptr && this->transcodeTemplateList_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline TranscodeTemplateGroup& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TranscodeTemplateGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline TranscodeTemplateGroup& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // locked Field Functions 
      bool hasLocked() const { return this->locked_ != nullptr;};
      void deleteLocked() { this->locked_ = nullptr;};
      inline string getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, "") };
      inline TranscodeTemplateGroup& setLocked(string locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline TranscodeTemplateGroup& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TranscodeTemplateGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // transcodeTemplateGroupId Field Functions 
      bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
      void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
      inline string getTranscodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
      inline TranscodeTemplateGroup& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


      // transcodeTemplateList Field Functions 
      bool hasTranscodeTemplateList() const { return this->transcodeTemplateList_ != nullptr;};
      void deleteTranscodeTemplateList() { this->transcodeTemplateList_ = nullptr;};
      inline const vector<TranscodeTemplateGroup::TranscodeTemplateList> & getTranscodeTemplateList() const { DARABONBA_PTR_GET_CONST(transcodeTemplateList_, vector<TranscodeTemplateGroup::TranscodeTemplateList>) };
      inline vector<TranscodeTemplateGroup::TranscodeTemplateList> getTranscodeTemplateList() { DARABONBA_PTR_GET(transcodeTemplateList_, vector<TranscodeTemplateGroup::TranscodeTemplateList>) };
      inline TranscodeTemplateGroup& setTranscodeTemplateList(const vector<TranscodeTemplateGroup::TranscodeTemplateList> & transcodeTemplateList) { DARABONBA_PTR_SET_VALUE(transcodeTemplateList_, transcodeTemplateList) };
      inline TranscodeTemplateGroup& setTranscodeTemplateList(vector<TranscodeTemplateGroup::TranscodeTemplateList> && transcodeTemplateList) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateList_, transcodeTemplateList) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The time when the template group was created. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> creationTime_ {};
      // Indicates whether the template group is the default one. Valid values:
      // 
      // - **Default**: The template group is the default one.
      // - **NotDefault**: The template group is not the default one.
      shared_ptr<string> isDefault_ {};
      // Indicates whether the template group is locked. Valid values:
      // - **Disabled**: Not locked.
      // - **Enabled**: Locked.
      shared_ptr<string> locked_ {};
      // The time when the template group was last modified. The time is in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
      shared_ptr<string> modifyTime_ {};
      // The name of the template group.
      shared_ptr<string> name_ {};
      // The transcoding template group ID.
      shared_ptr<string> transcodeTemplateGroupId_ {};
      // The list of transcoding template configurations.
      shared_ptr<vector<TranscodeTemplateGroup::TranscodeTemplateList>> transcodeTemplateList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeTemplateGroup_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranscodeTemplateGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeTemplateGroup Field Functions 
    bool hasTranscodeTemplateGroup() const { return this->transcodeTemplateGroup_ != nullptr;};
    void deleteTranscodeTemplateGroup() { this->transcodeTemplateGroup_ = nullptr;};
    inline const GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup & getTranscodeTemplateGroup() const { DARABONBA_PTR_GET_CONST(transcodeTemplateGroup_, GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup getTranscodeTemplateGroup() { DARABONBA_PTR_GET(transcodeTemplateGroup_, GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroup(const GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup & transcodeTemplateGroup) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroup_, transcodeTemplateGroup) };
    inline GetTranscodeTemplateGroupResponseBody& setTranscodeTemplateGroup(GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup && transcodeTemplateGroup) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateGroup_, transcodeTemplateGroup) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The transcoding template group data.
    shared_ptr<GetTranscodeTemplateGroupResponseBody::TranscodeTemplateGroup> transcodeTemplateGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
