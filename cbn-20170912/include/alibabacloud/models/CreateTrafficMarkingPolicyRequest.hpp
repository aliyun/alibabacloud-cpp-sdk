// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMARKINGPOLICYREQUEST_HPP_
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
  class CreateTrafficMarkingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_TO_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMarkingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MarkingDscp, markingDscp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_FROM_JSON(TrafficMatchRules, trafficMatchRules_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    CreateTrafficMarkingPolicyRequest() = default ;
    CreateTrafficMarkingPolicyRequest(const CreateTrafficMarkingPolicyRequest &) = default ;
    CreateTrafficMarkingPolicyRequest(CreateTrafficMarkingPolicyRequest &&) = default ;
    CreateTrafficMarkingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMarkingPolicyRequest() = default ;
    CreateTrafficMarkingPolicyRequest& operator=(const CreateTrafficMarkingPolicyRequest &) = default ;
    CreateTrafficMarkingPolicyRequest& operator=(CreateTrafficMarkingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficMatchRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficMatchRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TrafficMatchRules& obj) { 
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
      TrafficMatchRules() = default ;
      TrafficMatchRules(const TrafficMatchRules &) = default ;
      TrafficMatchRules(TrafficMatchRules &&) = default ;
      TrafficMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficMatchRules() = default ;
      TrafficMatchRules& operator=(const TrafficMatchRules &) = default ;
      TrafficMatchRules& operator=(TrafficMatchRules &&) = default ;
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
      inline TrafficMatchRules& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


      // dstCidr Field Functions 
      bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
      void deleteDstCidr() { this->dstCidr_ = nullptr;};
      inline string getDstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
      inline TrafficMatchRules& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


      // dstPortRange Field Functions 
      bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
      void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
      inline const vector<int32_t> & getDstPortRange() const { DARABONBA_PTR_GET_CONST(dstPortRange_, vector<int32_t>) };
      inline vector<int32_t> getDstPortRange() { DARABONBA_PTR_GET(dstPortRange_, vector<int32_t>) };
      inline TrafficMatchRules& setDstPortRange(const vector<int32_t> & dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };
      inline TrafficMatchRules& setDstPortRange(vector<int32_t> && dstPortRange) { DARABONBA_PTR_SET_RVALUE(dstPortRange_, dstPortRange) };


      // matchDscp Field Functions 
      bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
      void deleteMatchDscp() { this->matchDscp_ = nullptr;};
      inline int32_t getMatchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
      inline TrafficMatchRules& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline TrafficMatchRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // srcCidr Field Functions 
      bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
      void deleteSrcCidr() { this->srcCidr_ = nullptr;};
      inline string getSrcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
      inline TrafficMatchRules& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


      // srcPortRange Field Functions 
      bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
      void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
      inline const vector<int32_t> & getSrcPortRange() const { DARABONBA_PTR_GET_CONST(srcPortRange_, vector<int32_t>) };
      inline vector<int32_t> getSrcPortRange() { DARABONBA_PTR_GET(srcPortRange_, vector<int32_t>) };
      inline TrafficMatchRules& setSrcPortRange(const vector<int32_t> & srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };
      inline TrafficMatchRules& setSrcPortRange(vector<int32_t> && srcPortRange) { DARABONBA_PTR_SET_RVALUE(srcPortRange_, srcPortRange) };


      // trafficMatchRuleDescription Field Functions 
      bool hasTrafficMatchRuleDescription() const { return this->trafficMatchRuleDescription_ != nullptr;};
      void deleteTrafficMatchRuleDescription() { this->trafficMatchRuleDescription_ = nullptr;};
      inline string getTrafficMatchRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleDescription_, "") };
      inline TrafficMatchRules& setTrafficMatchRuleDescription(string trafficMatchRuleDescription) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleDescription_, trafficMatchRuleDescription) };


      // trafficMatchRuleName Field Functions 
      bool hasTrafficMatchRuleName() const { return this->trafficMatchRuleName_ != nullptr;};
      void deleteTrafficMatchRuleName() { this->trafficMatchRuleName_ = nullptr;};
      inline string getTrafficMatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(trafficMatchRuleName_, "") };
      inline TrafficMatchRules& setTrafficMatchRuleName(string trafficMatchRuleName) { DARABONBA_PTR_SET_VALUE(trafficMatchRuleName_, trafficMatchRuleName) };


    protected:
      // The address type. Valid values: IPv4, IPv6, or empty.
      shared_ptr<string> addressFamily_ {};
      // The destination CIDR block of traffic packets. IPv4 and IPv6 addresses are supported.
      // 
      // The traffic classification rule matches traffic whose destination IP address falls within the destination CIDR block. If you do not set this parameter, the traffic classification rule matches traffic with any destination IP address.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can specify one destination CIDR block.
      shared_ptr<string> dstCidr_ {};
      // The destination port of traffic packets. Valid values: **-1** and **1** to **65535**.
      // 
      // The traffic classification rule matches traffic whose destination port falls within the destination port range. If you do not set this parameter, the traffic classification rule matches traffic with any destination port.
      // 
      // This parameter supports up to two port numbers. The input format is described as follows:
      // 
      // - If you enter only one port number, such as 1, the system matches traffic whose destination port is 1 by default. If the value is -1, the system matches traffic with any destination port.
      // - If you enter two port numbers, such as 1 and 200, the system matches traffic whose destination port is in the range of 1 to 200 by default.
      // - If you enter two port numbers and one of them is -1, the other port number must also be -1, which indicates matching traffic with any destination port.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can specify one destination port range.
      shared_ptr<vector<int32_t>> dstPortRange_ {};
      // The DSCP value of traffic packets. Valid values: **0** to **63**.
      // 
      // The traffic classification rule matches traffic that contains the specified DSCP value. If you do not set this parameter, the traffic classification rule matches traffic with any DSCP value.
      // 
      // > The DSCP value refers to the DSCP value that the traffic packets already carry before entering the inter-region connection.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can match one DSCP value.
      shared_ptr<int32_t> matchDscp_ {};
      // The protocol type of traffic packets.
      // 
      // The traffic marking policy supports matching traffic of multiple protocol types such as **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more protocol types, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
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
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can match one protocol type.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of traffic packets. IPv6 and IPv4 addresses are supported.
      // 
      // The traffic classification rule matches traffic whose source IP address falls within the source CIDR block. If you do not set this parameter, the traffic classification rule matches traffic with any source IP address.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can match one source CIDR block.
      shared_ptr<string> srcCidr_ {};
      // The source port of traffic packets. Valid values: **-1** and **1** to **65535**.
      // 
      // The traffic classification rule matches traffic whose source port falls within the source port range. If you do not set this parameter, the traffic classification rule matches traffic with any source port.
      // 
      // This parameter supports up to two port numbers. The input format is described as follows:
      // 
      // - If you enter only one port number, such as 1, the system matches traffic whose source port is 1 by default. If the value is -1, the system matches traffic with any source port.
      // - If you enter two port numbers, such as 1 and 200, the system matches traffic whose source port is in the range of 1 to 200 by default.
      // - If you enter two port numbers and one of them is -1, the other port number must also be -1, which indicates matching traffic with any source port.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can specify one source port range.
      shared_ptr<vector<int32_t>> srcPortRange_ {};
      // The description of the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can have one description.
      // 
      // The description can be empty or 1 to 256 characters in length, and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleDescription_ {};
      // The name of the traffic classification rule.
      // 
      // You can create up to 50 traffic classification rules at a time, and each traffic classification rule can have one name.
      // 
      // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
      shared_ptr<string> trafficMatchRuleName_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->markingDscp_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->priority_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trafficMarkingPolicyDescription_ == nullptr && this->trafficMarkingPolicyName_ == nullptr && this->trafficMatchRules_ == nullptr
        && this->transitRouterId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMarkingPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMarkingPolicyRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // markingDscp Field Functions 
    bool hasMarkingDscp() const { return this->markingDscp_ != nullptr;};
    void deleteMarkingDscp() { this->markingDscp_ = nullptr;};
    inline int32_t getMarkingDscp() const { DARABONBA_PTR_GET_DEFAULT(markingDscp_, 0) };
    inline CreateTrafficMarkingPolicyRequest& setMarkingDscp(int32_t markingDscp) { DARABONBA_PTR_SET_VALUE(markingDscp_, markingDscp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMarkingPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMarkingPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrafficMarkingPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMarkingPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMarkingPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string getTrafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string getTrafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


    // trafficMatchRules Field Functions 
    bool hasTrafficMatchRules() const { return this->trafficMatchRules_ != nullptr;};
    void deleteTrafficMatchRules() { this->trafficMatchRules_ = nullptr;};
    inline const vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules> & getTrafficMatchRules() const { DARABONBA_PTR_GET_CONST(trafficMatchRules_, vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules>) };
    inline vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules> getTrafficMatchRules() { DARABONBA_PTR_GET(trafficMatchRules_, vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules>) };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMatchRules(const vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules> & trafficMatchRules) { DARABONBA_PTR_SET_VALUE(trafficMatchRules_, trafficMatchRules) };
    inline CreateTrafficMarkingPolicyRequest& setTrafficMatchRules(vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules> && trafficMatchRules) { DARABONBA_PTR_SET_RVALUE(trafficMatchRules_, trafficMatchRules) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTrafficMarkingPolicyRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, request syntax, and business restrictions. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, the traffic marking policy is created.
    shared_ptr<bool> dryRun_ {};
    // The DSCP value to be added to traffic packets that match the traffic classification rules. Valid values: **0** to **63**.
    // 
    // The DSCP value of each traffic marking policy under a transit router instance must be unique.
    // 
    // This parameter is required.
    shared_ptr<int32_t> markingDscp_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The priority of the traffic marking policy. Valid values: **1** to **100**.
    // 
    // The priority of each traffic marking policy under a transit router instance must be unique. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The description of the traffic marking policy.
    // 
    // The description can be empty or 1 to 256 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> trafficMarkingPolicyDescription_ {};
    // The name of the traffic marking policy.
    // 
    // The name can be empty or 1 to 128 characters in length, and cannot start with http:// or https://.
    shared_ptr<string> trafficMarkingPolicyName_ {};
    // The list of traffic classification rules for the traffic marking policy.
    // 
    // Traffic packets that match the traffic classification rules are marked with the DSCP value of the traffic marking policy.
    // 
    // You can create up to 50 traffic classification rules at a time.
    shared_ptr<vector<CreateTrafficMarkingPolicyRequest::TrafficMatchRules>> trafficMatchRules_ {};
    // The instance ID of the forward routing transit router.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
