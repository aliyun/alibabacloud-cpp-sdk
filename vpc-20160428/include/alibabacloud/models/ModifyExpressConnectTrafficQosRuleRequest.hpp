// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyExpressConnectTrafficQosRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectTrafficQosRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_TO_JSON(DstIPv6Cidr, dstIPv6Cidr_);
      DARABONBA_PTR_TO_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_TO_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemarkingDscp, remarkingDscp_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_TO_JSON(SrcIPv6Cidr, srcIPv6Cidr_);
      DARABONBA_PTR_TO_JSON(SrcPortRange, srcPortRange_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectTrafficQosRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DstCidr, dstCidr_);
      DARABONBA_PTR_FROM_JSON(DstIPv6Cidr, dstIPv6Cidr_);
      DARABONBA_PTR_FROM_JSON(DstPortRange, dstPortRange_);
      DARABONBA_PTR_FROM_JSON(MatchDscp, matchDscp_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemarkingDscp, remarkingDscp_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SrcCidr, srcCidr_);
      DARABONBA_PTR_FROM_JSON(SrcIPv6Cidr, srcIPv6Cidr_);
      DARABONBA_PTR_FROM_JSON(SrcPortRange, srcPortRange_);
    };
    ModifyExpressConnectTrafficQosRuleRequest() = default ;
    ModifyExpressConnectTrafficQosRuleRequest(const ModifyExpressConnectTrafficQosRuleRequest &) = default ;
    ModifyExpressConnectTrafficQosRuleRequest(ModifyExpressConnectTrafficQosRuleRequest &&) = default ;
    ModifyExpressConnectTrafficQosRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectTrafficQosRuleRequest() = default ;
    ModifyExpressConnectTrafficQosRuleRequest& operator=(const ModifyExpressConnectTrafficQosRuleRequest &) = default ;
    ModifyExpressConnectTrafficQosRuleRequest& operator=(ModifyExpressConnectTrafficQosRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dstCidr_ != nullptr && this->dstIPv6Cidr_ != nullptr && this->dstPortRange_ != nullptr && this->matchDscp_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->priority_ != nullptr && this->protocol_ != nullptr && this->qosId_ != nullptr && this->queueId_ != nullptr
        && this->regionId_ != nullptr && this->remarkingDscp_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->ruleDescription_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr && this->srcCidr_ != nullptr && this->srcIPv6Cidr_ != nullptr && this->srcPortRange_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dstCidr Field Functions 
    bool hasDstCidr() const { return this->dstCidr_ != nullptr;};
    void deleteDstCidr() { this->dstCidr_ = nullptr;};
    inline string dstCidr() const { DARABONBA_PTR_GET_DEFAULT(dstCidr_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setDstCidr(string dstCidr) { DARABONBA_PTR_SET_VALUE(dstCidr_, dstCidr) };


    // dstIPv6Cidr Field Functions 
    bool hasDstIPv6Cidr() const { return this->dstIPv6Cidr_ != nullptr;};
    void deleteDstIPv6Cidr() { this->dstIPv6Cidr_ = nullptr;};
    inline string dstIPv6Cidr() const { DARABONBA_PTR_GET_DEFAULT(dstIPv6Cidr_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setDstIPv6Cidr(string dstIPv6Cidr) { DARABONBA_PTR_SET_VALUE(dstIPv6Cidr_, dstIPv6Cidr) };


    // dstPortRange Field Functions 
    bool hasDstPortRange() const { return this->dstPortRange_ != nullptr;};
    void deleteDstPortRange() { this->dstPortRange_ = nullptr;};
    inline string dstPortRange() const { DARABONBA_PTR_GET_DEFAULT(dstPortRange_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setDstPortRange(string dstPortRange) { DARABONBA_PTR_SET_VALUE(dstPortRange_, dstPortRange) };


    // matchDscp Field Functions 
    bool hasMatchDscp() const { return this->matchDscp_ != nullptr;};
    void deleteMatchDscp() { this->matchDscp_ = nullptr;};
    inline int32_t matchDscp() const { DARABONBA_PTR_GET_DEFAULT(matchDscp_, 0) };
    inline ModifyExpressConnectTrafficQosRuleRequest& setMatchDscp(int32_t matchDscp) { DARABONBA_PTR_SET_VALUE(matchDscp_, matchDscp) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyExpressConnectTrafficQosRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyExpressConnectTrafficQosRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remarkingDscp Field Functions 
    bool hasRemarkingDscp() const { return this->remarkingDscp_ != nullptr;};
    void deleteRemarkingDscp() { this->remarkingDscp_ = nullptr;};
    inline int32_t remarkingDscp() const { DARABONBA_PTR_GET_DEFAULT(remarkingDscp_, 0) };
    inline ModifyExpressConnectTrafficQosRuleRequest& setRemarkingDscp(int32_t remarkingDscp) { DARABONBA_PTR_SET_VALUE(remarkingDscp_, remarkingDscp) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // ruleDescription Field Functions 
    bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
    void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
    inline string ruleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // srcCidr Field Functions 
    bool hasSrcCidr() const { return this->srcCidr_ != nullptr;};
    void deleteSrcCidr() { this->srcCidr_ = nullptr;};
    inline string srcCidr() const { DARABONBA_PTR_GET_DEFAULT(srcCidr_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setSrcCidr(string srcCidr) { DARABONBA_PTR_SET_VALUE(srcCidr_, srcCidr) };


    // srcIPv6Cidr Field Functions 
    bool hasSrcIPv6Cidr() const { return this->srcIPv6Cidr_ != nullptr;};
    void deleteSrcIPv6Cidr() { this->srcIPv6Cidr_ = nullptr;};
    inline string srcIPv6Cidr() const { DARABONBA_PTR_GET_DEFAULT(srcIPv6Cidr_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setSrcIPv6Cidr(string srcIPv6Cidr) { DARABONBA_PTR_SET_VALUE(srcIPv6Cidr_, srcIPv6Cidr) };


    // srcPortRange Field Functions 
    bool hasSrcPortRange() const { return this->srcPortRange_ != nullptr;};
    void deleteSrcPortRange() { this->srcPortRange_ = nullptr;};
    inline string srcPortRange() const { DARABONBA_PTR_GET_DEFAULT(srcPortRange_, "") };
    inline ModifyExpressConnectTrafficQosRuleRequest& setSrcPortRange(string srcPortRange) { DARABONBA_PTR_SET_VALUE(srcPortRange_, srcPortRange) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The destination IPv4 CIDR block that matches the QoS rule traffic.
    // 
    // > When this parameter is unavailable, specify **SrcIPv6Cidr** or **DstIPv6Cidr**.
    std::shared_ptr<string> dstCidr_ = nullptr;
    // The destination IPv6 CIDR block that matches the QoS rule traffic.
    // 
    // > When this parameter is unavailable, specify **SrcCidr** or **DstCidr**.
    std::shared_ptr<string> dstIPv6Cidr_ = nullptr;
    // The range of destination ports that match the QoS rule traffic. Valid values: **0** to **65535**. If the traffic does not match, the value is -1. You can specify only one port. The start port number must be the same as the end port number. Different protocols correspond to different ports. Valid values:
    // 
    // *   **ALL** (uneditable): -1/-1.
    // *   **ICMP(IPv4)** (uneditable): -1/-1.
    // *   **ICMPv6(IPv6)** (uneditable): -1/-1.
    // *   **TCP** (editable): -1/-1.
    // *   **UDP** (editable): -1/-1.
    // *   **GRE** (uneditable): -1/-1.
    // *   **SSH** (uneditable): 22/22.
    // *   **Telnet** (uneditable): 23/23.
    // *   **HTTP** (uneditable): 80/80.
    // *   **HTTPS** (uneditable): 443/443.
    // *   **MS SQL** (uneditable): 1443/1443.
    // *   **Oracle** (uneditable): 1521/1521.
    // *   **MySql** (uneditable): 3306/3306.
    // *   **RDP** (uneditable): 3389/3389.
    // *   **PostgreSQL** (uneditable): 5432/5432.
    // *   **Redis** (uneditable): 6379/6379.
    std::shared_ptr<string> dstPortRange_ = nullptr;
    // The DSCP value that matches the QoS rule traffic. Valid values: **0** to **63**. If no value is matched, the value is -1.
    std::shared_ptr<int32_t> matchDscp_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The priority of the QoS rule. Valid values: **1** to **9000**. A larger value indicates a higher priority. The priority of each QoS rule must be unique in the same QoS policy.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The protocol of the QoS rule. Valid values:
    // 
    // *   **ALL**
    // *   **ICMP(IPv4)**
    // *   **ICMPv6(IPv6)**
    // *   **TCP**
    // *   **UDP**
    // *   **GRE**
    // *   **SSH**
    // *   **Telnet**
    // *   **HTTP**
    // *   **HTTPS**
    // *   **MS SQL**
    // *   **Oracle**
    // *   **MySql**
    // *   **RDP**
    // *   **PostgreSQL**
    // *   **Redis**
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the QoS policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> qosId_ = nullptr;
    // The ID of the QoS queue.
    // 
    // This parameter is required.
    std::shared_ptr<string> queueId_ = nullptr;
    // The region ID of the QoS policy.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The new DSCP value. Valid values: **0** to **63**. If you do not change the value, set the value to -1.
    std::shared_ptr<int32_t> remarkingDscp_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The description of the QoS rule.
    // 
    // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ruleDescription_ = nullptr;
    // The ID of the QoS rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the QoS rule.
    // 
    // The name must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The source IPv4 CIDR block that matches the QoS rule traffic.
    // 
    // > When this parameter is unavailable, specify **SrcIPv6Cidr** or **DstIPv6Cidr**.
    std::shared_ptr<string> srcCidr_ = nullptr;
    // The source IPv6 CIDR block that matches the QoS rule traffic.
    // 
    // > When this parameter is unavailable, specify **SrcCidr** or **DstCidr**.
    std::shared_ptr<string> srcIPv6Cidr_ = nullptr;
    // The range of source ports that match the QoS rule traffic. Valid values: **0** to **65535**. If the traffic does not match, the value is -1. You can specify only one port. The start port number must be the same as the end port number.
    std::shared_ptr<string> srcPortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
