// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUESTDELETETRAFFICMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUESTDELETETRAFFICMATCHRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
    };
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules() = default ;
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules(const UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules(UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules &&) = default ;
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules() = default ;
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& operator=(const UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& operator=(UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressFamily_ != nullptr
        && this->dstCidr_ != nullptr && this->dstPortRange_ != nullptr && this->matchDscp_ != nullptr && this->protocol_ != nullptr && this->srcCidr_ != nullptr
        && this->srcPortRange_ != nullptr && this->trafficMatchRuleDescription_ != nullptr && this->trafficMatchRuleName_ != nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string addressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline const vector<int32_t> & dstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
    inline vector<int32_t> dstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline const vector<int32_t> & srcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
    inline vector<int32_t> srcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


    // trafficMatchRuleDescription Field Functions 
    bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
    void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
    inline string trafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


    // trafficMatchRuleName Field Functions 
    bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
    void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
    inline string trafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequestDeleteTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


  protected:
    // The address family. Valid values: You can set the value to IPv4 or IPv6, or leave the value empty.
    std::shared_ptr<string> addressFamily_ = nullptr;
    // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination port range that is used to match packets.
    std::shared_ptr<vector<int32_t>> dstPortRange_ = nullptr;
    // The DSCP value that is used to match packets.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    // The protocol that is used to match packets.
    // 
    // You can call the [ListTrafficMarkingPolicies](https://help.aliyun.com/document_detail/468322.html) operation to query the details about a traffic classification rule.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of packets. IPv4 and IPv6 addresses are supported.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source port range that is used to match packets.
    std::shared_ptr<vector<int32_t>> srcPortRange_ = nullptr;
    // The description of the traffic classification rule.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleDescription_ = nullptr;
    // The name of the traffic classification rule.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
