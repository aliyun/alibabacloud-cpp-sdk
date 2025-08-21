// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSINGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSINGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries(const DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries(DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& operator=(DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->description_ != nullptr && this->destinationCidrBlock_ != nullptr && this->networkAclEntryId_ != nullptr && this->networkAclEntryName_ != nullptr && this->policy_ != nullptr
        && this->portRange_ != nullptr && this->priority_ != nullptr && this->protocol_ != nullptr && this->type_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // networkAclEntryId Field Functions 
    bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
    void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
    inline string networkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


    // networkAclEntryName Field Functions 
    bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
    void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
    inline string networkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkAclsResponseBodyNetworkAclsIngressAclEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The source CIDR block.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The description of the inbound rule.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the inbound rule.
    std::shared_ptr<string> networkAclEntryId_ = nullptr;
    // The name of the inbound rule.
    std::shared_ptr<string> networkAclEntryName_ = nullptr;
    // The action that is performed on network traffic that matches the rule. Valid values:
    // 
    // *   **accept**: allows the network traffic.
    // *   **drop**: blocks the network traffic.
    std::shared_ptr<string> policy_ = nullptr;
    // The destination port range of the inbound rule.
    // 
    // *   If **Protocol** of the inbound rule is set to **all** or **icmp**, the port range is **-1/-1**, which indicates all ports.
    // *   If **Protocol** of the inbound rule is set to **tcp** or **udp**, the port range is in the following format: **1/200** or **80/80**. 1/200 indicates port 1 to port 200. 80/80 indicates port 80. Valid values for a port: **1 to 65535**.
    std::shared_ptr<string> portRange_ = nullptr;
    // The priority of the rule. Valid values: **1 to 100**. Default value: **1**.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **icmp**: ICMP.
    // *   **tcp**: TCP.
    // *   **udp**: UDP.
    // *   **all**: all protocols.
    std::shared_ptr<string> protocol_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **system**: The rule is created by the system.
    // *   **custom**: The rule is created by a user.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
