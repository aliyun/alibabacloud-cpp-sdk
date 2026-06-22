// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateStoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, addressShrink_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxFileCount, maxFileCount_);
      DARABONBA_PTR_TO_JSON(MinFileCount, minFileCount_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, addressShrink_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxFileCount, maxFileCount_);
      DARABONBA_PTR_FROM_JSON(MinFileCount, minFileCount_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateStoryShrinkRequest() = default ;
    CreateStoryShrinkRequest(const CreateStoryShrinkRequest &) = default ;
    CreateStoryShrinkRequest(CreateStoryShrinkRequest &&) = default ;
    CreateStoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStoryShrinkRequest() = default ;
    CreateStoryShrinkRequest& operator=(const CreateStoryShrinkRequest &) = default ;
    CreateStoryShrinkRequest& operator=(CreateStoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressShrink_ == nullptr
        && this->customId_ == nullptr && this->customLabelsShrink_ == nullptr && this->datasetName_ == nullptr && this->maxFileCount_ == nullptr && this->minFileCount_ == nullptr
        && this->notificationShrink_ == nullptr && this->notifyTopicName_ == nullptr && this->objectId_ == nullptr && this->projectName_ == nullptr && this->storyEndTime_ == nullptr
        && this->storyName_ == nullptr && this->storyStartTime_ == nullptr && this->storySubType_ == nullptr && this->storyType_ == nullptr && this->tagsShrink_ == nullptr
        && this->userData_ == nullptr; };
    // addressShrink Field Functions 
    bool hasAddressShrink() const { return this->addressShrink_ != nullptr;};
    void deleteAddressShrink() { this->addressShrink_ = nullptr;};
    inline string getAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(addressShrink_, "") };
    inline CreateStoryShrinkRequest& setAddressShrink(string addressShrink) { DARABONBA_PTR_SET_VALUE(addressShrink_, addressShrink) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline CreateStoryShrinkRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabelsShrink Field Functions 
    bool hasCustomLabelsShrink() const { return this->customLabelsShrink_ != nullptr;};
    void deleteCustomLabelsShrink() { this->customLabelsShrink_ = nullptr;};
    inline string getCustomLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(customLabelsShrink_, "") };
    inline CreateStoryShrinkRequest& setCustomLabelsShrink(string customLabelsShrink) { DARABONBA_PTR_SET_VALUE(customLabelsShrink_, customLabelsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateStoryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxFileCount Field Functions 
    bool hasMaxFileCount() const { return this->maxFileCount_ != nullptr;};
    void deleteMaxFileCount() { this->maxFileCount_ = nullptr;};
    inline int64_t getMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(maxFileCount_, 0L) };
    inline CreateStoryShrinkRequest& setMaxFileCount(int64_t maxFileCount) { DARABONBA_PTR_SET_VALUE(maxFileCount_, maxFileCount) };


    // minFileCount Field Functions 
    bool hasMinFileCount() const { return this->minFileCount_ != nullptr;};
    void deleteMinFileCount() { this->minFileCount_ = nullptr;};
    inline int64_t getMinFileCount() const { DARABONBA_PTR_GET_DEFAULT(minFileCount_, 0L) };
    inline CreateStoryShrinkRequest& setMinFileCount(int64_t minFileCount) { DARABONBA_PTR_SET_VALUE(minFileCount_, minFileCount) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateStoryShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string getNotifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline CreateStoryShrinkRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateStoryShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateStoryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyEndTime Field Functions 
    bool hasStoryEndTime() const { return this->storyEndTime_ != nullptr;};
    void deleteStoryEndTime() { this->storyEndTime_ = nullptr;};
    inline string getStoryEndTime() const { DARABONBA_PTR_GET_DEFAULT(storyEndTime_, "") };
    inline CreateStoryShrinkRequest& setStoryEndTime(string storyEndTime) { DARABONBA_PTR_SET_VALUE(storyEndTime_, storyEndTime) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string getStoryName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateStoryShrinkRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTime Field Functions 
    bool hasStoryStartTime() const { return this->storyStartTime_ != nullptr;};
    void deleteStoryStartTime() { this->storyStartTime_ = nullptr;};
    inline string getStoryStartTime() const { DARABONBA_PTR_GET_DEFAULT(storyStartTime_, "") };
    inline CreateStoryShrinkRequest& setStoryStartTime(string storyStartTime) { DARABONBA_PTR_SET_VALUE(storyStartTime_, storyStartTime) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string getStorySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateStoryShrinkRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string getStoryType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateStoryShrinkRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateStoryShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateStoryShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The address information for the story. IMM filters photos whose shooting locations match the specified address to generate the story. This parameter takes effect only when StoryType is set to TravelMemory.
    // 
    // > Due to regulatory requirements, parsing GPS information into addresses is not supported in Hong Kong (China), Macao (China), Taiwan (China), or regions outside of mainland China.
    shared_ptr<string> addressShrink_ {};
    // A custom identifier for the story. This ID can be different from ObjectId. You can use this ID to retrieve or sort stories.
    shared_ptr<string> customId_ {};
    // The custom labels. These labels contain custom information about the story and can be used for retrieval.
    shared_ptr<string> customLabelsShrink_ {};
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The maximum number of photos in the generated story. The actual number of photos is between the values of MinFileCount and MaxFileCount. The value must be an integer greater than the value of MinFileCount. To ensure the quality of the generated story, the internal algorithm limits the maximum number of photos to 1,500. If you set MaxFileCount to a value greater than 1,500, the setting does not take effect.
    shared_ptr<int64_t> maxFileCount_ {};
    // The minimum number of photos in the generated story. The actual number of photos is between the values of MinFileCount and MaxFileCount. The value must be an integer greater than 1. If the number of available candidate photos is less than this value, an empty story is returned.
    shared_ptr<int64_t> minFileCount_ {};
    // The notification configuration. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The name of the topic for asynchronous notifications.
    shared_ptr<string> notifyTopicName_ {};
    // The ID for the story object. This parameter is optional. If you do not specify an ID, IMM generates one. You can use the story ID to query or update the story. If you specify an ID that already exists, the corresponding story is updated.
    shared_ptr<string> objectId_ {};
    // The name of the project. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The end time of the photo collection for the story. This parameter and StoryStartTime define a time range. IMM filters candidate photos within this time range to generate the story. The value must be a string in the RFC 3339 format.
    shared_ptr<string> storyEndTime_ {};
    // The name of the story.
    shared_ptr<string> storyName_ {};
    // The start time of the photo collection for the story. This parameter and StoryEndTime define a time range. IMM filters candidate photos within this time range to generate the story. The value must be a string in the RFC 3339 format.
    shared_ptr<string> storyStartTime_ {};
    // The subtype of the story to generate. For more information about story subtypes and their valid values, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    shared_ptr<string> storySubType_ {};
    // The type of the story to generate. For more information about story types and their valid values, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    shared_ptr<string> storyType_ {};
    // This parameter provides a tagging mechanism that can be used in the following scenarios:
    // 
    // - Set custom data that is returned in MNS messages.
    // 
    // - Use as a search condition to search for tasks.
    // 
    // - Use as a variable in TargetURI.
    shared_ptr<string> tagsShrink_ {};
    // The custom information that is returned in an asynchronous notification message. You can use this information to associate the notification message with your services. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
