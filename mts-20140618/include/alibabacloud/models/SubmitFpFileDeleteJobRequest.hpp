// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITFPFILEDELETEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITFPFILEDELETEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitFpFileDeleteJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitFpFileDeleteJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitFpFileDeleteJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(FpDBId, fpDBId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitFpFileDeleteJobRequest() = default ;
    SubmitFpFileDeleteJobRequest(const SubmitFpFileDeleteJobRequest &) = default ;
    SubmitFpFileDeleteJobRequest(SubmitFpFileDeleteJobRequest &&) = default ;
    SubmitFpFileDeleteJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitFpFileDeleteJobRequest() = default ;
    SubmitFpFileDeleteJobRequest& operator=(const SubmitFpFileDeleteJobRequest &) = default ;
    SubmitFpFileDeleteJobRequest& operator=(SubmitFpFileDeleteJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileIds_ == nullptr
        && this->fpDBId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pipelineId_ == nullptr && this->primaryKeys_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->userData_ == nullptr; };
    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline string getFileIds() const { DARABONBA_PTR_GET_DEFAULT(fileIds_, "") };
    inline SubmitFpFileDeleteJobRequest& setFileIds(string fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };


    // fpDBId Field Functions 
    bool hasFpDBId() const { return this->fpDBId_ != nullptr;};
    void deleteFpDBId() { this->fpDBId_ = nullptr;};
    inline string getFpDBId() const { DARABONBA_PTR_GET_DEFAULT(fpDBId_, "") };
    inline SubmitFpFileDeleteJobRequest& setFpDBId(string fpDBId) { DARABONBA_PTR_SET_VALUE(fpDBId_, fpDBId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitFpFileDeleteJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitFpFileDeleteJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitFpFileDeleteJobRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // primaryKeys Field Functions 
    bool hasPrimaryKeys() const { return this->primaryKeys_ != nullptr;};
    void deletePrimaryKeys() { this->primaryKeys_ = nullptr;};
    inline string getPrimaryKeys() const { DARABONBA_PTR_GET_DEFAULT(primaryKeys_, "") };
    inline SubmitFpFileDeleteJobRequest& setPrimaryKeys(string primaryKeys) { DARABONBA_PTR_SET_VALUE(primaryKeys_, primaryKeys) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitFpFileDeleteJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitFpFileDeleteJobRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitFpFileDeleteJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The IDs of the media files that you want to delete. Separate multiple file IDs with commas (,). You can delete up to 200 media files at a time. You can obtain media file IDs from the response parameters of the [ListFpShotFiles](https://help.aliyun.com/document_detail/209266.html) operation.
    shared_ptr<string> fileIds_ {};
    // The ID of the media fingerprint library. You can obtain the library ID from the response parameters of the [CreateFpShotDB](https://help.aliyun.com/document_detail/170149.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> fpDBId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the ApsaraVideo Media Processing (MPS) queue to which the job is submitted. The MPS queue is bound with a notification method. To view the MPS queue ID, log on to the **MPS console** and choose **Global Settings** > **MPS queue and Callback** in the left-side navigation pane.
    shared_ptr<string> pipelineId_ {};
    // The primary keys of the files to be deleted. Separate multiple primary keys with commas (,). You can delete up to 200 primary keys at a time. You can obtain the primary keys of media files from the response parameters of the [ListFpShotFiles](https://help.aliyun.com/document_detail/209266.html) operation.
    // 
    // >  This parameter is available only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
    shared_ptr<string> primaryKeys_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The custom data. The value can contain letters and digits and can be up to 128 bytes in length.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
