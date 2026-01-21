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
      DARABONBA_PTR_TO_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
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
      DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
      DARABONBA_PTR_TO_JSON(ZonePrivateIpAddressCount, zonePrivateIpAddressCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcEndpointAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
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
      DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
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
        && this->bandwidth_ == nullptr && this->connectionStatus_ == nullptr && this->createTime_ == nullptr && this->crossRegionBandwidth_ == nullptr && this->endpointBusinessStatus_ == nullptr
        && this->endpointDescription_ == nullptr && this->endpointDomain_ == nullptr && this->endpointId_ == nullptr && this->endpointName_ == nullptr && this->endpointStatus_ == nullptr
        && this->endpointType_ == nullptr && this->payer_ == nullptr && this->policyDocument_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwner_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->serviceRegionId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneAffinityEnabled_ == nullptr && this->zonePrivateIpAddressCount_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline GetVpcEndpointAttributeResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline GetVpcEndpointAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVpcEndpointAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossRegionBandwidth Field Functions 
    bool hasCrossRegionBandwidth() const { return this->crossRegionBandwidth_ != nullptr;};
    void deleteCrossRegionBandwidth() { this->crossRegionBandwidth_ = nullptr;};
    inline int32_t getCrossRegionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(crossRegionBandwidth_, 0) };
    inline GetVpcEndpointAttributeResponseBody& setCrossRegionBandwidth(int32_t crossRegionBandwidth) { DARABONBA_PTR_SET_VALUE(crossRegionBandwidth_, crossRegionBandwidth) };


    // endpointBusinessStatus Field Functions 
    bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
    void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
    inline string getEndpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointDomain Field Functions 
    bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
    void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
    inline string getEndpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline GetVpcEndpointAttributeResponseBody& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // payer Field Functions 
    bool hasPayer() const { return this->payer_ != nullptr;};
    void deletePayer() { this->payer_ = nullptr;};
    inline string getPayer() const { DARABONBA_PTR_GET_DEFAULT(payer_, "") };
    inline GetVpcEndpointAttributeResponseBody& setPayer(string payer) { DARABONBA_PTR_SET_VALUE(payer_, payer) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetVpcEndpointAttributeResponseBody& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline bool getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, false) };
    inline GetVpcEndpointAttributeResponseBody& setResourceOwner(bool resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetVpcEndpointAttributeResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceRegionId Field Functions 
    bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
    void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
    inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetVpcEndpointAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline GetVpcEndpointAttributeResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


    // zonePrivateIpAddressCount Field Functions 
    bool hasZonePrivateIpAddressCount() const { return this->zonePrivateIpAddressCount_ != nullptr;};
    void deleteZonePrivateIpAddressCount() { this->zonePrivateIpAddressCount_ = nullptr;};
    inline int64_t getZonePrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(zonePrivateIpAddressCount_, 0L) };
    inline GetVpcEndpointAttributeResponseBody& setZonePrivateIpAddressCount(int64_t zonePrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(zonePrivateIpAddressCount_, zonePrivateIpAddressCount) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    shared_ptr<string> addressIpVersion_ {};
    // The bandwidth of the endpoint connection. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The state of the endpoint connection. Valid values:
    // 
    // *   **Pending**: The connection is being modified.
    // *   **Connecting**: The connection is being established.
    // *   **Connected**: The connection is established.
    // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
    // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
    // *   **Deleting**: The connection is being deleted.
    shared_ptr<string> connectionStatus_ {};
    // The time when the endpoint was created.
    shared_ptr<string> createTime_ {};
    shared_ptr<int32_t> crossRegionBandwidth_ {};
    // The service state of the endpoint. Valid values:
    // 
    // *   **Normal**: The endpoint runs as expected.
    // *   **FinancialLocked**: The endpoint is locked due to overdue payments.
    shared_ptr<string> endpointBusinessStatus_ {};
    // The description of the endpoint.
    shared_ptr<string> endpointDescription_ {};
    // The domain name of the endpoint.
    shared_ptr<string> endpointDomain_ {};
    // The endpoint ID.
    shared_ptr<string> endpointId_ {};
    // The name of the endpoint.
    shared_ptr<string> endpointName_ {};
    // The state of the endpoint. Valid values:
    // 
    // *   **Creating**: The endpoint is being created.
    // *   **Active**: The endpoint is available.
    // *   **Pending**: The endpoint is being modified.
    // *   **Deleting**: The endpoint is being deleted.
    shared_ptr<string> endpointStatus_ {};
    // The type of the endpoint.
    // 
    // **Interface** is returned. The value indicates the interface endpoint with which the Classic Load Balancer (CLB) instances are associated.
    shared_ptr<string> endpointType_ {};
    // The payer. Valid values:
    // 
    // *   **Endpoint**: the service consumer.
    // *   **EndpointService**: the service provider.
    shared_ptr<string> payer_ {};
    shared_ptr<string> policyDocument_ {};
    // The region ID of the endpoint.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Indicates whether the endpoint and the endpoint service belong to the same Alibaba Cloud account. Valid values:
    // 
    // *   **true**: The endpoint and the endpoint service belong to the same Alibaba Cloud account.
    // *   **false**: The endpoint and the endpoint service do not belong to the same Alibaba Cloud account.
    shared_ptr<bool> resourceOwner_ {};
    // The ID of the endpoint service with which the endpoint is associated.
    shared_ptr<string> serviceId_ {};
    // The name of the endpoint service with which the endpoint is associated.
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> serviceRegionId_ {};
    // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
    shared_ptr<string> vpcId_ {};
    // Indicates whether the domain name of the nearest endpoint that is associated with the endpoint service is resolved first. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> zoneAffinityEnabled_ {};
    // The number of private IP addresses that are assigned to an elastic network interface (ENI) in each zone. Only **1** is returned.
    shared_ptr<int64_t> zonePrivateIpAddressCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
