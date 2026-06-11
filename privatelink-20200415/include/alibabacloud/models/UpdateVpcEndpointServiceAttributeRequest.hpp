// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTSERVICEATTRIBUTEREQUEST_HPP_
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
  class UpdateVpcEndpointServiceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddSupportedRegionSet, addSupportedRegionSet_);
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_TO_JSON(DeleteSupportedRegionSet, deleteSupportedRegionSet_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceDescription, serviceDescription_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceSupportIPv6, serviceSupportIPv6_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointServiceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddSupportedRegionSet, addSupportedRegionSet_);
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AutoAcceptEnabled, autoAcceptEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectBandwidth, connectBandwidth_);
      DARABONBA_PTR_FROM_JSON(DeleteSupportedRegionSet, deleteSupportedRegionSet_);
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
    virtual bool empty() const override { return this->addSupportedRegionSet_ == nullptr
        && this->addressIpVersion_ == nullptr && this->autoAcceptEnabled_ == nullptr && this->clientToken_ == nullptr && this->connectBandwidth_ == nullptr && this->deleteSupportedRegionSet_ == nullptr
        && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->serviceDescription_ == nullptr && this->serviceId_ == nullptr && this->serviceSupportIPv6_ == nullptr
        && this->zoneAffinityEnabled_ == nullptr; };
    // addSupportedRegionSet Field Functions 
    bool hasAddSupportedRegionSet() const { return this->addSupportedRegionSet_ != nullptr;};
    void deleteAddSupportedRegionSet() { this->addSupportedRegionSet_ = nullptr;};
    inline const vector<string> & getAddSupportedRegionSet() const { DARABONBA_PTR_GET_CONST(addSupportedRegionSet_, vector<string>) };
    inline vector<string> getAddSupportedRegionSet() { DARABONBA_PTR_GET(addSupportedRegionSet_, vector<string>) };
    inline UpdateVpcEndpointServiceAttributeRequest& setAddSupportedRegionSet(const vector<string> & addSupportedRegionSet) { DARABONBA_PTR_SET_VALUE(addSupportedRegionSet_, addSupportedRegionSet) };
    inline UpdateVpcEndpointServiceAttributeRequest& setAddSupportedRegionSet(vector<string> && addSupportedRegionSet) { DARABONBA_PTR_SET_RVALUE(addSupportedRegionSet_, addSupportedRegionSet) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // autoAcceptEnabled Field Functions 
    bool hasAutoAcceptEnabled() const { return this->autoAcceptEnabled_ != nullptr;};
    void deleteAutoAcceptEnabled() { this->autoAcceptEnabled_ = nullptr;};
    inline bool getAutoAcceptEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoAcceptEnabled_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setAutoAcceptEnabled(bool autoAcceptEnabled) { DARABONBA_PTR_SET_VALUE(autoAcceptEnabled_, autoAcceptEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectBandwidth Field Functions 
    bool hasConnectBandwidth() const { return this->connectBandwidth_ != nullptr;};
    void deleteConnectBandwidth() { this->connectBandwidth_ = nullptr;};
    inline int32_t getConnectBandwidth() const { DARABONBA_PTR_GET_DEFAULT(connectBandwidth_, 0) };
    inline UpdateVpcEndpointServiceAttributeRequest& setConnectBandwidth(int32_t connectBandwidth) { DARABONBA_PTR_SET_VALUE(connectBandwidth_, connectBandwidth) };


    // deleteSupportedRegionSet Field Functions 
    bool hasDeleteSupportedRegionSet() const { return this->deleteSupportedRegionSet_ != nullptr;};
    void deleteDeleteSupportedRegionSet() { this->deleteSupportedRegionSet_ = nullptr;};
    inline const vector<string> & getDeleteSupportedRegionSet() const { DARABONBA_PTR_GET_CONST(deleteSupportedRegionSet_, vector<string>) };
    inline vector<string> getDeleteSupportedRegionSet() { DARABONBA_PTR_GET(deleteSupportedRegionSet_, vector<string>) };
    inline UpdateVpcEndpointServiceAttributeRequest& setDeleteSupportedRegionSet(const vector<string> & deleteSupportedRegionSet) { DARABONBA_PTR_SET_VALUE(deleteSupportedRegionSet_, deleteSupportedRegionSet) };
    inline UpdateVpcEndpointServiceAttributeRequest& setDeleteSupportedRegionSet(vector<string> && deleteSupportedRegionSet) { DARABONBA_PTR_SET_RVALUE(deleteSupportedRegionSet_, deleteSupportedRegionSet) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceDescription Field Functions 
    bool hasServiceDescription() const { return this->serviceDescription_ != nullptr;};
    void deleteServiceDescription() { this->serviceDescription_ = nullptr;};
    inline string getServiceDescription() const { DARABONBA_PTR_GET_DEFAULT(serviceDescription_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceDescription(string serviceDescription) { DARABONBA_PTR_SET_VALUE(serviceDescription_, serviceDescription) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceSupportIPv6 Field Functions 
    bool hasServiceSupportIPv6() const { return this->serviceSupportIPv6_ != nullptr;};
    void deleteServiceSupportIPv6() { this->serviceSupportIPv6_ = nullptr;};
    inline bool getServiceSupportIPv6() const { DARABONBA_PTR_GET_DEFAULT(serviceSupportIPv6_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setServiceSupportIPv6(bool serviceSupportIPv6) { DARABONBA_PTR_SET_VALUE(serviceSupportIPv6_, serviceSupportIPv6) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline UpdateVpcEndpointServiceAttributeRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The remote regions to add to the list of supported regions.
    shared_ptr<vector<string>> addSupportedRegionSet_ {};
    // The IP version. Valid values:
    // 
    // - **IPv4**: IPv4.
    // 
    // - **DualStack**: dual-stack.
    // 
    // > Only endpoint services that use an NLB or GWLB instance as the service resource support the **DualStack** IP version.
    shared_ptr<string> addressIpVersion_ {};
    // Specifies whether to automatically accept endpoint connections. Valid values:
    // 
    // - **true**: automatically accepts endpoint connections.
    // 
    // - **false**: does not automatically accept endpoint connections.
    shared_ptr<bool> autoAcceptEnabled_ {};
    // A client-generated token that ensures the idempotence of the request.
    // 
    // Your client must generate a unique token for each request. **ClientToken** can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The default maximum connection bandwidth. The default value is **3072**. Unit: Mbps.
    // 
    // Valid values: **100** to **10240**.
    // 
    // > You can set this parameter only if the service resource is a CLB or ALB instance, but not an NLB instance.
    shared_ptr<int32_t> connectBandwidth_ {};
    // The remote regions to remove from the list of supported regions.
    shared_ptr<vector<string>> deleteSupportedRegionSet_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the dry run, the system returns an error message. If the request passes the dry run, the system returns the `DryRunOperation` error code.
    // 
    // - **false** (default): sends a normal request. If the request passes the check, the system returns a 2xx HTTP status code and performs the operation.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the endpoint service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to get the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the endpoint service.
    shared_ptr<string> serviceDescription_ {};
    // The ID of the endpoint service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // Specifies whether to enable IPv6 for the endpoint service. Valid values:
    // 
    // - **true**: Enables IPv6.
    // 
    // - **false** (default): Disables IPv6.
    shared_ptr<bool> serviceSupportIPv6_ {};
    // Specifies whether to enable zone affinity for the endpoint service. Valid values:
    // 
    // - **true** (default): Enables zone affinity.
    // 
    // - **false**: Disables zone affinity.
    shared_ptr<bool> zoneAffinityEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
