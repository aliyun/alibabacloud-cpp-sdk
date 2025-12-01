// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODYIMAGEPIPELINEEXECUTIONIMAGEPIPELINEEXECUTIONSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODYIMAGEPIPELINEEXECUTIONIMAGEPIPELINEEXECUTIONSET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet() = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet(const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet &) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet(DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet &&) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet() = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& operator=(const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet &) = default ;
    DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& operator=(DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->executionId_ == nullptr && return this->imageId_ == nullptr && return this->imagePipelineId_ == nullptr && return this->message_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imagePipelineId Field Functions 
    bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
    void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
    inline string imagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags) };
    inline Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags) };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setTags(const Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSet& setTags(Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Details of the image creation tasks.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The data returned.
    std::shared_ptr<string> executionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> imageId_ = nullptr;
    // Details of the image creation task.
    std::shared_ptr<string> imagePipelineId_ = nullptr;
    // The last modification time of the image creation task.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the image template.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The status of the image creation task. Valid values:
    // 
    // *   PREPARING: Resources, such as intermediate instances, are being created.
    // *   REPAIRING: The source image is being repaired.
    // *   BUILDING: The user-defined commands are being run and an image is being created.
    // *   TESTING: The user-defined test commands are being run.
    // *   DISTRIBUTING: The created image is being copied and shared.
    // *   RELEASING: The temporary resources generated during the image creation process are being released.
    // *   SUCCESS The image creation task is completed.
    // *   PARTITION_SUCCESS: The image creation task is partially completed. The image is created, but exceptions may occur when the image was copied or shared or when temporary resources were released.
    // *   FAILED: The image creation task fails.
    // *   TEST_FAILED: The image is created, but the test fails.
    // *   CANCELLING: The image creation task is being canceled.
    // *   CANCELLED: The image creation task is canceled.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The time when the image creation task was created.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the image.
    std::shared_ptr<Models::DescribeImagePipelineExecutionsResponseBodyImagePipelineExecutionImagePipelineExecutionSetTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
