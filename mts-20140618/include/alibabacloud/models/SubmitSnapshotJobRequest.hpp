// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotConfig, snapshotConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotConfig, snapshotConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest(SubmitSnapshotJobRequest &&) = default ;
    SubmitSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest& operator=(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest& operator=(SubmitSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pipelineId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->snapshotConfig_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitSnapshotJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitSnapshotJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitSnapshotJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitSnapshotJobRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitSnapshotJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitSnapshotJobRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotConfig Field Functions 
    bool hasSnapshotConfig() const { return this->snapshotConfig_ != nullptr;};
    void deleteSnapshotConfig() { this->snapshotConfig_ = nullptr;};
    inline string getSnapshotConfig() const { DARABONBA_PTR_GET_DEFAULT(snapshotConfig_, "") };
    inline SubmitSnapshotJobRequest& setSnapshotConfig(string snapshotConfig) { DARABONBA_PTR_SET_VALUE(snapshotConfig_, snapshotConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The information about the job input. The value must be a JSON object. You must add the Object Storage Service (OSS) bucket that stores the OSS object to be used as the job input as a media bucket in the MPS console. To add an OSS bucket as a media bucket, you can log on to the MPS console, choose Workflows > Media Buckets in the left-side navigation pane, and then click Add Bucket. After the OSS bucket is added as a media bucket, you must perform URL encoding for the OSS object. Example: `{"Bucket":"example-bucket","Location":"example-location","Object":"example%2Ftest.flv"}`. This example indicates the `"example-bucket.example-location.aliyuncs.com/example/test.flv"` object.
    // 
    // > The OSS bucket must reside in the same region as your MPS service.
    // 
    // This parameter is required.
    shared_ptr<string> input_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the MPS queue to which you want to submit the snapshot job. To obtain the ID, you can log on to the **MPS console** and choose **Global Settings** > **Pipelines** in the left-side navigation pane.
    // 
    // > Make sure that an available Message Service (MNS) topic is bound to the specified MPS queue. Otherwise, the relevant messages may fail to be sent as expected.
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The snapshot configurations. For more information, see the "AliyunSnapshotConfig" section of the [Data types](https://help.aliyun.com/document_detail/29253.html) topic.
    // 
    // > If you set the Interval parameter that is nested under SnapshotConfig, snapshots are captured at the specified intervals. The default value of the Interval parameter is 10, in seconds. If an input video is short but you specify large values for both the Num and Interval parameters, the actual number of snapshots captured may be smaller than the specified number. For example, if you set the Num parameter to 5 and the Interval parameter to 3 for a video of 10 seconds, the number of snapshots captured cannot reach 5.
    // 
    // This parameter is required.
    shared_ptr<string> snapshotConfig_ {};
    // The custom data. The custom data can contain letters, digits, and hyphens (-) and be up to 1,024 bytes in size. The custom data cannot start with a special character.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
