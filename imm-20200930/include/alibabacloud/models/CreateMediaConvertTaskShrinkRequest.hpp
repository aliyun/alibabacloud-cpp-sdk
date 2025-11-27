// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Targets, targetsShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Targets, targetsShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateMediaConvertTaskShrinkRequest() = default ;
    CreateMediaConvertTaskShrinkRequest(const CreateMediaConvertTaskShrinkRequest &) = default ;
    CreateMediaConvertTaskShrinkRequest(CreateMediaConvertTaskShrinkRequest &&) = default ;
    CreateMediaConvertTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskShrinkRequest() = default ;
    CreateMediaConvertTaskShrinkRequest& operator=(const CreateMediaConvertTaskShrinkRequest &) = default ;
    CreateMediaConvertTaskShrinkRequest& operator=(CreateMediaConvertTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignmentIndex_ == nullptr
        && return this->credentialConfigShrink_ == nullptr && return this->notificationShrink_ == nullptr && return this->projectName_ == nullptr && return this->sourcesShrink_ == nullptr && return this->tagsShrink_ == nullptr
        && return this->targetsShrink_ == nullptr && return this->userData_ == nullptr; };
    // alignmentIndex Field Functions 
    bool hasAlignmentIndex() const { return this->alignmentIndex_ != nullptr;};
    void deleteAlignmentIndex() { this->alignmentIndex_ = nullptr;};
    inline int32_t alignmentIndex() const { DARABONBA_PTR_GET_DEFAULT(alignmentIndex_, 0) };
    inline CreateMediaConvertTaskShrinkRequest& setAlignmentIndex(int32_t alignmentIndex) { DARABONBA_PTR_SET_VALUE(alignmentIndex_, alignmentIndex) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string sourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetsShrink Field Functions 
    bool hasTargetsShrink() const { return this->targetsShrink_ != nullptr;};
    void deleteTargetsShrink() { this->targetsShrink_ = nullptr;};
    inline string targetsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetsShrink_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setTargetsShrink(string targetsShrink) { DARABONBA_PTR_SET_VALUE(targetsShrink_, targetsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateMediaConvertTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // When performing media concatenation, the index of the primary media file (which provides the default transcoding parameters for `Video` and `Audio`, including resolution, frame rate, etc.) in the concatenation list. The default value is 0 (aligning with the first media file in the concatenation list).
    std::shared_ptr<int32_t> alignmentIndex_ = nullptr;
    // **If there are no special requirements, please leave this blank.**
    // 
    // Chain authorization configuration. For more information, see [Using Chain Authorization to Access Other Entity Resources](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // Notification configuration. For details, click Notification. The format of asynchronous notification messages can be found in [Asynchronous Notification Message Format](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The name of the project. For how to obtain it, see [Creating a Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // A list of media files. If the list contains more than one element, it indicates that the Concat (concatenation) function is enabled. The Concat order follows the sequence of the input video file URIs.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourcesShrink_ = nullptr;
    // Custom tags used for searching and filtering asynchronous tasks.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // List of media processing tasks, supporting multiple task configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetsShrink_ = nullptr;
    // User-defined information that will be returned in asynchronous message notifications, used for convenient association and processing within your system. The maximum length is 2048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
