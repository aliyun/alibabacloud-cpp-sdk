// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkAclEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    CreateNetworkAclEntryRequest() = default ;
    CreateNetworkAclEntryRequest(const CreateNetworkAclEntryRequest &) = default ;
    CreateNetworkAclEntryRequest(CreateNetworkAclEntryRequest &&) = default ;
    CreateNetworkAclEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclEntryRequest() = default ;
    CreateNetworkAclEntryRequest& operator=(const CreateNetworkAclEntryRequest &) = default ;
    CreateNetworkAclEntryRequest& operator=(CreateNetworkAclEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->direction_ == nullptr && this->networkAclEntryName_ == nullptr && this->networkAclId_ == nullptr
        && this->policy_ == nullptr && this->portRange_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateNetworkAclEntryRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkAclEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateNetworkAclEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateNetworkAclEntryRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // networkAclEntryName Field Functions 
    bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
    void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
    inline string getNetworkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
    inline CreateNetworkAclEntryRequest& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline CreateNetworkAclEntryRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateNetworkAclEntryRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline CreateNetworkAclEntryRequest& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateNetworkAclEntryRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateNetworkAclEntryRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The source CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> cidrBlock_ {};
    // The description of the network ACL.
    // 
    // The description must be 1 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    shared_ptr<string> destinationCidrBlock_ {};
    // The direction in which the rule is applied. Valid values:
    // 
    // *   **ingress**
    // *   **egress**
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The name of the rule.
    // 
    // The name must be 1 to 128 characters in length and cannot start with http:// or https://.
    shared_ptr<string> networkAclEntryName_ {};
    // The ID of the network ACL.
    // 
    // This parameter is required.
    shared_ptr<string> networkAclId_ {};
    // The action that is performed on network traffic that matches the rule. Valid values:
    // 
    // *   **accept**: allows network traffic.
    // *   **drop**: blocks network traffic.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The port range.
    // 
    // *   If you set **Protocol** to **all** or **icmp**, set this parameter to -1/-1, which specifies all ports.
    // *   If you set **Protocol** to **tcp** or **udp**, the port can be **1 to 65535**. You can set this parameter to **1/200** or **80/80**, which specifies ports 1 to 200 or port 80.
    // 
    // This parameter is required.
    shared_ptr<string> portRange_ {};
    // The priority of the rule. Valid values: **1 to 100**. Default value: **1**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The type of the protocol. Valid values:
    // 
    // *   **icmp**: ICMP
    // *   **tcp**: TCP
    // *   **udp**: UDP
    // *   **all**: all protocols
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
