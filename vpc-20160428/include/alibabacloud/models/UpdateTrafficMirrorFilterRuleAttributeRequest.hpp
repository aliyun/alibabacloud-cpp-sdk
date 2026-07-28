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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->destinationPortRange_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->priority_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->ruleAction_ == nullptr && this->sourceCidrBlock_ == nullptr && this->sourcePortRange_ == nullptr && this->trafficMirrorFilterRuleId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // destinationPortRange Field Functions 
    bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
    void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
    inline string getDestinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // trafficMirrorFilterRuleId Field Functions 
    bool hasTrafficMirrorFilterRuleId() const { return this->trafficMirrorFilterRuleId_ != nullptr;};
    void deleteTrafficMirrorFilterRuleId() { this->trafficMirrorFilterRuleId_ = nullptr;};
    inline string getTrafficMirrorFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleId_, "") };
    inline UpdateTrafficMirrorFilterRuleAttributeRequest& setTrafficMirrorFilterRuleId(string trafficMirrorFilterRuleId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleId_, trafficMirrorFilterRuleId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The destination CIDR block of the network traffic for the inbound or outbound rule to be modified.
    shared_ptr<string> destinationCidrBlock_ {};
    // The destination port range of the network traffic for the inbound or outbound rule to be modified.
    // 
    // > If **Protocol** is set to **ICMP**, the port range cannot be modified.
    shared_ptr<string> destinationPortRange_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // - **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the configuration of the inbound or outbound rule is modified.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The priority of the inbound or outbound rule to be modified. A smaller value indicates a higher priority.
    shared_ptr<int32_t> priority_ {};
    // The Protocol Type of the network traffic to be mirrored by the inbound or outbound rule. Valid values:
    // 
    // - **ALL**: all protocols.
    // 
    // - **ICMP**: Internet Control Message Protocol.
    // 
    // - **TCP**: Transmission Control Protocol.
    // 
    // - **UDP**: User Datagram Protocol.
    shared_ptr<string> protocol_ {};
    // The region ID of the traffic mirror.
    // 
    // You can call [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) to query the most recent region list. For more information about regions that support traffic mirroring, see [Traffic mirroring overview](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The collection policy of the inbound or outbound rule to be modified. Valid values:
    // 
    // - **accept**: collects network traffic.
    // 
    // - **drop**: does not collect network traffic.
    shared_ptr<string> ruleAction_ {};
    // The source CIDR block of the network traffic for the inbound or outbound rule to be modified.
    shared_ptr<string> sourceCidrBlock_ {};
    // The source port range of the network traffic for the inbound or outbound rule to be modified.
    // > If **Protocol** is set to **ICMP**, the port range cannot be modified.
    shared_ptr<string> sourcePortRange_ {};
    // The instance ID of the inbound or outbound rule of the traffic mirroring filter.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorFilterRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
