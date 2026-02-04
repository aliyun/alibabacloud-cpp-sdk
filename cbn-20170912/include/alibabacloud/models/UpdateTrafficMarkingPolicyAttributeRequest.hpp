// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMARKINGPOLICYATTRIBUTEREQUEST_HPP_
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
  class UpdateTrafficMarkingPolicyAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMarkingPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTrafficMatchRules, addTrafficMatchRules_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteTrafficMatchRules, deleteTrafficMatchRules_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMarkingPolicyAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTrafficMatchRules, addTrafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteTrafficMatchRules, deleteTrafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
    };
    UpdateTrafficMarkingPolicyAttributeRequest() = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(const UpdateTrafficMarkingPolicyAttributeRequest &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(UpdateTrafficMarkingPolicyAttributeRequest &&) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMarkingPolicyAttributeRequest() = default ;
    UpdateTrafficMarkingPolicyAttributeRequest& operator=(const UpdateTrafficMarkingPolicyAttributeRequest &) = default ;
    UpdateTrafficMarkingPolicyAttributeRequest& operator=(UpdateTrafficMarkingPolicyAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteTrafficMatchRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteTrafficMatchRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DeleteTrafficMatchRules& obj) { 
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
      DeleteTrafficMatchRules() = default ;
      DeleteTrafficMatchRules(const DeleteTrafficMatchRules &) = default ;
      DeleteTrafficMatchRules(DeleteTrafficMatchRules &&) = default ;
      DeleteTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteTrafficMatchRules() = default ;
      DeleteTrafficMatchRules& operator=(const DeleteTrafficMatchRules &) = default ;
      DeleteTrafficMatchRules& operator=(DeleteTrafficMatchRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->dstCidr_ == nullptr && this->dstPortRange_ == nullptr && this->matchDscp_ == nullptr && this->protocol_ == nullptr && this->srcCidr_ == nullptr
        && this->srcPortRange_ == nullptr && this->trafficMatchRuleDescription_ == nullptr && this->trafficMatchRuleName_ == nullptr; };
      // addressFamily Field Functions 
      bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
      void deleteAddressFamily() { this->addressFamily_ = nullptr;};
      inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
      inline DeleteTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


      // dstCidr Field Functions 
      bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
      void deleteDstCidr() { this->dstCidr_ = nullptr;};
      inline string getDstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
      inline DeleteTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


      // dstPortRange Field Functions 
      bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
      void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
      inline const vector<int32_t> & getDstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
      inline vector<int32_t> getDstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
      inline DeleteTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
      inline DeleteTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


      // matchDscp Field Functions 
      bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
      void deleteMatchDscp() { this->matchDscp_ = nullptr;};
      inline int32_t getMatchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
      inline DeleteTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline DeleteTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // srcCidr Field Functions 
      bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
      void deleteSrcCidr() { this->srcCidr_ = nullptr;};
      inline string getSrcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
      inline DeleteTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


      // srcPortRange Field Functions 
      bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
      void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
      inline const vector<int32_t> & getSrcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
      inline vector<int32_t> getSrcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
      inline DeleteTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
      inline DeleteTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


      // trafficMatchRuleDescription Field Functions 
      bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
      void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
      inline string getTrafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
      inline DeleteTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


      // trafficMatchRuleName Field Functions 
      bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
      void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
      inline string getTrafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
      inline DeleteTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


    protected:
      // The address family. Valid values: You can set the value to IPv4 or IPv6, or leave the value empty.
      shared_ptr<string> addressFamily_ {};
      // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
      shared_ptr<string> dstCidr_ {};
      // The destination port range that is used to match packets.
      shared_ptr<vector<int32_t>> dstPortRange_ {};
      // The DSCP value that is used to match packets.
      shared_ptr<int32_t> matchDscp_ {};
      // The protocol that is used to match packets.
      // 
      // You can call the [ListTrafficMarkingPolicies](https://help.aliyun.com/document_detail/468322.html) operation to query the details about a traffic classification rule.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of packets. IPv4 and IPv6 addresses are supported.
      shared_ptr<string> srcCidr_ {};
      // The source port range that is used to match packets.
      shared_ptr<vector<int32_t>> srcPortRange_ {};
      // The description of the traffic classification rule.
      // 
      // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleDescription_ {};
      // The name of the traffic classification rule.
      // 
      // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleName_ {};
    };

    class AddTrafficMatchRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddTrafficMatchRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AddTrafficMatchRules& obj) { 
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
      AddTrafficMatchRules() = default ;
      AddTrafficMatchRules(const AddTrafficMatchRules &) = default ;
      AddTrafficMatchRules(AddTrafficMatchRules &&) = default ;
      AddTrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddTrafficMatchRules() = default ;
      AddTrafficMatchRules& operator=(const AddTrafficMatchRules &) = default ;
      AddTrafficMatchRules& operator=(AddTrafficMatchRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->dstCidr_ == nullptr && this->dstPortRange_ == nullptr && this->matchDscp_ == nullptr && this->protocol_ == nullptr && this->srcCidr_ == nullptr
        && this->srcPortRange_ == nullptr && this->trafficMatchRuleDescription_ == nullptr && this->trafficMatchRuleName_ == nullptr; };
      // addressFamily Field Functions 
      bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
      void deleteAddressFamily() { this->addressFamily_ = nullptr;};
      inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
      inline AddTrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


      // dstCidr Field Functions 
      bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
      void deleteDstCidr() { this->dstCidr_ = nullptr;};
      inline string getDstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
      inline AddTrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


      // dstPortRange Field Functions 
      bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
      void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
      inline const vector<int32_t> & getDstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
      inline vector<int32_t> getDstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
      inline AddTrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
      inline AddTrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


      // matchDscp Field Functions 
      bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
      void deleteMatchDscp() { this->matchDscp_ = nullptr;};
      inline int32_t getMatchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
      inline AddTrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline AddTrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // srcCidr Field Functions 
      bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
      void deleteSrcCidr() { this->srcCidr_ = nullptr;};
      inline string getSrcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
      inline AddTrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


      // srcPortRange Field Functions 
      bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
      void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
      inline const vector<int32_t> & getSrcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
      inline vector<int32_t> getSrcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
      inline AddTrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
      inline AddTrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


      // trafficMatchRuleDescription Field Functions 
      bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
      void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
      inline string getTrafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
      inline AddTrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


      // trafficMatchRuleName Field Functions 
      bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
      void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
      inline string getTrafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
      inline AddTrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


    protected:
      // The address family. Valid values: You can set the value to IPv4 or IPv6, or leave the value empty.
      shared_ptr<string> addressFamily_ {};
      // The destination CIDR block of packets. IPv4 and IPv6 addresses are supported.
      // 
      // Packets whose destination IP addresses fall into the specified destination CIDR block meet the traffic classification rule. If you do not specify a destination CIDR block, all packets meet the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a destination CIDR block for each traffic classification rule.
      shared_ptr<string> dstCidr_ {};
      // The destination port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
      // 
      // Packets whose destination ports fall within the specified destination port range are considered a match. If you do not specify a destination port range, packets are considered a match regardless of the destination port.
      // 
      // You can enter up to two port numbers. Take note of the following rules:
      // 
      // *   If you enter only one port number, such as 1, packets whose destination port is 1 match the traffic classification rule. A value of -1 specifies all destination ports.
      // *   If you enter two port numbers, such as 1 and 200, packets whose destination ports fall into 1 and 200 are considered a match.
      // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, all packets meet the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a destination port range for each traffic classification rule.
      shared_ptr<vector<int32_t>> dstPortRange_ {};
      // The Differentiated Service Code Point (DSCP) value that is used to match packets. Valid values: **0** to **63**.
      // 
      // Requests that carry the specified DSCP value are considered a match. If you do not specify a DSCP value, packets are considered a match regardless of the DSCP value.
      // 
      // >  The DSCP value that you specify for this parameter is the DSCP value that packets carry before they are transmitted over the inter-region connection.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a DSCP value for each traffic classification rule.
      shared_ptr<int32_t> matchDscp_ {};
      // The protocol that is used to match packets.
      // 
      // Traffic classification rules support the following protocols: **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more information, log on to the [CEN console](https://cen.console.aliyun.com/cen/list).
      // 
      // **Some protocols use a fixed port. Click to view the protocols and ports.**
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
      // *   If the protocol is **Redis**, the destination port must be **6379**.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a protocol for each traffic classification rule.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of packets. IPv4 and IPv6 addresses are supported.
      // 
      // Packets whose source IP addresses fall into the specified source CIDR block meet the traffic classification rule. If you do not specify a source CIDR block, all packets meet the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a source CIDR block for each traffic classification rule.
      shared_ptr<string> srcCidr_ {};
      // The source port range that is used to match packets. Valid values: **-1** and **1** to **65535**.
      // 
      // The traffic classification rule matches the packets whose source ports fall within the source port range. If you do not specify this parameter, packets are considered a match regardless of the source port.
      // 
      // You can enter up to two port numbers. Take note of the following rules:
      // 
      // *   If you enter only one port number, such as 1, packets whose source port is 1 are considered a match. A value of -1 specifies all source ports.
      // *   If you enter two port numbers, such as 1 and 200, packets whose source ports fall into 1 and 200 are considered a match.
      // *   If you enter two port numbers and one of them is -1, the other port number must also be -1. In this case, all packets meet the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a source port range for each traffic classification rule.
      shared_ptr<vector<int32_t>> srcPortRange_ {};
      // The description of the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a description for each traffic classification rule.
      // 
      // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleDescription_ {};
      // The name of the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules in each call. You can specify a name for each traffic classification rule.
      // 
      // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleName_ {};
    };

    virtual bool empty() const override { return this->addTrafficMatchRules_ == nullptr
        && this->clientToken_ == nullptr && this->deleteTrafficMatchRules_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trafficMarkingPolicyDescription_ == nullptr && this->trafficMarkingPolicyId_ == nullptr && this->trafficMarkingPolicyName_ == nullptr; };
    // addTrafficMatchRules Field Functions 
    bool hasAddTrafficMatchRules() const { return this->addTrafficMatchRules_ != nullptr;};
    void deleteAddTrafficMatchRules() { this->addTrafficMatchRules_ = nullptr;};
    inline const vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> & getAddTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(addTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules>) };
    inline vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> getAddTrafficMatchRules() { DARABONBA_PTR_GET(addTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules>) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setAddTrafficMatchRules(const vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> & addTrafficMatchRules) { DARABONBA_PTR_SET_VALUE(addTrafficMatchRules_, addTrafficMatchRules) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setAddTrafficMatchRules(vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> && addTrafficMatchRules) { DARABONBA_PTR_SET_RVALUE(addTrafficMatchRules_, addTrafficMatchRules) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteTrafficMatchRules Field Functions 
    bool hasDeleteTrafficMatchRules() const { return this->deleteTrafficMatchRules_ != nullptr;};
    void deleteDeleteTrafficMatchRules() { this->deleteTrafficMatchRules_ = nullptr;};
    inline const vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> & getDeleteTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(deleteTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules>) };
    inline vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> getDeleteTrafficMatchRules() { DARABONBA_PTR_GET(deleteTrafficMatchRules_, vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules>) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDeleteTrafficMatchRules(const vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> & deleteTrafficMatchRules) { DARABONBA_PTR_SET_VALUE(deleteTrafficMatchRules_, deleteTrafficMatchRules) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDeleteTrafficMatchRules(vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> && deleteTrafficMatchRules) { DARABONBA_PTR_SET_RVALUE(deleteTrafficMatchRules_, deleteTrafficMatchRules) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string getTrafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string getTrafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string getTrafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline UpdateTrafficMarkingPolicyAttributeRequest& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


  protected:
    // The traffic classification rules to be added to the traffic marking policy.
    // 
    // You can add at most 50 traffic classification rules in each call.
    shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules>> addTrafficMatchRules_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The traffic classification rules to be deleted from the traffic marking policy.
    // 
    // >  Specify detailed information about the traffic classification rule, such as the source CIDR block, destination CIDR block, source port, destination port, and DSCP value. If you do not specify sufficient information, the system may fail to match the traffic classification rule that you want to delete.
    shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules>> deleteTrafficMatchRules_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: preforms a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The new description of the traffic marking policy.
    // 
    // The description must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The description must start with a letter.
    shared_ptr<string> trafficMarkingPolicyDescription_ {};
    // The ID of the traffic marking policy.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMarkingPolicyId_ {};
    // The new name of the traffic marking policy.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> trafficMarkingPolicyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
