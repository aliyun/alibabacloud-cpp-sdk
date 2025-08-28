// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGlobalAccelerationInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalAccelerationInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_TO_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalAccelerationInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGlobalAccelerationInstancesRequest() = default ;
    DescribeGlobalAccelerationInstancesRequest(const DescribeGlobalAccelerationInstancesRequest &) = default ;
    DescribeGlobalAccelerationInstancesRequest(DescribeGlobalAccelerationInstancesRequest &&) = default ;
    DescribeGlobalAccelerationInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalAccelerationInstancesRequest() = default ;
    DescribeGlobalAccelerationInstancesRequest& operator=(const DescribeGlobalAccelerationInstancesRequest &) = default ;
    DescribeGlobalAccelerationInstancesRequest& operator=(DescribeGlobalAccelerationInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthType_ != nullptr
        && this->globalAccelerationInstanceId_ != nullptr && this->includeReservationData_ != nullptr && this->ipAddress_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->serverId_ != nullptr && this->serviceLocation_ != nullptr && this->status_ != nullptr; };
    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string bandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // globalAccelerationInstanceId Field Functions 
    bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
    void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
    inline string globalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


    // includeReservationData Field Functions 
    bool hasIncludeReservationData() const { return this->includeReservationData_ != nullptr;};
    void deleteIncludeReservationData() { this->includeReservationData_ = nullptr;};
    inline bool includeReservationData() const { DARABONBA_PTR_GET_DEFAULT(includeReservationData_, false) };
    inline DescribeGlobalAccelerationInstancesRequest& setIncludeReservationData(bool includeReservationData) { DARABONBA_PTR_SET_VALUE(includeReservationData_, includeReservationData) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeGlobalAccelerationInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalAccelerationInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalAccelerationInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeGlobalAccelerationInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serviceLocation Field Functions 
    bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
    void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
    inline string serviceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGlobalAccelerationInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The bandwidth type of the GA instance. Valid values:
    // 
    // *   **Sharing**
    // *   **Exclusive** (default)
    std::shared_ptr<string> bandwidthType_ = nullptr;
    // The ID of the GA instance.
    std::shared_ptr<string> globalAccelerationInstanceId_ = nullptr;
    // Specifies whether to return information about pending orders. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> includeReservationData_ = nullptr;
    // The public IP address of the GA instance.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The name of the GA instance.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: **100**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the GA instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the backend service instance.
    std::shared_ptr<string> serverId_ = nullptr;
    // The region of the backend service. Valid values:
    // 
    // *   **china-mainland**
    // *   **north-america**
    // *   **asia-pacific**
    // *   **europe**
    std::shared_ptr<string> serviceLocation_ = nullptr;
    // The status of the GA instance. Valid values:
    // 
    // *   **Available**
    // *   **Inuse**
    // *   **Associating**
    // *   **Unassociating**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
