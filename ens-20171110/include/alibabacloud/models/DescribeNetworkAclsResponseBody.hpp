// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAclsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAcls, networkAcls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAcls, networkAcls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkAclsResponseBody() = default ;
    DescribeNetworkAclsResponseBody(const DescribeNetworkAclsResponseBody &) = default ;
    DescribeNetworkAclsResponseBody(DescribeNetworkAclsResponseBody &&) = default ;
    DescribeNetworkAclsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBody() = default ;
    DescribeNetworkAclsResponseBody& operator=(const DescribeNetworkAclsResponseBody &) = default ;
    DescribeNetworkAclsResponseBody& operator=(DescribeNetworkAclsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkAcls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAcls& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
        DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
        DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
        DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
        DARABONBA_PTR_TO_JSON(Resources, resources_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAcls& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
        DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
        DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
        DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
        DARABONBA_PTR_FROM_JSON(Resources, resources_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      NetworkAcls() = default ;
      NetworkAcls(const NetworkAcls &) = default ;
      NetworkAcls(NetworkAcls &&) = default ;
      NetworkAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAcls() = default ;
      NetworkAcls& operator=(const NetworkAcls &) = default ;
      NetworkAcls& operator=(NetworkAcls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resources& obj) { 
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Resources& obj) { 
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Resources() = default ;
        Resources(const Resources &) = default ;
        Resources(Resources &&) = default ;
        Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resources() = default ;
        Resources& operator=(const Resources &) = default ;
        Resources& operator=(Resources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr; };
        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline Resources& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Resources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The ID of the associated resource.
        shared_ptr<string> resourceId_ {};
        // The type of the associated resource.
        shared_ptr<string> resourceType_ {};
        // The association status of the resource. Valid values:
        // 
        // *   **BINDED**: The resource is associated with the network ACL.
        // *   **BINDING**: The resource is being associated with the network ACL.
        // *   **UNBINDING**: The resource is being disassociated from the network ACL.
        shared_ptr<string> status_ {};
      };

      class IngressAclEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressAclEntries& obj) { 
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
        friend void from_json(const Darabonba::Json& j, IngressAclEntries& obj) { 
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
        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->networkAclEntryId_ == nullptr && this->networkAclEntryName_ == nullptr && this->policy_ == nullptr
        && this->portRange_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr && this->type_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline IngressAclEntries& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline IngressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline IngressAclEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


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


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline IngressAclEntries& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline IngressAclEntries& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline IngressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline IngressAclEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The source CIDR block.
        shared_ptr<string> cidrBlock_ {};
        // The description of the inbound rule.
        shared_ptr<string> description_ {};
        shared_ptr<string> destinationCidrBlock_ {};
        // The ID of the inbound rule.
        shared_ptr<string> networkAclEntryId_ {};
        // The name of the inbound rule.
        shared_ptr<string> networkAclEntryName_ {};
        // The action that is performed on network traffic that matches the rule. Valid values:
        // 
        // *   **accept**: allows the network traffic.
        // *   **drop**: blocks the network traffic.
        shared_ptr<string> policy_ {};
        // The destination port range of the inbound rule.
        // 
        // *   If **Protocol** of the inbound rule is set to **all** or **icmp**, the port range is **-1/-1**, which indicates all ports.
        // *   If **Protocol** of the inbound rule is set to **tcp** or **udp**, the port range is in the following format: **1/200** or **80/80**. 1/200 indicates port 1 to port 200. 80/80 indicates port 80. Valid values for a port: **1 to 65535**.
        shared_ptr<string> portRange_ {};
        // The priority of the rule. Valid values: **1 to 100**. Default value: **1**.
        shared_ptr<int32_t> priority_ {};
        // The protocol type. Valid values:
        // 
        // *   **icmp**: ICMP.
        // *   **tcp**: TCP.
        // *   **udp**: UDP.
        // *   **all**: all protocols.
        shared_ptr<string> protocol_ {};
        // The type of the rule. Valid values:
        // 
        // *   **system**: The rule is created by the system.
        // *   **custom**: The rule is created by a user.
        shared_ptr<string> type_ {};
      };

      class EgressAclEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EgressAclEntries& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(NetworkAclEntryId, networkAclEntryId_);
          DARABONBA_PTR_TO_JSON(NetworkAclEntryName, networkAclEntryName_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
          DARABONBA_PTR_TO_JSON(PortRange, portRange_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EgressAclEntries& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(NetworkAclEntryId, networkAclEntryId_);
          DARABONBA_PTR_FROM_JSON(NetworkAclEntryName, networkAclEntryName_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
          DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->description_ == nullptr && this->networkAclEntryId_ == nullptr && this->networkAclEntryName_ == nullptr && this->policy_ == nullptr && this->portRange_ == nullptr
        && this->priority_ == nullptr && this->protocol_ == nullptr && this->type_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline EgressAclEntries& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EgressAclEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


        // portRange Field Functions 
        bool hasPortRange() const { return this->portRange_ != nullptr;};
        void deletePortRange() { this->portRange_ = nullptr;};
        inline string getPortRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
        inline EgressAclEntries& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline EgressAclEntries& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline EgressAclEntries& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EgressAclEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The destination CIDR block.
        shared_ptr<string> cidrBlock_ {};
        // The description of the outbound rule.
        shared_ptr<string> description_ {};
        // The ID of the outbound rule.
        shared_ptr<string> networkAclEntryId_ {};
        // The name of the outbound rule.
        shared_ptr<string> networkAclEntryName_ {};
        // The action that is performed on network traffic that matches the rule. Valid values:
        // 
        // *   **accept**: allows the network traffic.
        // *   **drop**: blocks the network traffic.
        shared_ptr<string> policy_ {};
        // The destination port range of the outbound rule.
        // 
        // *   If **Protocol** of the outbound rule is set to **all** or **icmp** the port range is **-1/-1**, which indicates all ports.
        // *   If **Protocol** of the outbound rule is set to **tcp** or **udp**, the port range is in the following format: **1/200** or **80/80**. 1/200 indicates port 1 to port 200. 80/80 indicates port 80. Valid values for a port: **1 to 65535**.
        shared_ptr<string> portRange_ {};
        // The priority of the rule. Valid values: **1 to 100**. Default value: **1**.
        shared_ptr<int32_t> priority_ {};
        // The protocol type. Valid values:
        // 
        // *   **icmp**: ICMP.
        // *   **tcp**: TCP.
        // *   **udp**: UDP.
        // *   **all**: all protocols.
        shared_ptr<string> protocol_ {};
        // The type of the rule. Valid values:
        // 
        // *   **system**: The rule is created by the system.
        // *   **custom**: The rule is created by a user.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->egressAclEntries_ == nullptr && this->ingressAclEntries_ == nullptr && this->networkAclId_ == nullptr && this->networkAclName_ == nullptr
        && this->resources_ == nullptr && this->status_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline NetworkAcls& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkAcls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // egressAclEntries Field Functions 
      bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
      void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
      inline const vector<NetworkAcls::EgressAclEntries> & getEgressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, vector<NetworkAcls::EgressAclEntries>) };
      inline vector<NetworkAcls::EgressAclEntries> getEgressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, vector<NetworkAcls::EgressAclEntries>) };
      inline NetworkAcls& setEgressAclEntries(const vector<NetworkAcls::EgressAclEntries> & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
      inline NetworkAcls& setEgressAclEntries(vector<NetworkAcls::EgressAclEntries> && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


      // ingressAclEntries Field Functions 
      bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
      void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
      inline const vector<NetworkAcls::IngressAclEntries> & getIngressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, vector<NetworkAcls::IngressAclEntries>) };
      inline vector<NetworkAcls::IngressAclEntries> getIngressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, vector<NetworkAcls::IngressAclEntries>) };
      inline NetworkAcls& setIngressAclEntries(const vector<NetworkAcls::IngressAclEntries> & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
      inline NetworkAcls& setIngressAclEntries(vector<NetworkAcls::IngressAclEntries> && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


      // networkAclId Field Functions 
      bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
      void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
      inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
      inline NetworkAcls& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


      // networkAclName Field Functions 
      bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
      void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
      inline string getNetworkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
      inline NetworkAcls& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


      // resources Field Functions 
      bool hasResources() const { return this->resources_ != nullptr;};
      void deleteResources() { this->resources_ = nullptr;};
      inline const vector<NetworkAcls::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<NetworkAcls::Resources>) };
      inline vector<NetworkAcls::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<NetworkAcls::Resources>) };
      inline NetworkAcls& setResources(const vector<NetworkAcls::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
      inline NetworkAcls& setResources(vector<NetworkAcls::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkAcls& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the network ACL was created. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the network ACL.
      shared_ptr<string> description_ {};
      // Details of the outbound rules.
      shared_ptr<vector<NetworkAcls::EgressAclEntries>> egressAclEntries_ {};
      // Details of the inbound rules.
      shared_ptr<vector<NetworkAcls::IngressAclEntries>> ingressAclEntries_ {};
      // The ID of the network ACL.
      shared_ptr<string> networkAclId_ {};
      // The name of the network ACL.
      shared_ptr<string> networkAclName_ {};
      // Details of the associated resources.
      shared_ptr<vector<NetworkAcls::Resources>> resources_ {};
      // The status of the network ACL. Valid values:
      // 
      // *   **Available**: The network ACL is available.
      // *   **Modifying**: The network ACL is being configured.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->networkAcls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkAcls Field Functions 
    bool hasNetworkAcls() const { return this->networkAcls_ != nullptr;};
    void deleteNetworkAcls() { this->networkAcls_ = nullptr;};
    inline const vector<DescribeNetworkAclsResponseBody::NetworkAcls> & getNetworkAcls() const { DARABONBA_PTR_GET_CONST(networkAcls_, vector<DescribeNetworkAclsResponseBody::NetworkAcls>) };
    inline vector<DescribeNetworkAclsResponseBody::NetworkAcls> getNetworkAcls() { DARABONBA_PTR_GET(networkAcls_, vector<DescribeNetworkAclsResponseBody::NetworkAcls>) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(const vector<DescribeNetworkAclsResponseBody::NetworkAcls> & networkAcls) { DARABONBA_PTR_SET_VALUE(networkAcls_, networkAcls) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(vector<DescribeNetworkAclsResponseBody::NetworkAcls> && networkAcls) { DARABONBA_PTR_SET_RVALUE(networkAcls_, networkAcls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeNetworkAclsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeNetworkAclsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkAclsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeNetworkAclsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the network ACLs.
    shared_ptr<vector<DescribeNetworkAclsResponseBody::NetworkAcls>> networkAcls_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
