// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInTransferRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInTransferRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallInCaller, callInCaller_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInTransferRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInCaller, callInCaller_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(QueryDate, queryDate_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryCallInTransferRecordRequest() = default ;
    QueryCallInTransferRecordRequest(const QueryCallInTransferRecordRequest &) = default ;
    QueryCallInTransferRecordRequest(QueryCallInTransferRecordRequest &&) = default ;
    QueryCallInTransferRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInTransferRecordRequest() = default ;
    QueryCallInTransferRecordRequest& operator=(const QueryCallInTransferRecordRequest &) = default ;
    QueryCallInTransferRecordRequest& operator=(QueryCallInTransferRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callInCaller_ == nullptr
        && this->ownerId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->phoneNumber_ == nullptr && this->queryDate_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // callInCaller Field Functions 
    bool hasCallInCaller() const { return this->callInCaller_ != nullptr;};
    void deleteCallInCaller() { this->callInCaller_ = nullptr;};
    inline string getCallInCaller() const { DARABONBA_PTR_GET_DEFAULT(callInCaller_, "") };
    inline QueryCallInTransferRecordRequest& setCallInCaller(string callInCaller) { DARABONBA_PTR_SET_VALUE(callInCaller_, callInCaller) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCallInTransferRecordRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QueryCallInTransferRecordRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryCallInTransferRecordRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryCallInTransferRecordRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // queryDate Field Functions 
    bool hasQueryDate() const { return this->queryDate_ != nullptr;};
    void deleteQueryDate() { this->queryDate_ = nullptr;};
    inline string getQueryDate() const { DARABONBA_PTR_GET_DEFAULT(queryDate_, "") };
    inline QueryCallInTransferRecordRequest& setQueryDate(string queryDate) { DARABONBA_PTR_SET_VALUE(queryDate_, queryDate) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryCallInTransferRecordRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryCallInTransferRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The calling number of the inbound call.
    shared_ptr<string> callInCaller_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: **1**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Valid values: 1 to 10.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The phone number to which a call is transferred.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
    // The time at which call transfer records are queried, in the YYYY-MM-DD hh:mm:ss format.
    // 
    // > The query result is all the call transfer records of the specified day.
    // 
    // This parameter is required.
    shared_ptr<string> queryDate_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
