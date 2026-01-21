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
      DARABONBA_PTR_TO_JSON(SupportedRegionSet, supportedRegionSet_);
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
      DARABONBA_PTR_FROM_JSON(SupportedRegionSet, supportedRegionSet_);
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
    class SupportedRegionSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SupportedRegionSet& obj) { 
        DARABONBA_PTR_TO_JSON(RegionBusinessStatus, regionBusinessStatus_);
        DARABONBA_PTR_TO_JSON(RegionServiceStatus, regionServiceStatus_);
        DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, SupportedRegionSet& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionBusinessStatus, regionBusinessStatus_);
        DARABONBA_PTR_FROM_JSON(RegionServiceStatus, regionServiceStatus_);
        DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
      };
      SupportedRegionSet() = default ;
      SupportedRegionSet(const SupportedRegionSet &) = default ;
      SupportedRegionSet(SupportedRegionSet &&) = default ;
      SupportedRegionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SupportedRegionSet() = default ;
      SupportedRegionSet& operator=(const SupportedRegionSet &) = default ;
      SupportedRegionSet& operator=(SupportedRegionSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionBusinessStatus_ == nullptr
        && this->regionServiceStatus_ == nullptr && this->serviceRegionId_ == nullptr; };
      // regionBusinessStatus Field Functions 
      bool hasRegionBusinessStatus() const { return this->regionBusinessStatus_ != nullptr;};
      void deleteRegionBusinessStatus() { this->regionBusinessStatus_ = nullptr;};
      inline string getRegionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(regionBusinessStatus_, "") };
      inline SupportedRegionSet& setRegionBusinessStatus(string regionBusinessStatus) { DARABONBA_PTR_SET_VALUE(regionBusinessStatus_, regionBusinessStatus) };


      // regionServiceStatus Field Functions 
      bool hasRegionServiceStatus() const { return this->regionServiceStatus_ != nullptr;};
      void deleteRegionServiceStatus() { this->regionServiceStatus_ = nullptr;};
      inline string getRegionServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(regionServiceStatus_, "") };
      inline SupportedRegionSet& setRegionServiceStatus(string regionServiceStatus) { DARABONBA_PTR_SET_VALUE(regionServiceStatus_, regionServiceStatus) };


      // serviceRegionId Field Functions 
      bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
      void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
      inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
      inline SupportedRegionSet& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    protected:
      shared_ptr<string> regionBusinessStatus_ {};
      shared_ptr<string> regionServiceStatus_ {};
      shared_ptr<string> serviceRegionId_ {};
    };

    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->autoAcceptEnabled_ == nullptr && this->connectBandwidth_ == nullptr && this->createTime_ == nullptr && this->maxBandwidth_ == nullptr && this->minBandwidth_ == nullptr
        && this->payer_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceBusinessStatus_ == nullptr
        && this->serviceDescription_ == nullptr && this->serviceDomain_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceResourceType_ == nullptr
        && this->serviceStatus_ == nullptr && this->serviceSupportIPv6_ == nullptr && this->serviceType_ == nullptr && this->supportedRegionSet_ == nullptr && this->zoneAffinityEnabled_ == nullptr
        && this->zones_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool getAutoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t getConnectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline int32_t getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // minBandwidth Field Functions 
    bool hasMinBandwidth() const { return this->minBandwidth_ != nullptr;};
    void deleteMinBandwidth() { this->minBandwidth_ = nullptr;};
    inline int32_t getMinBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minBandwidth_, 0) };
    inline GetVpcEndpointServiceAttributeResponseBody& setMinBandwidth(int32_t minBandwidth) { DARABONBA_PTR_SET_VALUE(minBandwidth_, minBandwidth) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string getPayer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string getServiceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string getServiceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string getServiceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool getServiceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetVpcEndpointServiceAttributeResponseBody& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // supportedRegionSet Field Functions 
    bool hasSupportedRegionSet() const { return this->supportedRegionSet_ != nullptr;};
    void deleteSupportedRegionSet() { this->supportedRegionSet_ = nullptr;};
    inline const vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet> & getSupportedRegionSet() const { DARABONBA_PTR_GET_CONST(supportedRegionSet_, vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet>) };
    inline vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet> getSupportedRegionSet() { DARABONBA_PTR_GET(supportedRegionSet_, vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet>) };
    inline GetVpcEndpointServiceAttributeResponseBody& setSupportedRegionSet(const vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet> & supportedRegionSet) { DARABONBA_PTR_SET_VALUE(supportedRegionSet_, supportedRegionSet) };
    inline GetVpcEndpointServiceAttributeResponseBody& setSupportedRegionSet(vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet> && supportedRegionSet) { DARABONBA_PTR_SET_RVALUE(supportedRegionSet_, supportedRegionSet) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline GetVpcEndpointServiceAttributeResponseBody& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // Indicates whether endpoint connection requests are automatically accepted. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoAcceptEnabled_ {};
    // The default maximum bandwidth of the endpoint connection. Unit: Mbit/s. Valid values: **100** to 10240.
    shared_ptr<int32_t> connectBandwidth_ {};
    // The time when the endpoint service was created.
    shared_ptr<string> createTime_ {};
    // The maximum bandwidth of the endpoint connection. Unit: Mbit/s.
    shared_ptr<int32_t> maxBandwidth_ {};
    // The minimum bandwidth of the endpoint connection. Unit: Mbit/s.
    shared_ptr<int32_t> minBandwidth_ {};
    // The payer of the endpoint service. Valid values:
    // 
    // *   **Endpoint**: the service consumer.
    // *   **EndpointService**: the service provider.
    shared_ptr<string> payer_ {};
    // The region ID of the endpoint service.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The service status of the endpoint service. Valid values:
    // 
    // *   **Normal**: The endpoint service runs as expected.
    // *   **FinancialLocked**: The endpoint service is locked due to overdue payments.
    shared_ptr<string> serviceBusinessStatus_ {};
    // The description of the endpoint service.
    shared_ptr<string> serviceDescription_ {};
    // The domain name of the endpoint service.
    shared_ptr<string> serviceDomain_ {};
    // The endpoint service ID.
    shared_ptr<string> serviceId_ {};
    // The name of the endpoint service.
    shared_ptr<string> serviceName_ {};
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: a CLB instance.
    // *   **alb**: an ALB instance.
    shared_ptr<string> serviceResourceType_ {};
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted.
    // *   **Inactive**: The endpoint service is unavailable.
    shared_ptr<string> serviceStatus_ {};
    // Specifies whether the endpoint service supports IPv6. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> serviceSupportIPv6_ {};
    // The type of the endpoint.
    // 
    // Only **Interface** is returned. The value indicates the interface endpoint. Then, you can specify ALB and CLB instances as service resources for the endpoint service.
    shared_ptr<string> serviceType_ {};
    shared_ptr<vector<GetVpcEndpointServiceAttributeResponseBody::SupportedRegionSet>> supportedRegionSet_ {};
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    shared_ptr<bool> zoneAffinityEnabled_ {};
    // The zones to which the service resources belong.
    shared_ptr<vector<string>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
