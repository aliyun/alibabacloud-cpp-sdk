// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
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
  class DescribeVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
    };
    DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody(DescribeVpcsResponseBody &&) = default ;
    DescribeVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody& operator=(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody& operator=(DescribeVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vpcs& obj) { 
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      };
      friend void from_json(const Darabonba::Json& j, Vpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
      };
      Vpcs() = default ;
      Vpcs(const Vpcs &) = default ;
      Vpcs(Vpcs &&) = default ;
      Vpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vpcs() = default ;
      Vpcs& operator=(const Vpcs &) = default ;
      Vpcs& operator=(Vpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Vpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
          DARABONBA_PTR_TO_JSON(CenStatus, cenStatus_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
          DARABONBA_PTR_TO_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
          DARABONBA_PTR_TO_JSON(DnsHostnameStatus, dnsHostnameStatus_);
          DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
          DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_TO_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouterTableIds, routerTableIds_);
          DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(UserCidrs, userCidrs_);
          DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
          DARABONBA_PTR_FROM_JSON(CenStatus, cenStatus_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
          DARABONBA_PTR_FROM_JSON(DhcpOptionsSetStatus, dhcpOptionsSetStatus_);
          DARABONBA_PTR_FROM_JSON(DnsHostnameStatus, dnsHostnameStatus_);
          DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
          DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
          DARABONBA_PTR_FROM_JSON(Ipv6CidrBlocks, ipv6CidrBlocks_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouterTableIds, routerTableIds_);
          DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(UserCidrs, userCidrs_);
          DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        Vpc() = default ;
        Vpc(const Vpc &) = default ;
        Vpc(Vpc &&) = default ;
        Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vpc() = default ;
        Vpc& operator=(const Vpc &) = default ;
        Vpc& operator=(Vpc &&) = default ;
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

        class RouterTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouterTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(RouterTableIds, routerTableIds_);
          };
          friend void from_json(const Darabonba::Json& j, RouterTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RouterTableIds, routerTableIds_);
          };
          RouterTableIds() = default ;
          RouterTableIds(const RouterTableIds &) = default ;
          RouterTableIds(RouterTableIds &&) = default ;
          RouterTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouterTableIds() = default ;
          RouterTableIds& operator=(const RouterTableIds &) = default ;
          RouterTableIds& operator=(RouterTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->routerTableIds_ == nullptr; };
          // routerTableIds Field Functions 
          bool hasRouterTableIds() const { return this->routerTableIds_ != nullptr;};
          void deleteRouterTableIds() { this->routerTableIds_ = nullptr;};
          inline const vector<string> & getRouterTableIds() const { DARABONBA_PTR_GET_CONST(routerTableIds_, vector<string>) };
          inline vector<string> getRouterTableIds() { DARABONBA_PTR_GET(routerTableIds_, vector<string>) };
          inline RouterTableIds& setRouterTableIds(const vector<string> & routerTableIds) { DARABONBA_PTR_SET_VALUE(routerTableIds_, routerTableIds) };
          inline RouterTableIds& setRouterTableIds(vector<string> && routerTableIds) { DARABONBA_PTR_SET_RVALUE(routerTableIds_, routerTableIds) };


        protected:
          shared_ptr<vector<string>> routerTableIds_ {};
        };

        class NatGatewayIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NatGatewayIds& obj) { 
            DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
          };
          friend void from_json(const Darabonba::Json& j, NatGatewayIds& obj) { 
            DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
          };
          NatGatewayIds() = default ;
          NatGatewayIds(const NatGatewayIds &) = default ;
          NatGatewayIds(NatGatewayIds &&) = default ;
          NatGatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NatGatewayIds() = default ;
          NatGatewayIds& operator=(const NatGatewayIds &) = default ;
          NatGatewayIds& operator=(NatGatewayIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->natGatewayIds_ == nullptr; };
          // natGatewayIds Field Functions 
          bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
          void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
          inline const vector<string> & getNatGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, vector<string>) };
          inline vector<string> getNatGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, vector<string>) };
          inline NatGatewayIds& setNatGatewayIds(const vector<string> & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
          inline NatGatewayIds& setNatGatewayIds(vector<string> && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


        protected:
          shared_ptr<vector<string>> natGatewayIds_ {};
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
            // The type of IPv6 CIDR block. Valid values:
            // 
            // *   **BGP**
            // *   **ChinaMobile**
            // *   **ChinaUnicom**
            // *   **ChinaTelecom**
            // 
            // >  If your Alibaba Cloud account is allowed to activate single-ISP bandwidth, you can set this parameter to **ChinaTelecom**, **ChinaUnicom**, or **ChinaMobile**.
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

        virtual bool empty() const override { return this->cenStatus_ == nullptr
        && this->cidrBlock_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->dhcpOptionsSetId_ == nullptr && this->dhcpOptionsSetStatus_ == nullptr
        && this->dnsHostnameStatus_ == nullptr && this->enabledIpv6_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->ipv6CidrBlocks_ == nullptr && this->isDefault_ == nullptr
        && this->natGatewayIds_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->routerTableIds_ == nullptr
        && this->secondaryCidrBlocks_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->userCidrs_ == nullptr && this->VRouterId_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // cenStatus Field Functions 
        bool hasCenStatus() const { return this->cenStatus_ != nullptr;};
        void deleteCenStatus() { this->cenStatus_ = nullptr;};
        inline string getCenStatus() const { DARABONBA_PTR_GET_DEFAULT(cenStatus_, "") };
        inline Vpc& setCenStatus(string cenStatus) { DARABONBA_PTR_SET_VALUE(cenStatus_, cenStatus) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline Vpc& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Vpc& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Vpc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dhcpOptionsSetId Field Functions 
        bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
        void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
        inline string getDhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
        inline Vpc& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


        // dhcpOptionsSetStatus Field Functions 
        bool hasDhcpOptionsSetStatus() const { return this->dhcpOptionsSetStatus_ != nullptr;};
        void deleteDhcpOptionsSetStatus() { this->dhcpOptionsSetStatus_ = nullptr;};
        inline string getDhcpOptionsSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetStatus_, "") };
        inline Vpc& setDhcpOptionsSetStatus(string dhcpOptionsSetStatus) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetStatus_, dhcpOptionsSetStatus) };


        // dnsHostnameStatus Field Functions 
        bool hasDnsHostnameStatus() const { return this->dnsHostnameStatus_ != nullptr;};
        void deleteDnsHostnameStatus() { this->dnsHostnameStatus_ = nullptr;};
        inline string getDnsHostnameStatus() const { DARABONBA_PTR_GET_DEFAULT(dnsHostnameStatus_, "") };
        inline Vpc& setDnsHostnameStatus(string dnsHostnameStatus) { DARABONBA_PTR_SET_VALUE(dnsHostnameStatus_, dnsHostnameStatus) };


        // enabledIpv6 Field Functions 
        bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
        void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
        inline bool getEnabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
        inline Vpc& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


        // ipv6CidrBlock Field Functions 
        bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
        void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
        inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
        inline Vpc& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


        // ipv6CidrBlocks Field Functions 
        bool hasIpv6CidrBlocks() const { return this->ipv6CidrBlocks_ != nullptr;};
        void deleteIpv6CidrBlocks() { this->ipv6CidrBlocks_ = nullptr;};
        inline const Vpc::Ipv6CidrBlocks & getIpv6CidrBlocks() const { DARABONBA_PTR_GET_CONST(ipv6CidrBlocks_, Vpc::Ipv6CidrBlocks) };
        inline Vpc::Ipv6CidrBlocks getIpv6CidrBlocks() { DARABONBA_PTR_GET(ipv6CidrBlocks_, Vpc::Ipv6CidrBlocks) };
        inline Vpc& setIpv6CidrBlocks(const Vpc::Ipv6CidrBlocks & ipv6CidrBlocks) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };
        inline Vpc& setIpv6CidrBlocks(Vpc::Ipv6CidrBlocks && ipv6CidrBlocks) { DARABONBA_PTR_SET_RVALUE(ipv6CidrBlocks_, ipv6CidrBlocks) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Vpc& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // natGatewayIds Field Functions 
        bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
        void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
        inline const Vpc::NatGatewayIds & getNatGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, Vpc::NatGatewayIds) };
        inline Vpc::NatGatewayIds getNatGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, Vpc::NatGatewayIds) };
        inline Vpc& setNatGatewayIds(const Vpc::NatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
        inline Vpc& setNatGatewayIds(Vpc::NatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline Vpc& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Vpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Vpc& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routerTableIds Field Functions 
        bool hasRouterTableIds() const { return this->routerTableIds_ != nullptr;};
        void deleteRouterTableIds() { this->routerTableIds_ = nullptr;};
        inline const Vpc::RouterTableIds & getRouterTableIds() const { DARABONBA_PTR_GET_CONST(routerTableIds_, Vpc::RouterTableIds) };
        inline Vpc::RouterTableIds getRouterTableIds() { DARABONBA_PTR_GET(routerTableIds_, Vpc::RouterTableIds) };
        inline Vpc& setRouterTableIds(const Vpc::RouterTableIds & routerTableIds) { DARABONBA_PTR_SET_VALUE(routerTableIds_, routerTableIds) };
        inline Vpc& setRouterTableIds(Vpc::RouterTableIds && routerTableIds) { DARABONBA_PTR_SET_RVALUE(routerTableIds_, routerTableIds) };


        // secondaryCidrBlocks Field Functions 
        bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
        void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
        inline const Vpc::SecondaryCidrBlocks & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, Vpc::SecondaryCidrBlocks) };
        inline Vpc::SecondaryCidrBlocks getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, Vpc::SecondaryCidrBlocks) };
        inline Vpc& setSecondaryCidrBlocks(const Vpc::SecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
        inline Vpc& setSecondaryCidrBlocks(Vpc::SecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Vpc& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Vpc::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Vpc::Tags) };
        inline Vpc::Tags getTags() { DARABONBA_PTR_GET(tags_, Vpc::Tags) };
        inline Vpc& setTags(const Vpc::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Vpc& setTags(Vpc::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // userCidrs Field Functions 
        bool hasUserCidrs() const { return this->userCidrs_ != nullptr;};
        void deleteUserCidrs() { this->userCidrs_ = nullptr;};
        inline const Vpc::UserCidrs & getUserCidrs() const { DARABONBA_PTR_GET_CONST(userCidrs_, Vpc::UserCidrs) };
        inline Vpc::UserCidrs getUserCidrs() { DARABONBA_PTR_GET(userCidrs_, Vpc::UserCidrs) };
        inline Vpc& setUserCidrs(const Vpc::UserCidrs & userCidrs) { DARABONBA_PTR_SET_VALUE(userCidrs_, userCidrs) };
        inline Vpc& setUserCidrs(Vpc::UserCidrs && userCidrs) { DARABONBA_PTR_SET_RVALUE(userCidrs_, userCidrs) };


        // VRouterId Field Functions 
        bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
        void deleteVRouterId() { this->VRouterId_ = nullptr;};
        inline string getVRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
        inline Vpc& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const Vpc::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Vpc::VSwitchIds) };
        inline Vpc::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Vpc::VSwitchIds) };
        inline Vpc& setVSwitchIds(const Vpc::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline Vpc& setVSwitchIds(Vpc::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline Vpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        // The status of the Cloud Enterprise Network (CEN) instance to which the VPC is attached. **Attached** is returned only if the VPC is attached to a CEN instance.
        shared_ptr<string> cenStatus_ {};
        // The IPv4 CIDR block of the VPC.
        shared_ptr<string> cidrBlock_ {};
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
        // Indicates whether the Domain Name System (DNS) feature is enabled.
        shared_ptr<string> dnsHostnameStatus_ {};
        // Indicates whether the IPv6 is enabled.
        // 
        // Valid values:
        // 
        // - false: false
        // 
        // - true: true
        shared_ptr<bool> enabledIpv6_ {};
        // The IPv6 CIDR block of the VPC.
        shared_ptr<string> ipv6CidrBlock_ {};
        // The IPv6 CIDR block of the VPC.
        shared_ptr<Vpc::Ipv6CidrBlocks> ipv6CidrBlocks_ {};
        // Indicates whether the VPC is the default VPC in the region. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isDefault_ {};
        // The ID of the Internet NAT gateway.
        shared_ptr<Vpc::NatGatewayIds> natGatewayIds_ {};
        // The ID of the Alibaba Cloud account to which the VPC belongs.
        shared_ptr<int64_t> ownerId_ {};
        // The ID of the region to which the VPC belongs.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the VPC belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The information about the route table.
        shared_ptr<Vpc::RouterTableIds> routerTableIds_ {};
        // The information about the secondary CIDR block.
        shared_ptr<Vpc::SecondaryCidrBlocks> secondaryCidrBlocks_ {};
        // The status of the VPC. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        shared_ptr<string> status_ {};
        // The tag information about the VPC.
        shared_ptr<Vpc::Tags> tags_ {};
        // The list of user CIDR blocks.
        shared_ptr<Vpc::UserCidrs> userCidrs_ {};
        // The ID of the vRouter.
        shared_ptr<string> VRouterId_ {};
        // The vSwitches in the VPC.
        // 
        // You can query up to 300 vSwitches in the VPC. The information about the latest vSwitches is returned. If you want to query the information about all vSwitches in a VPC, call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation.
        shared_ptr<Vpc::VSwitchIds> vSwitchIds_ {};
        // The VPC ID.
        shared_ptr<string> vpcId_ {};
        // The name of the VPC.
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->vpc_ == nullptr; };
      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline const vector<Vpcs::Vpc> & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<Vpcs::Vpc>) };
      inline vector<Vpcs::Vpc> getVpc() { DARABONBA_PTR_GET(vpc_, vector<Vpcs::Vpc>) };
      inline Vpcs& setVpc(const vector<Vpcs::Vpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
      inline Vpcs& setVpc(vector<Vpcs::Vpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    protected:
      shared_ptr<vector<Vpcs::Vpc>> vpc_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcs_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpcsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpcsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const DescribeVpcsResponseBody::Vpcs & getVpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, DescribeVpcsResponseBody::Vpcs) };
    inline DescribeVpcsResponseBody::Vpcs getVpcs() { DARABONBA_PTR_GET(vpcs_, DescribeVpcsResponseBody::Vpcs) };
    inline DescribeVpcsResponseBody& setVpcs(const DescribeVpcsResponseBody::Vpcs & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline DescribeVpcsResponseBody& setVpcs(DescribeVpcsResponseBody::Vpcs && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The details of the VPC.
    shared_ptr<DescribeVpcsResponseBody::Vpcs> vpcs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
