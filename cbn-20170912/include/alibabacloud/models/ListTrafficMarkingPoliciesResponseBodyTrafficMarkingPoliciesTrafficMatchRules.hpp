// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODYTRAFFICMARKINGPOLICIESTRAFFICMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESRESPONSEBODYTRAFFICMARKINGPOLICIESTRAFFICMATCHRULES_HPP_
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
  class ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleId, trafficMatchRuleId_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleStatus, trafficMatchRuleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleId, trafficMatchRuleId_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleStatus, trafficMatchRuleStatus_);
    };
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules() = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules(const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules &) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules(ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules &&) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules() = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& operator=(const ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules &) = default ;
    ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& operator=(ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressFamily_ != nullptr
        && this->dstCidr_ != nullptr && this->dstPortRange_ != nullptr && this->matchDscp_ != nullptr && this->protocol_ != nullptr && this->srcCidr_ != nullptr
        && this->srcPortRange_ != nullptr && this->trafficMatchRuleDescription_ != nullptr && this->trafficMatchRuleId_ != nullptr && this->trafficMatchRuleName_ != nullptr && this->trafficMatchRuleStatus_ != nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string addressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline const vector<int32_t> & dstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
    inline vector<int32_t> dstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline const vector<int32_t> & srcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
    inline vector<int32_t> srcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


    // trafficMatchRuleDescription Field Functions 
    bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
    void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
    inline string trafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


    // trafficMatchRuleId Field Functions 
    bool hasTrafficMatchRuleId() const { return this->trafficMatchRuleId_ != nullptr;};
    void deleteTrafficMatchRuleId() { this->trafficMatchRuleId_ = nullptr;};
    inline string trafficMatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleId_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setTrafficMatchRuleId(string trafficMatchRuleId) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleId_, trafficMatchRuleId) };


    // trafficMatchRuleName Field Functions 
    bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
    void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
    inline string trafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


    // trafficMatchRuleStatus Field Functions 
    bool hasTrafficMatchRuleStatus() const { return this->trafficMatchRuleStatus_ != nullptr;};
    void deleteTrafficMatchRuleStatus() { this->trafficMatchRuleStatus_ = nullptr;};
    inline string trafficMatchRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleStatus_, "") };
    inline ListTrafficMarkingPoliciesResponseBodyTrafficMarkingPoliciesTrafficMatchRules& setTrafficMatchRuleStatus(string trafficMatchRuleStatus) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleStatus_, trafficMatchRuleStatus) };


  protected:
    // The address family. You can set the value to IPv4 or IPv6, or leave the value empty.
    std::shared_ptr<string> addressFamily_ = nullptr;
    // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination port range used to match data packets.
    std::shared_ptr<vector<int32_t>> dstPortRange_ = nullptr;
    // The DSCP value used to match data packets.
    // 
    // >  If the value of the **MatchDscp** parameter is -1, data packets are considered a match regardless of the DSCP value.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    // The protocol that is used to match packets.
    // 
    // >  Traffic marking policies support multiple protocols. For more information, see the documentation of CEN.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of packets. IPv6 and IPv4 addresses are supported.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source port range used to match data packets.
    std::shared_ptr<vector<int32_t>> srcPortRange_ = nullptr;
    // The description of the traffic classification rule.
    std::shared_ptr<string> trafficMatchRuleDescription_ = nullptr;
    // The ID of the traffic classification rule.
    std::shared_ptr<string> trafficMatchRuleId_ = nullptr;
    // The name of the traffic classification rule.
    std::shared_ptr<string> trafficMatchRuleName_ = nullptr;
    // The status of the traffic classification rule. Valid values:
    // 
    // *   **Creating**: The rule is being created.
    // *   **Active**: The rule is available.
    // *   **Deleting**: The rule is being deleted.
    std::shared_ptr<string> trafficMatchRuleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
