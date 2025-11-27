// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOMODERATIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOMODERATIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateVideoModerationTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoModerationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(MaxFrames, maxFrames_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Scenes, scenesShrink_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoModerationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(MaxFrames, maxFrames_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenesShrink_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateVideoModerationTaskShrinkRequest() = default ;
    CreateVideoModerationTaskShrinkRequest(const CreateVideoModerationTaskShrinkRequest &) = default ;
    CreateVideoModerationTaskShrinkRequest(CreateVideoModerationTaskShrinkRequest &&) = default ;
    CreateVideoModerationTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoModerationTaskShrinkRequest() = default ;
    CreateVideoModerationTaskShrinkRequest& operator=(const CreateVideoModerationTaskShrinkRequest &) = default ;
    CreateVideoModerationTaskShrinkRequest& operator=(CreateVideoModerationTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && return this->interval_ == nullptr && return this->maxFrames_ == nullptr && return this->notificationShrink_ == nullptr && return this->projectName_ == nullptr && return this->scenesShrink_ == nullptr
        && return this->sourceURI_ == nullptr && return this->tagsShrink_ == nullptr && return this->userData_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline CreateVideoModerationTaskShrinkRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // maxFrames Field Functions 
    bool hasMaxFrames() const { return this->maxFrames_ != nullptr;};
    void deleteMaxFrames() { this->maxFrames_ = nullptr;};
    inline int64_t maxFrames() const { DARABONBA_PTR_GET_DEFAULT(maxFrames_, 0L) };
    inline CreateVideoModerationTaskShrinkRequest& setMaxFrames(int64_t maxFrames) { DARABONBA_PTR_SET_VALUE(maxFrames_, maxFrames) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // scenesShrink Field Functions 
    bool hasScenesShrink() const { return this->scenesShrink_ != nullptr;};
    void deleteScenesShrink() { this->scenesShrink_ = nullptr;};
    inline string scenesShrink() const { DARABONBA_PTR_GET_DEFAULT(scenesShrink_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setScenesShrink(string scenesShrink) { DARABONBA_PTR_SET_VALUE(scenesShrink_, scenesShrink) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateVideoModerationTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The interval of capturing video frames. Unit: seconds. Valid values: 1 to 600. Default value: 1.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The maximum number of frames that can be captured from the video. Valid values: 5 to 3600. Default value: 200.
    std::shared_ptr<int64_t> maxFrames_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The scenarios of video moderation.
    std::shared_ptr<string> scenesShrink_ = nullptr;
    // The OSS URI of the video.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The custom tags. The custom tags help you retrieve the task.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
