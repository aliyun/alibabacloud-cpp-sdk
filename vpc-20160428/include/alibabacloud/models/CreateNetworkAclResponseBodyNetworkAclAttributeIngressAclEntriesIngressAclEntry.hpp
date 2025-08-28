// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIESINGRESSACLENTRY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIESINGRESSACLENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
    };
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry(const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry(CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry &&) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& operator=(const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& operator=(CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->networkAclEntryId_ != nullptr && this->networkAclEntryName_ != nullptr && this->policy_ != nullptr && this->port_ != nullptr && this->protocol_ != nullptr
        && this->sourceCidrIp_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkAclEntryId Field Functions 
    bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
    void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
    inline string networkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


    // networkAclEntryName Field Functions 
    bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
    void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
    inline string networkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sourceCidrIp Field Functions 
    bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
    void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
    inline string sourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


  protected:
    // The description of the inbound rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the inbound rule.
    std::shared_ptr<string> networkAclEntryId_ = nullptr;
    // The name of the inbound rule.
    std::shared_ptr<string> networkAclEntryName_ = nullptr;
    // The action to be performed on network traffic that matches the rule. Valid values:
    // 
    // *   **accept**
    // *   **drop**
    std::shared_ptr<string> policy_ = nullptr;
    // The destination port range of the inbound traffic.
    // 
    // *   If the **protocol** of the inbound rule is set to **all**, **icmp**, or **gre**, the port range is -1/-1, which specifies all ports.
    // *   If the **protocol** of the inbound rule is set to **tcp** or **udp**, set the port range in the following format: **1/200** or **80/80**, which specifies port 1 to port 200 or port 80. Valid ports: **1** to **65535**.
    std::shared_ptr<string> port_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **icmp**
    // *   **gre**
    // *   **tcp**
    // *   **udp**
    // *   **all**
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block.
    std::shared_ptr<string> sourceCidrIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
