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
        && return this->masterURI_ == nullptr && return this->notificationShrink_ == nullptr && return this->overwritePolicy_ == nullptr && return this->projectName_ == nullptr && return this->sourceDuration_ == nullptr
        && return this->sourceStartTime_ == nullptr && return this->sourceSubtitlesShrink_ == nullptr && return this->sourceURI_ == nullptr && return this->tagsShrink_ == nullptr && return this->targetsShrink_ == nullptr
        && return this->userData_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // masterURI Field Functions 
    bool hasMasterURI() const { return this->masterURI_ != nullptr;};
    void deleteMasterURI() { this->masterURI_ = nullptr;};
    inline string masterURI() const { DARABONBA_PTR_GET_DEFAULT(masterURI_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setMasterURI(string masterURI) { DARABONBA_PTR_SET_VALUE(masterURI_, masterURI) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // overwritePolicy Field Functions 
    bool hasOverwritePolicy() const { return this->overwritePolicy_ != nullptr;};
    void deleteOverwritePolicy() { this->overwritePolicy_ = nullptr;};
    inline string overwritePolicy() const { DARABONBA_PTR_GET_DEFAULT(overwritePolicy_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setOverwritePolicy(string overwritePolicy) { DARABONBA_PTR_SET_VALUE(overwritePolicy_, overwritePolicy) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceDuration Field Functions 
    bool hasSourceDuration() const { return this->sourceDuration_ != nullptr;};
    void deleteSourceDuration() { this->sourceDuration_ = nullptr;};
    inline float sourceDuration() const { DARABONBA_PTR_GET_DEFAULT(sourceDuration_, 0.0) };
    inline GenerateVideoPlaylistShrinkRequest& setSourceDuration(float sourceDuration) { DARABONBA_PTR_SET_VALUE(sourceDuration_, sourceDuration) };


    // sourceStartTime Field Functions 
    bool hasSourceStartTime() const { return this->sourceStartTime_ != nullptr;};
    void deleteSourceStartTime() { this->sourceStartTime_ = nullptr;};
    inline float sourceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sourceStartTime_, 0.0) };
    inline GenerateVideoPlaylistShrinkRequest& setSourceStartTime(float sourceStartTime) { DARABONBA_PTR_SET_VALUE(sourceStartTime_, sourceStartTime) };


    // sourceSubtitlesShrink Field Functions 
    bool hasSourceSubtitlesShrink() const { return this->sourceSubtitlesShrink_ != nullptr;};
    void deleteSourceSubtitlesShrink() { this->sourceSubtitlesShrink_ = nullptr;};
    inline string sourceSubtitlesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceSubtitlesShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setSourceSubtitlesShrink(string sourceSubtitlesShrink) { DARABONBA_PTR_SET_VALUE(sourceSubtitlesShrink_, sourceSubtitlesShrink) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetsShrink Field Functions 
    bool hasTargetsShrink() const { return this->targetsShrink_ != nullptr;};
    void deleteTargetsShrink() { this->targetsShrink_ = nullptr;};
    inline string targetsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetsShrink_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setTargetsShrink(string targetsShrink) { DARABONBA_PTR_SET_VALUE(targetsShrink_, targetsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateVideoPlaylistShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The OSS path of the master playlist.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that is suffixed with .m3u8.
    // 
    // >  If a playlist contains subtitles or multiple outputs, the MasterURI parameter is required and the URI of subtitle files or outputs must be in the directory specified by the MasterURI parameter or its subdirectory.
    std::shared_ptr<string> masterURI_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
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
    std::shared_ptr<string> sourceSubtitlesShrink_ = nullptr;
    // The OSS path of the video file.
    // 
    // The OSS path must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that contains the file name extension.
    // 
    // >  Only OSS buckets of the Standard storage class are supported. OSS buckets for which hotlink protection whitelists are configured are not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The [tags](https://help.aliyun.com/document_detail/106678.html) that you want to add to a TS file in OSS. You can use tags to manage the lifecycles of TS files in OSS.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The array of live transcoding playlists. The maximum length of the array is 6. Each element corresponds to at most one video media playlist and one or more subtitle media playlists.
    // 
    // >  If the array contains more than one element, the **MasterURI** parameter cannot be left empty.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetsShrink_ = nullptr;
    // The custom user information, which is returned in asynchronous notifications to help you handle the notifications in the system. The maximum length of a notification is 2048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
