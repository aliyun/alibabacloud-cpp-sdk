// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTFPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTFPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImportFpShotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportFpShotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(FpImportConfig, fpImportConfig_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ImportFpShotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(FpImportConfig, fpImportConfig_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ImportFpShotJobRequest() = default ;
    ImportFpShotJobRequest(const ImportFpShotJobRequest &) = default ;
    ImportFpShotJobRequest(ImportFpShotJobRequest &&) = default ;
    ImportFpShotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportFpShotJobRequest() = default ;
    ImportFpShotJobRequest& operator=(const ImportFpShotJobRequest &) = default ;
    ImportFpShotJobRequest& operator=(ImportFpShotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpDBId_ == nullptr
        && return this->fpImportConfig_ == nullptr && return this->input_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pipelineId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->userData_ == nullptr; };
    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string fpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline ImportFpShotJobRequest& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // fpImportConfig Field Functions 
    bool hasFpImportConfig() const { return this->fpImportConfig_ != nullptr;};
    void deleteFpImportConfig() { this->fpImportConfig_ = nullptr;};
    inline string fpImportConfig() const { DARABONBA_PTR_GET_DEFAULT(fpImportConfig_, "") };
    inline ImportFpShotJobRequest& setFpImportConfig(string fpImportConfig) { DARABONBA_PTR_SET_VALUE(fpImportConfig_, fpImportConfig) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline ImportFpShotJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ImportFpShotJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImportFpShotJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ImportFpShotJobRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImportFpShotJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImportFpShotJobRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ImportFpShotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the text fingerprint library to which the text file is imported. You can specify only one job of importing text files to a text fingerprint library at a time. You can obtain the library ID from the response parameters of the [CreateFpShotDB](https://help.aliyun.com/document_detail/170149.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> fpDBId_ = nullptr;
    // The job configurations. The value must be a JSON object. Example: `{"SaveType":"onlysave"}`. The `SaveType` field indicates the storage type. Valid values of the SaveType field:
    // 
    // *   **save**: The fingerprints of the text file are saved to the text fingerprint library only if the text file is not duplicated with content in the text fingerprint library.
    // *   **onlysave**: The fingerprints of the text file are saved to the text fingerprint library.
    // 
    // This parameter is required.
    std::shared_ptr<string> fpImportConfig_ = nullptr;
    // The Object Storage Service (OSS) URL of the text file to be imported to the text fingerprint library. The value must be a JSON object. Example: {"Bucket":"example-bucket","Location":"oss-cn-shanghai","Object":"example.flv"}.
    // 
    // > The OSS bucket must reside in the same region as your MPS service.
    // 
    // This parameter is required.
    std::shared_ptr<string> input_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the ApsaraVideo Media Processing (MPS) queue. To view the ID of the MPS queue, perform the following steps: Log on to the **MPS console**. In the left-side navigation pane, choose **Global Settings** > **Pipelines**. The MPS queue is associated with a specified Message Service (MNS) topic. You can submit jobs for different services to different MPS queues. If you do not specify this parameter, the job is submitted to the default MPS queue and no MNS topic is associated with the MPS queue.
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The user-defined data. The value can contain letters, digits, and special characters. The value can be up to 128 bytes in length.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
