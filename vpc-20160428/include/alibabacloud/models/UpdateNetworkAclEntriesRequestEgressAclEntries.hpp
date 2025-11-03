// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUESTEGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUESTEGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateNetworkAclEntriesRequestEgressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkAclEntriesRequestEgressAclEntries& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateNetworkAclEntriesRequestEgressAclEntries& obj) { 
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
    UpdateNetworkAclEntriesRequestEgressAclEntries() = default ;
    UpdateNetworkAclEntriesRequestEgressAclEntries(const UpdateNetworkAclEntriesRequestEgressAclEntries &) = default ;
    UpdateNetworkAclEntriesRequestEgressAclEntries(UpdateNetworkAclEntriesRequestEgressAclEntries &&) = default ;
    UpdateNetworkAclEntriesRequestEgressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkAclEntriesRequestEgressAclEntries() = default ;
    UpdateNetworkAclEntriesRequestEgressAclEntries& operator=(const UpdateNetworkAclEntriesRequestEgressAclEntries &) = default ;
    UpdateNetworkAclEntriesRequestEgressAclEntries& operator=(UpdateNetworkAclEntriesRequestEgressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrIp_ == nullptr && return this->entryType_ == nullptr && return this->ipVersion_ == nullptr && return this->networkAclEntryId_ == nullptr && return this->networkAclEntryName_ == nullptr
        && return this->policy_ == nullptr && return this->port_ == nullptr && return this->protocol_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrIp Field Functions 
    bool hasDestinationCidrIp() const { return this->destinationCidrIp_ != nullptr;};
    void deleteDestinationCidrIp() { this->destinationCidrIp_ = nullptr;};
    inline string destinationCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrIp_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setDestinationCidrIp(string destinationCidrIp) { DARABONBA_PTR_SET_VALUE(destinationCidrIp_, destinationCidrIp) };


    // entryType Field Functions 
    bool hasEntryType() const { return this->entryType_ != nullptr;};
    void deleteEntryType() { this->entryType_ = nullptr;};
    inline string entryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // networkAclEntryId Field Functions 
    bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
    void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
    inline string networkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


    // networkAclEntryName Field Functions 
    bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
    void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
    inline string networkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateNetworkAclEntriesRequestEgressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The description of the outbound rule.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block.
    std::shared_ptr<string> destinationCidrIp_ = nullptr;
    // The type of the rule. Set the value to **custom**, which specifies custom rules.
    std::shared_ptr<string> entryType_ = nullptr;
    // The IP version. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **IPv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The ID of the outbound rule.
    // 
    // Valid values of **N**: **0** to **99**. You can specify at most 100 outbound rules.
    std::shared_ptr<string> networkAclEntryId_ = nullptr;
    // The name of the outbound rule.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> networkAclEntryName_ = nullptr;
    // The action to be performed on network traffic that matches the rule. Valid values:
    // 
    // *   **accept**
    // *   **drop**
    std::shared_ptr<string> policy_ = nullptr;
    // The destination port range of the outbound traffic.
    // 
    // *   If the **protocol** of the outbound rule is set to **all**, **icmp**, or **gre**, the port range is -1/-1, which specified all ports.
    // *   If the **protocol** of the outbound rule is set to **tcp** or **udp**, set the port range in the following format: **1/200** or **80/80**, which specifies port 1 to port 200 or port 80. Valid values for a port: **1** to **65535**.
    std::shared_ptr<string> port_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **icmp**
    // *   **gre**
    // *   **tcp**
    // *   **udp**
    // *   **all**
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
