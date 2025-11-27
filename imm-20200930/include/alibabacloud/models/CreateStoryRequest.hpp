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
        && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr && return this->maxFileCount_ == nullptr && return this->minFileCount_ == nullptr
        && return this->notification_ == nullptr && return this->notifyTopicName_ == nullptr && return this->objectId_ == nullptr && return this->projectName_ == nullptr && return this->storyEndTime_ == nullptr
        && return this->storyName_ == nullptr && return this->storyStartTime_ == nullptr && return this->storySubType_ == nullptr && return this->storyType_ == nullptr && return this->tags_ == nullptr
        && return this->userData_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const AddressForStory & address() const { DARABONBA_PTR_GET_CONST(address_, AddressForStory) };
    inline AddressForStory address() { DARABONBA_PTR_GET(address_, AddressForStory) };
    inline CreateStoryRequest& setAddress(const AddressForStory & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline CreateStoryRequest& setAddress(AddressForStory && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline CreateStoryRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline CreateStoryRequest& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline CreateStoryRequest& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateStoryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxFileCount Field Functions 
    bool hasMaxFileCount() const { return this->maxFileCount_ != nullptr;};
    void deleteMaxFileCount() { this->maxFileCount_ = nullptr;};
    inline int64_t maxFileCount() const { DARABONBA_PTR_GET_DEFAULT(maxFileCount_, 0L) };
    inline CreateStoryRequest& setMaxFileCount(int64_t maxFileCount) { DARABONBA_PTR_SET_VALUE(maxFileCount_, maxFileCount) };


    // minFileCount Field Functions 
    bool hasMinFileCount() const { return this->minFileCount_ != nullptr;};
    void deleteMinFileCount() { this->minFileCount_ = nullptr;};
    inline int64_t minFileCount() const { DARABONBA_PTR_GET_DEFAULT(minFileCount_, 0L) };
    inline CreateStoryRequest& setMinFileCount(int64_t minFileCount) { DARABONBA_PTR_SET_VALUE(minFileCount_, minFileCount) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateStoryRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateStoryRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string notifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline CreateStoryRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateStoryRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateStoryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyEndTime Field Functions 
    bool hasStoryEndTime() const { return this->storyEndTime_ != nullptr;};
    void deleteStoryEndTime() { this->storyEndTime_ = nullptr;};
    inline string storyEndTime() const { DARABONBA_PTR_GET_DEFAULT(storyEndTime_, "") };
    inline CreateStoryRequest& setStoryEndTime(string storyEndTime) { DARABONBA_PTR_SET_VALUE(storyEndTime_, storyEndTime) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateStoryRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTime Field Functions 
    bool hasStoryStartTime() const { return this->storyStartTime_ != nullptr;};
    void deleteStoryStartTime() { this->storyStartTime_ = nullptr;};
    inline string storyStartTime() const { DARABONBA_PTR_GET_DEFAULT(storyStartTime_, "") };
    inline CreateStoryRequest& setStoryStartTime(string storyStartTime) { DARABONBA_PTR_SET_VALUE(storyStartTime_, storyStartTime) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateStoryRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateStoryRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateStoryRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateStoryRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateStoryRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The address of the story. IMM filters candidate photos to generate a story based on the value of this parameter. This parameter takes effect only if you set StoryType to TravelMemory.
    // 
    // >  If the caller of the operation is located in Hong Kong (China), Macao (China), Taiwan (China), or another region outside the Chinese mainland, the system cannot convert the GPS information in the Chinese mainland into the textual address version.
    std::shared_ptr<AddressForStory> address_ = nullptr;
    // The custom ID. A custom ID of a generated story may differ from the value of ObjectID and can be utilized for subsequent retrieval and sorting of stories.
    std::shared_ptr<string> customId_ = nullptr;
    // The custom labels. Labels specify the custom information of the story. This enables retrieval based on your business requirements.
    Darabonba::Json customLabels_ = nullptr;
    // The name of the dataset. For information about how to obtain the name of a dataset, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The maximum number of photo files in the story. The actual number of photo files ranges from the value of MinFileCount to the value of MaxFileCount. The value of this parameter must be an integer greater than the value of MinFileCount. To provide the desired effect, the algorithm limits the maximum number of photo files to 1,500. If you set MaxFileCount to a value greater than 1,500, this parameter does not take effect.
    std::shared_ptr<int64_t> maxFileCount_ = nullptr;
    // The minimum number of photo files in the story. The actual number of photo files ranges from the value of MinFileCount to the value of MaxFileCount. The value of this parameter must be an integer greater than 1. If the actual number of candidate photos is less than the value of this parameter, a null story is returned.
    std::shared_ptr<int64_t> minFileCount_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<Notification> notification_ = nullptr;
    // The topic name of the asynchronous reverse notification.
    std::shared_ptr<string> notifyTopicName_ = nullptr;
    // The ID of the story. This parameter is optional. If you leave this parameter empty, IMM assigns a unique identifier to the story. You can query and update a story based on its ID. You can also manually create an ID for a story. After you create an ID for a story, you must specify this parameter to pass the ID into the system. This way, IMM can record the ID as the unique identifier of the story. If you pass an existing ID into the system, IMM updates the story that corresponds to the ID.
    std::shared_ptr<string> objectId_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The end time of the photo collection for which you want to create the story. StoryStartTime and StoryEndTime form a time interval based on which IMM filters candidate photos to generate a story. The value must be a string in the RFC3339 format.
    std::shared_ptr<string> storyEndTime_ = nullptr;
    // The name of the story.
    std::shared_ptr<string> storyName_ = nullptr;
    // The start time of the photo collection for which you want to create the story. StoryStartTime and StoryEndTime form a time interval based on which IMM filters candidate photos to generate a story. The value must be a string in the RFC3339 format.
    std::shared_ptr<string> storyStartTime_ = nullptr;
    // The subtype of the story. For information about valid subtypes, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    std::shared_ptr<string> storySubType_ = nullptr;
    // The type of the story. For information about valid types, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> storyType_ = nullptr;
    // The tags. You can specify this parameter in one of the following scenarios:
    // 
    // *   Specify tags as custom data, which is returned in messages provided by Simple Message Queue.
    // *   Search for tasks by tag.
    // *   Specify tags as variables in destination URIs.
    Darabonba::Json tags_ = nullptr;
    // The custom information, which is returned as asynchronous notifications to facilitate notification management in your system. The maximum information length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
