// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
    };
    CreateTrafficMirrorFilterRulesRequest() = default ;
    CreateTrafficMirrorFilterRulesRequest(const CreateTrafficMirrorFilterRulesRequest &) = default ;
    CreateTrafficMirrorFilterRulesRequest(CreateTrafficMirrorFilterRulesRequest &&) = default ;
    CreateTrafficMirrorFilterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRulesRequest() = default ;
    CreateTrafficMirrorFilterRulesRequest& operator=(const CreateTrafficMirrorFilterRulesRequest &) = default ;
    CreateTrafficMirrorFilterRulesRequest& operator=(CreateTrafficMirrorFilterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngressRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressRules& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, IngressRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      IngressRules() = default ;
      IngressRules(const IngressRules &) = default ;
      IngressRules(IngressRules &&) = default ;
      IngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressRules() = default ;
      IngressRules& operator=(const IngressRules &) = default ;
      IngressRules& operator=(IngressRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->destinationPortRange_ == nullptr && this->ipVersion_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->sourceCidrBlock_ == nullptr && this->sourcePortRange_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline IngressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline IngressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // destinationPortRange Field Functions 
      bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
      void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
      inline string getDestinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
      inline IngressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline IngressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline IngressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline IngressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // sourceCidrBlock Field Functions 
      bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
      void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
      inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
      inline IngressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline IngressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      // The policy of the inbound rule. Valid values:
      // 
      // *   **accept**: collects network traffic.
      // *   **drop**: drops network traffic.
      shared_ptr<string> action_ {};
      // The destination CIDR block of the inbound traffic.
      shared_ptr<string> destinationCidrBlock_ {};
      // The destination port range of the inbound traffic. Valid value: **1** to **65535**. Separate the first and the last port with a forward slash (/). For example, **1/200** or **80/80**.
      // 
      // >  If the **IngressRules.N.Protocol** parameter is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
      shared_ptr<string> destinationPortRange_ {};
      // The IP version of the instance. The following value may be returned:
      // 
      // *   **IPv4**: IPv4
      // *   **IPv6**: IPv6
      shared_ptr<string> ipVersion_ {};
      // The priority of the inbound rule. A smaller value indicates a higher priority. The maximum value of **N** is **10**. You can configure up to 10 inbound rules for a filter.
      shared_ptr<int32_t> priority_ {};
      // The protocol that is used by the inbound traffic to be mirrored. Valid values:
      // 
      // *   **ALL**: all protocols
      // *   **ICMP**: Internet Control Message Protocol.
      // *   **TCP**: Transmission Control Protocol.
      // *   **UDP**: User Datagram Protocol.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of the inbound traffic.
      shared_ptr<string> sourceCidrBlock_ {};
      // The source port range of the inbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
      // 
      // >  If the **IngressRules.N.Protocol** parameter is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
      shared_ptr<string> sourcePortRange_ {};
    };

    class EgressRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressRules& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      };
      friend void from_json(const Darabonba::Json& j, EgressRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      };
      EgressRules() = default ;
      EgressRules(const EgressRules &) = default ;
      EgressRules(EgressRules &&) = default ;
      EgressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressRules() = default ;
      EgressRules& operator=(const EgressRules &) = default ;
      EgressRules& operator=(EgressRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->destinationPortRange_ == nullptr && this->ipVersion_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->sourceCidrBlock_ == nullptr && this->sourcePortRange_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline EgressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline EgressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // destinationPortRange Field Functions 
      bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
      void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
      inline string getDestinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
      inline EgressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline EgressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline EgressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline EgressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // sourceCidrBlock Field Functions 
      bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
      void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
      inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
      inline EgressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline EgressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    protected:
      // The collection policy of the outbound rule. Valid values:
      // 
      // *   **accept**: accepts network traffic.
      // *   **drop**: drops network traffic.
      shared_ptr<string> action_ {};
      // The destination CIDR block of the outbound traffic.
      shared_ptr<string> destinationCidrBlock_ {};
      // The destination port range of the outbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
      // 
      // >  If **EgressRules.N.Protocol** is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
      shared_ptr<string> destinationPortRange_ {};
      // The IP version of the instance. Valid values:
      // 
      // *   **IPv4**: IPv4
      // *   **IPv6**: IPv6
      shared_ptr<string> ipVersion_ {};
      // The priority of the outbound rule. A smaller value indicates a higher priority. The maximum value of **N** is **10**. You can configure up to 10 outbound rules for a filter.
      shared_ptr<int32_t> priority_ {};
      // The protocol that is used by the outbound traffic to be mirrored. Valid values:
      // 
      // *   **ALL**: all protocols
      // *   **ICMP**: Internet Control Message Protocol.
      // *   **TCP**: Transmission Control Protocol.
      // *   **UDP**: User Datagram Protocol.
      shared_ptr<string> protocol_ {};
      // The source CIDR block of the outbound traffic.
      shared_ptr<string> sourceCidrBlock_ {};
      // The source port range of the outbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
      // 
      // >  If **EgressRules.N.Protocol** is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
      shared_ptr<string> sourcePortRange_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressRules_ == nullptr && this->ingressRules_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trafficMirrorFilterId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMirrorFilterRulesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> & getEgressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<CreateTrafficMirrorFilterRulesRequest::EgressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> getEgressRules() { DARABONBA_PTR_GET(egressRules_, vector<CreateTrafficMirrorFilterRulesRequest::EgressRules>) };
    inline CreateTrafficMirrorFilterRulesRequest& setEgressRules(const vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline CreateTrafficMirrorFilterRulesRequest& setEgressRules(vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> & getIngressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<CreateTrafficMirrorFilterRulesRequest::IngressRules>) };
    inline vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> getIngressRules() { DARABONBA_PTR_GET(ingressRules_, vector<CreateTrafficMirrorFilterRulesRequest::IngressRules>) };
    inline CreateTrafficMirrorFilterRulesRequest& setIngressRules(const vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline CreateTrafficMirrorFilterRulesRequest& setIngressRules(vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMirrorFilterRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMirrorFilterRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline CreateTrafficMirrorFilterRulesRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to check the request without performing the operation. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system checks the required parameters, request format, and limits. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. After the request passes the check, the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The information about the outbound rule.
    shared_ptr<vector<CreateTrafficMirrorFilterRulesRequest::EgressRules>> egressRules_ {};
    // The information about the inbound rules.
    shared_ptr<vector<CreateTrafficMirrorFilterRulesRequest::IngressRules>> ingressRules_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the mirrored traffic belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the filter.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorFilterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
