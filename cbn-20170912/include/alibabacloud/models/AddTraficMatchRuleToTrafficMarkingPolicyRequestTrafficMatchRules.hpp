// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRAFICMATCHRULETOTRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_ADDTRAFICMATCHRULETOTRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
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
  class AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleDescription, trafficMatchRuleDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRuleName, trafficMatchRuleName_);
    };
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(const AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& operator=(const AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& operator=(AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dstCidr_ != nullptr
        && this->dstPortRange_ != nullptr && this->matchDscp_ != nullptr && this->protocol_ != nullptr && this->srcCidr_ != nullptr && this->srcPortRange_ != nullptr
        && this->trafficMatchRuleDescription_ != nullptr && this->trafficMatchRuleName_ != nullptr; };
    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline const vector<int32_t> & dstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
    inline vector<int32_t> dstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline const vector<int32_t> & srcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
    inline vector<int32_t> srcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


    // trafficMatchRuleDescription Field Functions 
    bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
    void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
    inline string trafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


    // trafficMatchRuleName Field Functions 
    bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
    void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
    inline string trafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
    inline AddTraficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


  protected:
    // The destination CIDR block that is used to match packets.
    // 
    // The traffic classification rule matches the packets whose destination IP addresses fall within the specified destination CIDR block. If you do not set this parameter, packets are considered a match regardless of the DSCP value.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // The traffic classification rule matches the packets whose destination ports fall within the destination port range. If you do not set this parameter, packets are considered a match regardless of the DSCP value.
    // 
    // You can specify at most two ports. Take note of the following rules:
    // 
    // *   If you enter only one port number such as 1, the system matches the packets whose destination port is port 1.
    // *   If you enter two port numbers such as 1 and 200, the system matches the packets whose destination ports fall between 1 and 200.
    // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, packets are considered a match regardless of the destination port.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<vector<int32_t>> dstPortRange_ = nullptr;
    // The differentiated services code point (DSCP) value that is used to match packets. Valid values: **0** to **63**.
    // 
    // The traffic classification rule matches the packets that contain the specified DSCP value. If you do not set this parameter, packets are considered a match regardless of the DSCP value.
    // 
    // >  The DSCP value that you specify for this parameter is the DSCP value that packets carry before they are transmitted over the inter-region connection.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    // The protocol that is used to match packets.
    // 
    // Valid values: **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more information, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block that is used to match packets.
    // 
    // The traffic classification rule matches the packets whose source IP addresses fall within the specified source CIDR block. If you do not set this parameter, packets are considered a match regardless of the source IP address.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // The traffic classification rule matches the packets whose source ports fall within the source port range. If you do not set this parameter, packets are considered a match regardless of the source port.
    // 
    // You can specify at most two ports. Take note of the following rules:
    // 
    // *   If you enter only one port number such as 1, the system matches the packets whose source port is 1.
    // *   If you enter two port numbers such as 1 and 200, the system matches the packets whose source ports fall between 1 and 200.
    // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, packets are considered a match regardless of the source port.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<vector<int32_t>> srcPortRange_ = nullptr;
    // The description of the traffic classification rule.
    // 
    // The description must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The description must start with a letter.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<string> trafficMatchRuleDescription_ = nullptr;
    // The name of the traffic classification rule.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    // 
    // You can specify at most 50 traffic classification rules.
    std::shared_ptr<string> trafficMatchRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
