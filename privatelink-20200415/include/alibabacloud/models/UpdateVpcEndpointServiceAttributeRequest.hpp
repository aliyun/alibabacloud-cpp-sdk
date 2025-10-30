// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class UpdateVpcEndpointServiceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    UpdateVpcEndpointServiceAttributeRequest() = default ;
    UpdateVpcEndpointServiceAttributeRequest(const UpdateVpcEndpointServiceAttributeRequest &) = default ;
    UpdateVpcEndpointServiceAttributeRequest(UpdateVpcEndpointServiceAttributeRequest &&) = default ;
    UpdateVpcEndpointServiceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcEndpointServiceAttributeRequest() = default ;
    UpdateVpcEndpointServiceAttributeRequest& operator=(const UpdateVpcEndpointServiceAttributeRequest &) = default ;
    UpdateVpcEndpointServiceAttributeRequest& operator=(UpdateVpcEndpointServiceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && return this->autoAcceptEnabled_ == nullptr && return this->clientToken_ == nullptr && return this->connectBandwidth_ == nullptr && return this->dryRun_ == nullptr && return this->regionId_ == nullptr
        && return this->serviceDescription_ == nullptr && return this->serviceId_ == nullptr && return this->serviceSupportIPv6_ == nullptr && return this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool autoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t connectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline UpdateVpcEndpointServiceAttributeRequest& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string serviceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool serviceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool zoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol. Valid values:
    // 
    // *   **IPv4**
    // *   **DualStack**
    // 
    // >  You can set the protocol to DualStack only for endpoint services whose backend resource type is NLB.
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // Specifies whether to automatically accept endpoint connection requests. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoAcceptEnabled_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The default maximum bandwidth of the endpoint connection. Unit: Mbit/s. Default value: **3072**.
    // 
    // Valid values: **100** to **10240**.
    // 
    // >  You can specify this parameter only if you specify Classic Load Balancer (CLB) instances or Application Load Balancer (ALB) instances as service resources.
    std::shared_ptr<int32_t> connectBandwidth_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The region ID of the endpoint service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the endpoint service.
    std::shared_ptr<string> serviceDescription_ = nullptr;
    // The endpoint service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Specifies whether to enable IPv6. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> serviceSupportIPv6_ = nullptr;
    // Specifies whether to first resolve the domain name of the nearest endpoint that is associated with the endpoint service. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> zoneAffinityEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
