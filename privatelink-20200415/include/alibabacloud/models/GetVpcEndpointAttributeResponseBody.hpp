// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCENDPOINTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCENDPOINTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class GetVpcEndpointAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndpointBusinessStatus, endpointBusinessStatus_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointDomain, endpointDomain_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Payer, payer_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndpointBusinessStatus, endpointBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointDomain, endpointDomain_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointStatus, endpointStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Payer, payer_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_FROM_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    GetVpcEndpointAttributeResponseBody() = default ;
    GetVpcEndpointAttributeResponseBody(const GetVpcEndpointAttributeResponseBody &) = default ;
    GetVpcEndpointAttributeResponseBody(GetVpcEndpointAttributeResponseBody &&) = default ;
    GetVpcEndpointAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcEndpointAttributeResponseBody() = default ;
    GetVpcEndpointAttributeResponseBody& operator=(const GetVpcEndpointAttributeResponseBody &) = default ;
    GetVpcEndpointAttributeResponseBody& operator=(GetVpcEndpointAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->bandwidth_ == nullptr && return this->connectionStatus_ == nullptr && return this->createTime_ == nullptr && return this->endpointBusinessStatus_ == nullptr && return this->endpointDescription_ == nullptr
        && return this->endpointDomain_ == nullptr && return this->endpointId_ == nullptr && return this->endpointName_ == nullptr && return this->endpointStatus_ == nullptr && return this->endpointType_ == nullptr
        && return this->payer_ == nullptr && return this->policyDocument_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwner_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->vpcId_ == nullptr && return this->zoneAffinityEnabled_ == nullptr
        && return this->zonePrivateIpAddressCount_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetVpcEndpointAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline GetVpcEndpointAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVpcEndpointAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpointBusinessStatus Field Functions 
    bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
    void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
    inline string endpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string endpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointDomain Field Functions 
    bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
    void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
    inline string endpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string payer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline GetVpcEndpointAttributeResponseBody& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetVpcEndpointAttributeResponseBody& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline bool resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, false) };
    inline GetVpcEndpointAttributeResponseBody& setResourceOwner(bool resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetVpcEndpointAttributeResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline GetVpcEndpointAttributeResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zonePrivateIpAddressCount Field Functions 
    bool hasZonePrivateIpAddressCount() const { return this->zonePrivateIpAddressCount_ != nullptr;};
    void deleteZonePrivateIpAddressCount() { this->zonePrivateIpAddressCount_ = nullptr;};
    inline int64_t zonePrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(zonePrivateIpAddressCount_, 0L) };
    inline GetVpcEndpointAttributeResponseBody& setZonePrivateIpAddressCount(int64_t zonePrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(zonePrivateIpAddressCount_, zonePrivateIpAddressCount) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The state of the endpoint connection. Valid values:
    // 
    // *   **Pending**: The connection is being modified.
    // *   **Connecting**: The connection is being established.
    // *   **Connected**: The connection is established.
    // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
    // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
    // *   **Deleting**: The connection is being deleted.
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The time when the endpoint was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The service state of the endpoint. Valid values:
    // 
    // *   **Normal**: The endpoint runs as expected.
    // *   **FinancialLocked**: The endpoint is locked due to overdue payments.
    std::shared_ptr<string> endpointBusinessStatus_ = nullptr;
    // The description of the endpoint.
    std::shared_ptr<string> endpointDescription_ = nullptr;
    // The domain name of the endpoint.
    std::shared_ptr<string> endpointDomain_ = nullptr;
    // The endpoint ID.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The name of the endpoint.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The state of the endpoint. Valid values:
    // 
    // *   **Creating**: The endpoint is being created.
    // *   **Active**: The endpoint is available.
    // *   **Pending**: The endpoint is being modified.
    // *   **Deleting**: The endpoint is being deleted.
    std::shared_ptr<string> endpointStatus_ = nullptr;
    // The type of the endpoint.
    // 
    // **Interface** is returned. The value indicates the interface endpoint with which the Classic Load Balancer (CLB) instances are associated.
    std::shared_ptr<string> endpointType_ = nullptr;
    // The payer. Valid values:
    // 
    // *   **Endpoint**: the service consumer.
    // *   **EndpointService**: the service provider.
    std::shared_ptr<string> payer_ = nullptr;
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The region ID of the endpoint.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the endpoint and the endpoint service belong to the same Alibaba Cloud account. Valid values:
    // 
    // *   **true**: The endpoint and the endpoint service belong to the same Alibaba Cloud account.
    // *   **false**: The endpoint and the endpoint service do not belong to the same Alibaba Cloud account.
    std::shared_ptr<bool> resourceOwner_ = nullptr;
    // The ID of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
    // The number of private IP addresses that are assigned to an elastic network interface (ENI) in each zone. Only **1** is returned.
    std::shared_ptr<int64_t> zonePrivateIpAddressCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
