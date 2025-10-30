// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceBusinessStatus, serviceBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceDomain, serviceDomain_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    CreateVpcEndpointServiceResponseBody() = default ;
    CreateVpcEndpointServiceResponseBody(const CreateVpcEndpointServiceResponseBody &) = default ;
    CreateVpcEndpointServiceResponseBody(CreateVpcEndpointServiceResponseBody &&) = default ;
    CreateVpcEndpointServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointServiceResponseBody() = default ;
    CreateVpcEndpointServiceResponseBody& operator=(const CreateVpcEndpointServiceResponseBody &) = default ;
    CreateVpcEndpointServiceResponseBody& operator=(CreateVpcEndpointServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->createTime_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceBusinessStatus_ == nullptr
        && return this->serviceDescription_ == nullptr && return this->serviceDomain_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceStatus_ == nullptr
        && return this->serviceSupportIPv6_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointServiceResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline CreateVpcEndpointServiceResponseBody& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateVpcEndpointServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string serviceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string serviceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline CreateVpcEndpointServiceResponseBody& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointServiceResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Indicates whether the endpoint service automatically accepts endpoint connection requests. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The time when the endpoint service was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
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
    // The endpoint service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // Indicates whether IPv6 was enabled for the endpoint service. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
