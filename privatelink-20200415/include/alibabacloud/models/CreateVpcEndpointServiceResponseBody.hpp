// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTSERVICERESPONSEBODY_HPP_
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
      DARABONBA_PTR_TO_JSON(SupportedRegionSet, supportedRegionSet_);
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
      DARABONBA_PTR_FROM_JSON(SupportedRegionSet, supportedRegionSet_);
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
        && this->autoAcceptEnabled_ == nullptr && this->createTime_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceBusinessStatus_ == nullptr
        && this->serviceDescription_ == nullptr && this->serviceDomain_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceStatus_ == nullptr
        && this->serviceSupportIPv6_ == nullptr && this->supportedRegionSet_ == nullptr && this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointServiceResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool getAutoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline CreateVpcEndpointServiceResponseBody& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateVpcEndpointServiceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceBusinessStatus Field Functions 
    bool hasServiceBusinessStatus() const { return this->serviceBusinessStatus_ != nullptr;};
    void deleteServiceBusinessStatus() { this->serviceBusinessStatus_ = nullptr;};
    inline string getServiceBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceBusinessStatus_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceBusinessStatus(string serviceBusinessStatus) { DARABONBA_PTR_SET_VALUE(serviceBusinessStatus_, serviceBusinessStatus) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceDomain Field Functions 
    bool hasServiceDomain() const { return this->serviceDomain_ != nullptr;};
    void deleteServiceDomain() { this->serviceDomain_ = nullptr;};
    inline string getServiceDomain() const { DARABONBA_PTR_GET_DEFAULT(serviceDomain_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceDomain(string serviceDomain) { DARABONBA_PTR_SET_VALUE(serviceDomain_, serviceDomain) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline CreateVpcEndpointServiceResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool getServiceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline CreateVpcEndpointServiceResponseBody& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // supportedRegionSet Field Functions 
    bool hasSupportedRegionSet() const { return this->supportedRegionSet_ != nullptr;};
    void deleteSupportedRegionSet() { this->supportedRegionSet_ = nullptr;};
    inline const vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet> & getSupportedRegionSet() const { DARABONBA_PTR_GET_CONST(supportedRegionSet_, vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet>) };
    inline vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet> getSupportedRegionSet() { DARABONBA_PTR_GET(supportedRegionSet_, vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet>) };
    inline CreateVpcEndpointServiceResponseBody& setSupportedRegionSet(const vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet> & supportedRegionSet) { DARABONBA_PTR_SET_VALUE(supportedRegionSet_, supportedRegionSet) };
    inline CreateVpcEndpointServiceResponseBody& setSupportedRegionSet(vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet> && supportedRegionSet) { DARABONBA_PTR_SET_RVALUE(supportedRegionSet_, supportedRegionSet) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointServiceResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // Indicates whether the endpoint service automatically accepts endpoint connection requests. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoAcceptEnabled_ {};
    // The time when the endpoint service was created.
    shared_ptr<string> createTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The service state of the endpoint service. Valid values:
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
    // The state of the endpoint service. Valid values:
    // 
    // *   **Creating**: The endpoint service is being created.
    // *   **Pending**: The endpoint service is being modified.
    // *   **Active**: The endpoint service is available.
    // *   **Deleting**: The endpoint service is being deleted.
    shared_ptr<string> serviceStatus_ {};
    // Indicates whether IPv6 was enabled for the endpoint service. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> serviceSupportIPv6_ {};
    shared_ptr<vector<CreateVpcEndpointServiceResponseBody::SupportedRegionSet>> supportedRegionSet_ {};
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> zoneAffinityEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
