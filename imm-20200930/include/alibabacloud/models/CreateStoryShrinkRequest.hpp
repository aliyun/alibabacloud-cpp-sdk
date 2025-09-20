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
    virtual bool empty() const override { this->addressShrink_ != nullptr
        && this->customId_ != nullptr && this->customLabelsShrink_ != nullptr && this->datasetName_ != nullptr && this->maxFileCount_ != nullptr && this->minFileCount_ != nullptr
        && this->notificationShrink_ != nullptr && this->notifyTopicName_ != nullptr && this->objectId_ != nullptr && this->projectName_ != nullptr && this->storyEndTime_ != nullptr
        && this->storyName_ != nullptr && this->storyStartTime_ != nullptr && this->storySubType_ != nullptr && this->storyType_ != nullptr && this->tagsShrink_ != nullptr
        && this->userData_ != nullptr; };
    // addressShrink Field Functions 
    bool hasAddressShrink() const { return this->addressShrink_ != nullptr;};
    void deleteAddressShrink() { this->addressShrink_ = nullptr;};
    inline string addressShrink() const { DARABONBA_PTR_GET_DEFAULT(addressShrink_, "") };
    inline CreateStoryShrinkRequest& setAddressShrink(string addressShrink) { DARABONBA_PTR_SET_VALUE(addressShrink_, addressShrink) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline CreateStoryShrinkRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabelsShrink Field Functions 
    bool hasCustomLabelsShrink() const { return this->customLabelsShrink_ != nullptr;};
    void deleteCustomLabelsShrink() { this->customLabelsShrink_ = nullptr;};
    inline string customLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(customLabelsShrink_, "") };
    inline CreateStoryShrinkRequest& setCustomLabelsShrink(string customLabelsShrink) { DARABONBA_PTR_SET_VALUE(customLabelsShrink_, customLabelsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateStoryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxFileCount Field Functions 
    bool hasMaxFileCount() const { return this->maxFileCount_ != nullptr;};
    void deleteMaxFileCount() { this->maxFileCount_ = nullptr;};
    inline int64_t maxFileCount() const { DARABONBA_PTR_GET_DEFAULT(maxFileCount_, 0L) };
    inline CreateStoryShrinkRequest& setMaxFileCount(int64_t maxFileCount) { DARABONBA_PTR_SET_VALUE(maxFileCount_, maxFileCount) };


    // minFileCount Field Functions 
    bool hasMinFileCount() const { return this->minFileCount_ != nullptr;};
    void deleteMinFileCount() { this->minFileCount_ = nullptr;};
    inline int64_t minFileCount() const { DARABONBA_PTR_GET_DEFAULT(minFileCount_, 0L) };
    inline CreateStoryShrinkRequest& setMinFileCount(int64_t minFileCount) { DARABONBA_PTR_SET_VALUE(minFileCount_, minFileCount) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateStoryShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string notifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline CreateStoryShrinkRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline CreateStoryShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateStoryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyEndTime Field Functions 
    bool hasStoryEndTime() const { return this->storyEndTime_ != nullptr;};
    void deleteStoryEndTime() { this->storyEndTime_ = nullptr;};
    inline string storyEndTime() const { DARABONBA_PTR_GET_DEFAULT(storyEndTime_, "") };
    inline CreateStoryShrinkRequest& setStoryEndTime(string storyEndTime) { DARABONBA_PTR_SET_VALUE(storyEndTime_, storyEndTime) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateStoryShrinkRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTime Field Functions 
    bool hasStoryStartTime() const { return this->storyStartTime_ != nullptr;};
    void deleteStoryStartTime() { this->storyStartTime_ = nullptr;};
    inline string storyStartTime() const { DARABONBA_PTR_GET_DEFAULT(storyStartTime_, "") };
    inline CreateStoryShrinkRequest& setStoryStartTime(string storyStartTime) { DARABONBA_PTR_SET_VALUE(storyStartTime_, storyStartTime) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateStoryShrinkRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateStoryShrinkRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateStoryShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateStoryShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The address of the story. IMM filters candidate photos to generate a story based on the value of this parameter. This parameter takes effect only if you set StoryType to TravelMemory.
    // 
    // >  If you are located in Hong Kong (China), Macao (China), Taiwan (China), or overseas, you cannot specify an address in the Chinese mainland by using this parameter.
    std::shared_ptr<string> addressShrink_ = nullptr;
    // The custom ID. A custom ID of a generated story may differ from the value of ObjectID and can be utilized for subsequent retrieval and sorting of stories.
    std::shared_ptr<string> customId_ = nullptr;
    // The custom labels. Labels specify the custom information of the story. This enables retrieval based on your business requirements.
    std::shared_ptr<string> customLabelsShrink_ = nullptr;
    // The name of the dataset. For information about how to obtain the name of a dataset, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The maximum number of photo files in the story. The actual number of photo files ranges from the value of MinFileCount to the value of MaxFileCount. The value of this parameter must be an integer greater than the value of MinFileCount. To provide the desired effect, the algorithm limits the maximum number of photo files to 1,500. If you set MaxFileCount to a value greater than 1,500, this parameter does not take effect.
    std::shared_ptr<int64_t> maxFileCount_ = nullptr;
    // The minimum number of photo files in the story. The actual number of photo files ranges from the value of MinFileCount to the value of MaxFileCount. The value of this parameter must be an integer greater than 1. If the actual number of candidate photos is less than the value of this parameter, a null story is returned.
    std::shared_ptr<int64_t> minFileCount_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
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
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The custom information, which is returned as asynchronous notifications to facilitate notification management in your system. The maximum information length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
