// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNATRATELIMITRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNATRATELIMITRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyNatRateLimitRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNatRateLimitRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SourceCIDRs, sourceCIDRs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNatRateLimitRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SourceCIDRs, sourceCIDRs_);
    };
    ModifyNatRateLimitRuleRequest() = default ;
    ModifyNatRateLimitRuleRequest(const ModifyNatRateLimitRuleRequest &) = default ;
    ModifyNatRateLimitRuleRequest(ModifyNatRateLimitRuleRequest &&) = default ;
    ModifyNatRateLimitRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNatRateLimitRuleRequest() = default ;
    ModifyNatRateLimitRuleRequest& operator=(const ModifyNatRateLimitRuleRequest &) = default ;
    ModifyNatRateLimitRuleRequest& operator=(ModifyNatRateLimitRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthLimit_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->natGatewayId_ == nullptr && this->regionId_ == nullptr && this->ruleDescription_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->sourceCIDRs_ == nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline string getBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, "") };
    inline ModifyNatRateLimitRuleRequest& setBandwidthLimit(string bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyNatRateLimitRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline ModifyNatRateLimitRuleRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ModifyNatRateLimitRuleRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNatRateLimitRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleDescription Field Functions 
    bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
    void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
    inline string getRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
    inline ModifyNatRateLimitRuleRequest& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyNatRateLimitRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyNatRateLimitRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sourceCIDRs Field Functions 
    bool hasSourceCIDRs() const { return this->sourceCIDRs_ != nullptr;};
    void deleteSourceCIDRs() { this->sourceCIDRs_ = nullptr;};
    inline const vector<string> & getSourceCIDRs() const { DARABONBA_PTR_GET_CONST(sourceCIDRs_, vector<string>) };
    inline vector<string> getSourceCIDRs() { DARABONBA_PTR_GET(sourceCIDRs_, vector<string>) };
    inline ModifyNatRateLimitRuleRequest& setSourceCIDRs(const vector<string> & sourceCIDRs) { DARABONBA_PTR_SET_VALUE(sourceCIDRs_, sourceCIDRs) };
    inline ModifyNatRateLimitRuleRequest& setSourceCIDRs(vector<string> && sourceCIDRs) { DARABONBA_PTR_SET_RVALUE(sourceCIDRs_, sourceCIDRs) };


  protected:
    // The new bandwidth limit. Unit: Mbit/s.
    shared_ptr<string> bandwidthLimit_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without querying the resource status. The system checks whether your AccessKey pair is valid, the authorization of the Resource Access Management (RAM) user, and whether the required parameters are specified. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): sends a normal request. If the request passes the dry run, a 2xx HTTP status code is returned and the resource status is queried.
    shared_ptr<string> dryRun_ {};
    // The ID of the NAT gateway to which the rate limiting rule belongs.
    shared_ptr<string> natGatewayId_ {};
    // The region ID of the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // The new description of the rate limiting rule.
    shared_ptr<string> ruleDescription_ {};
    // The ID of the rate limiting rule.
    shared_ptr<string> ruleId_ {};
    // The new name of the rate limiting rule.
    shared_ptr<string> ruleName_ {};
    // The new list of source CIDR blocks for the rate limiting rule.
    shared_ptr<vector<string>> sourceCIDRs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
