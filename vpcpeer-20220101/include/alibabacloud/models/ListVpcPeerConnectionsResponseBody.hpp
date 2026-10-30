// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ListVpcPeerConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcPeerConnects, vpcPeerConnects_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcPeerConnects, vpcPeerConnects_);
    };
    ListVpcPeerConnectionsResponseBody() = default ;
    ListVpcPeerConnectionsResponseBody(const ListVpcPeerConnectionsResponseBody &) = default ;
    ListVpcPeerConnectionsResponseBody(ListVpcPeerConnectionsResponseBody &&) = default ;
    ListVpcPeerConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPeerConnectionsResponseBody() = default ;
    ListVpcPeerConnectionsResponseBody& operator=(const ListVpcPeerConnectionsResponseBody &) = default ;
    ListVpcPeerConnectionsResponseBody& operator=(ListVpcPeerConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcPeerConnects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcPeerConnects& obj) { 
        DARABONBA_PTR_TO_JSON(AcceptingOwnerUid, acceptingOwnerUid_);
        DARABONBA_PTR_TO_JSON(AcceptingRegionId, acceptingRegionId_);
        DARABONBA_PTR_TO_JSON(AcceptingVpc, acceptingVpc_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LinkType, linkType_);
        DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      };
      friend void from_json(const Darabonba::Json& j, VpcPeerConnects& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceptingOwnerUid, acceptingOwnerUid_);
        DARABONBA_PTR_FROM_JSON(AcceptingRegionId, acceptingRegionId_);
        DARABONBA_PTR_FROM_JSON(AcceptingVpc, acceptingVpc_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
        DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
      };
      VpcPeerConnects() = default ;
      VpcPeerConnects(const VpcPeerConnects &) = default ;
      VpcPeerConnects(VpcPeerConnects &&) = default ;
      VpcPeerConnects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcPeerConnects() = default ;
      VpcPeerConnects& operator=(const VpcPeerConnects &) = default ;
      VpcPeerConnects& operator=(VpcPeerConnects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Vpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
        virtual bool empty() const override { return this->ipv4Cidrs_ == nullptr
        && this->ipv6Cidrs_ == nullptr && this->vpcId_ == nullptr; };
        // ipv4Cidrs Field Functions 
        bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
        void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
        inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
        inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
        inline Vpc& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
        inline Vpc& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


        // ipv6Cidrs Field Functions 
        bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
        void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
        inline const vector<string> & getIpv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
        inline vector<string> getIpv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
        inline Vpc& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
        inline Vpc& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The IPv4 CIDR blocks of the initiator.
        shared_ptr<vector<string>> ipv4Cidrs_ {};
        // The IPv6 CIDR blocks of the initiator.
        shared_ptr<vector<string>> ipv6Cidrs_ {};
        // The instance ID of the initiator VPC-connected instance.
        shared_ptr<string> vpcId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class AcceptingVpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AcceptingVpc& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, AcceptingVpc& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
          DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        AcceptingVpc() = default ;
        AcceptingVpc(const AcceptingVpc &) = default ;
        AcceptingVpc(AcceptingVpc &&) = default ;
        AcceptingVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AcceptingVpc() = default ;
        AcceptingVpc& operator=(const AcceptingVpc &) = default ;
        AcceptingVpc& operator=(AcceptingVpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv4Cidrs_ == nullptr
        && this->ipv6Cidrs_ == nullptr && this->vpcId_ == nullptr; };
        // ipv4Cidrs Field Functions 
        bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
        void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
        inline const vector<string> & getIpv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
        inline vector<string> getIpv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
        inline AcceptingVpc& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
        inline AcceptingVpc& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


        // ipv6Cidrs Field Functions 
        bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
        void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
        inline const vector<string> & getIpv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
        inline vector<string> getIpv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
        inline AcceptingVpc& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
        inline AcceptingVpc& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline AcceptingVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The IPv4 CIDR blocks of the acceptor.
        shared_ptr<vector<string>> ipv4Cidrs_ {};
        // The IPv6 CIDR blocks of the acceptor.
        shared_ptr<vector<string>> ipv6Cidrs_ {};
        // The instance ID of the acceptor VPC-connected instance.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->acceptingOwnerUid_ == nullptr
        && this->acceptingRegionId_ == nullptr && this->acceptingVpc_ == nullptr && this->bandwidth_ == nullptr && this->bizStatus_ == nullptr && this->description_ == nullptr
        && this->enableJumboFrame_ == nullptr && this->gmtCreate_ == nullptr && this->gmtExpired_ == nullptr && this->gmtModified_ == nullptr && this->instanceId_ == nullptr
        && this->linkType_ == nullptr && this->managedService_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vpc_ == nullptr; };
      // acceptingOwnerUid Field Functions 
      bool hasAcceptingOwnerUid() const { return this->acceptingOwnerUid_ != nullptr;};
      void deleteAcceptingOwnerUid() { this->acceptingOwnerUid_ = nullptr;};
      inline int64_t getAcceptingOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(acceptingOwnerUid_, 0L) };
      inline VpcPeerConnects& setAcceptingOwnerUid(int64_t acceptingOwnerUid) { DARABONBA_PTR_SET_VALUE(acceptingOwnerUid_, acceptingOwnerUid) };


      // acceptingRegionId Field Functions 
      bool hasAcceptingRegionId() const { return this->acceptingRegionId_ != nullptr;};
      void deleteAcceptingRegionId() { this->acceptingRegionId_ = nullptr;};
      inline string getAcceptingRegionId() const { DARABONBA_PTR_GET_DEFAULT(acceptingRegionId_, "") };
      inline VpcPeerConnects& setAcceptingRegionId(string acceptingRegionId) { DARABONBA_PTR_SET_VALUE(acceptingRegionId_, acceptingRegionId) };


      // acceptingVpc Field Functions 
      bool hasAcceptingVpc() const { return this->acceptingVpc_ != nullptr;};
      void deleteAcceptingVpc() { this->acceptingVpc_ = nullptr;};
      inline const VpcPeerConnects::AcceptingVpc & getAcceptingVpc() const { DARABONBA_PTR_GET_CONST(acceptingVpc_, VpcPeerConnects::AcceptingVpc) };
      inline VpcPeerConnects::AcceptingVpc getAcceptingVpc() { DARABONBA_PTR_GET(acceptingVpc_, VpcPeerConnects::AcceptingVpc) };
      inline VpcPeerConnects& setAcceptingVpc(const VpcPeerConnects::AcceptingVpc & acceptingVpc) { DARABONBA_PTR_SET_VALUE(acceptingVpc_, acceptingVpc) };
      inline VpcPeerConnects& setAcceptingVpc(VpcPeerConnects::AcceptingVpc && acceptingVpc) { DARABONBA_PTR_SET_RVALUE(acceptingVpc_, acceptingVpc) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline VpcPeerConnects& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bizStatus Field Functions 
      bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
      void deleteBizStatus() { this->bizStatus_ = nullptr;};
      inline string getBizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
      inline VpcPeerConnects& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline VpcPeerConnects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline VpcPeerConnects& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline VpcPeerConnects& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtExpired Field Functions 
      bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
      void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
      inline string getGmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
      inline VpcPeerConnects& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline VpcPeerConnects& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline VpcPeerConnects& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // linkType Field Functions 
      bool hasLinkType() const { return this->linkType_ != nullptr;};
      void deleteLinkType() { this->linkType_ = nullptr;};
      inline string getLinkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, "") };
      inline VpcPeerConnects& setLinkType(string linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


      // managedService Field Functions 
      bool hasManagedService() const { return this->managedService_ != nullptr;};
      void deleteManagedService() { this->managedService_ = nullptr;};
      inline string getManagedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
      inline VpcPeerConnects& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VpcPeerConnects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline VpcPeerConnects& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VpcPeerConnects& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline VpcPeerConnects& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VpcPeerConnects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<VpcPeerConnects::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<VpcPeerConnects::Tags>) };
      inline vector<VpcPeerConnects::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<VpcPeerConnects::Tags>) };
      inline VpcPeerConnects& setTags(const vector<VpcPeerConnects::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline VpcPeerConnects& setTags(vector<VpcPeerConnects::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline const VpcPeerConnects::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, VpcPeerConnects::Vpc) };
      inline VpcPeerConnects::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, VpcPeerConnects::Vpc) };
      inline VpcPeerConnects& setVpc(const VpcPeerConnects::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
      inline VpcPeerConnects& setVpc(VpcPeerConnects::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


    protected:
      // The Alibaba Cloud account ID of the acceptor of the VPC peering connection.
      shared_ptr<int64_t> acceptingOwnerUid_ {};
      // The region ID of the acceptor of the VPC peering connection.
      shared_ptr<string> acceptingRegionId_ {};
      // The details of the acceptor VPC-connected instance.
      shared_ptr<VpcPeerConnects::AcceptingVpc> acceptingVpc_ {};
      // The bandwidth of the VPC peering connection. Unit: Mbit/s. The value must be an integer greater than 0.
      // 
      // > A value of -1 indicates that no bandwidth limit is applied.
      // 
      // Default values:
      // - The default bandwidth of a cross-region VPC peering connection is 1024 Mbit/s.
      // - The default bandwidth of an intra-region VPC peering connection is -1 Mbit/s, which indicates that no bandwidth limit is applied.
      shared_ptr<int32_t> bandwidth_ {};
      // The billing status of the VPC peering connection. Valid values:
      // 
      // - **Normal**: Normal.
      // - **FinancialLocked**: Locked due to overdue payment.
      shared_ptr<string> bizStatus_ {};
      // The description of the VPC peering connection.
      shared_ptr<string> description_ {};
      // Indicates whether the jumbo frame feature is enabled for the VPC peering connection. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> enableJumboFrame_ {};
      // The time when the VPC peering connection was created. The time is displayed in UTC in the `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> gmtCreate_ {};
      // The expiration time of the VPC peering connection. The time is displayed in UTC in the `YYYY-MM-DDThh:mm:ssZ` format.
      // 
      // The specific expiration time is returned only when the **Status** of the VPC peering connection is **Accepting** or **Expired**. If the VPC peering connection is in other states, **null** is returned.
      shared_ptr<string> gmtExpired_ {};
      // The time when the VPC peering connection was modified. The time is displayed in UTC in the `YYYY-MM-DDThh:mm:ssZ` format.
      shared_ptr<string> gmtModified_ {};
      // The instance ID of the VPC peering connection.
      shared_ptr<string> instanceId_ {};
      // The link type of the VPC peering connection.
      // 
      // Default values:
      // - The default link type of a cross-region VPC peering connection is Gold.
      // - The default link type of an intra-region VPC peering connection is empty.
      shared_ptr<string> linkType_ {};
      // The associated cloud service.
      shared_ptr<string> managedService_ {};
      // The name of the VPC peering connection.
      shared_ptr<string> name_ {};
      // The Alibaba Cloud account ID of the initiator of the VPC peering connection.
      shared_ptr<int64_t> ownerId_ {};
      // The region ID of the initiator of the VPC peering connection.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the VPC peering connection. Valid values:
      // 
      // - **Creating**: Creating.
      // - **Accepting**: Accepting.
      // - **Updating**: Updating.
      // - **Rejected**: Rejected.
      // - **Expired**: Expired.
      // - **Activated**: Activated.
      // - **Deleting**: Deleting.
      // - **Deleted**: Deleted.
      // 
      // For more information about the statuses of VPC peering connections, see [VPC peering connection overview](https://help.aliyun.com/document_detail/418507.html).
      shared_ptr<string> status_ {};
      // The list of tags.
      shared_ptr<vector<VpcPeerConnects::Tags>> tags_ {};
      // The details of the initiator VPC-connected instance.
      shared_ptr<VpcPeerConnects::Vpc> vpc_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpcPeerConnects_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcPeerConnectionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPeerConnectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcPeerConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcPeerConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcPeerConnects Field Functions 
    bool hasVpcPeerConnects() const { return this->vpcPeerConnects_ != nullptr;};
    void deleteVpcPeerConnects() { this->vpcPeerConnects_ = nullptr;};
    inline const vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects> & getVpcPeerConnects() const { DARABONBA_PTR_GET_CONST(vpcPeerConnects_, vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects>) };
    inline vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects> getVpcPeerConnects() { DARABONBA_PTR_GET(vpcPeerConnects_, vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects>) };
    inline ListVpcPeerConnectionsResponseBody& setVpcPeerConnects(const vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects> & vpcPeerConnects) { DARABONBA_PTR_SET_VALUE(vpcPeerConnects_, vpcPeerConnects) };
    inline ListVpcPeerConnectionsResponseBody& setVpcPeerConnects(vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects> && vpcPeerConnects) { DARABONBA_PTR_SET_RVALUE(vpcPeerConnects_, vpcPeerConnects) };


  protected:
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. Valid values:
    // - If **NextToken** is empty, no subsequent request is to be sent.
    // - If **NextToken** is returned, the value indicates the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The details of the queried VPC peering connections.
    shared_ptr<vector<ListVpcPeerConnectionsResponseBody::VpcPeerConnects>> vpcPeerConnects_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
