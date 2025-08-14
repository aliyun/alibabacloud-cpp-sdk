// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
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
  class CreateTrafficMarkingPolicyRequestTrafficMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
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
    CreateTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    CreateTrafficMarkingPolicyRequestTrafficMatchRules(const CreateTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    CreateTrafficMarkingPolicyRequestTrafficMatchRules(CreateTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
    CreateTrafficMarkingPolicyRequestTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    CreateTrafficMarkingPolicyRequestTrafficMatchRules& operator=(const CreateTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    CreateTrafficMarkingPolicyRequestTrafficMatchRules& operator=(CreateTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
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
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline const vector<int32_t> & dstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
    inline vector<int32_t> dstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline const vector<int32_t> & srcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
    inline vector<int32_t> srcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


    // trafficMatchRuleDescription Field Functions 
    bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
    void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
    inline string trafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


    // trafficMatchRuleName Field Functions 
    bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
    void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
    inline string trafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
    inline CreateTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


  protected:
    // The address family. You can set the value to IPv4 or IPv6, or leave the value empty.
    std::shared_ptr<string> addressFamily_ = nullptr;
    // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
    // 
    // Packets whose destination IP addresses fall into the specified destination CIDR block meet the traffic classification rule. If you do not specify a destination CIDR block, all packets meet the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call You can specify a destination CIDR block for each traffic classification rule.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // Packets whose destination ports fall within the destination port range meet the traffic classification rule. If you do not specify destination port range, all packets meet the traffic classification rule.
    // 
    // You can enter up to two port numbers. Take note of the following rules:
    // 
    // *   If you enter only one port number, such as 1, packets whose destination port is 1 meet the traffic classification rule. A value of -1 specifies all destination ports.
    // *   If you enter two port numbers, such as 1 and 200, packets whose destination ports fall into 1 and 200 meet the traffic classification rule.
    // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, all packets meet the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a destination port range for each traffic classification rule.
    std::shared_ptr<vector<int32_t>> dstPortRange_ = nullptr;
    // The Differentiated Service Code Point (DSCP) value that is used to match packets. Valid values: **0** to **63**.
    // 
    // Packets that carry the specified DSCP value meet the traffic classification rule. If you do not specify a DSCP value, all packets meet the traffic classification rule.
    // 
    // >  The DSCP value that you specify for this parameter is the DSCP value that packets carry before they are transmitted over the inter-region connection.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a DSCP value for each traffic classification rule.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    // The protocol that is used to match packets.
    // 
    // Traffic classification rules support the following protocols: **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more information, log on to the [CEN console](https://cen.console.aliyun.com/cen/list).
    // 
    // **Some protocols use a fixed port. Click to view the protocols and ports.**
    // 
    // *   If the protocol is **ICMP**, the destination port must be **-1**.
    // *   If the protocol is **GRE**, the destination port must be **1**.
    // *   If the protocol is **SSH**, the destination port must be **22**.
    // *   If the protocol is **Telnet**, the destination port must be **23**.
    // *   If the protocol is **HTTP**, the destination port must be **80**.
    // *   If the protocol is **HTTPS**, the destination port must be **443**.
    // *   If the protocol is **MS SQL**, the destination port must be **1443**.
    // *   If the protocol is **Oracle**, the destination port must be **1521**.
    // *   If the protocol is **Mysql**, the destination port must be **3306**.
    // *   If the protocol is **RDP**, the destination port must be **3389**.
    // *   If the protocol is **Postgre SQL**, the destination port must be **5432**.
    // *   If the protocol is **Redis**, the destination port must be **6379**.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a protocol for each traffic classification rule.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of packets. IPv6 and IPv4 addresses are supported.
    // 
    // Packets whose source IP addresses fall into the specified source CIDR block meet the traffic classification rule. If you do not specify a source CIDR block, all packets meet the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a source CIDR block for each traffic classification rule.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // Packets whose source ports fall within the source port range meet the traffic classification rule. If you do not specify a source port range, all packets meet the traffic classification rule.
    // 
    // You can enter up to two port numbers. Take note of the following rules:
    // 
    // *   If you enter only one port number, such as 1, packets whose source port is 1 meet the traffic classification rule. A value of -1 specifies all source ports.
    // *   If you enter two port numbers, such as 1 and 200, packets whose source ports fall into 1 and 200 meet the traffic classification rule.
    // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, all packets meet the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a source port range for each traffic classification rule.
    std::shared_ptr<vector<int32_t>> srcPortRange_ = nullptr;
    // The description of the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a description for each traffic classification rule.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleDescription_ = nullptr;
    // The name of the traffic classification rule.
    // 
    // You can create up to 50 traffic classification rules in each call. You can specify a name for each traffic classification rule.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
