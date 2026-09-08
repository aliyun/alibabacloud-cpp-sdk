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
      // The address family. Valid values: IPv4, IPv6, or empty.
      shared_ptr<string> addressFamily_ {};
      // The destination CIDR block of the traffic packet. IPv4 and IPv6 addresses are supported.
      shared_ptr<string> dstCidr_ {};
      // The destination port of the traffic packet.
      shared_ptr<vector<int32_t>> dstPortRange_ {};
      // The DSCP value of the traffic packet.
      shared_ptr<int32_t> matchDscp_ {};
      // The protocol type of the traffic packet.
      // 
      // You can call the [ListTrafficMarkingPolicies](https://help.aliyun.com/document_detail/468322.html) operation to query the details of the traffic classification rules that you want to delete.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of the traffic packet. IPv4 and IPv6 addresses are supported.
      shared_ptr<string> srcCidr_ {};
      // The source port of the traffic packet.
      shared_ptr<vector<int32_t>> srcPortRange_ {};
      // The description of the traffic classification rule.
      // 
      // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleDescription_ {};
      // The name of the traffic classification rule.
      // 
      // The name can be empty or 1 to 128 characters in length and cannot start with http:// or https://.
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
      // The address family. Valid values: IPv4, IPv6, or empty.
      shared_ptr<string> addressFamily_ {};
      // The destination CIDR block of the traffic packet. IPv4 and IPv6 addresses are supported.
      // 
      // The traffic classification rule matches traffic whose destination IP address falls within the destination CIDR block. If you do not set this parameter, the traffic classification rule matches traffic with any destination IP address.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can specify one destination CIDR block.
      shared_ptr<string> dstCidr_ {};
      // The destination port of the traffic packet. Valid values: **-1** and **1** to **65535**.
      // 
      // The traffic classification rule matches traffic whose destination port falls within the destination port range. If you do not set this parameter, the traffic classification rule matches traffic with any destination port.
      // 
      // This parameter supports up to two port numbers. The input format is described as follows:
      // 
      // - If you enter only one port number, such as 1, the system matches traffic whose destination port is 1 by default. If the value is -1, the system matches traffic with any destination port.
      // - If you enter two port numbers, such as 1 and 200, the system matches traffic whose destination port is in the range of 1 to 200 by default.
      // - If you enter two port numbers and one of them is -1, the other port number must also be -1, which indicates that traffic with any destination port is matched.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can specify one destination port range.
      shared_ptr<vector<int32_t>> dstPortRange_ {};
      // The Differentiated Services Code Point (DSCP) value of the traffic packet. Valid values: **0** to **63**.
      // 
      // The traffic classification rule matches traffic that contains the specified DSCP value. If you do not set this parameter, the traffic classification rule matches traffic with any DSCP value.
      // 
      // > The DSCP value refers to the DSCP value that the traffic packet already carries before entering the inter-region connection.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can match one DSCP value.
      shared_ptr<int32_t> matchDscp_ {};
      // The protocol type of the traffic packet.
      // 
      // The traffic marking policy supports matching traffic of multiple protocol types, such as **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more protocol types, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
      // <details>
      // <summary>Some protocols have fixed ports. Click to view port details.</summary>
      // 
      // - If the protocol type is **ICMP**, the destination port must be set to **-1**.
      // - If the protocol type is **GRE**, the destination port must be set to **-1**.
      // - If the protocol type is **SSH**, the destination port must be set to **22**.
      // - If the protocol type is **Telnet**, the destination port must be set to **23**.
      // - If the protocol type is **HTTP**, the destination port must be set to **80**.
      // - If the protocol type is **HTTPS**, the destination port must be set to **443**.
      // - If the protocol type is **MS SQL**, the destination port must be set to **1443**.
      // - If the protocol type is **Oracle**, the destination port must be set to **1521**.
      // - If the protocol type is **Mysql**, the destination port must be set to **3306**.
      // - If the protocol type is **RDP**, the destination port must be set to **3389**.
      // - If the protocol type is **Postgre SQL**, the destination port must be set to **5432**.
      // - If the protocol type is **Redis**, the destination port must be set to **6379**.
      // 
      // </details>
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can match one protocol type.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of the traffic packet. IPv4 and IPv6 addresses are supported.
      // 
      // The traffic classification rule matches traffic whose source IP address falls within the source CIDR block. If you do not set this parameter, the traffic classification rule matches traffic with any source IP address.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can match one source CIDR block.
      shared_ptr<string> srcCidr_ {};
      // The source port of the traffic packet. Valid values: **-1** and **1** to **65535**.
      // 
      // The traffic classification rule matches traffic whose source port falls within the source port range. If you do not set this parameter, the traffic classification rule matches traffic with any source port.
      // 
      // This parameter supports up to two port numbers. The input format is described as follows:
      // 
      // - If you enter only one port number, such as 1, the system matches traffic whose source port is 1 by default. If the value is -1, the system matches traffic with any source port.
      // - If you enter two port numbers, such as 1 and 200, the system matches traffic whose source port is in the range of 1 to 200 by default.
      // - If you enter two port numbers and one of them is -1, the other port number must also be -1, which indicates that traffic with any source port is matched.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can specify one source port range.
      shared_ptr<vector<int32_t>> srcPortRange_ {};
      // The description of the traffic classification rule.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can have one description.
      // 
      // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleDescription_ {};
      // The name of the traffic classification rule.
      // 
      // You can add up to 50 traffic classification rules at a time. Each traffic classification rule can have one name.
      // 
      // The name can be empty or 1 to 128 characters in length and cannot start with http:// or https://.
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
    // The list of traffic classification rules to add.
    // 
    // You can add up to 50 traffic classification rules at a time.
    shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules>> addTrafficMatchRules_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client generates the value of this parameter. Ensure that the value is unique among different requests. The token can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The list of traffic classification rules to delete.
    // >Provide as much information as possible for the traffic classification rules, such as the source CIDR block, destination CIDR block, source port, destination port, and DSCP value. Otherwise, the system may fail to locate the target traffic classification rules and will not delete them.
    shared_ptr<vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules>> deleteTrafficMatchRules_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, request syntax, and business restrictions without modifying the name, description, or traffic classification rules of the traffic marking policy. If the request fails the dry run, the corresponding error message is returned. If the request passes the dry run, the error code `DryRunOperation` is returned.
    // - **false** (default): performs a dry run and sends the request. After the request passes the dry run, the name, description, and traffic classification rules of the traffic marking policy are directly modified.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The new description of the traffic marking policy.
    // 
    // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> trafficMarkingPolicyDescription_ {};
    // The ID of the traffic marking policy.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMarkingPolicyId_ {};
    // The new name of the traffic marking policy.
    // 
    // The name can be empty or 1 to 128 characters in length and cannot start with http:// or https://.
    shared_ptr<string> trafficMarkingPolicyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
