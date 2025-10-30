// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODYSERVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICESBYENDUSERRESPONSEBODYSERVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServicesByEndUserResponseBodyServicesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServicesByEndUserResponseBodyServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServicesByEndUserResponseBodyServices& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServicesByEndUserResponseBodyServices& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceResourceType, serviceResourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListVpcEndpointServicesByEndUserResponseBodyServices() = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(const ListVpcEndpointServicesByEndUserResponseBodyServices &) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(ListVpcEndpointServicesByEndUserResponseBodyServices &&) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServicesByEndUserResponseBodyServices() = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices& operator=(const ListVpcEndpointServicesByEndUserResponseBodyServices &) = default ;
    ListVpcEndpointServicesByEndUserResponseBodyServices& operator=(ListVpcEndpointServicesByEndUserResponseBodyServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->payer_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceDomain_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr
        && return this->serviceResourceType_ == nullptr && return this->serviceSupportIPv6_ == nullptr && return this->serviceType_ == nullptr && return this->tags_ == nullptr && return this->zoneAffinityEnabled_ == nullptr
        && return this->zones_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string payer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string serviceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceResourceType Field Functions 
    bool hasServiceResourceType() const { return this->serviceResourceType_ != nullptr;};
    void deleteServiceResourceType() { this->serviceResourceType_ = nullptr;};
    inline string serviceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceResourceType_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceResourceType(string serviceResourceType) { DARABONBA_PTR_SET_VALUE(serviceResourceType_, serviceResourceType) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags>) };
    inline vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags>) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setTags(const vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setTags(vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListVpcEndpointServicesByEndUserResponseBodyServices& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The payer. Valid values:
    // 
    // *   **Endpoint**: the service consumer
    // *   **EndpointService**: the service provider
    std::shared_ptr<string> payer_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The domain name of the endpoint service that can be associated with the endpoint.
    std::shared_ptr<string> serviceDomain_ = nullptr;
    // The ID of the endpoint service that can be associated with the endpoint.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service that can be associated with the endpoint.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service resource. Valid values:
    // 
    // *   **slb**: Classic Load Balancer (CLB) instance
    // *   **alb**: Application Load Balancer (ALB) instance
    // *   **nlb**: Network Load Balancer (NLB) instance
    std::shared_ptr<string> serviceResourceType_ = nullptr;
    // Indicates whether IPv6 is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // The type of the endpoint service.
    // 
    // Only **Interface** is returned, which indicates an interface endpoint. You can specify **CLB** and **ALB** instances as service resources.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<Models::ListVpcEndpointServicesByEndUserResponseBodyServicesTags>> tags_ = nullptr;
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
    // The zones of the endpoint service that can be associated with the endpoint.
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
