// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVPCENDPOINTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class UpdateVpcEndpointAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVpcEndpointAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetPolicy, resetPolicy_);
      DARABONBA_PTR_TO_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVpcEndpointAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossRegionBandwidth, crossRegionBandwidth_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetPolicy, resetPolicy_);
      DARABONBA_PTR_FROM_JSON(ZoneAffinityEnabled, zoneAffinityEnabled_);
    };
    UpdateVpcEndpointAttributeRequest() = default ;
    UpdateVpcEndpointAttributeRequest(const UpdateVpcEndpointAttributeRequest &) = default ;
    UpdateVpcEndpointAttributeRequest(UpdateVpcEndpointAttributeRequest &&) = default ;
    UpdateVpcEndpointAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVpcEndpointAttributeRequest() = default ;
    UpdateVpcEndpointAttributeRequest& operator=(const UpdateVpcEndpointAttributeRequest &) = default ;
    UpdateVpcEndpointAttributeRequest& operator=(UpdateVpcEndpointAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIpVersion_ == nullptr
        && this->clientToken_ == nullptr && this->crossRegionBandwidth_ == nullptr && this->dryRun_ == nullptr && this->endpointDescription_ == nullptr && this->endpointId_ == nullptr
        && this->endpointName_ == nullptr && this->policyDocument_ == nullptr && this->regionId_ == nullptr && this->resetPolicy_ == nullptr && this->zoneAffinityEnabled_ == nullptr; };
    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline UpdateVpcEndpointAttributeRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateVpcEndpointAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossRegionBandwidth Field Functions 
    bool hasCrossRegionBandwidth() const { return this->crossRegionBandwidth_ != nullptr;};
    void deleteCrossRegionBandwidth() { this->crossRegionBandwidth_ = nullptr;};
    inline int32_t getCrossRegionBandwidth() const { DARABONBA_PTR_GET_DEFAULT(crossRegionBandwidth_, 0) };
    inline UpdateVpcEndpointAttributeRequest& setCrossRegionBandwidth(int32_t crossRegionBandwidth) { DARABONBA_PTR_SET_VALUE(crossRegionBandwidth_, crossRegionBandwidth) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateVpcEndpointAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointDescription Field Functions 
    bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
    void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
    inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
    inline UpdateVpcEndpointAttributeRequest& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline UpdateVpcEndpointAttributeRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline UpdateVpcEndpointAttributeRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string getPolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline UpdateVpcEndpointAttributeRequest& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateVpcEndpointAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetPolicy Field Functions 
    bool hasResetPolicy() const { return this->resetPolicy_ != nullptr;};
    void deleteResetPolicy() { this->resetPolicy_ = nullptr;};
    inline bool getResetPolicy() const { DARABONBA_PTR_GET_DEFAULT(resetPolicy_, false) };
    inline UpdateVpcEndpointAttributeRequest& setResetPolicy(bool resetPolicy) { DARABONBA_PTR_SET_VALUE(resetPolicy_, resetPolicy) };


    // zoneAffinityEnabled Field Functions 
    bool hasZoneAffinityEnabled() const { return this->zoneAffinityEnabled_ != nullptr;};
    void deleteZoneAffinityEnabled() { this->zoneAffinityEnabled_ = nullptr;};
    inline bool getZoneAffinityEnabled() const { DARABONBA_PTR_GET_DEFAULT(zoneAffinityEnabled_, false) };
    inline UpdateVpcEndpointAttributeRequest& setZoneAffinityEnabled(bool zoneAffinityEnabled) { DARABONBA_PTR_SET_VALUE(zoneAffinityEnabled_, zoneAffinityEnabled) };


  protected:
    // The protocol version. Valid values:
    // 
    // - **IPv4**: IPv4.
    // 
    // - **DualStack**: dual-stack.
    // 
    // > To enable dual-stack for an endpoint, the associated endpoint service and the endpoint\\"s VPC must also support dual-stack.
    shared_ptr<string> addressIpVersion_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You must generate a unique value for this parameter. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The cross-region bandwidth in Mbps. This parameter applies only when the endpoint and its associated endpoint service are in different regions. Valid values:
    // 
    // - **Minimum value**: 100.
    // 
    // - **Maximum value**: The value is limited by your account quota. For more information, see [Quotas and limits](https://help.aliyun.com/zh/privatelink/quotas-and-limits?spm=a2c4g.11174283.help-menu-search-120462.d_0).
    // 
    // > You can specify this parameter only for cross-region endpoints.
    shared_ptr<int32_t> crossRegionBandwidth_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the check, the system returns an error message. If the request passes the check, the system returns the `DryRunOperation` error code.
    // 
    // - **false** (Default): Sends a normal request. If the request passes the check, the system performs the operation and returns a 2xx HTTP status code.
    shared_ptr<bool> dryRun_ {};
    // The new description for the endpoint.
    // 
    // The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> endpointDescription_ {};
    // The ID of the endpoint to modify.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The new name for the endpoint.
    // 
    // The name must be 2 to 128 characters in length, start with a letter or a Chinese character, and can contain digits, hyphens (-), and underscores (_).
    shared_ptr<string> endpointName_ {};
    // The RAM access policy. For more information, see [Basic elements of a RAM policy](https://help.aliyun.com/document_detail/93738.html).
    shared_ptr<string> policyDocument_ {};
    // The region ID of the endpoint. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/120468.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> resetPolicy_ {};
    // Specifies whether to enable zone affinity for domain name resolution of the endpoint service. Valid values:
    // 
    // - **true**: Enables zone affinity.
    // 
    // - **false**: Disables zone affinity.
    shared_ptr<bool> zoneAffinityEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
