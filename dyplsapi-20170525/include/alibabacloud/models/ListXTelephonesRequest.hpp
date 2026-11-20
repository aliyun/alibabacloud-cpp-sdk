// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTXTELEPHONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTXTELEPHONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class ListXTelephonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListXTelephonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListXTelephonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListXTelephonesRequest() = default ;
    ListXTelephonesRequest(const ListXTelephonesRequest &) = default ;
    ListXTelephonesRequest(ListXTelephonesRequest &&) = default ;
    ListXTelephonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListXTelephonesRequest() = default ;
    ListXTelephonesRequest& operator=(const ListXTelephonesRequest &) = default ;
    ListXTelephonesRequest& operator=(ListXTelephonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerParentId_ == nullptr
        && this->customerPoolKey_ == nullptr && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->reqId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t getCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline ListXTelephonesRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string getCustomerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline ListXTelephonesRequest& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListXTelephonesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListXTelephonesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListXTelephonesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline ListXTelephonesRequest& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListXTelephonesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListXTelephonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The customer UID. This parameter is automatically obtained by the system and does not need to be specified.
    shared_ptr<int64_t> callerParentId_ {};
    // The number pool key.
    shared_ptr<string> customerPoolKey_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number for the paged query. Paging starts from 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request deduplication ID. The maximum length is 20 characters. Ensure the atomicity of the request ID.
    // 
    // This parameter is required.
    shared_ptr<string> reqId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
