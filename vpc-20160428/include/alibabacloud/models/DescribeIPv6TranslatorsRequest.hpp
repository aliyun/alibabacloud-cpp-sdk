// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
      DARABONBA_PTR_TO_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateIpv4Addr, allocateIpv4Addr_);
      DARABONBA_PTR_FROM_JSON(AllocateIpv6Addr, allocateIpv6Addr_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorId, ipv6TranslatorId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIPv6TranslatorsRequest() = default ;
    DescribeIPv6TranslatorsRequest(const DescribeIPv6TranslatorsRequest &) = default ;
    DescribeIPv6TranslatorsRequest(DescribeIPv6TranslatorsRequest &&) = default ;
    DescribeIPv6TranslatorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorsRequest() = default ;
    DescribeIPv6TranslatorsRequest& operator=(const DescribeIPv6TranslatorsRequest &) = default ;
    DescribeIPv6TranslatorsRequest& operator=(DescribeIPv6TranslatorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateIpv4Addr_ == nullptr
        && this->allocateIpv6Addr_ == nullptr && this->businessStatus_ == nullptr && this->ipv6TranslatorId_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr; };
    // allocateIpv4Addr Field Functions 
    bool hasAllocateIpv4Addr() const { return this->allocateIpv4Addr_ != nullptr;};
    void deleteAllocateIpv4Addr() { this->allocateIpv4Addr_ = nullptr;};
    inline string getAllocateIpv4Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv4Addr_, "") };
    inline DescribeIPv6TranslatorsRequest& setAllocateIpv4Addr(string allocateIpv4Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv4Addr_, allocateIpv4Addr) };


    // allocateIpv6Addr Field Functions 
    bool hasAllocateIpv6Addr() const { return this->allocateIpv6Addr_ != nullptr;};
    void deleteAllocateIpv6Addr() { this->allocateIpv6Addr_ = nullptr;};
    inline string getAllocateIpv6Addr() const { DARABONBA_PTR_GET_DEFAULT(allocateIpv6Addr_, "") };
    inline DescribeIPv6TranslatorsRequest& setAllocateIpv6Addr(string allocateIpv6Addr) { DARABONBA_PTR_SET_VALUE(allocateIpv6Addr_, allocateIpv6Addr) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeIPv6TranslatorsRequest& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // ipv6TranslatorId Field Functions 
    bool hasIpv6TranslatorId() const { return this->ipv6TranslatorId_ != nullptr;};
    void deleteIpv6TranslatorId() { this->ipv6TranslatorId_ = nullptr;};
    inline string getIpv6TranslatorId() const { DARABONBA_PTR_GET_DEFAULT(ipv6TranslatorId_, "") };
    inline DescribeIPv6TranslatorsRequest& setIpv6TranslatorId(string ipv6TranslatorId) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorId_, ipv6TranslatorId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIPv6TranslatorsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeIPv6TranslatorsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeIPv6TranslatorsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeIPv6TranslatorsRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeIPv6TranslatorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeIPv6TranslatorsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeIPv6TranslatorsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeIPv6TranslatorsRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIPv6TranslatorsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IPv4 address allocated to the IPv6 Translation Service instance.
    shared_ptr<string> allocateIpv4Addr_ {};
    // The IPv6 address allocated to the IPv6 Translation Service instance.
    shared_ptr<string> allocateIpv6Addr_ {};
    // The business status of the IPv6 Translation Service instance. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    shared_ptr<string> businessStatus_ {};
    // The ID of the IPv6 Translation Service instance.
    shared_ptr<string> ipv6TranslatorId_ {};
    // The name of the IPv6 Translation Service instance.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The billing method of the IPv6 Translation Service instance. Valid values:
    // 
    // *   **Prepay**: subscription
    // *   **Postpay**: pay-as-you-go
    shared_ptr<string> payType_ {};
    // The region of the IPv6 Translation Service instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The specification of the IPv6 Translation Service instance. Set the value to **small**.
    shared_ptr<string> spec_ {};
    // The status of the IPv6 Translation Service instance. Valid values:
    // 
    // *   **init**
    // *   **provisioning**
    // *   **active**
    // *   **updating**
    // *   **upgrading**
    // *   **deleting**
    // *   **deleted**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
