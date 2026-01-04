// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipName, eipName_);
      DARABONBA_PTR_TO_JSON(ISP, ISP_);
      DARABONBA_PTR_TO_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(SegmentInstanceId, segmentInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipName, eipName_);
      DARABONBA_PTR_FROM_JSON(ISP, ISP_);
      DARABONBA_PTR_FROM_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(SegmentInstanceId, segmentInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEipAddressesRequest() = default ;
    DescribeEipAddressesRequest(const DescribeEipAddressesRequest &) = default ;
    DescribeEipAddressesRequest(DescribeEipAddressesRequest &&) = default ;
    DescribeEipAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesRequest() = default ;
    DescribeEipAddressesRequest& operator=(const DescribeEipAddressesRequest &) = default ;
    DescribeEipAddressesRequest& operator=(DescribeEipAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag. You can specify up to 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
      shared_ptr<string> key_ {};
      // The value of the tag. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
      shared_ptr<string> value_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The filter key used to query resources. Set the value to **CreationStartTime**, which specifies the time when the system started to create the resource.
      shared_ptr<string> key_ {};
      // The filter value used to query resources. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time must be in Coordinated Universal Time (UTC).
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->allocationId_ == nullptr && this->associatedInstanceId_ == nullptr && this->associatedInstanceType_ == nullptr && this->chargeType_ == nullptr && this->dryRun_ == nullptr
        && this->eipAddress_ == nullptr && this->eipName_ == nullptr && this->ISP_ == nullptr && this->includeReservationData_ == nullptr && this->lockReason_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->publicIpAddressPoolId_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityProtectionEnabled_ == nullptr
        && this->segmentInstanceId_ == nullptr && this->serviceManaged_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeEipAddressesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeEipAddressesRequest::Filter>) };
    inline vector<DescribeEipAddressesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<DescribeEipAddressesRequest::Filter>) };
    inline DescribeEipAddressesRequest& setFilter(const vector<DescribeEipAddressesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeEipAddressesRequest& setFilter(vector<DescribeEipAddressesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeEipAddressesRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // associatedInstanceId Field Functions 
    bool hasAssociatedInstanceId() const { return this->associatedInstanceId_ != nullptr;};
    void deleteAssociatedInstanceId() { this->associatedInstanceId_ = nullptr;};
    inline string getAssociatedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceId_, "") };
    inline DescribeEipAddressesRequest& setAssociatedInstanceId(string associatedInstanceId) { DARABONBA_PTR_SET_VALUE(associatedInstanceId_, associatedInstanceId) };


    // associatedInstanceType Field Functions 
    bool hasAssociatedInstanceType() const { return this->associatedInstanceType_ != nullptr;};
    void deleteAssociatedInstanceType() { this->associatedInstanceType_ = nullptr;};
    inline string getAssociatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceType_, "") };
    inline DescribeEipAddressesRequest& setAssociatedInstanceType(string associatedInstanceType) { DARABONBA_PTR_SET_VALUE(associatedInstanceType_, associatedInstanceType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeEipAddressesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeEipAddressesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string getEipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline DescribeEipAddressesRequest& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipName Field Functions 
    bool hasEipName() const { return this->eipName_ != nullptr;};
    void deleteEipName() { this->eipName_ = nullptr;};
    inline string getEipName() const { DARABONBA_PTR_GET_DEFAULT(eipName_, "") };
    inline DescribeEipAddressesRequest& setEipName(string eipName) { DARABONBA_PTR_SET_VALUE(eipName_, eipName) };


    // ISP Field Functions 
    bool hasISP() const { return this->ISP_ != nullptr;};
    void deleteISP() { this->ISP_ = nullptr;};
    inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
    inline DescribeEipAddressesRequest& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


    // includeReservationData Field Functions 
    bool hasIncludeReservationData() const { return this->includeReservationData_ != nullptr;};
    void deleteIncludeReservationData() { this->includeReservationData_ = nullptr;};
    inline bool getIncludeReservationData() const { DARABONBA_PTR_GET_DEFAULT(includeReservationData_, false) };
    inline DescribeEipAddressesRequest& setIncludeReservationData(bool includeReservationData) { DARABONBA_PTR_SET_VALUE(includeReservationData_, includeReservationData) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeEipAddressesRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeEipAddressesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeEipAddressesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipAddressesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipAddressesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string getPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline DescribeEipAddressesRequest& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEipAddressesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEipAddressesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeEipAddressesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeEipAddressesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionEnabled Field Functions 
    bool hasSecurityProtectionEnabled() const { return this->securityProtectionEnabled_ != nullptr;};
    void deleteSecurityProtectionEnabled() { this->securityProtectionEnabled_ = nullptr;};
    inline bool getSecurityProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(securityProtectionEnabled_, false) };
    inline DescribeEipAddressesRequest& setSecurityProtectionEnabled(bool securityProtectionEnabled) { DARABONBA_PTR_SET_VALUE(securityProtectionEnabled_, securityProtectionEnabled) };


    // segmentInstanceId Field Functions 
    bool hasSegmentInstanceId() const { return this->segmentInstanceId_ != nullptr;};
    void deleteSegmentInstanceId() { this->segmentInstanceId_ = nullptr;};
    inline string getSegmentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(segmentInstanceId_, "") };
    inline DescribeEipAddressesRequest& setSegmentInstanceId(string segmentInstanceId) { DARABONBA_PTR_SET_VALUE(segmentInstanceId_, segmentInstanceId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeEipAddressesRequest& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEipAddressesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeEipAddressesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeEipAddressesRequest::Tag>) };
    inline vector<DescribeEipAddressesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeEipAddressesRequest::Tag>) };
    inline DescribeEipAddressesRequest& setTag(const vector<DescribeEipAddressesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEipAddressesRequest& setTag(vector<DescribeEipAddressesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<vector<DescribeEipAddressesRequest::Filter>> filter_ {};
    // The ID of the EIP that you want to query.
    // 
    // You can specify up to 50 EIP IDs. Separate multiple IDs with commas (,).
    // 
    // >  If both **EipAddress** and **AllocationId** are specified, you can specify up to 50 EIP IDs for **AllocationId**, and specify up to 50 EIPs for **EipAddress**.
    shared_ptr<string> allocationId_ {};
    // The ID of the instance associated with the EIP.
    shared_ptr<string> associatedInstanceId_ {};
    // The type of the cloud resource with which you want to associate the EIP. Valid values:
    // 
    // *   **EcsInstance** (default): an Elastic Compute Service (ECS) instance in a virtual private cloud (VPC).
    // *   **SlbInstance**: a CLB instance in a VPC.
    // *   **Nat**: a NAT gateway.
    // *   **HaVip**: an HAVIP.
    // *   **NetworkInterface**: a secondary ENI.
    // *   **IpAddress**: an IP address.
    // 
    // >  Each ECS instance, CLB instance, HAVIP, and IP address can be associated with only one EIP. A NAT gateway can be associated with multiple EIPs. The number of EIPs that you can associate with a secondary ENI depends on the association mode. For more information, see [Associate EIPs with and disassociate EIPs from cloud resources](https://help.aliyun.com/document_detail/72125.html).
    shared_ptr<string> associatedInstanceType_ {};
    // The billing method of the EIP. Valid values:
    // 
    // *   **PostPaid**: pay-as-you-go.
    // *   **PrePaid**: subscription.
    shared_ptr<string> chargeType_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The EIP that you want to query.
    // 
    // You can specify up to 50 EIPs. Separate multiple EIPs with commas (,).
    // 
    // >  If both **EipAddress** and **AllocationId** are specified, you can specify up to 50 EIPs for **EipAddress**, and specify up to 50 EIP IDs for **AllocationId**.
    shared_ptr<string> eipAddress_ {};
    // The name of the EIP.
    // 
    // The name must be 1 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> eipName_ {};
    // The line type. Valid values:
    // 
    // *   **BGP** (default): Border Gateway Protocol (BGP) (Multi-ISP) lines. All regions support BGP (Multi-ISP) EIPs.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines. Only the following regions support BGP (Multi-ISP) Pro lines: China (Hong Kong), Singapore, Japan (Tokyo), Malaysia (Kuala Lumpur), Philippines (Manila), Indonesia (Jakarta), and Thailand (Bangkok).
    // 
    // For more information about BGP (Multi-ISP) and BGP (Multi-ISP) Pro, see the [Line types](https://help.aliyun.com/document_detail/32321.html) section of the "What is EIP?" topic.
    // 
    // If you are allowed to use single-ISP bandwidth, you can also use one of the following values:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    // 
    // If your services are deployed in China East 1 Finance, this parameter is required and you must set the value to **BGP_FinanceCloud**.
    shared_ptr<string> ISP_ {};
    // Specifies whether to return information about pending orders. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> includeReservationData_ {};
    // The reason why the EIP is locked. Valid values:
    // 
    // *   **financial**: The EIP is locked due to overdue payments.
    // *   **security**: The EIP is locked for security reasons.
    shared_ptr<string> lockReason_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to **100**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The IP address pool to which the EIP that you want to query belongs.
    shared_ptr<string> publicIpAddressPoolId_ {};
    // The region ID of the EIP.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the EIP belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to activate Anti-DDoS Pro/Premium. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<bool> securityProtectionEnabled_ {};
    // The ID of the contiguous EIP group.
    shared_ptr<string> segmentInstanceId_ {};
    // Indicates whether the instance is managed. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no.
    // 
    // If you do not specify this parameter, all instances are queried.
    shared_ptr<bool> serviceManaged_ {};
    // The state of the EIP. Valid values:
    // 
    // *   **Associating**
    // *   **Unassociating**
    // *   **InUse**
    // *   **Available**
    // *   **Releasing**
    shared_ptr<string> status_ {};
    // The tags used to filter EIPs.
    shared_ptr<vector<DescribeEipAddressesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
