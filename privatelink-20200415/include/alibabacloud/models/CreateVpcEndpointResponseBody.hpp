// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class CreateVpcEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody(CreateVpcEndpointResponseBody &&) = default ;
    CreateVpcEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody& operator=(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody& operator=(CreateVpcEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->bandwidth_ == nullptr && return this->connectionStatus_ == nullptr && return this->createTime_ == nullptr && return this->endpointBusinessStatus_ == nullptr && return this->endpointDescription_ == nullptr
        && return this->endpointDomain_ == nullptr && return this->endpointId_ == nullptr && return this->endpointName_ == nullptr && return this->endpointStatus_ == nullptr && return this->requestId_ == nullptr
        && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->vpcId_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateVpcEndpointResponseBody& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateVpcEndpointResponseBody& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline CreateVpcEndpointResponseBody& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateVpcEndpointResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpointBusinessStatus Field Functions 
    bool hasEndpointBusinessStatus() const { return this->endpointBusinessStatus_ != nullptr;};
    void deleteEndpointBusinessStatus() { this->endpointBusinessStatus_ = nullptr;};
    inline string endpointBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointBusinessStatus_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointBusinessStatus(string endpointBusinessStatus) { DARABONBA_PTR_SET_VALUE(endpointBusinessStatus_, endpointBusinessStatus) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string endpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointDomain Field Functions 
    bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
    void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
    inline string endpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointStatus Field Functions 
    bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
    void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
    inline string endpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
    inline CreateVpcEndpointResponseBody& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateVpcEndpointResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateVpcEndpointResponseBody& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcEndpointResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline CreateVpcEndpointResponseBody& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **DualStack**
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The bandwidth of the endpoint connection. Unit: Mbit/s.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
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
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the endpoint service with which the endpoint is associated.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The ID of the VPC to which the endpoint belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
