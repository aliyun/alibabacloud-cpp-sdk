// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddressForStory.hpp>
#include <alibabacloud/models/Notification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateStoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxFileCount, maxFileCount_);
      DARABONBA_PTR_TO_JSON(MinFileCount, minFileCount_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxFileCount, maxFileCount_);
      DARABONBA_PTR_FROM_JSON(MinFileCount, minFileCount_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateStoryRequest() = default ;
    CreateStoryRequest(const CreateStoryRequest &) = default ;
    CreateStoryRequest(CreateStoryRequest &&) = default ;
    CreateStoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStoryRequest() = default ;
    CreateStoryRequest& operator=(const CreateStoryRequest &) = default ;
    CreateStoryRequest& operator=(CreateStoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->customId_ == nullptr && this->customLabels_ == nullptr && this->datasetName_ == nullptr && this->maxFileCount_ == nullptr && this->minFileCount_ == nullptr
        && this->notification_ == nullptr && this->notifyTopicName_ == nullptr && this->objectId_ == nullptr && this->projectName_ == nullptr && this->storyEndTime_ == nullptr
        && this->storyName_ == nullptr && this->storyStartTime_ == nullptr && this->storySubType_ == nullptr && this->storyType_ == nullptr && this->tags_ == nullptr
        && this->userData_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const AddressForStory & getAddress() const { DARABONBA_PTR_GET_CONST(address_, AddressForStory) };
    inline AddressForStory getAddress() { DARABONBA_PTR_GET(address_, AddressForStory) };
    inline CreateStoryRequest& setAddress(const AddressForStory & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline CreateStoryRequest& setAddress(AddressForStory && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline CreateStoryRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline CreateStoryRequest& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline CreateStoryRequest& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateStoryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxFileCount Field Functions 
    bool hasMaxFileCount() const { return this->maxFileCount_ != nullptr;};
    void deleteMaxFileCount() { this->maxFileCount_ = nullptr;};
    inline int64_t getMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(maxFileCount_, 0L) };
    inline CreateStoryRequest& setMaxFileCount(int64_t maxFileCount) { DARABONBA_PTR_SET_VALUE(maxFileCount_, maxFileCount) };


    // minFileCount Field Functions 
    bool hasMinFileCount() const { return this->minFileCount_ != nullptr;};
    void deleteMinFileCount() { this->minFileCount_ = nullptr;};
    inline int64_t getMinFileCount() const { DARABONBA_PTR_GET_DEFAULT(minFileCount_, 0L) };
    inline CreateStoryRequest& setMinFileCount(int64_t minFileCount) { DARABONBA_PTR_SET_VALUE(minFileCount_, minFileCount) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateStoryRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateStoryRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string getNotifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline CreateStoryRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateStoryRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateStoryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyEndTime Field Functions 
    bool hasStoryEndTime() const { return this->storyEndTime_ != nullptr;};
    void deleteStoryEndTime() { this->storyEndTime_ = nullptr;};
    inline string getStoryEndTime() const { DARABONBA_PTR_GET_DEFAULT(storyEndTime_, "") };
    inline CreateStoryRequest& setStoryEndTime(string storyEndTime) { DARABONBA_PTR_SET_VALUE(storyEndTime_, storyEndTime) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string getStoryName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateStoryRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTime Field Functions 
    bool hasStoryStartTime() const { return this->storyStartTime_ != nullptr;};
    void deleteStoryStartTime() { this->storyStartTime_ = nullptr;};
    inline string getStoryStartTime() const { DARABONBA_PTR_GET_DEFAULT(storyStartTime_, "") };
    inline CreateStoryRequest& setStoryStartTime(string storyStartTime) { DARABONBA_PTR_SET_VALUE(storyStartTime_, storyStartTime) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string getStorySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateStoryRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string getStoryType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateStoryRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateStoryRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateStoryRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateStoryRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The address information for the story. IMM filters photos whose shooting locations match the specified address to generate the story. This parameter takes effect only when StoryType is set to TravelMemory.
    // 
    // > Due to regulatory requirements, parsing GPS information into addresses is not supported in Hong Kong (China), Macao (China), Taiwan (China), or regions outside of mainland China.
    shared_ptr<AddressForStory> address_ {};
    // A custom identifier for the story. This ID can be different from ObjectId. You can use this ID to retrieve or sort stories.
    shared_ptr<string> customId_ {};
    // The custom labels. These labels contain custom information about the story and can be used for retrieval.
    Darabonba::Json customLabels_ {};
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The maximum number of photos in the generated story. The actual number of photos is between the values of MinFileCount and MaxFileCount. The value must be an integer greater than the value of MinFileCount. To ensure the quality of the generated story, the internal algorithm limits the maximum number of photos to 1,500. If you set MaxFileCount to a value greater than 1,500, the setting does not take effect.
    shared_ptr<int64_t> maxFileCount_ {};
    // The minimum number of photos in the generated story. The actual number of photos is between the values of MinFileCount and MaxFileCount. The value must be an integer greater than 1. If the number of available candidate photos is less than this value, an empty story is returned.
    shared_ptr<int64_t> minFileCount_ {};
    // The notification configuration. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
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
    Darabonba::Json tags_ {};
    // The custom information that is returned in an asynchronous notification message. You can use this information to associate the notification message with your services. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
