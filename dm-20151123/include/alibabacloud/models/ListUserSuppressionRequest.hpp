// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSUPPRESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ListUserSuppressionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserSuppressionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(EndBounceTime, endBounceTime_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartBounceTime, startBounceTime_);
      DARABONBA_PTR_TO_JSON(StartCreateTime, startCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserSuppressionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(EndBounceTime, endBounceTime_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartBounceTime, startBounceTime_);
      DARABONBA_PTR_FROM_JSON(StartCreateTime, startCreateTime_);
    };
    ListUserSuppressionRequest() = default ;
    ListUserSuppressionRequest(const ListUserSuppressionRequest &) = default ;
    ListUserSuppressionRequest(ListUserSuppressionRequest &&) = default ;
    ListUserSuppressionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserSuppressionRequest() = default ;
    ListUserSuppressionRequest& operator=(const ListUserSuppressionRequest &) = default ;
    ListUserSuppressionRequest& operator=(ListUserSuppressionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->endBounceTime_ != nullptr && this->endCreateTime_ != nullptr && this->ownerId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->startBounceTime_ != nullptr && this->startCreateTime_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListUserSuppressionRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // endBounceTime Field Functions 
    bool hasEndBounceTime() const { return this->endBounceTime_ != nullptr;};
    void deleteEndBounceTime() { this->endBounceTime_ = nullptr;};
    inline int32_t endBounceTime() const { DARABONBA_PTR_GET_DEFAULT(endBounceTime_, 0) };
    inline ListUserSuppressionRequest& setEndBounceTime(int32_t endBounceTime) { DARABONBA_PTR_SET_VALUE(endBounceTime_, endBounceTime) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int32_t endCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0) };
    inline ListUserSuppressionRequest& setEndCreateTime(int32_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListUserSuppressionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListUserSuppressionRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserSuppressionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListUserSuppressionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListUserSuppressionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startBounceTime Field Functions 
    bool hasStartBounceTime() const { return this->startBounceTime_ != nullptr;};
    void deleteStartBounceTime() { this->startBounceTime_ = nullptr;};
    inline int32_t startBounceTime() const { DARABONBA_PTR_GET_DEFAULT(startBounceTime_, 0) };
    inline ListUserSuppressionRequest& setStartBounceTime(int32_t startBounceTime) { DARABONBA_PTR_SET_VALUE(startBounceTime_, startBounceTime) };


    // startCreateTime Field Functions 
    bool hasStartCreateTime() const { return this->startCreateTime_ != nullptr;};
    void deleteStartCreateTime() { this->startCreateTime_ = nullptr;};
    inline int32_t startCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startCreateTime_, 0) };
    inline ListUserSuppressionRequest& setStartCreateTime(int32_t startCreateTime) { DARABONBA_PTR_SET_VALUE(startCreateTime_, startCreateTime) };


  protected:
    // Email address or domain name
    std::shared_ptr<string> address_ = nullptr;
    // End time of the last bounce hit, timestamp, accurate to the second. The span between start and end times cannot exceed 7 days.
    std::shared_ptr<int32_t> endBounceTime_ = nullptr;
    // End creation time, timestamp, accurate to the second. The span between start and end times cannot exceed 7 days.
    std::shared_ptr<int32_t> endCreateTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Current page number
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Start time of the last bounce hit, timestamp, accurate to the second.
    std::shared_ptr<int32_t> startBounceTime_ = nullptr;
    // Start creation time, timestamp, accurate to the second.
    std::shared_ptr<int32_t> startCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
