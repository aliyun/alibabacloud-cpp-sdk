// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUEST_HPP_
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
  class UpdateNetworkAclEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkAclEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UpdateEgressAclEntries, updateEgressAclEntries_);
      DARABONBA_PTR_TO_JSON(UpdateIngressAclEntries, updateIngressAclEntries_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkAclEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UpdateEgressAclEntries, updateEgressAclEntries_);
      DARABONBA_PTR_FROM_JSON(UpdateIngressAclEntries, updateIngressAclEntries_);
    };
    UpdateNetworkAclEntriesRequest() = default ;
    UpdateNetworkAclEntriesRequest(const UpdateNetworkAclEntriesRequest &) = default ;
    UpdateNetworkAclEntriesRequest(UpdateNetworkAclEntriesRequest &&) = default ;
    UpdateNetworkAclEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkAclEntriesRequest() = default ;
    UpdateNetworkAclEntriesRequest& operator=(const UpdateNetworkAclEntriesRequest &) = default ;
    UpdateNetworkAclEntriesRequest& operator=(UpdateNetworkAclEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngressAclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressAclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EntryType, entryType_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
        DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, IngressAclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EntryType, entryType_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
        DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      };
      IngressAclEntries() = default ;
      IngressAclEntries(const IngressAclEntries &) = default ;
      IngressAclEntries(IngressAclEntries &&) = default ;
      IngressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressAclEntries() = default ;
      IngressAclEntries& operator=(const IngressAclEntries &) = default ;
      IngressAclEntries& operator=(IngressAclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->entryType_ == nullptr && this->ipVersion_ == nullptr && this->networkAclEntryId_ == nullptr && this->networkAclEntryName_ == nullptr && this->policy_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr && this->sourceCidrIp_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IngressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // entryType Field Functions 
      bool hasEntryType() const { return this->entryType_ != nullptr;};
      void deleteEntryType() { this->entryType_ = nullptr;};
      inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
      inline IngressAclEntries& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline IngressAclEntries& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // networkAclEntryId Field Functions 
      bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
      void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
      inline string getNetworkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
      inline IngressAclEntries& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


      // networkAclEntryName Field Functions 
      bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
      void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
      inline string getNetworkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
      inline IngressAclEntries& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline IngressAclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline IngressAclEntries& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline IngressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline IngressAclEntries& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    protected:
      // The description of the inbound rule.
      // 
      // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The type of the rule. Set the value to **custom**, which specifies custom rules.
      shared_ptr<string> entryType_ {};
      // The IP version. Valid values:
      // 
      // *   **IPv4** (default)
      // *   **IPv6**
      shared_ptr<string> ipVersion_ {};
      // The ID of the inbound rule.
      // 
      // Valid values of **N**: **0** to **99**. You can specify at most 100 inbound rules.
      shared_ptr<string> networkAclEntryId_ {};
      // The name of the inbound rule.
      // 
      // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> networkAclEntryName_ {};
      // The action to be performed on network traffic that matches the rule. Valid values:
      // 
      // *   **accept**
      // *   **drop**
      shared_ptr<string> policy_ {};
      // The source port range of the inbound rule.
      // 
      // *   If the **protocol** of the inbound rule is set to **all**, **icmp**, or **gre**, the port range is -1/-1, which specifies all ports.
      // *   If the **protocol** of the inbound rule is set to **tcp** or **udp**, set the port range in the following format: **1/200** or **80/80**, which specifies port 1 to port 200 or port 80. Valid ports: **1** to **65535**.
      shared_ptr<string> port_ {};
      // The protocol. Valid values:
      // 
      // *   **icmp**
      // *   **gre**
      // *   **tcp**
      // *   **udp**
      // *   **all**
      shared_ptr<string> protocol_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidrIp_ {};
    };

    class EgressAclEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EgressAclEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationCidrIp, destinationCidrIp_);
        DARABONBA_PTR_TO_JSON(EntryType, entryType_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
        DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, EgressAclEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrIp, destinationCidrIp_);
        DARABONBA_PTR_FROM_JSON(EntryType, entryType_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
        DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      EgressAclEntries() = default ;
      EgressAclEntries(const EgressAclEntries &) = default ;
      EgressAclEntries(EgressAclEntries &&) = default ;
      EgressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EgressAclEntries() = default ;
      EgressAclEntries& operator=(const EgressAclEntries &) = default ;
      EgressAclEntries& operator=(EgressAclEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationCidrIp_ == nullptr && this->entryType_ == nullptr && this->ipVersion_ == nullptr && this->networkAclEntryId_ == nullptr && this->networkAclEntryName_ == nullptr
        && this->policy_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EgressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationCidrIp Field Functions 
      bool hasDestinationCidrIp() const { return this->destinationCidrIp_ != nullptr;};
      void deleteDestinationCidrIp() { this->destinationCidrIp_ = nullptr;};
      inline string getDestinationCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrIp_, "") };
      inline EgressAclEntries& setDestinationCidrIp(string destinationCidrIp) { DARABONBA_PTR_SET_VALUE(destinationCidrIp_, destinationCidrIp) };


      // entryType Field Functions 
      bool hasEntryType() const { return this->entryType_ != nullptr;};
      void deleteEntryType() { this->entryType_ = nullptr;};
      inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
      inline EgressAclEntries& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline EgressAclEntries& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // networkAclEntryId Field Functions 
      bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
      void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
      inline string getNetworkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
      inline EgressAclEntries& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


      // networkAclEntryName Field Functions 
      bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
      void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
      inline string getNetworkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
      inline EgressAclEntries& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline EgressAclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline EgressAclEntries& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline EgressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The description of the outbound rule.
      // 
      // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The destination CIDR block.
      shared_ptr<string> destinationCidrIp_ {};
      // The type of the rule. Set the value to **custom**, which specifies custom rules.
      shared_ptr<string> entryType_ {};
      // The IP version. Valid values:
      // 
      // *   **IPv4** (default)
      // *   **IPv6**
      shared_ptr<string> ipVersion_ {};
      // The ID of the outbound rule.
      // 
      // Valid values of **N**: **0** to **99**. You can specify at most 100 outbound rules.
      shared_ptr<string> networkAclEntryId_ {};
      // The name of the outbound rule.
      // 
      // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> networkAclEntryName_ {};
      // The action to be performed on network traffic that matches the rule. Valid values:
      // 
      // *   **accept**
      // *   **drop**
      shared_ptr<string> policy_ {};
      // The destination port range of the outbound traffic.
      // 
      // *   If the **protocol** of the outbound rule is set to **all**, **icmp**, or **gre**, the port range is -1/-1, which specified all ports.
      // *   If the **protocol** of the outbound rule is set to **tcp** or **udp**, set the port range in the following format: **1/200** or **80/80**, which specifies port 1 to port 200 or port 80. Valid values for a port: **1** to **65535**.
      shared_ptr<string> port_ {};
      // The protocol. Valid values:
      // 
      // *   **icmp**
      // *   **gre**
      // *   **tcp**
      // *   **udp**
      // *   **all**
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->egressAclEntries_ == nullptr && this->ingressAclEntries_ == nullptr && this->networkAclId_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->updateEgressAclEntries_ == nullptr
        && this->updateIngressAclEntries_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateNetworkAclEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateNetworkAclEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressAclEntries Field Functions 
    bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
    void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
    inline const vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> & getEgressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, vector<UpdateNetworkAclEntriesRequest::EgressAclEntries>) };
    inline vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> getEgressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, vector<UpdateNetworkAclEntriesRequest::EgressAclEntries>) };
    inline UpdateNetworkAclEntriesRequest& setEgressAclEntries(const vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
    inline UpdateNetworkAclEntriesRequest& setEgressAclEntries(vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


    // ingressAclEntries Field Functions 
    bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
    void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
    inline const vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> & getIngressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, vector<UpdateNetworkAclEntriesRequest::IngressAclEntries>) };
    inline vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> getIngressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, vector<UpdateNetworkAclEntriesRequest::IngressAclEntries>) };
    inline UpdateNetworkAclEntriesRequest& setIngressAclEntries(const vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
    inline UpdateNetworkAclEntriesRequest& setIngressAclEntries(vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline UpdateNetworkAclEntriesRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateNetworkAclEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateNetworkAclEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNetworkAclEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateNetworkAclEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateNetworkAclEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // updateEgressAclEntries Field Functions 
    bool hasUpdateEgressAclEntries() const { return this->updateEgressAclEntries_ != nullptr;};
    void deleteUpdateEgressAclEntries() { this->updateEgressAclEntries_ = nullptr;};
    inline bool getUpdateEgressAclEntries() const { DARABONBA_PTR_GET_DEFAULT(updateEgressAclEntries_, false) };
    inline UpdateNetworkAclEntriesRequest& setUpdateEgressAclEntries(bool updateEgressAclEntries) { DARABONBA_PTR_SET_VALUE(updateEgressAclEntries_, updateEgressAclEntries) };


    // updateIngressAclEntries Field Functions 
    bool hasUpdateIngressAclEntries() const { return this->updateIngressAclEntries_ != nullptr;};
    void deleteUpdateIngressAclEntries() { this->updateIngressAclEntries_ = nullptr;};
    inline bool getUpdateIngressAclEntries() const { DARABONBA_PTR_GET_DEFAULT(updateIngressAclEntries_, false) };
    inline UpdateNetworkAclEntriesRequest& setUpdateIngressAclEntries(bool updateIngressAclEntries) { DARABONBA_PTR_SET_VALUE(updateIngressAclEntries_, updateIngressAclEntries) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including the AccessKey pair, the permissions of the RAM user, and the required parameters. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The information about the outbound rules.
    shared_ptr<vector<UpdateNetworkAclEntriesRequest::EgressAclEntries>> egressAclEntries_ {};
    // The information about the inbound rule.
    shared_ptr<vector<UpdateNetworkAclEntriesRequest::IngressAclEntries>> ingressAclEntries_ {};
    // The ID of the network ACL.
    // 
    // This parameter is required.
    shared_ptr<string> networkAclId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the network ACL.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to update outbound rules. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter cannot be used to add outbound rules to ACLs. If you want to add more outbound rules to ACLs, specify both the existing rule and the rule that you want to add when you call this API operation. If you specify only the rule that you want to add, it overwrites the existing rule.
    shared_ptr<bool> updateEgressAclEntries_ {};
    // Specifies whether to update inbound rules. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter cannot be used to add inbound rules to ACLs. If you want to add more inbound rules to ACLs, you must specify both the existing rule and the rule that you want to add when you call this API operation. If you specify only the rule that you want to add, it overwrites the existing rule.
    shared_ptr<bool> updateIngressAclEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
