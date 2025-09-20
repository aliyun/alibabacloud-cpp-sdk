// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
#include <alibabacloud/models/GenerateVideoPlaylistRequestSourceSubtitles.hpp>
#include <map>
#include <alibabacloud/models/GenerateVideoPlaylistRequestTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_TO_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_TO_JSON(SourceSubtitles, sourceSubtitles_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_FROM_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_FROM_JSON(SourceSubtitles, sourceSubtitles_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GenerateVideoPlaylistRequest() = default ;
    GenerateVideoPlaylistRequest(const GenerateVideoPlaylistRequest &) = default ;
    GenerateVideoPlaylistRequest(GenerateVideoPlaylistRequest &&) = default ;
    GenerateVideoPlaylistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistRequest() = default ;
    GenerateVideoPlaylistRequest& operator=(const GenerateVideoPlaylistRequest &) = default ;
    GenerateVideoPlaylistRequest& operator=(GenerateVideoPlaylistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credentialConfig_ != nullptr
        && this->masterURI_ != nullptr && this->notification_ != nullptr && this->overwritePolicy_ != nullptr && this->projectName_ != nullptr && this->sourceDuration_ != nullptr
        && this->sourceStartTime_ != nullptr && this->sourceSubtitles_ != nullptr && this->sourceURI_ != nullptr && this->tags_ != nullptr && this->targets_ != nullptr
        && this->userData_ != nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GenerateVideoPlaylistRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GenerateVideoPlaylistRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string masterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistRequest& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline GenerateVideoPlaylistRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GenerateVideoPlaylistRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // overwritePolicy Field Functions 
    bool hasOverwritePolicy() const { return this->overwritePolicy_ != nullptr;};
    void deleteOverwritePolicy() { this->overwritePolicy_ = nullptr;};
    inline string overwritePolicy() const { DARABONBA_PTR_GET_DEFAULT(overwritePolicy_, "") };
    inline GenerateVideoPlaylistRequest& setOverwritePolicy(string overwritePolicy) { DARABONBA_PTR_SET_VALUE(overwritePolicy_, overwritePolicy) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateVideoPlaylistRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceDuration Field Functions 
    bool hasSourceDuration() const { return this->sourceDuration_ != nullptr;};
    void deleteSourceDuration() { this->sourceDuration_ = nullptr;};
    inline float sourceDuration() const { DARABONBA_PTR_GET_DEFAULT(sourceDuration_, 0.0) };
    inline GenerateVideoPlaylistRequest& setSourceDuration(float sourceDuration) { DARABONBA_PTR_SET_VALUE(sourceDuration_, sourceDuration) };


    // sourceStartTime Field Functions 
    bool hasSourceStartTime() const { return this->sourceStartTime_ != nullptr;};
    void deleteSourceStartTime() { this->sourceStartTime_ = nullptr;};
    inline float sourceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sourceStartTime_, 0.0) };
    inline GenerateVideoPlaylistRequest& setSourceStartTime(float sourceStartTime) { DARABONBA_PTR_SET_VALUE(sourceStartTime_, sourceStartTime) };


    // sourceSubtitles Field Functions 
    bool hasSourceSubtitles() const { return this->sourceSubtitles_ != nullptr;};
    void deleteSourceSubtitles() { this->sourceSubtitles_ = nullptr;};
    inline const vector<GenerateVideoPlaylistRequestSourceSubtitles> & sourceSubtitles() const { DARABONBA_PTR_GET_CONST(sourceSubtitles_, vector<GenerateVideoPlaylistRequestSourceSubtitles>) };
    inline vector<GenerateVideoPlaylistRequestSourceSubtitles> sourceSubtitles() { DARABONBA_PTR_GET(sourceSubtitles_, vector<GenerateVideoPlaylistRequestSourceSubtitles>) };
    inline GenerateVideoPlaylistRequest& setSourceSubtitles(const vector<GenerateVideoPlaylistRequestSourceSubtitles> & sourceSubtitles) { DARABONBA_PTR_SET_VALUE(sourceSubtitles_, sourceSubtitles) };
    inline GenerateVideoPlaylistRequest& setSourceSubtitles(vector<GenerateVideoPlaylistRequestSourceSubtitles> && sourceSubtitles) { DARABONBA_PTR_SET_RVALUE(sourceSubtitles_, sourceSubtitles) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateVideoPlaylistRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline GenerateVideoPlaylistRequest& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GenerateVideoPlaylistRequest& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<GenerateVideoPlaylistRequestTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<GenerateVideoPlaylistRequestTargets>) };
    inline vector<GenerateVideoPlaylistRequestTargets> targets() { DARABONBA_PTR_GET(targets_, vector<GenerateVideoPlaylistRequestTargets>) };
    inline GenerateVideoPlaylistRequest& setTargets(const vector<GenerateVideoPlaylistRequestTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline GenerateVideoPlaylistRequest& setTargets(vector<GenerateVideoPlaylistRequestTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateVideoPlaylistRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The OSS path of the master playlist.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that is suffixed with .m3u8.
    // 
    // >  If a playlist contains subtitles or multiple outputs, the MasterURI parameter is required and the URI of subtitle files or outputs must be in the directory specified by the MasterURI parameter or its subdirectory.
    std::shared_ptr<string> masterURI_ = nullptr;
    // The notification settings. To view details, click Notification. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<Notification> notification_ = nullptr;
    // The overwrite policy when the media playlist exists. Valid values:
    // 
    // *   overwrite (default): overwrites an existing media playlist.
    // *   skip-existing: skips generation and retains the existing media playlist.
    std::shared_ptr<string> overwritePolicy_ = nullptr;
    // The project name.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The period of time during which the playlist is generated. Unit: seconds.
    // 
    // *   If you set this parameter to 0 (default) or leave this parameter empty, a playlist is generated until the end time of the source video.
    // *   If you set this parameter to a value greater than 0, a playlist is generated for the specified period of time from the start time that you specify.
    // 
    // >  If you set this parameter to a value that exceeds the end time of a source video, use the default value.
    std::shared_ptr<float> sourceDuration_ = nullptr;
    // The time when the playlist starts to generate. Unit: seconds.
    // 
    // *   If you set this parameter to 0 (default) or leave this parameter empty, the start time of the source video is used as the time when a playlist starts to generate.
    // *   If you set this parameter to a value greater than 0, the time when a playlist starts to generate is the specified point in time.
    // 
    // >  If you use this parameter together with the **SourceDuration** parameter, a playlist can be generated based on the partial content of a source video.
    std::shared_ptr<float> sourceStartTime_ = nullptr;
    // The subtitle files. By default, this parameter is left empty. Up to two subtitle files are supported.
    std::shared_ptr<vector<GenerateVideoPlaylistRequestSourceSubtitles>> sourceSubtitles_ = nullptr;
    // The OSS path of the video file.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that contains the file name extension.
    // 
    // >  Only OSS buckets of the Standard storage class are supported. OSS buckets for which hotlink protection whitelists are configured are not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The [tags](https://help.aliyun.com/document_detail/106678.html) that you want to add to a TS file in OSS. You can use tags to manage the lifecycles of TS files in OSS.
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The live transcoding playlists. Up to 6 playlists are supported. Each output corresponds to at most one video media playlist and one or more subtitle media playlists.
    // 
    // >  If more than one output is configured, the **MasterURI** parameter is required.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GenerateVideoPlaylistRequestTargets>> targets_ = nullptr;
    // The custom user information, which is returned in asynchronous notifications to help you handle the notifications in the system. The maximum length of a notification is 2048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
