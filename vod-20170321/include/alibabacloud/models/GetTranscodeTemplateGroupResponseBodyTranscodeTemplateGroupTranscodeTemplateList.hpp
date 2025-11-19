// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODYTRANSCODETEMPLATEGROUPTRANSCODETEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETEMPLATEGROUPRESPONSEBODYTRANSCODETEMPLATEGROUPTRANSCODETEMPLATELIST_HPP_
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
  class GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& obj) { 
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
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList() = default ;
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList(const GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList &) = default ;
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList(GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList &&) = default ;
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList() = default ;
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& operator=(const GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList &) = default ;
    GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& operator=(GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->clip_ == nullptr && return this->container_ == nullptr && return this->copyrightMark_ == nullptr && return this->definition_ == nullptr && return this->encryptSetting_ == nullptr
        && return this->muxConfig_ == nullptr && return this->packageSetting_ == nullptr && return this->rotate_ == nullptr && return this->subtitleList_ == nullptr && return this->templateName_ == nullptr
        && return this->traceMark_ == nullptr && return this->transConfig_ == nullptr && return this->transcodeFileRegular_ == nullptr && return this->transcodeTemplateId_ == nullptr && return this->type_ == nullptr
        && return this->video_ == nullptr && return this->watermarkIds_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string audio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline string clip() const { DARABONBA_PTR_GET_DEFAULT(clip_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setClip(string clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string container() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


    // copyrightMark Field Functions 
    bool hasCopyrightMark() const { return this->copyrightMark_ != nullptr;};
    void deleteCopyrightMark() { this->copyrightMark_ = nullptr;};
    inline string copyrightMark() const { DARABONBA_PTR_GET_DEFAULT(copyrightMark_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setCopyrightMark(string copyrightMark) { DARABONBA_PTR_SET_VALUE(copyrightMark_, copyrightMark) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // encryptSetting Field Functions 
    bool hasEncryptSetting() const { return this->encryptSetting_ != nullptr;};
    void deleteEncryptSetting() { this->encryptSetting_ = nullptr;};
    inline string encryptSetting() const { DARABONBA_PTR_GET_DEFAULT(encryptSetting_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setEncryptSetting(string encryptSetting) { DARABONBA_PTR_SET_VALUE(encryptSetting_, encryptSetting) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline string muxConfig() const { DARABONBA_PTR_GET_DEFAULT(muxConfig_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setMuxConfig(string muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };


    // packageSetting Field Functions 
    bool hasPackageSetting() const { return this->packageSetting_ != nullptr;};
    void deletePackageSetting() { this->packageSetting_ = nullptr;};
    inline string packageSetting() const { DARABONBA_PTR_GET_DEFAULT(packageSetting_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setPackageSetting(string packageSetting) { DARABONBA_PTR_SET_VALUE(packageSetting_, packageSetting) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // subtitleList Field Functions 
    bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
    void deleteSubtitleList() { this->subtitleList_ = nullptr;};
    inline string subtitleList() const { DARABONBA_PTR_GET_DEFAULT(subtitleList_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setSubtitleList(string subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // traceMark Field Functions 
    bool hasTraceMark() const { return this->traceMark_ != nullptr;};
    void deleteTraceMark() { this->traceMark_ = nullptr;};
    inline string traceMark() const { DARABONBA_PTR_GET_DEFAULT(traceMark_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setTraceMark(string traceMark) { DARABONBA_PTR_SET_VALUE(traceMark_, traceMark) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline string transConfig() const { DARABONBA_PTR_GET_DEFAULT(transConfig_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setTransConfig(string transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };


    // transcodeFileRegular Field Functions 
    bool hasTranscodeFileRegular() const { return this->transcodeFileRegular_ != nullptr;};
    void deleteTranscodeFileRegular() { this->transcodeFileRegular_ = nullptr;};
    inline string transcodeFileRegular() const { DARABONBA_PTR_GET_DEFAULT(transcodeFileRegular_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setTranscodeFileRegular(string transcodeFileRegular) { DARABONBA_PTR_SET_VALUE(transcodeFileRegular_, transcodeFileRegular) };


    // transcodeTemplateId Field Functions 
    bool hasTranscodeTemplateId() const { return this->transcodeTemplateId_ != nullptr;};
    void deleteTranscodeTemplateId() { this->transcodeTemplateId_ = nullptr;};
    inline string transcodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateId_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setTranscodeTemplateId(string transcodeTemplateId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateId_, transcodeTemplateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string video() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


    // watermarkIds Field Functions 
    bool hasWatermarkIds() const { return this->watermarkIds_ != nullptr;};
    void deleteWatermarkIds() { this->watermarkIds_ = nullptr;};
    inline const vector<string> & watermarkIds() const { DARABONBA_PTR_GET_CONST(watermarkIds_, vector<string>) };
    inline vector<string> watermarkIds() { DARABONBA_PTR_GET(watermarkIds_, vector<string>) };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setWatermarkIds(const vector<string> & watermarkIds) { DARABONBA_PTR_SET_VALUE(watermarkIds_, watermarkIds) };
    inline GetTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupTranscodeTemplateList& setWatermarkIds(vector<string> && watermarkIds) { DARABONBA_PTR_SET_RVALUE(watermarkIds_, watermarkIds) };


  protected:
    // The transcoding configurations of the audio stream. The value is a JSON string.
    std::shared_ptr<string> audio_ = nullptr;
    // The clipping configurations of the video. The value is a JSON string. For example, this parameter is returned if you extract 5 seconds of content from a video to generate a new video.
    std::shared_ptr<string> clip_ = nullptr;
    // The format of the container used to encapsulate audio and video streams. The value is a JSON string.
    std::shared_ptr<string> container_ = nullptr;
    // The content of the copyright watermark.
    std::shared_ptr<string> copyrightMark_ = nullptr;
    // Valid values for the definition of a common transcoding template:
    // 
    // *   **LD**: low definition.
    // *   **SD**: standard definition.
    // *   **HD**: high definition.
    // *   **FHD**: ultra high definition.
    // *   **OD**: original quality.
    // *   **2K**
    // *   **4K**
    // *   **SQ**: standard sound quality.
    // *   **HQ**: high sound quality.
    // 
    // Valid values for the definition of a Narrowband HD™ 1.0 transcoding template:
    // 
    // *   **LD-NBV1**: low definition.
    // *   **SD-NBV1**: standard definition.
    // *   **HD-NBV1**: high definition.
    // *   **FHD-NBV1**: ultra high definition.
    // *   **2K-NBV1**
    // *   **4K-NBV1**
    // 
    // > *   You cannot change the definition of a transcoding template.
    // >*   You cannot modify the system parameters, such as the video resolution, audio resolution, and bitrate, of Narrowband HD™ 1.0 transcoding templates.
    // >*   You can create only Narrowband HD™ 1.0 transcoding templates that support the FLV, M3U8 (HLS), and MP4 output formats.
    std::shared_ptr<string> definition_ = nullptr;
    // The encryption configuration for transcoding.
    std::shared_ptr<string> encryptSetting_ = nullptr;
    // The transcoding segment configurations. This parameter must be returned if HTTP-Live-Streaming (HLS) encryption is used. The value is a JSON string.
    std::shared_ptr<string> muxConfig_ = nullptr;
    // The packaging configuration. Only HLS packaging and DASH packaging are supported. The value is a JSON string.
    std::shared_ptr<string> packageSetting_ = nullptr;
    // The video rotation identifier. It is used to control the image rotation angle. For example, if you set this parameter to 180, the video image is turned upside down. Valid values: `[0,360]`.
    std::shared_ptr<string> rotate_ = nullptr;
    // The subtitle configurations. The value is a JSON string.
    std::shared_ptr<string> subtitleList_ = nullptr;
    // The name of the transcoding template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The content of the tracing watermark.
    std::shared_ptr<string> traceMark_ = nullptr;
    // The conditional transcoding configurations. This parameter can be used if you want to determine the basic logic based on the bitrate and resolution of the source file before the video is transcoded. The value is a JSON-formatted string.
    std::shared_ptr<string> transConfig_ = nullptr;
    // The custom path used to store the output files.
    std::shared_ptr<string> transcodeFileRegular_ = nullptr;
    // The transcoding template ID.
    std::shared_ptr<string> transcodeTemplateId_ = nullptr;
    // The type of the transcoding template. Valid values:
    // 
    // *   **Normal** (default): a common transcoding template. The PackageSetting parameter cannot be set for this type of template.
    // *   **VideoPackage**: a video stream package template. If this type of template is used, ApsaraVideo VOD transcodes a video into video streams in different bitrates and packages these video streams with a file. The PackageSetting parameter must be set for this type of template.
    // *   **SubtitlePackage**: a subtitle package template. If this type of template is used, ApsaraVideo VOD adds the subtitle information to the output file generated by packaging the multi-bitrate video streams of the corresponding video without transcoding. You must set the PackageSetting parameter for a subtitle package template and associate the subtitle package template with a video stream package template. A template group can contain only one subtitle package template.
    std::shared_ptr<string> type_ = nullptr;
    // The transcoding configurations of the video stream. The value is a JSON string.
    std::shared_ptr<string> video_ = nullptr;
    // The IDs of the associated watermarks.
    std::shared_ptr<vector<string>> watermarkIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
