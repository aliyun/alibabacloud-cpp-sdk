// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORFILTERRULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORFILTERRULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateTrafficMirrorFilterRuleAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMirrorFilterRuleAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMirrorFilterRuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
    };
    UpdateTrafficMirrorFilterRuleAttributeRequest() = default ;
    UpdateTrafficMirrorFilterRuleAttributeRequest(const UpdateTrafficMirrorFilterRuleAttributeRequest &) = default ;
    UpdateTrafficMirrorFilterRuleAttributeRequest(UpdateTrafficMirrorFilterRuleAttributeRequest &&) = default ;
    UpdateTrafficMirrorFilterRuleAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMirrorFilterRuleAttributeRequest() = default ;
    UpdateTrafficMirrorFilterRuleAttributeRequest& operator=(const UpdateTrafficMirrorFilterRuleAttributeRequest &) = default ;
    UpdateTrafficMirrorFilterRuleAttributeRequest& operator=(UpdateTrafficMirrorFilterRuleAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->destinationCidrBlock_ != nullptr && this->destinationPortRange_ != nullptr && this->dryRun_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->priority_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->ruleAction_ != nullptr && this->sourceCidrBlock_ != nullptr && this->sourcePortRange_ != nullptr && this->trafficMirrorFilterRuleId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // destinationPortRange Field Functions 
    bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
    void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
    inline string destinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string sourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // trafficMirrorFilterRuleId Field Functions 
    bool hasTrafficMirrorFilterRuleId() const { return this->trafficMirrorFilterRuleId_ != nullptr;};
    void deleteTrafficMirrorFilterRuleId() { this->trafficMirrorFilterRuleId_ = nullptr;};
    inline string trafficMirrorFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleId_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setTrafficMirrorFilterRuleId(string trafficMirrorFilterRuleId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleId_, trafficMirrorFilterRuleId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The new destination CIDR block of the inbound or outbound traffic.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The new destination port range of the inbound or outbound traffic.
    // 
    // >  If you set **Protocol** to **ICMP**, you cannot change the port range.
    std::shared_ptr<string> destinationPortRange_ = nullptr;
    // Specifies whether to check the request without performing the operation. Valid values:
    // 
    // *   **true**: only checks the API request. The configuration of the inbound or outbound rule is not modified. The system checks the required parameters, request syntax, and limits. If the request fails to pass the check, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false**: sends the request. This is the default value. If the request passes the check, a 2xx HTTP status code is returned and the configuration of the inbound or outbound rule is modified.
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The new priority of the inbound or outbound rule. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The new protocol that is used by the traffic to be mirrored by the inbound or outbound rule. Valid values:
    // 
    // *   **ALL**: all protocols
    // *   **ICMP**: Internet Control Message Protocol (ICMP)
    // *   **TCP**: TCP
    // *   **UDP**: User Datagram Protocol (UDP)
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the region to which the mirrored traffic belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirroring, see [Overview of traffic mirroring](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The new action of the inbound or outbound rule. Valid values:
    // 
    // *   **accept**: accepts network traffic.
    // *   **drop**: drops network traffic.
    std::shared_ptr<string> ruleAction_ = nullptr;
    // The new source CIDR block of the inbound or outbound traffic.
    std::shared_ptr<string> sourceCidrBlock_ = nullptr;
    // The new source port range of the inbound or outbound traffic.
    // 
    // >  If you set **Protocol** to **ICMP**, you cannot change the port range.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
    // The ID of the inbound or outbound rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficMirrorFilterRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
