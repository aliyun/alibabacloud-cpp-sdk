// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListHotlineTransferRegisterFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineTransferRegisterFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineTransferRegisterFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListHotlineTransferRegisterFileRequest() = default ;
    ListHotlineTransferRegisterFileRequest(const ListHotlineTransferRegisterFileRequest &) = default ;
    ListHotlineTransferRegisterFileRequest(ListHotlineTransferRegisterFileRequest &&) = default ;
    ListHotlineTransferRegisterFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineTransferRegisterFileRequest() = default ;
    ListHotlineTransferRegisterFileRequest& operator=(const ListHotlineTransferRegisterFileRequest &) = default ;
    ListHotlineTransferRegisterFileRequest& operator=(ListHotlineTransferRegisterFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotlineNumber_ != nullptr
        && this->ownerId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->qualificationId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline ListHotlineTransferRegisterFileRequest& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListHotlineTransferRegisterFileRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListHotlineTransferRegisterFileRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHotlineTransferRegisterFileRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline ListHotlineTransferRegisterFileRequest& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListHotlineTransferRegisterFileRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListHotlineTransferRegisterFileRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The China 400 number.
    // 
    // This parameter is required.
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 1 to 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The qualification ID. You can call the [GetHotlineQualificationByOrder](https://help.aliyun.com/document_detail/393548.html) operation to obtain the qualification ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> qualificationId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
