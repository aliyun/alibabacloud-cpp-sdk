// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody(CreateNetworkInterfaceResponseBody &&) = default ;
    CreateNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBody() = default ;
    CreateNetworkInterfaceResponseBody& operator=(const CreateNetworkInterfaceResponseBody &) = default ;
    CreateNetworkInterfaceResponseBody& operator=(CreateNetworkInterfaceResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
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

    class SecurityGroupIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      };
      SecurityGroupIds() = default ;
      SecurityGroupIds(const SecurityGroupIds &) = default ;
      SecurityGroupIds(SecurityGroupIds &&) = default ;
      SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroupIds() = default ;
      SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
      SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
      inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
      inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
      inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    protected:
      shared_ptr<vector<string>> securityGroupId_ {};
    };

    class PrivateIpSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
      };
      PrivateIpSets() = default ;
      PrivateIpSets(const PrivateIpSets &) = default ;
      PrivateIpSets(PrivateIpSets &&) = default ;
      PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateIpSets() = default ;
      PrivateIpSets& operator=(const PrivateIpSets &) = default ;
      PrivateIpSets& operator=(PrivateIpSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateIpSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        };
        PrivateIpSet() = default ;
        PrivateIpSet(const PrivateIpSet &) = default ;
        PrivateIpSet(PrivateIpSet &&) = default ;
        PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpSet() = default ;
        PrivateIpSet& operator=(const PrivateIpSet &) = default ;
        PrivateIpSet& operator=(PrivateIpSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateIpAddress_ == nullptr; };
        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline PrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline PrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      protected:
        // Indicates whether the private IP address is the primary private IP address.
        shared_ptr<bool> primary_ {};
        // The private IP address of the instance.
        shared_ptr<string> privateIpAddress_ {};
      };

      virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
      // privateIpSet Field Functions 
      bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
      void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
      inline const vector<PrivateIpSets::PrivateIpSet> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
      inline vector<PrivateIpSets::PrivateIpSet> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
      inline PrivateIpSets& setPrivateIpSet(const vector<PrivateIpSets::PrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
      inline PrivateIpSets& setPrivateIpSet(vector<PrivateIpSets::PrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


    protected:
      shared_ptr<vector<PrivateIpSets::PrivateIpSet>> privateIpSet_ {};
    };

    class Ipv6Sets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
      };
      Ipv6Sets() = default ;
      Ipv6Sets(const Ipv6Sets &) = default ;
      Ipv6Sets(Ipv6Sets &&) = default ;
      Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6Sets() = default ;
      Ipv6Sets& operator=(const Ipv6Sets &) = default ;
      Ipv6Sets& operator=(Ipv6Sets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6Set : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Set& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Set& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        };
        Ipv6Set() = default ;
        Ipv6Set(const Ipv6Set &) = default ;
        Ipv6Set(Ipv6Set &&) = default ;
        Ipv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Set() = default ;
        Ipv6Set& operator=(const Ipv6Set &) = default ;
        Ipv6Set& operator=(Ipv6Set &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline Ipv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


      protected:
        // The IPv6 address assigned to the ENI.
        shared_ptr<string> ipv6Address_ {};
      };

      virtual bool empty() const override { return this->ipv6Set_ == nullptr; };
      // ipv6Set Field Functions 
      bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
      void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
      inline const vector<Ipv6Sets::Ipv6Set> & getIpv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
      inline vector<Ipv6Sets::Ipv6Set> getIpv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
      inline Ipv6Sets& setIpv6Set(const vector<Ipv6Sets::Ipv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
      inline Ipv6Sets& setIpv6Set(vector<Ipv6Sets::Ipv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


    protected:
      shared_ptr<vector<Ipv6Sets::Ipv6Set>> ipv6Set_ {};
    };

    class Ipv6PrefixSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6PrefixSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6PrefixSet, ipv6PrefixSet_);
      };
      Ipv6PrefixSets() = default ;
      Ipv6PrefixSets(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets(Ipv6PrefixSets &&) = default ;
      Ipv6PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6PrefixSets() = default ;
      Ipv6PrefixSets& operator=(const Ipv6PrefixSets &) = default ;
      Ipv6PrefixSets& operator=(Ipv6PrefixSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6PrefixSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6PrefixSet& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6PrefixSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
        };
        Ipv6PrefixSet() = default ;
        Ipv6PrefixSet(const Ipv6PrefixSet &) = default ;
        Ipv6PrefixSet(Ipv6PrefixSet &&) = default ;
        Ipv6PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6PrefixSet() = default ;
        Ipv6PrefixSet& operator=(const Ipv6PrefixSet &) = default ;
        Ipv6PrefixSet& operator=(Ipv6PrefixSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6Prefix_ == nullptr; };
        // ipv6Prefix Field Functions 
        bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
        void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
        inline string getIpv6Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv6Prefix_, "") };
        inline Ipv6PrefixSet& setIpv6Prefix(string ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };


      protected:
        // The IPv6 prefix assigned to the ENI.
        shared_ptr<string> ipv6Prefix_ {};
      };

      virtual bool empty() const override { return this->ipv6PrefixSet_ == nullptr; };
      // ipv6PrefixSet Field Functions 
      bool hasIpv6PrefixSet() const { return this->ipv6PrefixSet_ != nullptr;};
      void deleteIpv6PrefixSet() { this->ipv6PrefixSet_ = nullptr;};
      inline const vector<Ipv6PrefixSets::Ipv6PrefixSet> & getIpv6PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
      inline vector<Ipv6PrefixSets::Ipv6PrefixSet> getIpv6PrefixSet() { DARABONBA_PTR_GET(ipv6PrefixSet_, vector<Ipv6PrefixSets::Ipv6PrefixSet>) };
      inline Ipv6PrefixSets& setIpv6PrefixSet(const vector<Ipv6PrefixSets::Ipv6PrefixSet> & ipv6PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSet_, ipv6PrefixSet) };
      inline Ipv6PrefixSets& setIpv6PrefixSet(vector<Ipv6PrefixSets::Ipv6PrefixSet> && ipv6PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSet_, ipv6PrefixSet) };


    protected:
      shared_ptr<vector<Ipv6PrefixSets::Ipv6PrefixSet>> ipv6PrefixSet_ {};
    };

    class Ipv4PrefixSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv4PrefixSets& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv4PrefixSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv4PrefixSet, ipv4PrefixSet_);
      };
      Ipv4PrefixSets() = default ;
      Ipv4PrefixSets(const Ipv4PrefixSets &) = default ;
      Ipv4PrefixSets(Ipv4PrefixSets &&) = default ;
      Ipv4PrefixSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv4PrefixSets() = default ;
      Ipv4PrefixSets& operator=(const Ipv4PrefixSets &) = default ;
      Ipv4PrefixSets& operator=(Ipv4PrefixSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv4PrefixSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv4PrefixSet& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
        };
        Ipv4PrefixSet() = default ;
        Ipv4PrefixSet(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet(Ipv4PrefixSet &&) = default ;
        Ipv4PrefixSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv4PrefixSet() = default ;
        Ipv4PrefixSet& operator=(const Ipv4PrefixSet &) = default ;
        Ipv4PrefixSet& operator=(Ipv4PrefixSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Prefix_ == nullptr; };
        // ipv4Prefix Field Functions 
        bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
        void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
        inline string getIpv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
        inline Ipv4PrefixSet& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


      protected:
        // The IPv4 prefix assigned to the ENI.
        shared_ptr<string> ipv4Prefix_ {};
      };

      virtual bool empty() const override { return this->ipv4PrefixSet_ == nullptr; };
      // ipv4PrefixSet Field Functions 
      bool hasIpv4PrefixSet() const { return this->ipv4PrefixSet_ != nullptr;};
      void deleteIpv4PrefixSet() { this->ipv4PrefixSet_ = nullptr;};
      inline const vector<Ipv4PrefixSets::Ipv4PrefixSet> & getIpv4PrefixSet() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
      inline vector<Ipv4PrefixSets::Ipv4PrefixSet> getIpv4PrefixSet() { DARABONBA_PTR_GET(ipv4PrefixSet_, vector<Ipv4PrefixSets::Ipv4PrefixSet>) };
      inline Ipv4PrefixSets& setIpv4PrefixSet(const vector<Ipv4PrefixSets::Ipv4PrefixSet> & ipv4PrefixSet) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSet_, ipv4PrefixSet) };
      inline Ipv4PrefixSets& setIpv4PrefixSet(vector<Ipv4PrefixSets::Ipv4PrefixSet> && ipv4PrefixSet) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSet_, ipv4PrefixSet) };


    protected:
      shared_ptr<vector<Ipv4PrefixSets::Ipv4PrefixSet>> ipv4PrefixSet_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->ipv4PrefixSets_ == nullptr && this->ipv6PrefixSets_ == nullptr && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr && this->networkInterfaceId_ == nullptr
        && this->networkInterfaceName_ == nullptr && this->ownerId_ == nullptr && this->privateIpAddress_ == nullptr && this->privateIpSets_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->serviceID_ == nullptr && this->serviceManaged_ == nullptr && this->sourceDestCheck_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkInterfaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipv4PrefixSets Field Functions 
    bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
    void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::Ipv4PrefixSets & getIpv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, CreateNetworkInterfaceResponseBody::Ipv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBody::Ipv4PrefixSets getIpv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, CreateNetworkInterfaceResponseBody::Ipv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv4PrefixSets(const CreateNetworkInterfaceResponseBody::Ipv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv4PrefixSets(CreateNetworkInterfaceResponseBody::Ipv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::Ipv6PrefixSets & getIpv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, CreateNetworkInterfaceResponseBody::Ipv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBody::Ipv6PrefixSets getIpv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, CreateNetworkInterfaceResponseBody::Ipv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6PrefixSets(const CreateNetworkInterfaceResponseBody::Ipv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6PrefixSets(CreateNetworkInterfaceResponseBody::Ipv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, CreateNetworkInterfaceResponseBody::Ipv6Sets) };
    inline CreateNetworkInterfaceResponseBody::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, CreateNetworkInterfaceResponseBody::Ipv6Sets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6Sets(const CreateNetworkInterfaceResponseBody::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline CreateNetworkInterfaceResponseBody& setIpv6Sets(CreateNetworkInterfaceResponseBody::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline CreateNetworkInterfaceResponseBody& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline CreateNetworkInterfaceResponseBody& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateNetworkInterfaceResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, CreateNetworkInterfaceResponseBody::PrivateIpSets) };
    inline CreateNetworkInterfaceResponseBody::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, CreateNetworkInterfaceResponseBody::PrivateIpSets) };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpSets(const CreateNetworkInterfaceResponseBody::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline CreateNetworkInterfaceResponseBody& setPrivateIpSets(CreateNetworkInterfaceResponseBody::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkInterfaceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, CreateNetworkInterfaceResponseBody::SecurityGroupIds) };
    inline CreateNetworkInterfaceResponseBody::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, CreateNetworkInterfaceResponseBody::SecurityGroupIds) };
    inline CreateNetworkInterfaceResponseBody& setSecurityGroupIds(const CreateNetworkInterfaceResponseBody::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateNetworkInterfaceResponseBody& setSecurityGroupIds(CreateNetworkInterfaceResponseBody::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t getServiceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline CreateNetworkInterfaceResponseBody& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline CreateNetworkInterfaceResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline CreateNetworkInterfaceResponseBody& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateNetworkInterfaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const CreateNetworkInterfaceResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CreateNetworkInterfaceResponseBody::Tags) };
    inline CreateNetworkInterfaceResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, CreateNetworkInterfaceResponseBody::Tags) };
    inline CreateNetworkInterfaceResponseBody& setTags(const CreateNetworkInterfaceResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateNetworkInterfaceResponseBody& setTags(CreateNetworkInterfaceResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateNetworkInterfaceResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNetworkInterfaceResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateNetworkInterfaceResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateNetworkInterfaceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The description of the ENI.
    shared_ptr<string> description_ {};
    // The IPv4 prefixes assigned to the ENI.
    shared_ptr<CreateNetworkInterfaceResponseBody::Ipv4PrefixSets> ipv4PrefixSets_ {};
    // The IPv6 prefixes assigned to the ENI.
    shared_ptr<CreateNetworkInterfaceResponseBody::Ipv6PrefixSets> ipv6PrefixSets_ {};
    // The IPv6 addresses assigned to the ENI.
    shared_ptr<CreateNetworkInterfaceResponseBody::Ipv6Sets> ipv6Sets_ {};
    // The media access control (MAC) address of the ENI.
    shared_ptr<string> macAddress_ {};
    // The ID of the ENI.
    shared_ptr<string> networkInterfaceId_ {};
    // The name of the ENI.
    shared_ptr<string> networkInterfaceName_ {};
    // The ID of the account to which the ENI belongs.
    shared_ptr<string> ownerId_ {};
    // The private IP address of the ENI.
    shared_ptr<string> privateIpAddress_ {};
    // The private IP addresses.
    shared_ptr<CreateNetworkInterfaceResponseBody::PrivateIpSets> privateIpSets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the ENI belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The IDs of the security groups to which the ENI belongs.
    shared_ptr<CreateNetworkInterfaceResponseBody::SecurityGroupIds> securityGroupIds_ {};
    // The ID of the distributor to which the ENI belongs.
    shared_ptr<int64_t> serviceID_ {};
    // Indicates whether the user of the ENI is an Alibaba Cloud service or a distributor.
    shared_ptr<bool> serviceManaged_ {};
    // >  This parameter is in invitational preview and is not publicly available.
    shared_ptr<bool> sourceDestCheck_ {};
    // The state of the ENI.
    shared_ptr<string> status_ {};
    // The tags of the ENI.
    shared_ptr<CreateNetworkInterfaceResponseBody::Tags> tags_ {};
    // The type of the ENI.
    shared_ptr<string> type_ {};
    // The ID of the vSwitch to which the ENI is connected.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC to which the ENI belongs.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the ENI.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
