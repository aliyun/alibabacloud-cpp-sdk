// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(OutputBucket, outputBucket_);
      DARABONBA_PTR_TO_JSON(OutputLocation, outputLocation_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(OutputBucket, outputBucket_);
      DARABONBA_PTR_FROM_JSON(OutputLocation, outputLocation_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SubmitJobsRequest() = default ;
    SubmitJobsRequest(const SubmitJobsRequest &) = default ;
    SubmitJobsRequest(SubmitJobsRequest &&) = default ;
    SubmitJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsRequest() = default ;
    SubmitJobsRequest& operator=(const SubmitJobsRequest &) = default ;
    SubmitJobsRequest& operator=(SubmitJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->outputBucket_ == nullptr && this->outputLocation_ == nullptr && this->outputs_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->pipelineId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitJobsRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // outputBucket Field Functions 
    bool hasOutputBucket() const { return this->outputBucket_ != nullptr;};
    void deleteOutputBucket() { this->outputBucket_ = nullptr;};
    inline string getOutputBucket() const { DARABONBA_PTR_GET_DEFAULT(outputBucket_, "") };
    inline SubmitJobsRequest& setOutputBucket(string outputBucket) { DARABONBA_PTR_SET_VALUE(outputBucket_, outputBucket) };


    // outputLocation Field Functions 
    bool hasOutputLocation() const { return this->outputLocation_ != nullptr;};
    void deleteOutputLocation() { this->outputLocation_ = nullptr;};
    inline string getOutputLocation() const { DARABONBA_PTR_GET_DEFAULT(outputLocation_, "") };
    inline SubmitJobsRequest& setOutputLocation(string outputLocation) { DARABONBA_PTR_SET_VALUE(outputLocation_, outputLocation) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline SubmitJobsRequest& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitJobsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitJobsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitJobsRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitJobsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitJobsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The information about the input file. For more information, see the "Input" section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    // 
    // > 
    // 
    // *   The path of an Object Storage Service (OSS) object must be URL-encoded in UTF-8 before you use the path in MPS.
    // 
    // *   The OSS bucket must reside in the same region as your MPS service.
    // 
    // This parameter is required.
    shared_ptr<string> input_ {};
    // The name of the OSS bucket that stores the output file.
    // 
    // *   For more information about the term bucket, see [Terms](https://help.aliyun.com/document_detail/31827.html).
    // 
    // This parameter is required.
    shared_ptr<string> outputBucket_ {};
    // The region in which the OSS bucket that stores the output file resides.
    // 
    // *   The OSS bucket must reside in the same region as MPS.
    // *   For more information about the term bucket, see [Terms](https://help.aliyun.com/document_detail/31827.html).
    shared_ptr<string> outputLocation_ {};
    // The job output configurations. For more information, see the "Output" section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    // 
    // *   Specify the value in a JSON array of Output objects. You can specify up to 30 Output objects.
    // 
    // This parameter is required.
    shared_ptr<string> outputs_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the MPS queue. For more information, see [Terms](https://help.aliyun.com/document_detail/31827.html).
    // 
    // *   To obtain the ID of an MPS queue, you can log on to the [MPS console](https://mps.console.aliyun.com/overview) and choose **Global Settings** > **MPS Queue and Callback** in the left-side navigation pane.
    // *   If you want to receive asynchronous message notifications, associate an MNS queue or topic with the MPS queue. For more information, see [Receive notifications](https://help.aliyun.com/document_detail/42618.html).
    // 
    // This parameter is required.
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
