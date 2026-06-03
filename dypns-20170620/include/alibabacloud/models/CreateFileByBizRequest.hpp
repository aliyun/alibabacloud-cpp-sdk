// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEBYBIZREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEBYBIZREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateFileByBizRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileByBizRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SaveOssFileName, saveOssFileName_);
      DARABONBA_PTR_TO_JSON(UserViewFileName, userViewFileName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileByBizRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SaveOssFileName, saveOssFileName_);
      DARABONBA_PTR_FROM_JSON(UserViewFileName, userViewFileName_);
    };
    CreateFileByBizRequest() = default ;
    CreateFileByBizRequest(const CreateFileByBizRequest &) = default ;
    CreateFileByBizRequest(CreateFileByBizRequest &&) = default ;
    CreateFileByBizRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileByBizRequest() = default ;
    CreateFileByBizRequest& operator=(const CreateFileByBizRequest &) = default ;
    CreateFileByBizRequest& operator=(CreateFileByBizRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->fileType_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->saveOssFileName_ == nullptr && this->userViewFileName_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateFileByBizRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateFileByBizRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline CreateFileByBizRequest& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFileByBizRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateFileByBizRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFileByBizRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFileByBizRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // saveOssFileName Field Functions 
    bool hasSaveOssFileName() const { return this->saveOssFileName_ != nullptr;};
    void deleteSaveOssFileName() { this->saveOssFileName_ = nullptr;};
    inline string getSaveOssFileName() const { DARABONBA_PTR_GET_DEFAULT(saveOssFileName_, "") };
    inline CreateFileByBizRequest& setSaveOssFileName(string saveOssFileName) { DARABONBA_PTR_SET_VALUE(saveOssFileName_, saveOssFileName) };


    // userViewFileName Field Functions 
    bool hasUserViewFileName() const { return this->userViewFileName_ != nullptr;};
    void deleteUserViewFileName() { this->userViewFileName_ = nullptr;};
    inline string getUserViewFileName() const { DARABONBA_PTR_GET_DEFAULT(userViewFileName_, "") };
    inline CreateFileByBizRequest& setUserViewFileName(string userViewFileName) { DARABONBA_PTR_SET_VALUE(userViewFileName_, userViewFileName) };


  protected:
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    shared_ptr<string> fileType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> saveOssFileName_ {};
    // This parameter is required.
    shared_ptr<string> userViewFileName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
