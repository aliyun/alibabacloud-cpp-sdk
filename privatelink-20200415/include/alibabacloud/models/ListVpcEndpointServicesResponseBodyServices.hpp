// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServicesResponseBodyServicesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_TO_JSON(MinBandwidth, minBandwidth_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
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
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
      DARABONBA_PTR_FROM_JSON(MinBandwidth, minBandwidth_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    ListVpcEndpointServicesResponseBodyServices() = default ;
    ListVpcEndpointServicesResponseBodyServices(const ListVpcEndpointServicesResponseBodyServices &) = default ;
    ListVpcEndpointServicesResponseBodyServices(ListVpcEndpointServicesResponseBodyServices &&) = default ;
    ListVpcEndpointServicesResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesResponseBodyServices() = default ;
    ListVpcEndpointServicesResponseBodyServices& operator=(const ListVpcEndpointServicesResponseBodyServices &) = default ;
    ListVpcEndpointServicesResponseBodyServices& operator=(ListVpcEndpointServicesResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->connectBandwidth_ == nullptr && return this->createTime_ == nullptr && return this->maxBandwidth_ == nullptr && return this->minBandwidth_ == nullptr
        && return this->payer_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceBusinessStatus_ == nullptr && return this->serviceDescription_ == nullptr
        && return this->serviceDomain_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceResourceType_ == nullptr && return this->serviceStatus_ == nullptr
        && return this->serviceSupportIPv6_ == nullptr && return this->serviceType_ == nullptr && return this->tags_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline ListVpcEndpointServicesResponseBodyServices& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t connectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline ListVpcEndpointServicesResponseBodyServices& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // maxBandwidth Field Functions 
    bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
    void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
    inline int32_t maxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
    inline ListVpcEndpointServicesResponseBodyServices& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


    // minBandwidth Field Functions 
    bool hasMinBandwidth() const { return this->minBandwidth_ != nullptr;};
    void deleteMinBandwidth() { this->minBandwidth_ = nullptr;};
    inline int32_t minBandwidth() const { DARABONBA_PTR_GET_DEFAULT(minBandwidth_, 0) };
    inline ListVpcEndpointServicesResponseBodyServices& setMinBandwidth(int32_t minBandwidth) { DARABONBA_PTR_SET_VALUE(minBandwidth_, minBandwidth) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string payer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string serviceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string serviceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string serviceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListVpcEndpointServicesResponseBodyServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVpcEndpointServicesResponseBodyServicesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVpcEndpointServicesResponseBodyServicesTags>) };
    inline vector<Models::ListVpcEndpointServicesResponseBodyServicesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVpcEndpointServicesResponseBodyServicesTags>) };
    inline ListVpcEndpointServicesResponseBodyServices& setTags(const vector<Models::ListVpcEndpointServicesResponseBodyServicesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcEndpointServicesResponseBodyServices& setTags(vector<Models::ListVpcEndpointServicesResponseBodyServicesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline ListVpcEndpointServicesResponseBodyServices& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Indicates whether endpoint connection requests are automatically accepted. Valid values:
    // 
    // *   **true**: Endpoint connection requests are automatically accepted.
    // *   **false**: Endpoint connection requests are not automatically accepted.
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The default maximum bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> connectBandwidth_ = nullptr;
    // The time when the endpoint service was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The maximum bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxBandwidth_ = nullptr;
    // The minimum bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> minBandwidth_ = nullptr;
    // The payer. Valid values:
    // 
    // *   **Endpoint**: service consumer
    // *   **EndpointService**: service provider
    std::shared_ptr<string> payer_ = nullptr;
    // The region ID of the endpoint service.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The service state of the endpoint service. Valid values:
    // 
    // *   **Normal**: The endpoint service runs as expected.
    // *   **FinancialLocked**: The endpoint service is locked due to overdue payments.
    std::shared_ptr<string> serviceBusinessStatus_ = nullptr;
    // The description of the endpoint service.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // The domain name of the endpoint service.
    std::shared_ptr<string> serviceDomain_ = nullptr;
    // The ID of the endpoint service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: Classic Load Balancer (CLB) instance
    // *   **alb**: Application Load Balancer (ALB) instance
    // *   **nlb**: Network Load Balancer (NLB) instance
    std::shared_ptr<string> serviceResourceType_ = nullptr;
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // Indicates whether the endpoint service supports IPv6. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // The type of the endpoint service.
    // 
    // *   Only **Interface** may be returned. You can specify CLB, ALB, and NLB instances as the service resources of the endpoint service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The tags added to the resource.
    std::shared_ptr<vector<Models::ListVpcEndpointServicesResponseBodyServicesTags>> tags_ = nullptr;
    // Indicates whether zone affinity is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
