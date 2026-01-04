// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeVpcAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_TO_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(ClassicLinkEnabled, classicLinkEnabled_);
      DARABONBA_PTR_TO_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_TO_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportIpv4Gateway, supportIpv4Gateway_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedCens, associatedCens_);
      DARABONBA_PTR_FROM_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(ClassicLinkEnabled, classicLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
      DARABONBA_PTR_FROM_JSON(DnsHostnameStatus, dnsHostnameStatus_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportIpv4Gateway, supportIpv4Gateway_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserCidrs, userCidrs_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeVpcAttributeResponseBody() = default ;
    DescribeVpcAttributeResponseBody(const DescribeVpcAttributeResponseBody &) = default ;
    DescribeVpcAttributeResponseBody(DescribeVpcAttributeResponseBody &&) = default ;
    DescribeVpcAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBody() = default ;
    DescribeVpcAttributeResponseBody& operator=(const DescribeVpcAttributeResponseBody &) = default ;
    DescribeVpcAttributeResponseBody& operator=(DescribeVpcAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitchIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      VSwitchIds() = default ;
      VSwitchIds(const VSwitchIds &) = default ;
      VSwitchIds(VSwitchIds &&) = default ;
      VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitchIds() = default ;
      VSwitchIds& operator=(const VSwitchIds &) = default ;
      VSwitchIds& operator=(VSwitchIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline const vector<string> & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
      inline vector<string> getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
      inline VSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
      inline VSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    protected:
      shared_ptr<vector<string>> vSwitchId_ {};
    };

    class UserCidrs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserCidrs& obj) { 
        DARABONBA_PTR_TO_JSON(UserCidr, userCidr_);
      };
      friend void from_json(const Darabonba::Json& j, UserCidrs& obj) { 
        DARABONBA_PTR_FROM_JSON(UserCidr, userCidr_);
      };
      UserCidrs() = default ;
      UserCidrs(const UserCidrs &) = default ;
      UserCidrs(UserCidrs &&) = default ;
      UserCidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserCidrs() = default ;
      UserCidrs& operator=(const UserCidrs &) = default ;
      UserCidrs& operator=(UserCidrs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userCidr_ == nullptr; };
      // userCidr Field Functions 
      bool hasUserCidr() const { return this->userCidr_ != nullptr;};
      void deleteUserCidr() { this->userCidr_ = nullptr;};
      inline const vector<string> & getUserCidr() const { DARABONBA_PTR_GET_CONST(userCidr_, vector<string>) };
      inline vector<string> getUserCidr() { DARABONBA_PTR_GET(userCidr_, vector<string>) };
      inline UserCidrs& setUserCidr(const vector<string> & userCidr) { DARABONBA_PTR_SET_VALUE(userCidr_, userCidr) };
      inline UserCidrs& setUserCidr(vector<string> && userCidr) { DARABONBA_PTR_SET_RVALUE(userCidr_, userCidr) };


    protected:
      shared_ptr<vector<string>> userCidr_ {};
    };

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
        // The key of tag N.
        shared_ptr<string> key_ {};
        // The value of tag N.
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

    class SecondaryCidrBlocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecondaryCidrBlocks& obj) { 
        DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      };
      friend void from_json(const Darabonba::Json& j, SecondaryCidrBlocks& obj) { 
        DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
      };
      SecondaryCidrBlocks() = default ;
      SecondaryCidrBlocks(const SecondaryCidrBlocks &) = default ;
      SecondaryCidrBlocks(SecondaryCidrBlocks &&) = default ;
      SecondaryCidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecondaryCidrBlocks() = default ;
      SecondaryCidrBlocks& operator=(const SecondaryCidrBlocks &) = default ;
      SecondaryCidrBlocks& operator=(SecondaryCidrBlocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->secondaryCidrBlock_ == nullptr; };
      // secondaryCidrBlock Field Functions 
      bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
      void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
      inline const vector<string> & getSecondaryCidrBlock() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlock_, vector<string>) };
      inline vector<string> getSecondaryCidrBlock() { DARABONBA_PTR_GET(secondaryCidrBlock_, vector<string>) };
      inline SecondaryCidrBlocks& setSecondaryCidrBlock(const vector<string> & secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };
      inline SecondaryCidrBlocks& setSecondaryCidrBlock(vector<string> && secondaryCidrBlock) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlock_, secondaryCidrBlock) };


    protected:
      shared_ptr<vector<string>> secondaryCidrBlock_ {};
    };

    class Ipv6CidrBlocks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ipv6CidrBlocks& obj) { 
        DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      };
      friend void from_json(const Darabonba::Json& j, Ipv6CidrBlocks& obj) { 
        DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      };
      Ipv6CidrBlocks() = default ;
      Ipv6CidrBlocks(const Ipv6CidrBlocks &) = default ;
      Ipv6CidrBlocks(Ipv6CidrBlocks &&) = default ;
      Ipv6CidrBlocks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ipv6CidrBlocks() = default ;
      Ipv6CidrBlocks& operator=(const Ipv6CidrBlocks &) = default ;
      Ipv6CidrBlocks& operator=(Ipv6CidrBlocks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Ipv6CidrBlock : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6CidrBlock& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6CidrBlock& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
        };
        Ipv6CidrBlock() = default ;
        Ipv6CidrBlock(const Ipv6CidrBlock &) = default ;
        Ipv6CidrBlock(Ipv6CidrBlock &&) = default ;
        Ipv6CidrBlock(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6CidrBlock() = default ;
        Ipv6CidrBlock& operator=(const Ipv6CidrBlock &) = default ;
        Ipv6CidrBlock& operator=(Ipv6CidrBlock &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr
        && this->ipv6Isp_ == nullptr; };
        // ipv6CidrBlock Field Functions 
        bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
        void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
        inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
        inline Ipv6CidrBlock& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


        // ipv6Isp Field Functions 
        bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
        void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
        inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
        inline Ipv6CidrBlock& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


      protected:
        // The IPv6 CIDR block of the VPC.
        shared_ptr<string> ipv6CidrBlock_ {};
        // The IPv6 CIDR block type of the VPC. Valid values:
        // 
        // *   **BGP** (default)
        // *   **ChinaMobile**
        // *   **ChinaUnicom**
        // *   **ChinaTelecom**
        // 
        // >  If you are allowed to use single-ISP bandwidth, valid values are **ChinaTelecom**, **ChinaUnicom**, and **ChinaMobile**
        shared_ptr<string> ipv6Isp_ {};
      };

      virtual bool empty() const override { return this->ipv6CidrBlock_ == nullptr; };
      // ipv6CidrBlock Field Functions 
      bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
      void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
      inline const vector<Ipv6CidrBlocks::Ipv6CidrBlock> & getIpv6CidrBlock() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlock_, vector<Ipv6CidrBlocks::Ipv6CidrBlock>) };
      inline vector<Ipv6CidrBlocks::Ipv6CidrBlock> getIpv6CidrBlock() { DARABONBA_PTR_GET(ipv6CidrBlock_, vector<Ipv6CidrBlocks::Ipv6CidrBlock>) };
      inline Ipv6CidrBlocks& setIpv6CidrBlock(const vector<Ipv6CidrBlocks::Ipv6CidrBlock> & ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };
      inline Ipv6CidrBlocks& setIpv6CidrBlock(vector<Ipv6CidrBlocks::Ipv6CidrBlock> && ipv6CidrBlock) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    protected:
      shared_ptr<vector<Ipv6CidrBlocks::Ipv6CidrBlock>> ipv6CidrBlock_ {};
    };

    class CloudResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudResources& obj) { 
        DARABONBA_PTR_TO_JSON(CloudResourceSetType, cloudResourceSetType_);
      };
      friend void from_json(const Darabonba::Json& j, CloudResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudResourceSetType, cloudResourceSetType_);
      };
      CloudResources() = default ;
      CloudResources(const CloudResources &) = default ;
      CloudResources(CloudResources &&) = default ;
      CloudResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudResources() = default ;
      CloudResources& operator=(const CloudResources &) = default ;
      CloudResources& operator=(CloudResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudResourceSetType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudResourceSetType& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, CloudResourceSetType& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        CloudResourceSetType() = default ;
        CloudResourceSetType(const CloudResourceSetType &) = default ;
        CloudResourceSetType(CloudResourceSetType &&) = default ;
        CloudResourceSetType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudResourceSetType() = default ;
        CloudResourceSetType& operator=(const CloudResourceSetType &) = default ;
        CloudResourceSetType& operator=(CloudResourceSetType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceCount_ == nullptr
        && this->resourceType_ == nullptr; };
        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
        inline CloudResourceSetType& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline CloudResourceSetType& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The number of resources in the VPC.
        shared_ptr<int32_t> resourceCount_ {};
        // The type of resource deployed in the VPC. Valid values: Valid values:
        // 
        // *   **VSwitch**
        // *   **VRouter**
        // *   **RouteTable**
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->cloudResourceSetType_ == nullptr; };
      // cloudResourceSetType Field Functions 
      bool hasCloudResourceSetType() const { return this->cloudResourceSetType_ != nullptr;};
      void deleteCloudResourceSetType() { this->cloudResourceSetType_ = nullptr;};
      inline const vector<CloudResources::CloudResourceSetType> & getCloudResourceSetType() const { DARABONBA_PTR_GET_CONST(cloudResourceSetType_, vector<CloudResources::CloudResourceSetType>) };
      inline vector<CloudResources::CloudResourceSetType> getCloudResourceSetType() { DARABONBA_PTR_GET(cloudResourceSetType_, vector<CloudResources::CloudResourceSetType>) };
      inline CloudResources& setCloudResourceSetType(const vector<CloudResources::CloudResourceSetType> & cloudResourceSetType) { DARABONBA_PTR_SET_VALUE(cloudResourceSetType_, cloudResourceSetType) };
      inline CloudResources& setCloudResourceSetType(vector<CloudResources::CloudResourceSetType> && cloudResourceSetType) { DARABONBA_PTR_SET_RVALUE(cloudResourceSetType_, cloudResourceSetType) };


    protected:
      shared_ptr<vector<CloudResources::CloudResourceSetType>> cloudResourceSetType_ {};
    };

    class AssociatedPropagationSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociatedPropagationSources& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      };
      friend void from_json(const Darabonba::Json& j, AssociatedPropagationSources& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedPropagationSources, associatedPropagationSources_);
      };
      AssociatedPropagationSources() = default ;
      AssociatedPropagationSources(const AssociatedPropagationSources &) = default ;
      AssociatedPropagationSources(AssociatedPropagationSources &&) = default ;
      AssociatedPropagationSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociatedPropagationSources() = default ;
      AssociatedPropagationSources& operator=(const AssociatedPropagationSources &) = default ;
      AssociatedPropagationSources& operator=(AssociatedPropagationSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssociatedPropagationSourcesItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedPropagationSourcesItem& obj) { 
          DARABONBA_PTR_TO_JSON(RoutePropagated, routePropagated_);
          DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
          DARABONBA_PTR_TO_JSON(SourceOwnerId, sourceOwnerId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedPropagationSourcesItem& obj) { 
          DARABONBA_PTR_FROM_JSON(RoutePropagated, routePropagated_);
          DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
          DARABONBA_PTR_FROM_JSON(SourceOwnerId, sourceOwnerId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AssociatedPropagationSourcesItem() = default ;
        AssociatedPropagationSourcesItem(const AssociatedPropagationSourcesItem &) = default ;
        AssociatedPropagationSourcesItem(AssociatedPropagationSourcesItem &&) = default ;
        AssociatedPropagationSourcesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedPropagationSourcesItem() = default ;
        AssociatedPropagationSourcesItem& operator=(const AssociatedPropagationSourcesItem &) = default ;
        AssociatedPropagationSourcesItem& operator=(AssociatedPropagationSourcesItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->routePropagated_ == nullptr
        && this->sourceInstanceId_ == nullptr && this->sourceOwnerId_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr; };
        // routePropagated Field Functions 
        bool hasRoutePropagated() const { return this->routePropagated_ != nullptr;};
        void deleteRoutePropagated() { this->routePropagated_ = nullptr;};
        inline bool getRoutePropagated() const { DARABONBA_PTR_GET_DEFAULT(routePropagated_, false) };
        inline AssociatedPropagationSourcesItem& setRoutePropagated(bool routePropagated) { DARABONBA_PTR_SET_VALUE(routePropagated_, routePropagated) };


        // sourceInstanceId Field Functions 
        bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
        void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
        inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
        inline AssociatedPropagationSourcesItem& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


        // sourceOwnerId Field Functions 
        bool hasSourceOwnerId() const { return this->sourceOwnerId_ != nullptr;};
        void deleteSourceOwnerId() { this->sourceOwnerId_ = nullptr;};
        inline int64_t getSourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerId_, 0L) };
        inline AssociatedPropagationSourcesItem& setSourceOwnerId(int64_t sourceOwnerId) { DARABONBA_PTR_SET_VALUE(sourceOwnerId_, sourceOwnerId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline AssociatedPropagationSourcesItem& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AssociatedPropagationSourcesItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Indicates whether routes are advertised to the VPC.
        shared_ptr<bool> routePropagated_ {};
        // The instance ID of the source.
        shared_ptr<string> sourceInstanceId_ {};
        // The account ID of the source.
        shared_ptr<int64_t> sourceOwnerId_ {};
        // The source type.
        // 
        // *   **CEN**
        // *   **VPN**
        // *   **TR**
        // *   **ECR**
        shared_ptr<string> sourceType_ {};
        // The binding status.
        // 
        // *   **Attaching**
        // *   **Attached**
        // *   **Detaching**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->associatedPropagationSources_ == nullptr; };
      // associatedPropagationSources Field Functions 
      bool hasAssociatedPropagationSources() const { return this->associatedPropagationSources_ != nullptr;};
      void deleteAssociatedPropagationSources() { this->associatedPropagationSources_ = nullptr;};
      inline const vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem> & getAssociatedPropagationSources() const { DARABONBA_PTR_GET_CONST(associatedPropagationSources_, vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem>) };
      inline vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem> getAssociatedPropagationSources() { DARABONBA_PTR_GET(associatedPropagationSources_, vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem>) };
      inline AssociatedPropagationSources& setAssociatedPropagationSources(const vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem> & associatedPropagationSources) { DARABONBA_PTR_SET_VALUE(associatedPropagationSources_, associatedPropagationSources) };
      inline AssociatedPropagationSources& setAssociatedPropagationSources(vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem> && associatedPropagationSources) { DARABONBA_PTR_SET_RVALUE(associatedPropagationSources_, associatedPropagationSources) };


    protected:
      shared_ptr<vector<AssociatedPropagationSources::AssociatedPropagationSourcesItem>> associatedPropagationSources_ {};
    };

    class AssociatedCens : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociatedCens& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedCen, associatedCen_);
      };
      friend void from_json(const Darabonba::Json& j, AssociatedCens& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedCen, associatedCen_);
      };
      AssociatedCens() = default ;
      AssociatedCens(const AssociatedCens &) = default ;
      AssociatedCens(AssociatedCens &&) = default ;
      AssociatedCens(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociatedCens() = default ;
      AssociatedCens& operator=(const AssociatedCens &) = default ;
      AssociatedCens& operator=(AssociatedCens &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssociatedCen : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedCen& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_TO_JSON(CenStatus, cenStatus_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedCen& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_FROM_JSON(CenStatus, cenStatus_);
        };
        AssociatedCen() = default ;
        AssociatedCen(const AssociatedCen &) = default ;
        AssociatedCen(AssociatedCen &&) = default ;
        AssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedCen() = default ;
        AssociatedCen& operator=(const AssociatedCen &) = default ;
        AssociatedCen& operator=(AssociatedCen &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->cenStatus_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline AssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cenOwnerId Field Functions 
        bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
        void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
        inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
        inline AssociatedCen& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


        // cenStatus Field Functions 
        bool hasCenStatus() const { return this->cenStatus_ != nullptr;};
        void deleteCenStatus() { this->cenStatus_ = nullptr;};
        inline string getCenStatus() const { DARABONBA_PTR_GET_DEFAULT(cenStatus_, "") };
        inline AssociatedCen& setCenStatus(string cenStatus) { DARABONBA_PTR_SET_VALUE(cenStatus_, cenStatus) };


      protected:
        // The ID of the CEN instance to which the VPC is attached.
        shared_ptr<string> cenId_ {};
        // The ID of the account to which the CEN instance belongs.
        shared_ptr<int64_t> cenOwnerId_ {};
        // The status of the CEN instance.
        // 
        // **Attached** is returned only when the VPC is attached to a CEN instance.
        shared_ptr<string> cenStatus_ {};
      };

      virtual bool empty() const override { return this->associatedCen_ == nullptr; };
      // associatedCen Field Functions 
      bool hasAssociatedCen() const { return this->associatedCen_ != nullptr;};
      void deleteAssociatedCen() { this->associatedCen_ = nullptr;};
      inline const vector<AssociatedCens::AssociatedCen> & getAssociatedCen() const { DARABONBA_PTR_GET_CONST(associatedCen_, vector<AssociatedCens::AssociatedCen>) };
      inline vector<AssociatedCens::AssociatedCen> getAssociatedCen() { DARABONBA_PTR_GET(associatedCen_, vector<AssociatedCens::AssociatedCen>) };
      inline AssociatedCens& setAssociatedCen(const vector<AssociatedCens::AssociatedCen> & associatedCen) { DARABONBA_PTR_SET_VALUE(associatedCen_, associatedCen) };
      inline AssociatedCens& setAssociatedCen(vector<AssociatedCens::AssociatedCen> && associatedCen) { DARABONBA_PTR_SET_RVALUE(associatedCen_, associatedCen) };


    protected:
      shared_ptr<vector<AssociatedCens::AssociatedCen>> associatedCen_ {};
    };

    virtual bool empty() const override { return this->associatedCens_ == nullptr
        && this->associatedPropagationSources_ == nullptr && this->cidrBlock_ == nullptr && this->classicLinkEnabled_ == nullptr && this->cloudResources_ == nullptr && this->creationTime_ == nullptr
        && this->description_ == nullptr && this->dhcpOptionsSetId_ == nullptr && this->dhcpOptionsSetStatus_ == nullptr && this->dnsHostnameStatus_ == nullptr && this->enabledIpv6_ == nullptr
        && this->ipv4GatewayId_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->ipv6CidrBlocks_ == nullptr && this->isDefault_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryCidrBlocks_ == nullptr && this->status_ == nullptr
        && this->supportIpv4Gateway_ == nullptr && this->tags_ == nullptr && this->userCidrs_ == nullptr && this->VRouterId_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
    // associatedCens Field Functions 
    bool hasAssociatedCens() const { return this->associatedCens_ != nullptr;};
    void deleteAssociatedCens() { this->associatedCens_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::AssociatedCens & getAssociatedCens() const { DARABONBA_PTR_GET_CONST(associatedCens_, DescribeVpcAttributeResponseBody::AssociatedCens) };
    inline DescribeVpcAttributeResponseBody::AssociatedCens getAssociatedCens() { DARABONBA_PTR_GET(associatedCens_, DescribeVpcAttributeResponseBody::AssociatedCens) };
    inline DescribeVpcAttributeResponseBody& setAssociatedCens(const DescribeVpcAttributeResponseBody::AssociatedCens & associatedCens) { DARABONBA_PTR_SET_VALUE(associatedCens_, associatedCens) };
    inline DescribeVpcAttributeResponseBody& setAssociatedCens(DescribeVpcAttributeResponseBody::AssociatedCens && associatedCens) { DARABONBA_PTR_SET_RVALUE(associatedCens_, associatedCens) };


    // associatedPropagationSources Field Functions 
    bool hasAssociatedPropagationSources() const { return this->associatedPropagationSources_ != nullptr;};
    void deleteAssociatedPropagationSources() { this->associatedPropagationSources_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::AssociatedPropagationSources & getAssociatedPropagationSources() const { DARABONBA_PTR_GET_CONST(associatedPropagationSources_, DescribeVpcAttributeResponseBody::AssociatedPropagationSources) };
    inline DescribeVpcAttributeResponseBody::AssociatedPropagationSources getAssociatedPropagationSources() { DARABONBA_PTR_GET(associatedPropagationSources_, DescribeVpcAttributeResponseBody::AssociatedPropagationSources) };
    inline DescribeVpcAttributeResponseBody& setAssociatedPropagationSources(const DescribeVpcAttributeResponseBody::AssociatedPropagationSources & associatedPropagationSources) { DARABONBA_PTR_SET_VALUE(associatedPropagationSources_, associatedPropagationSources) };
    inline DescribeVpcAttributeResponseBody& setAssociatedPropagationSources(DescribeVpcAttributeResponseBody::AssociatedPropagationSources && associatedPropagationSources) { DARABONBA_PTR_SET_RVALUE(associatedPropagationSources_, associatedPropagationSources) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcAttributeResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // classicLinkEnabled Field Functions 
    bool hasClassicLinkEnabled() const { return this->classicLinkEnabled_ != nullptr;};
    void deleteClassicLinkEnabled() { this->classicLinkEnabled_ = nullptr;};
    inline bool getClassicLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(classicLinkEnabled_, false) };
    inline DescribeVpcAttributeResponseBody& setClassicLinkEnabled(bool classicLinkEnabled) { DARABONBA_PTR_SET_VALUE(classicLinkEnabled_, classicLinkEnabled) };


    // cloudResources Field Functions 
    bool hasCloudResources() const { return this->cloudResources_ != nullptr;};
    void deleteCloudResources() { this->cloudResources_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::CloudResources & getCloudResources() const { DARABONBA_PTR_GET_CONST(cloudResources_, DescribeVpcAttributeResponseBody::CloudResources) };
    inline DescribeVpcAttributeResponseBody::CloudResources getCloudResources() { DARABONBA_PTR_GET(cloudResources_, DescribeVpcAttributeResponseBody::CloudResources) };
    inline DescribeVpcAttributeResponseBody& setCloudResources(const DescribeVpcAttributeResponseBody::CloudResources & cloudResources) { DARABONBA_PTR_SET_VALUE(cloudResources_, cloudResources) };
    inline DescribeVpcAttributeResponseBody& setCloudResources(DescribeVpcAttributeResponseBody::CloudResources && cloudResources) { DARABONBA_PTR_SET_RVALUE(cloudResources_, cloudResources) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVpcAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpcAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string getDhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline DescribeVpcAttributeResponseBody& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetStatus Field Functions 
    bool hasDhcpOptionsSetStatus() const { return this->dhcpOptionsSetStatus_ != nullptr;};
    void deleteDhcpOptionsSetStatus() { this->dhcpOptionsSetStatus_ = nullptr;};
    inline string getDhcpOptionsSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetStatus_, "") };
    inline DescribeVpcAttributeResponseBody& setDhcpOptionsSetStatus(string dhcpOptionsSetStatus) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetStatus_, dhcpOptionsSetStatus) };


    // dnsHostnameStatus Field Functions 
    bool hasDnsHostnameStatus() const { return this->dnsHostnameStatus_ != nullptr;};
    void deleteDnsHostnameStatus() { this->dnsHostnameStatus_ = nullptr;};
    inline string getDnsHostnameStatus() const { DARABONBA_PTR_GET_DEFAULT(dnsHostnameStatus_, "") };
    inline DescribeVpcAttributeResponseBody& setDnsHostnameStatus(string dnsHostnameStatus) { DARABONBA_PTR_SET_VALUE(dnsHostnameStatus_, dnsHostnameStatus) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool getEnabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline DescribeVpcAttributeResponseBody& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string getIpv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline DescribeVpcAttributeResponseBody& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // ipv6CidrBlocks Field Functions 
    bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
    void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::Ipv6CidrBlocks & getIpv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, DescribeVpcAttributeResponseBody::Ipv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBody::Ipv6CidrBlocks getIpv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, DescribeVpcAttributeResponseBody::Ipv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlocks(const DescribeVpcAttributeResponseBody::Ipv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setIpv6CidrBlocks(DescribeVpcAttributeResponseBody::Ipv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline DescribeVpcAttributeResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpcAttributeResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpcAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::SecondaryCidrBlocks & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, DescribeVpcAttributeResponseBody::SecondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBody::SecondaryCidrBlocks getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, DescribeVpcAttributeResponseBody::SecondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setSecondaryCidrBlocks(const DescribeVpcAttributeResponseBody::SecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeVpcAttributeResponseBody& setSecondaryCidrBlocks(DescribeVpcAttributeResponseBody::SecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpcAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportIpv4Gateway Field Functions 
    bool hasSupportIpv4Gateway() const { return this->supportIpv4Gateway_ != nullptr;};
    void deleteSupportIpv4Gateway() { this->supportIpv4Gateway_ = nullptr;};
    inline bool getSupportIpv4Gateway() const { DARABONBA_PTR_GET_DEFAULT(supportIpv4Gateway_, false) };
    inline DescribeVpcAttributeResponseBody& setSupportIpv4Gateway(bool supportIpv4Gateway) { DARABONBA_PTR_SET_VALUE(supportIpv4Gateway_, supportIpv4Gateway) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVpcAttributeResponseBody::Tags) };
    inline DescribeVpcAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeVpcAttributeResponseBody::Tags) };
    inline DescribeVpcAttributeResponseBody& setTags(const DescribeVpcAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpcAttributeResponseBody& setTags(DescribeVpcAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userCidrs Field Functions 
    bool hasUserCidrs() const { return this->userCidrs_ != nullptr;};
    void deleteUserCidrs() { this->userCidrs_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::UserCidrs & getUserCidrs() const { DARABONBA_PTR_GET_CONST(userCidrs_, DescribeVpcAttributeResponseBody::UserCidrs) };
    inline DescribeVpcAttributeResponseBody::UserCidrs getUserCidrs() { DARABONBA_PTR_GET(userCidrs_, DescribeVpcAttributeResponseBody::UserCidrs) };
    inline DescribeVpcAttributeResponseBody& setUserCidrs(const DescribeVpcAttributeResponseBody::UserCidrs & userCidrs) { DARABONBA_PTR_SET_VALUE(userCidrs_, userCidrs) };
    inline DescribeVpcAttributeResponseBody& setUserCidrs(DescribeVpcAttributeResponseBody::UserCidrs && userCidrs) { DARABONBA_PTR_SET_RVALUE(userCidrs_, userCidrs) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string getVRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeVpcAttributeResponseBody& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const DescribeVpcAttributeResponseBody::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, DescribeVpcAttributeResponseBody::VSwitchIds) };
    inline DescribeVpcAttributeResponseBody::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, DescribeVpcAttributeResponseBody::VSwitchIds) };
    inline DescribeVpcAttributeResponseBody& setVSwitchIds(const DescribeVpcAttributeResponseBody::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeVpcAttributeResponseBody& setVSwitchIds(DescribeVpcAttributeResponseBody::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcAttributeResponseBody& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The list of Cloud Enterprise Network (CEN) instances to which the VPC is attached.
    // 
    // If the VPC is not attached to a CEN instance, the parameter is not returned.
    shared_ptr<DescribeVpcAttributeResponseBody::AssociatedCens> associatedCens_ {};
    // The route source associated with the VPC.
    shared_ptr<DescribeVpcAttributeResponseBody::AssociatedPropagationSources> associatedPropagationSources_ {};
    // The IPv4 CIDR block of the VPC.
    shared_ptr<string> cidrBlock_ {};
    // Indicates whether the ClassicLink feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> classicLinkEnabled_ {};
    // The list of resources deployed in the VPC.
    shared_ptr<DescribeVpcAttributeResponseBody::CloudResources> cloudResources_ {};
    // The time when the VPC was created.
    shared_ptr<string> creationTime_ {};
    // The description of the VPC.
    shared_ptr<string> description_ {};
    // The ID of the DHCP options set.
    shared_ptr<string> dhcpOptionsSetId_ {};
    // The status of the DHCP options set. Valid values:
    // 
    // *   **Available**
    // *   **InUse**
    // *   **Deleted**
    // *   **Pending**
    shared_ptr<string> dhcpOptionsSetStatus_ {};
    // Indicates whether DNS hostname is enabled.
    shared_ptr<string> dnsHostnameStatus_ {};
    // Indicates whether the VPC enables IPv6 .
    // - true
    // - false
    shared_ptr<bool> enabledIpv6_ {};
    // The ID of the IPv4 gateway.
    shared_ptr<string> ipv4GatewayId_ {};
    // The IPv6 CIDR block of the VPC.
    shared_ptr<string> ipv6CidrBlock_ {};
    // The IPv6 CIDR block of the VPC.
    shared_ptr<DescribeVpcAttributeResponseBody::Ipv6CidrBlocks> ipv6CidrBlocks_ {};
    // Indicates whether the VPC is the default VPC. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> isDefault_ {};
    // The ID of the Alibaba Cloud account to which the VPC belongs.
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the VPC belongs.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The secondary IPv4 CIDR block of the VPC.
    shared_ptr<DescribeVpcAttributeResponseBody::SecondaryCidrBlocks> secondaryCidrBlocks_ {};
    // The status of the VPC. Valid values:
    // 
    // *   **Available**
    // *   **Pending**
    shared_ptr<string> status_ {};
    // Indicates whether the VPC supports IPv4 gateways.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> supportIpv4Gateway_ {};
    // The information about the tags.
    shared_ptr<DescribeVpcAttributeResponseBody::Tags> tags_ {};
    // The user CIDR block. Multiple CIDR blocks are separated by commas (,). At most three CIDR blocks are returned.
    shared_ptr<DescribeVpcAttributeResponseBody::UserCidrs> userCidrs_ {};
    // The ID of the vRouter that belongs to the VPC.
    shared_ptr<string> VRouterId_ {};
    // The list of vSwitches deployed in the VPC.
    shared_ptr<DescribeVpcAttributeResponseBody::VSwitchIds> vSwitchIds_ {};
    // The ID of the VPC.
    shared_ptr<string> vpcId_ {};
    // The name of the VPC.
    shared_ptr<string> vpcName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
