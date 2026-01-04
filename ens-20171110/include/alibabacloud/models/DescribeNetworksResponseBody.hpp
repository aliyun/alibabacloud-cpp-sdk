// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODY_HPP_
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
  class DescribeNetworksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworksResponseBody() = default ;
    DescribeNetworksResponseBody(const DescribeNetworksResponseBody &) = default ;
    DescribeNetworksResponseBody(DescribeNetworksResponseBody &&) = default ;
    DescribeNetworksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksResponseBody() = default ;
    DescribeNetworksResponseBody& operator=(const DescribeNetworksResponseBody &) = default ;
    DescribeNetworksResponseBody& operator=(DescribeNetworksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Networks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Networks& obj) { 
        DARABONBA_PTR_TO_JSON(Network, network_);
      };
      friend void from_json(const Darabonba::Json& j, Networks& obj) { 
        DARABONBA_PTR_FROM_JSON(Network, network_);
      };
      Networks() = default ;
      Networks(const Networks &) = default ;
      Networks(Networks &&) = default ;
      Networks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Networks() = default ;
      Networks& operator=(const Networks &) = default ;
      Networks& operator=(Networks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Network : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Network& obj) { 
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
          DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
          DARABONBA_PTR_TO_JSON(RouterTableId, routerTableId_);
          DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, Network& obj) { 
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
          DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
          DARABONBA_PTR_FROM_JSON(RouterTableId, routerTableId_);
          DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        };
        Network() = default ;
        Network(const Network &) = default ;
        Network(Network &&) = default ;
        Network(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Network() = default ;
        Network& operator=(const Network &) = default ;
        Network& operator=(Network &&) = default ;
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
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


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


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the tag.
            shared_ptr<string> key_ {};
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
            // The bandwidth.
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

        class RouteTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          };
          friend void from_json(const Darabonba::Json& j, RouteTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          };
          RouteTableIds() = default ;
          RouteTableIds(const RouteTableIds &) = default ;
          RouteTableIds(RouteTableIds &&) = default ;
          RouteTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteTableIds() = default ;
          RouteTableIds& operator=(const RouteTableIds &) = default ;
          RouteTableIds& operator=(RouteTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->routeTableId_ == nullptr; };
          // routeTableId Field Functions 
          bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
          void deleteRouteTableId() { this->routeTableId_ = nullptr;};
          inline const vector<string> & getRouteTableId() const { DARABONBA_PTR_GET_CONST(routeTableId_, vector<string>) };
          inline vector<string> getRouteTableId() { DARABONBA_PTR_GET(routeTableId_, vector<string>) };
          inline RouteTableIds& setRouteTableId(const vector<string> & routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };
          inline RouteTableIds& setRouteTableId(vector<string> && routeTableId) { DARABONBA_PTR_SET_RVALUE(routeTableId_, routeTableId) };


        protected:
          shared_ptr<vector<string>> routeTableId_ {};
        };

        virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->gatewayRouteTableId_ == nullptr && this->networkAclId_ == nullptr
        && this->networkId_ == nullptr && this->networkName_ == nullptr && this->routeTableId_ == nullptr && this->routeTableIds_ == nullptr && this->routerTableId_ == nullptr
        && this->secondaryCidrBlocks_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchIds_ == nullptr; };
        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline Network& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Network& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Network& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline Network& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // gatewayRouteTableId Field Functions 
        bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
        void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
        inline string getGatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
        inline Network& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


        // networkAclId Field Functions 
        bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
        void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
        inline string getNetworkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
        inline Network& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline Network& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // networkName Field Functions 
        bool hasNetworkName() const { return this->networkName_ != nullptr;};
        void deleteNetworkName() { this->networkName_ = nullptr;};
        inline string getNetworkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
        inline Network& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline Network& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // routeTableIds Field Functions 
        bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
        void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
        inline const Network::RouteTableIds & getRouteTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, Network::RouteTableIds) };
        inline Network::RouteTableIds getRouteTableIds() { DARABONBA_PTR_GET(routeTableIds_, Network::RouteTableIds) };
        inline Network& setRouteTableIds(const Network::RouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
        inline Network& setRouteTableIds(Network::RouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


        // routerTableId Field Functions 
        bool hasRouterTableId() const { return this->routerTableId_ != nullptr;};
        void deleteRouterTableId() { this->routerTableId_ = nullptr;};
        inline string getRouterTableId() const { DARABONBA_PTR_GET_DEFAULT(routerTableId_, "") };
        inline Network& setRouterTableId(string routerTableId) { DARABONBA_PTR_SET_VALUE(routerTableId_, routerTableId) };


        // secondaryCidrBlocks Field Functions 
        bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
        void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
        inline const Network::SecondaryCidrBlocks & getSecondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, Network::SecondaryCidrBlocks) };
        inline Network::SecondaryCidrBlocks getSecondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, Network::SecondaryCidrBlocks) };
        inline Network& setSecondaryCidrBlocks(const Network::SecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
        inline Network& setSecondaryCidrBlocks(Network::SecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Network& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Network::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Network::Tags) };
        inline Network::Tags getTags() { DARABONBA_PTR_GET(tags_, Network::Tags) };
        inline Network& setTags(const Network::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Network& setTags(Network::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const Network::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Network::VSwitchIds) };
        inline Network::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Network::VSwitchIds) };
        inline Network& setVSwitchIds(const Network::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline Network& setVSwitchIds(Network::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      protected:
        // The IPv4 CIDR block of the network.
        shared_ptr<string> cidrBlock_ {};
        // The timestamp when the instance was created. Unit: milliseconds.
        shared_ptr<string> createdTime_ {};
        // The description of the network.
        shared_ptr<string> description_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The ID of the gateway route table.
        shared_ptr<string> gatewayRouteTableId_ {};
        // The ID of the network access control list (ACL).
        shared_ptr<string> networkAclId_ {};
        // The ID of the network.
        shared_ptr<string> networkId_ {};
        // The name of the network.
        shared_ptr<string> networkName_ {};
        // The ID of the route table.
        shared_ptr<string> routeTableId_ {};
        // The IDs of the route tables.
        shared_ptr<Network::RouteTableIds> routeTableIds_ {};
        // The route table ID.
        shared_ptr<string> routerTableId_ {};
        shared_ptr<Network::SecondaryCidrBlocks> secondaryCidrBlocks_ {};
        // The status of the network. Valid values:
        // 
        // *   Pending
        // *   Available
        shared_ptr<string> status_ {};
        shared_ptr<Network::Tags> tags_ {};
        // The list of vSwitches in the network.
        shared_ptr<Network::VSwitchIds> vSwitchIds_ {};
      };

      virtual bool empty() const override { return this->network_ == nullptr; };
      // network Field Functions 
      bool hasNetwork() const { return this->network_ != nullptr;};
      void deleteNetwork() { this->network_ = nullptr;};
      inline const vector<Networks::Network> & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, vector<Networks::Network>) };
      inline vector<Networks::Network> getNetwork() { DARABONBA_PTR_GET(network_, vector<Networks::Network>) };
      inline Networks& setNetwork(const vector<Networks::Network> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
      inline Networks& setNetwork(vector<Networks::Network> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    protected:
      shared_ptr<vector<Networks::Network>> network_ {};
    };

    virtual bool empty() const override { return this->networks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const DescribeNetworksResponseBody::Networks & getNetworks() const { DARABONBA_PTR_GET_CONST(networks_, DescribeNetworksResponseBody::Networks) };
    inline DescribeNetworksResponseBody::Networks getNetworks() { DARABONBA_PTR_GET(networks_, DescribeNetworksResponseBody::Networks) };
    inline DescribeNetworksResponseBody& setNetworks(const DescribeNetworksResponseBody::Networks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline DescribeNetworksResponseBody& setNetworks(DescribeNetworksResponseBody::Networks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The VPCs.
    shared_ptr<DescribeNetworksResponseBody::Networks> networks_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the list.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
