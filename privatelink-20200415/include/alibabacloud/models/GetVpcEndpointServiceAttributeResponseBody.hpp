// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCENDPOINTSERVICEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCENDPOINTSERVICEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class GetVpcEndpointServiceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcEndpointServiceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(MinBandwidth, minBandwidth_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcEndpointServiceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(MinBandwidth, minBandwidth_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    GetVpcEndpointServiceAttributeResponseBody() = default ;
    GetVpcEndpointServiceAttributeResponseBody(const GetVpcEndpointServiceAttributeResponseBody &) = default ;
    GetVpcEndpointServiceAttributeResponseBody(GetVpcEndpointServiceAttributeResponseBody &&) = default ;
    GetVpcEndpointServiceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcEndpointServiceAttributeResponseBody() = default ;
    GetVpcEndpointServiceAttributeResponseBody& operator=(const GetVpcEndpointServiceAttributeResponseBody &) = default ;
    GetVpcEndpointServiceAttributeResponseBody& operator=(GetVpcEndpointServiceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->connectBandwidth_ == nullptr && return this->createTime_ == nullptr && return this->maxBandwidth_ == nullptr && return this->minBandwidth_ == nullptr
        && return this->payer_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceBusinessStatus_ == nullptr
        && return this->serviceDescription_ == nullptr && return this->serviceDomain_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceResourceType_ == nullptr
        && return this->serviceStatus_ == nullptr && return this->serviceSupportIPv6_ == nullptr && return this->serviceType_ == nullptr && return this->zoneAffinityEnabled_ == nullptr && return this->zones_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t connectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline int32_t maxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // minBandwidth Field Functions 
    bool hasMinBandwidth() const { return this->minBandwidth_ != nullptr;};
    void deleteMinBandwidth() { this->minBandwidth_ = nullptr;};
    inline int32_t minBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setMinBandwidth(int32_t minBandwidth) { DARABONBA_PTR_SET_VALUE(minBandwidth_, minBandwidth) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string payer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string serviceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string serviceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string serviceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Indicates whether endpoint connection requests are automatically accepted. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The default maximum bandwidth of the endpoint connection. Unit: Mbit/s. Valid values: **100** to 10240.
    std::shared_ptr<int32_t> connectBandwidth_ = nullptr;
    // The time when the endpoint service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The maximum bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxBandwidth_ = nullptr;
    // The minimum bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> minBandwidth_ = nullptr;
    // The payer of the endpoint service. Valid values:
    // 
    // *   **Endpoint**: the service consumer.
    // *   **EndpointService**: the service provider.
    std::shared_ptr<string> payer_ = nullptr;
    // The region ID of the endpoint service.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The service status of the endpoint service. Valid values:
    // 
    // *   **Normal**: The endpoint service runs as expected.
    // *   **FinancialLocked**: The endpoint service is locked due to overdue payments.
    std::shared_ptr<string> serviceBusinessStatus_ = nullptr;
    // The description of the endpoint service.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // The domain name of the endpoint service.
    std::shared_ptr<string> serviceDomain_ = nullptr;
    // The endpoint service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: a CLB instance.
    // *   **alb**: an ALB instance.
    std::shared_ptr<string> serviceResourceType_ = nullptr;
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted.
    // *   **Inactive**: The endpoint service is unavailable.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // Specifies whether the endpoint service supports IPv6. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // The type of the endpoint.
    // 
    // Only **Interface** is returned. The value indicates the interface endpoint. Then, you can specify ALB and CLB instances as service resources for the endpoint service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
    // The zones to which the service resources belong.
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
