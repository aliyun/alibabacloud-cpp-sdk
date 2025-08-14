// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRAFFICMATCHRULETOTRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_ADDTRAFFICMATCHRULETOTRAFFICMARKINGPOLICYREQUESTTRAFFICMATCHRULES_HPP_
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
  class AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& obj) { 
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
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(const AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules() = default ;
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& operator=(const AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &) = default ;
    AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& operator=(AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules &&) = default ;
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
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline const vector<int32_t> & dstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
    inline vector<int32_t> dstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline const vector<int32_t> & srcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
    inline vector<int32_t> srcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


    // trafficMatchRuleDescription Field Functions 
    bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
    void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
    inline string trafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


    // trafficMatchRuleName Field Functions 
    bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
    void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
    inline string trafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
    inline AddTrafficMatchRuleToTrafficMarkingPolicyRequestTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


  protected:
    // The address family. You can set the value to IPv4 or IPv6, or leave the value empty.
    std::shared_ptr<string> addressFamily_ = nullptr;
    // The destination CIDR block that is used to match packets.
    // 
    // Packets whose destination IP addresses fall into the specified destination CIDR block are considered a match. If you do not specify a destination CIDR block, packets are considered a match regardless of the destination IP address.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // Packets whose destination ports fall into the specified destination port range are considered a match. If you do not specify destination port range, packets are considered a match regardless of the destination port.
    // 
    // You can specify at most two port numbers for this parameter. Take note of the following rules:
    // 
    // *   If you enter only one port number, such as 1, packets whose destination port is 1 are considered a match. A value of -1 specifies all destination ports.
    // *   If you enter two port numbers, such as 1 and 200, packets whose destination ports fall into 1 and 200 are considered a match.
    // *   If you enter two port numbers and one of them is -1, the other port must also be -1. In this case, packets are considered a match regardless of the destination port.
    std::shared_ptr<vector<int32_t>> dstPortRange_ = nullptr;
    // The Differentiated Services Code Point (DSCP) value that is used to match packets. Valid values: **0** to **63**.
    // 
    // Packets that carry the specified DSCP value are considered a match. If you do not specify a DSCP value, packets are considered a match regardless of the DSCP value.
    // 
    // >  The DSCP value that you specify for this parameter is the DSCP value that packets carry before they are transmitted over the inter-region connection.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    // The protocol that is used to match packets.
    // 
    // Traffic classification rules support the following protocols: **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more information, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
    // 
    // **Some protocols use a specific port. Click to view protocols and ports.**
    // 
    // *   If the protocol is **ICMP**, set the destination port to **-1**.
    // *   If the protocol is **GRE**, set the destination port to **-1**.
    // *   If the protocol is **SSH**, set the destination port to **22**.
    // *   If the protocol is **Telnet**, set the destination port to **23**.
    // *   If the protocol is **HTTP**, set the destination port to **80**.
    // *   If the protocol is **HTTPS**, set the destination port to **443**.
    // *   If the protocol is **MS SQL**, set the destination port to **1443**.
    // *   If the protocol is **Oracle**, set the destination port to **1521**.
    // *   If the protocol is **Mysql**, set the destination port to **3306**.
    // *   If the protocol is **RDP**, set the destination port to **3389**.
    // *   If the protocol is **Postgre SQL**, set the destination port to **5432**.
    // *   If the protocol is **Redis**, set the destination port to **6379**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block that is used to match packets.
    // 
    // Packets whose source IP addresses fall into the specified source CIDR block are considered a match. If you do not specify a source CIDR block, packets are considered a match regardless of the source IP address.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
    // 
    // Packets whose source ports fall into the specified source port range are considered a match. If you do not specify a source port range, packets are considered a match regardless of the source port.
    // 
    // You can enter at most two port numbers. Take note of the following rules:
    // 
    // *   If you enter only one port number, such as 1, packets whose source port is 1 are considered a match. A value of -1 specifies all source ports.
    // *   If you enter two port numbers, such as 1 and 200, packets whose source ports fall into 1 and 200 are considered a match.
    // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, packets are considered a match regardless of the source port.
    std::shared_ptr<vector<int32_t>> srcPortRange_ = nullptr;
    // The description of the traffic classification rule.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleDescription_ = nullptr;
    // The name of the traffic classification rule.
    // 
    // The name is optional. If you enter a name, it must be 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMatchRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
