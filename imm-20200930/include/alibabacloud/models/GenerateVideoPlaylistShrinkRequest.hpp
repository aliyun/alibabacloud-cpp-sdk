// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOPLAYLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateVideoPlaylistShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoPlaylistShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_TO_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_TO_JSON(SourceSubtitles, sourceSubtitlesShrink_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Targets, targetsShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoPlaylistShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(MasterURI, masterURI_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(OverwritePolicy, overwritePolicy_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceDuration, sourceDuration_);
      DARABONBA_PTR_FROM_JSON(SourceStartTime, sourceStartTime_);
      DARABONBA_PTR_FROM_JSON(SourceSubtitles, sourceSubtitlesShrink_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Targets, targetsShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    GenerateVideoPlaylistShrinkRequest() = default ;
    GenerateVideoPlaylistShrinkRequest(const GenerateVideoPlaylistShrinkRequest &) = default ;
    GenerateVideoPlaylistShrinkRequest(GenerateVideoPlaylistShrinkRequest &&) = default ;
    GenerateVideoPlaylistShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoPlaylistShrinkRequest() = default ;
    GenerateVideoPlaylistShrinkRequest& operator=(const GenerateVideoPlaylistShrinkRequest &) = default ;
    GenerateVideoPlaylistShrinkRequest& operator=(GenerateVideoPlaylistShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && this->masterURI_ == nullptr && this->notificationShrink_ == nullptr && this->overwritePolicy_ == nullptr && this->projectName_ == nullptr && this->sourceDuration_ == nullptr
        && this->sourceStartTime_ == nullptr && this->sourceSubtitlesShrink_ == nullptr && this->sourceURI_ == nullptr && this->tagsShrink_ == nullptr && this->targetsShrink_ == nullptr
        && this->userData_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string getMasterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // overwritePolicy Field Functions 
    bool hasOverwritePolicy() const { return this->overwritePolicy_ != nullptr;};
    void deleteOverwritePolicy() { this->overwritePolicy_ = nullptr;};
    inline string getOverwritePolicy() const { DARABONBA_PTR_GET_DEFAULT(overwritePolicy_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setOverwritePolicy(string overwritePolicy) { DARABONBA_PTR_SET_VALUE(overwritePolicy_, overwritePolicy) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceDuration Field Functions 
    bool hasSourceDuration() const { return this->sourceDuration_ != nullptr;};
    void deleteSourceDuration() { this->sourceDuration_ = nullptr;};
    inline float getSourceDuration() const { DARABONBA_PTR_GET_DEFAULT(sourceDuration_, 0.0) };
    inline GenerateVideoPlaylistShrinkRequest& setSourceDuration(float sourceDuration) { DARABONBA_PTR_SET_VALUE(sourceDuration_, sourceDuration) };


    // sourceStartTime Field Functions 
    bool hasSourceStartTime() const { return this->sourceStartTime_ != nullptr;};
    void deleteSourceStartTime() { this->sourceStartTime_ = nullptr;};
    inline float getSourceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sourceStartTime_, 0.0) };
    inline GenerateVideoPlaylistShrinkRequest& setSourceStartTime(float sourceStartTime) { DARABONBA_PTR_SET_VALUE(sourceStartTime_, sourceStartTime) };


    // sourceSubtitlesShrink Field Functions 
    bool hasSourceSubtitlesShrink() const { return this->sourceSubtitlesShrink_ != nullptr;};
    void deleteSourceSubtitlesShrink() { this->sourceSubtitlesShrink_ = nullptr;};
    inline string getSourceSubtitlesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceSubtitlesShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setSourceSubtitlesShrink(string sourceSubtitlesShrink) { DARABONBA_PTR_SET_VALUE(sourceSubtitlesShrink_, sourceSubtitlesShrink) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetsShrink Field Functions 
    bool hasTargetsShrink() const { return this->targetsShrink_ != nullptr;};
    void deleteTargetsShrink() { this->targetsShrink_ = nullptr;};
    inline string getTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetsShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setTargetsShrink(string targetsShrink) { DARABONBA_PTR_SET_VALUE(targetsShrink_, targetsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The chained authorization configuration. This parameter is not required. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The OSS URI of the Master Playlist.
    // 
    // The OSS URI must be in the format of oss\\://${Bucket}/${Object}. ${Bucket} is the name of the OSS bucket that is in the same region as the current project. ${Object} is the full path of the file with the .m3u8 file name extension.
    // 
    // > If the playlist has subtitle inputs or multiple target outputs, MasterURI is required. The subtitle URI or target URI must be in the same directory as or a subdirectory of the directory specified by MasterURI.
    shared_ptr<string> masterURI_ {};
    // The message notification configuration. For more information, click Notification. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The policy to overwrite an existing Media Playlist. Valid values:
    // 
    // - overwrite (default): Overwrites the existing Media Playlist.
    // 
    // - skip-existing: Skips the generation and retains the existing Media Playlist.
    shared_ptr<string> overwritePolicy_ {};
    // The project name. For more information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The duration for which the playlist is generated. Unit: seconds (s). Valid values:
    // 
    // - 0 (default) or empty: continues to the end of the source video.
    // 
    // - Greater than 0: lasts for the specified duration from the start time.
    // 
    // > If the specified duration extends beyond the end of the source video, the default value is used.
    shared_ptr<float> sourceDuration_ {};
    // The start time for generating the playlist. Unit: seconds (s). Valid values:
    // 
    // - 0 (default) or empty: starts from the beginning of the source video.
    // 
    // - Greater than 0: starts from the specified time point in the source video.
    // 
    // > You can set this parameter together with the **SourceDuration** parameter to generate a playlist for a specific part of the source video.
    shared_ptr<float> sourceStartTime_ {};
    // The list of subtitles to add. The default value is empty. You can add up to two subtitles.
    shared_ptr<string> sourceSubtitlesShrink_ {};
    // The OSS URI of the video.
    // 
    // The OSS URI must be in the format of oss\\://${Bucket}/${Object}. ${Bucket} is the name of the OSS bucket that is in the same region as the current project. ${Object} is the full path of the file, including the file name extension.
    // 
    // > Only OSS Standard storage buckets are supported. Buckets with hotlink protection whitelists are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // Adds OSS object [tags](https://help.aliyun.com/document_detail/106678.html) to the generated TS files. You can use tags to control the lifecycle of OSS files.
    shared_ptr<string> tagsShrink_ {};
    // An array of live transcoding playlists. The maximum array length is 6. Each target corresponds to a maximum of one video Media Playlist and one or more subtitle Media Playlists.
    // 
    // > If you configure more than one target, the **MasterURI** parameter must not be empty.
    // 
    // This parameter is required.
    shared_ptr<string> targetsShrink_ {};
    // The custom information. This information is returned in the asynchronous notification message to help you associate the message with your services. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
