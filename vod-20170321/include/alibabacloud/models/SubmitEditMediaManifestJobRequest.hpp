// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEDITMEDIAMANIFESTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEDITMEDIAMANIFESTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitEditMediaManifestJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEditMediaManifestJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioTracks, audioTracks_);
      DARABONBA_PTR_TO_JSON(AutoStreamJobId, autoStreamJobId_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(RemoveTracks, removeTracks_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(VideoTracks, videoTracks_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEditMediaManifestJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioTracks, audioTracks_);
      DARABONBA_PTR_FROM_JSON(AutoStreamJobId, autoStreamJobId_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(RemoveTracks, removeTracks_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(VideoTracks, videoTracks_);
    };
    SubmitEditMediaManifestJobRequest() = default ;
    SubmitEditMediaManifestJobRequest(const SubmitEditMediaManifestJobRequest &) = default ;
    SubmitEditMediaManifestJobRequest(SubmitEditMediaManifestJobRequest &&) = default ;
    SubmitEditMediaManifestJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEditMediaManifestJobRequest() = default ;
    SubmitEditMediaManifestJobRequest& operator=(const SubmitEditMediaManifestJobRequest &) = default ;
    SubmitEditMediaManifestJobRequest& operator=(SubmitEditMediaManifestJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioTracks_ == nullptr
        && this->autoStreamJobId_ == nullptr && this->outputConfig_ == nullptr && this->removeTracks_ == nullptr && this->subtitles_ == nullptr && this->templateId_ == nullptr
        && this->userData_ == nullptr && this->videoId_ == nullptr && this->videoTracks_ == nullptr; };
    // audioTracks Field Functions 
    bool hasAudioTracks() const { return this->audioTracks_ != nullptr;};
    void deleteAudioTracks() { this->audioTracks_ = nullptr;};
    inline string getAudioTracks() const { DARABONBA_PTR_GET_DEFAULT(audioTracks_, "") };
    inline SubmitEditMediaManifestJobRequest& setAudioTracks(string audioTracks) { DARABONBA_PTR_SET_VALUE(audioTracks_, audioTracks) };


    // autoStreamJobId Field Functions 
    bool hasAutoStreamJobId() const { return this->autoStreamJobId_ != nullptr;};
    void deleteAutoStreamJobId() { this->autoStreamJobId_ = nullptr;};
    inline string getAutoStreamJobId() const { DARABONBA_PTR_GET_DEFAULT(autoStreamJobId_, "") };
    inline SubmitEditMediaManifestJobRequest& setAutoStreamJobId(string autoStreamJobId) { DARABONBA_PTR_SET_VALUE(autoStreamJobId_, autoStreamJobId) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitEditMediaManifestJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // removeTracks Field Functions 
    bool hasRemoveTracks() const { return this->removeTracks_ != nullptr;};
    void deleteRemoveTracks() { this->removeTracks_ = nullptr;};
    inline string getRemoveTracks() const { DARABONBA_PTR_GET_DEFAULT(removeTracks_, "") };
    inline SubmitEditMediaManifestJobRequest& setRemoveTracks(string removeTracks) { DARABONBA_PTR_SET_VALUE(removeTracks_, removeTracks) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline string getSubtitles() const { DARABONBA_PTR_GET_DEFAULT(subtitles_, "") };
    inline SubmitEditMediaManifestJobRequest& setSubtitles(string subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitEditMediaManifestJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitEditMediaManifestJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitEditMediaManifestJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // videoTracks Field Functions 
    bool hasVideoTracks() const { return this->videoTracks_ != nullptr;};
    void deleteVideoTracks() { this->videoTracks_ = nullptr;};
    inline string getVideoTracks() const { DARABONBA_PTR_GET_DEFAULT(videoTracks_, "") };
    inline SubmitEditMediaManifestJobRequest& setVideoTracks(string videoTracks) { DARABONBA_PTR_SET_VALUE(videoTracks_, videoTracks) };


  protected:
    // The list of audio tracks to be added. The value is a JSON string array. Each element contains the following fields:
    // - **Language**: the language identifier of the audio track.
    // - **Name**: the display name of the track. If this field is not specified, the default value is audio-{Language}.
    // - **AudioUrl**: the URL of the audio file, which is an OSS object URL.
    shared_ptr<string> audioTracks_ {};
    // The job ID of the target AUTO stream.
    // 
    // This parameter is required.
    shared_ptr<string> autoStreamJobId_ {};
    // The output configuration. The value is a JSON string. It contains the following fields:
    // - **OutputDir**: the output directory. By default, this field is set to the same directory as the source manifest.
    // - **ManifestName**: the file name of the output master playlist. Default value: master. The .m3u8 extension is not allowed.
    shared_ptr<string> outputConfig_ {};
    // The configuration of tracks to be removed. The value is a JSON string. It contains the following fields:
    // - **AudioLanguages**: the list of audio language identifiers for which the entire audio tracks are to be removed.
    // - **SubtitleLanguages**: the list of subtitle language identifiers for which the entire subtitle tracks are to be removed.
    shared_ptr<string> removeTracks_ {};
    // The list of subtitle tracks to be added. The value is a JSON string array. Each element contains the following fields:
    // - **Language**: the language identifier of the subtitle track. If this field is not specified, the subtitle track is ignored.
    // - **SubtitleUrl**: the URL of the subtitle file in WebVTT format, which is an OSS object URL.
    shared_ptr<string> subtitles_ {};
    // The manifest editing template ID, which is returned after the AddManifestEditTemplate operation is called. If this parameter is specified, the output tracks are orchestrated based on the fixed video, audio, and subtitle item configurations in the template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // The custom pass-through data.
    shared_ptr<string> userData_ {};
    // **The target video ID**, used for authentication isolation and consistency verification.
    // 
    // This parameter is required.
    shared_ptr<string> videoId_ {};
    // The list of video tracks to be added. The value is a JSON string array. Each element contains the following fields:
    // - **Name**: the display name of the track. If this field is not specified, the video track is ignored.
    // - **VideoUrl**: the URL of the video stream manifest file, which is an OSS object URL.
    shared_ptr<string> videoTracks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
