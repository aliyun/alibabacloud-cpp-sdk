// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(NetworkAcl, networkAcl_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAcls& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkAcl, networkAcl_);
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
      class NetworkAcl : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkAcl& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
          DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
          DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_TO_JSON(NetworkAclName, networkAclName_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Resources, resources_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkAcl& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
          DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
          DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_FROM_JSON(NetworkAclName, networkAclName_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Resources, resources_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        NetworkAcl() = default ;
        NetworkAcl(const NetworkAcl &) = default ;
        NetworkAcl(NetworkAcl &&) = default ;
        NetworkAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkAcl() = default ;
        NetworkAcl& operator=(const NetworkAcl &) = default ;
        NetworkAcl& operator=(NetworkAcl &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of tag N added to the resource.
            shared_ptr<string> key_ {};
            // The value of tag N added to the resource.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class Resources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resources& obj) { 
            DARABONBA_PTR_TO_JSON(Resource, resource_);
          };
          friend void from_json(const Darabonba::Json& j, Resources& obj) { 
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
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
          class Resource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Resource& obj) { 
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, Resource& obj) { 
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            Resource() = default ;
            Resource(const Resource &) = default ;
            Resource(Resource &&) = default ;
            Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Resource() = default ;
            Resource& operator=(const Resource &) = default ;
            Resource& operator=(Resource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr; };
            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline Resource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline Resource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Resource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The ID of the associated resource.
            shared_ptr<string> resourceId_ {};
            // The type of resource with which you want to associate the network ACL.
            shared_ptr<string> resourceType_ {};
            // The association status of the resource. Valid values:
            // 
            // *   **BINDED**
            // *   **BINDING**
            // *   **UNBINDING**
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->resource_ == nullptr; };
          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline const vector<Resources::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resources::Resource>) };
          inline vector<Resources::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Resources::Resource>) };
          inline Resources& setResource(const vector<Resources::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
          inline Resources& setResource(vector<Resources::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


        protected:
          shared_ptr<vector<Resources::Resource>> resource_ {};
        };

        class IngressAclEntries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IngressAclEntries& obj) { 
            DARABONBA_PTR_TO_JSON(IngressAclEntry, ingressAclEntry_);
          };
          friend void from_json(const Darabonba::Json& j, IngressAclEntries& obj) { 
            DARABONBA_PTR_FROM_JSON(IngressAclEntry, ingressAclEntry_);
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
          class IngressAclEntry : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IngressAclEntry& obj) { 
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
            friend void from_json(const Darabonba::Json& j, IngressAclEntry& obj) { 
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
            IngressAclEntry() = default ;
            IngressAclEntry(const IngressAclEntry &) = default ;
            IngressAclEntry(IngressAclEntry &&) = default ;
            IngressAclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~IngressAclEntry() = default ;
            IngressAclEntry& operator=(const IngressAclEntry &) = default ;
            IngressAclEntry& operator=(IngressAclEntry &&) = default ;
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
            inline IngressAclEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // entryType Field Functions 
            bool hasEntryType() const { return this->entryType_ != nullptr;};
            void deleteEntryType() { this->entryType_ = nullptr;};
            inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
            inline IngressAclEntry& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


            // ipVersion Field Functions 
            bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
            void deleteIpVersion() { this->ipVersion_ = nullptr;};
            inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
            inline IngressAclEntry& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


            // networkAclEntryId Field Functions 
            bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
            void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
            inline string getNetworkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
            inline IngressAclEntry& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


            // networkAclEntryName Field Functions 
            bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
            void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
            inline string getNetworkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
            inline IngressAclEntry& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


            // policy Field Functions 
            bool hasPolicy() const { return this->policy_ != nullptr;};
            void deletePolicy() { this->policy_ = nullptr;};
            inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
            inline IngressAclEntry& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline IngressAclEntry& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // protocol Field Functions 
            bool hasProtocol() const { return this->protocol_ != nullptr;};
            void deleteProtocol() { this->protocol_ = nullptr;};
            inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
            inline IngressAclEntry& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


            // sourceCidrIp Field Functions 
            bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
            void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
            inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
            inline IngressAclEntry& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


          protected:
            // The description of the inbound rule.
            shared_ptr<string> description_ {};
            // The type of the inbound rule.
            // 
            // - **custom**
            // 
            // - **system**
            shared_ptr<string> entryType_ {};
            // The IP version. 
            // 
            // *   **IPv4**
            // *   **IPv6**
            shared_ptr<string> ipVersion_ {};
            // The ID of the inbound rule.
            shared_ptr<string> networkAclEntryId_ {};
            // The name of the inbound rule.
            shared_ptr<string> networkAclEntryName_ {};
            // The action to be performed on network traffic that matches the rule. Valid values:
            // 
            // *   **accept**
            // *   **drop**
            shared_ptr<string> policy_ {};
            // The destination port range of the inbound traffic.
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

          virtual bool empty() const override { return this->ingressAclEntry_ == nullptr; };
          // ingressAclEntry Field Functions 
          bool hasIngressAclEntry() const { return this->ingressAclEntry_ != nullptr;};
          void deleteIngressAclEntry() { this->ingressAclEntry_ = nullptr;};
          inline const vector<IngressAclEntries::IngressAclEntry> & getIngressAclEntry() const { DARABONBA_PTR_GET_CONST(ingressAclEntry_, vector<IngressAclEntries::IngressAclEntry>) };
          inline vector<IngressAclEntries::IngressAclEntry> getIngressAclEntry() { DARABONBA_PTR_GET(ingressAclEntry_, vector<IngressAclEntries::IngressAclEntry>) };
          inline IngressAclEntries& setIngressAclEntry(const vector<IngressAclEntries::IngressAclEntry> & ingressAclEntry) { DARABONBA_PTR_SET_VALUE(ingressAclEntry_, ingressAclEntry) };
          inline IngressAclEntries& setIngressAclEntry(vector<IngressAclEntries::IngressAclEntry> && ingressAclEntry) { DARABONBA_PTR_SET_RVALUE(ingressAclEntry_, ingressAclEntry) };


        protected:
          shared_ptr<vector<IngressAclEntries::IngressAclEntry>> ingressAclEntry_ {};
        };

        class EgressAclEntries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EgressAclEntries& obj) { 
            DARABONBA_PTR_TO_JSON(EgressAclEntry, egressAclEntry_);
          };
          friend void from_json(const Darabonba::Json& j, EgressAclEntries& obj) { 
            DARABONBA_PTR_FROM_JSON(EgressAclEntry, egressAclEntry_);
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
          class EgressAclEntry : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EgressAclEntry& obj) { 
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
            friend void from_json(const Darabonba::Json& j, EgressAclEntry& obj) { 
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
            EgressAclEntry() = default ;
            EgressAclEntry(const EgressAclEntry &) = default ;
            EgressAclEntry(EgressAclEntry &&) = default ;
            EgressAclEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EgressAclEntry() = default ;
            EgressAclEntry& operator=(const EgressAclEntry &) = default ;
            EgressAclEntry& operator=(EgressAclEntry &&) = default ;
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
            inline EgressAclEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // destinationCidrIp Field Functions 
            bool hasDestinationCidrIp() const { return this->destinationCidrIp_ != nullptr;};
            void deleteDestinationCidrIp() { this->destinationCidrIp_ = nullptr;};
            inline string getDestinationCidrIp() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrIp_, "") };
            inline EgressAclEntry& setDestinationCidrIp(string destinationCidrIp) { DARABONBA_PTR_SET_VALUE(destinationCidrIp_, destinationCidrIp) };


            // entryType Field Functions 
            bool hasEntryType() const { return this->entryType_ != nullptr;};
            void deleteEntryType() { this->entryType_ = nullptr;};
            inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
            inline EgressAclEntry& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


            // ipVersion Field Functions 
            bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
            void deleteIpVersion() { this->ipVersion_ = nullptr;};
            inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
            inline EgressAclEntry& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


            // networkAclEntryId Field Functions 
            bool hasNetworkAclEntryId() const { return this->networkAclEntryId_ != nullptr;};
            void deleteNetworkAclEntryId() { this->networkAclEntryId_ = nullptr;};
            inline string getNetworkAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryId_, "") };
            inline EgressAclEntry& setNetworkAclEntryId(string networkAclEntryId) { DARABONBA_PTR_SET_VALUE(networkAclEntryId_, networkAclEntryId) };


            // networkAclEntryName Field Functions 
            bool hasNetworkAclEntryName() const { return this->networkAclEntryName_ != nullptr;};
            void deleteNetworkAclEntryName() { this->networkAclEntryName_ = nullptr;};
            inline string getNetworkAclEntryName() const { DARABONBA_PTR_GET_DEFAULT(networkAclEntryName_, "") };
            inline EgressAclEntry& setNetworkAclEntryName(string networkAclEntryName) { DARABONBA_PTR_SET_VALUE(networkAclEntryName_, networkAclEntryName) };


            // policy Field Functions 
            bool hasPolicy() const { return this->policy_ != nullptr;};
            void deletePolicy() { this->policy_ = nullptr;};
            inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
            inline EgressAclEntry& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline EgressAclEntry& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // protocol Field Functions 
            bool hasProtocol() const { return this->protocol_ != nullptr;};
            void deleteProtocol() { this->protocol_ = nullptr;};
            inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
            inline EgressAclEntry& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          protected:
            // The description of the outbound rule.
            shared_ptr<string> description_ {};
            // The destination CIDR block.
            shared_ptr<string> destinationCidrIp_ {};
            // The type of the inbound rule.
            // 
            // - **custom**
            // 
            // - **system**
            shared_ptr<string> entryType_ {};
            // The IP version. 
            // 
            // *   **IPv4**
            // *   **IPv6**
            shared_ptr<string> ipVersion_ {};
            // The ID of the outbound rule.
            shared_ptr<string> networkAclEntryId_ {};
            // The name of the outbound rule.
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

          virtual bool empty() const override { return this->egressAclEntry_ == nullptr; };
          // egressAclEntry Field Functions 
          bool hasEgressAclEntry() const { return this->egressAclEntry_ != nullptr;};
          void deleteEgressAclEntry() { this->egressAclEntry_ = nullptr;};
          inline const vector<EgressAclEntries::EgressAclEntry> & getEgressAclEntry() const { DARABONBA_PTR_GET_CONST(egressAclEntry_, vector<EgressAclEntries::EgressAclEntry>) };
          inline vector<EgressAclEntries::EgressAclEntry> getEgressAclEntry() { DARABONBA_PTR_GET(egressAclEntry_, vector<EgressAclEntries::EgressAclEntry>) };
          inline EgressAclEntries& setEgressAclEntry(const vector<EgressAclEntries::EgressAclEntry> & egressAclEntry) { DARABONBA_PTR_SET_VALUE(egressAclEntry_, egressAclEntry) };
          inline EgressAclEntries& setEgressAclEntry(vector<EgressAclEntries::EgressAclEntry> && egressAclEntry) { DARABONBA_PTR_SET_RVALUE(egressAclEntry_, egressAclEntry) };


        protected:
          shared_ptr<vector<EgressAclEntries::EgressAclEntry>> egressAclEntry_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->egressAclEntries_ == nullptr && this->ingressAclEntries_ == nullptr && this->networkAclId_ == nullptr && this->networkAclName_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resources_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline NetworkAcl& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NetworkAcl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // egressAclEntries Field Functions 
        bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
        void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
        inline const NetworkAcl::EgressAclEntries & getEgressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, NetworkAcl::EgressAclEntries) };
        inline NetworkAcl::EgressAclEntries getEgressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, NetworkAcl::EgressAclEntries) };
        inline NetworkAcl& setEgressAclEntries(const NetworkAcl::EgressAclEntries & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
        inline NetworkAcl& setEgressAclEntries(NetworkAcl::EgressAclEntries && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


        // ingressAclEntries Field Functions 
        bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
        void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
        inline const NetworkAcl::IngressAclEntries & getIngressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, NetworkAcl::IngressAclEntries) };
        inline NetworkAcl::IngressAclEntries getIngressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, NetworkAcl::IngressAclEntries) };
        inline NetworkAcl& setIngressAclEntries(const NetworkAcl::IngressAclEntries & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
        inline NetworkAcl& setIngressAclEntries(NetworkAcl::IngressAclEntries && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


        // networkAclId Field Functions 
        bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
        void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
        inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
        inline NetworkAcl& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


        // networkAclName Field Functions 
        bool hasNetworkAclName() const { return this->networkAclName_ != nullptr;};
        void deleteNetworkAclName() { this->networkAclName_ = nullptr;};
        inline string getNetworkAclName() const { DARABONBA_PTR_GET_DEFAULT(networkAclName_, "") };
        inline NetworkAcl& setNetworkAclName(string networkAclName) { DARABONBA_PTR_SET_VALUE(networkAclName_, networkAclName) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline NetworkAcl& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline NetworkAcl& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline const NetworkAcl::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, NetworkAcl::Resources) };
        inline NetworkAcl::Resources getResources() { DARABONBA_PTR_GET(resources_, NetworkAcl::Resources) };
        inline NetworkAcl& setResources(const NetworkAcl::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
        inline NetworkAcl& setResources(NetworkAcl::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NetworkAcl& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const NetworkAcl::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, NetworkAcl::Tags) };
        inline NetworkAcl::Tags getTags() { DARABONBA_PTR_GET(tags_, NetworkAcl::Tags) };
        inline NetworkAcl& setTags(const NetworkAcl::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline NetworkAcl& setTags(NetworkAcl::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NetworkAcl& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The time when the network ACL was created.
        shared_ptr<string> creationTime_ {};
        // The description of the network ACL.
        shared_ptr<string> description_ {};
        // The outbound rules.
        shared_ptr<NetworkAcl::EgressAclEntries> egressAclEntries_ {};
        // The configurations of the inbound rules.
        shared_ptr<NetworkAcl::IngressAclEntries> ingressAclEntries_ {};
        // The ID of the network ACL.
        shared_ptr<string> networkAclId_ {};
        // The name of the network ACL.
        shared_ptr<string> networkAclName_ {};
        // The ID of the Alibaba Cloud account to which the network ACL belongs.
        shared_ptr<int64_t> ownerId_ {};
        // The region ID of the network ACL.
        shared_ptr<string> regionId_ {};
        // The resources that are associated with the network ACL.
        shared_ptr<NetworkAcl::Resources> resources_ {};
        // The status of the network ACL. Valid values:
        // 
        // *   **Available**
        // *   **Modifying**
        shared_ptr<string> status_ {};
        // The information about the tags.
        shared_ptr<NetworkAcl::Tags> tags_ {};
        // The ID of the associated VPC.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->networkAcl_ == nullptr; };
      // networkAcl Field Functions 
      bool hasNetworkAcl() const { return this->networkAcl_ != nullptr;};
      void deleteNetworkAcl() { this->networkAcl_ = nullptr;};
      inline const vector<NetworkAcls::NetworkAcl> & getNetworkAcl() const { DARABONBA_PTR_GET_CONST(networkAcl_, vector<NetworkAcls::NetworkAcl>) };
      inline vector<NetworkAcls::NetworkAcl> getNetworkAcl() { DARABONBA_PTR_GET(networkAcl_, vector<NetworkAcls::NetworkAcl>) };
      inline NetworkAcls& setNetworkAcl(const vector<NetworkAcls::NetworkAcl> & networkAcl) { DARABONBA_PTR_SET_VALUE(networkAcl_, networkAcl) };
      inline NetworkAcls& setNetworkAcl(vector<NetworkAcls::NetworkAcl> && networkAcl) { DARABONBA_PTR_SET_RVALUE(networkAcl_, networkAcl) };


    protected:
      shared_ptr<vector<NetworkAcls::NetworkAcl>> networkAcl_ {};
    };

    virtual bool empty() const override { return this->networkAcls_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkAcls Field Functions 
    bool hasNetworkAcls() const { return this->networkAcls_ != nullptr;};
    void deleteNetworkAcls() { this->networkAcls_ = nullptr;};
    inline const DescribeNetworkAclsResponseBody::NetworkAcls & getNetworkAcls() const { DARABONBA_PTR_GET_CONST(networkAcls_, DescribeNetworkAclsResponseBody::NetworkAcls) };
    inline DescribeNetworkAclsResponseBody::NetworkAcls getNetworkAcls() { DARABONBA_PTR_GET(networkAcls_, DescribeNetworkAclsResponseBody::NetworkAcls) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(const DescribeNetworkAclsResponseBody::NetworkAcls & networkAcls) { DARABONBA_PTR_SET_VALUE(networkAcls_, networkAcls) };
    inline DescribeNetworkAclsResponseBody& setNetworkAcls(DescribeNetworkAclsResponseBody::NetworkAcls && networkAcls) { DARABONBA_PTR_SET_RVALUE(networkAcls_, networkAcls) };


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
    // The details of the network ACLs.
    shared_ptr<DescribeNetworkAclsResponseBody::NetworkAcls> networkAcls_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
