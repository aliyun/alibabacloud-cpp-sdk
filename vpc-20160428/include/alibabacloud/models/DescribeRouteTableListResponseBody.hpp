// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
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
  class DescribeRouteTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterTableList, routerTableList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterTableList, routerTableList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteTableListResponseBody() = default ;
    DescribeRouteTableListResponseBody(const DescribeRouteTableListResponseBody &) = default ;
    DescribeRouteTableListResponseBody(DescribeRouteTableListResponseBody &&) = default ;
    DescribeRouteTableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBody() = default ;
    DescribeRouteTableListResponseBody& operator=(const DescribeRouteTableListResponseBody &) = default ;
    DescribeRouteTableListResponseBody& operator=(DescribeRouteTableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouterTableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouterTableList& obj) { 
        DARABONBA_PTR_TO_JSON(RouterTableListType, routerTableListType_);
      };
      friend void from_json(const Darabonba::Json& j, RouterTableList& obj) { 
        DARABONBA_PTR_FROM_JSON(RouterTableListType, routerTableListType_);
      };
      RouterTableList() = default ;
      RouterTableList(const RouterTableList &) = default ;
      RouterTableList(RouterTableList &&) = default ;
      RouterTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouterTableList() = default ;
      RouterTableList& operator=(const RouterTableList &) = default ;
      RouterTableList& operator=(RouterTableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouterTableListType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouterTableListType& obj) { 
          DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GatewayIds, gatewayIds_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RoutePropagationEnable, routePropagationEnable_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(RouteTableName, routeTableName_);
          DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
          DARABONBA_PTR_TO_JSON(RouterId, routerId_);
          DARABONBA_PTR_TO_JSON(RouterType, routerType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, RouterTableListType& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GatewayIds, gatewayIds_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RoutePropagationEnable, routePropagationEnable_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(RouteTableName, routeTableName_);
          DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
          DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
          DARABONBA_PTR_FROM_JSON(RouterType, routerType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        RouterTableListType() = default ;
        RouterTableListType(const RouterTableListType &) = default ;
        RouterTableListType(RouterTableListType &&) = default ;
        RouterTableListType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouterTableListType() = default ;
        RouterTableListType& operator=(const RouterTableListType &) = default ;
        RouterTableListType& operator=(RouterTableListType &&) = default ;
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
            // The key of the tag that is added to the route table.
            shared_ptr<string> key_ {};
            // The value of the tag that is added to the route table.
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

        class GatewayIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GatewayIds& obj) { 
            DARABONBA_PTR_TO_JSON(GatewayIds, gatewayIds_);
          };
          friend void from_json(const Darabonba::Json& j, GatewayIds& obj) { 
            DARABONBA_PTR_FROM_JSON(GatewayIds, gatewayIds_);
          };
          GatewayIds() = default ;
          GatewayIds(const GatewayIds &) = default ;
          GatewayIds(GatewayIds &&) = default ;
          GatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GatewayIds() = default ;
          GatewayIds& operator=(const GatewayIds &) = default ;
          GatewayIds& operator=(GatewayIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewayIds_ == nullptr; };
          // gatewayIds Field Functions 
          bool hasGatewayIds() const { return this->gatewayIds_ != nullptr;};
          void deleteGatewayIds() { this->gatewayIds_ = nullptr;};
          inline const vector<string> & getGatewayIds() const { DARABONBA_PTR_GET_CONST(gatewayIds_, vector<string>) };
          inline vector<string> getGatewayIds() { DARABONBA_PTR_GET(gatewayIds_, vector<string>) };
          inline GatewayIds& setGatewayIds(const vector<string> & gatewayIds) { DARABONBA_PTR_SET_VALUE(gatewayIds_, gatewayIds) };
          inline GatewayIds& setGatewayIds(vector<string> && gatewayIds) { DARABONBA_PTR_SET_RVALUE(gatewayIds_, gatewayIds) };


        protected:
          shared_ptr<vector<string>> gatewayIds_ {};
        };

        virtual bool empty() const override { return this->associateType_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->gatewayIds_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->routePropagationEnable_ == nullptr && this->routeTableId_ == nullptr && this->routeTableName_ == nullptr && this->routeTableType_ == nullptr && this->routerId_ == nullptr
        && this->routerType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
        // associateType Field Functions 
        bool hasAssociateType() const { return this->associateType_ != nullptr;};
        void deleteAssociateType() { this->associateType_ = nullptr;};
        inline string getAssociateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
        inline RouterTableListType& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline RouterTableListType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RouterTableListType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gatewayIds Field Functions 
        bool hasGatewayIds() const { return this->gatewayIds_ != nullptr;};
        void deleteGatewayIds() { this->gatewayIds_ = nullptr;};
        inline const RouterTableListType::GatewayIds & getGatewayIds() const { DARABONBA_PTR_GET_CONST(gatewayIds_, RouterTableListType::GatewayIds) };
        inline RouterTableListType::GatewayIds getGatewayIds() { DARABONBA_PTR_GET(gatewayIds_, RouterTableListType::GatewayIds) };
        inline RouterTableListType& setGatewayIds(const RouterTableListType::GatewayIds & gatewayIds) { DARABONBA_PTR_SET_VALUE(gatewayIds_, gatewayIds) };
        inline RouterTableListType& setGatewayIds(RouterTableListType::GatewayIds && gatewayIds) { DARABONBA_PTR_SET_RVALUE(gatewayIds_, gatewayIds) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline RouterTableListType& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline RouterTableListType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routePropagationEnable Field Functions 
        bool hasRoutePropagationEnable() const { return this->routePropagationEnable_ != nullptr;};
        void deleteRoutePropagationEnable() { this->routePropagationEnable_ = nullptr;};
        inline bool getRoutePropagationEnable() const { DARABONBA_PTR_GET_DEFAULT(routePropagationEnable_, false) };
        inline RouterTableListType& setRoutePropagationEnable(bool routePropagationEnable) { DARABONBA_PTR_SET_VALUE(routePropagationEnable_, routePropagationEnable) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline RouterTableListType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // routeTableName Field Functions 
        bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
        void deleteRouteTableName() { this->routeTableName_ = nullptr;};
        inline string getRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
        inline RouterTableListType& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


        // routeTableType Field Functions 
        bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
        void deleteRouteTableType() { this->routeTableType_ = nullptr;};
        inline string getRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
        inline RouterTableListType& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


        // routerId Field Functions 
        bool hasRouterId() const { return this->routerId_ != nullptr;};
        void deleteRouterId() { this->routerId_ = nullptr;};
        inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
        inline RouterTableListType& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


        // routerType Field Functions 
        bool hasRouterType() const { return this->routerType_ != nullptr;};
        void deleteRouterType() { this->routerType_ = nullptr;};
        inline string getRouterType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
        inline RouterTableListType& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouterTableListType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const RouterTableListType::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, RouterTableListType::Tags) };
        inline RouterTableListType::Tags getTags() { DARABONBA_PTR_GET(tags_, RouterTableListType::Tags) };
        inline RouterTableListType& setTags(const RouterTableListType::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline RouterTableListType& setTags(RouterTableListType::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const RouterTableListType::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, RouterTableListType::VSwitchIds) };
        inline RouterTableListType::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, RouterTableListType::VSwitchIds) };
        inline RouterTableListType& setVSwitchIds(const RouterTableListType::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline RouterTableListType& setVSwitchIds(RouterTableListType::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline RouterTableListType& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The type of the cloud resource with which the route table is associated. Valid values:
        // 
        // *   **VSwitch**: vSwitch
        // *   **Gateway**: IPv4 gateway
        shared_ptr<string> associateType_ {};
        // The time when the route table was created.
        shared_ptr<string> creationTime_ {};
        // The information about the route table.
        shared_ptr<string> description_ {};
        // The detailed information about the IPv4 gateway.
        shared_ptr<RouterTableListType::GatewayIds> gatewayIds_ {};
        // The ID of the Alibaba Cloud account to which the route table belongs.
        shared_ptr<int64_t> ownerId_ {};
        // The ID of the resource group to which the route table belongs.
        shared_ptr<string> resourceGroupId_ {};
        // Whether to receive the propagation routes. Valid Values:
        // 
        // *   **true**: received.
        // 
        // *   **false**: not received.
        shared_ptr<bool> routePropagationEnable_ {};
        // The ID of the route table.
        shared_ptr<string> routeTableId_ {};
        // The name of the route table.
        shared_ptr<string> routeTableName_ {};
        // The type of the route table. Valid values:
        // 
        // *   **Custom**
        // *   **System**
        shared_ptr<string> routeTableType_ {};
        // The ID of the vRouter to which the route table belongs.
        shared_ptr<string> routerId_ {};
        // The type of the vRouter to which the route table belongs. Valid values:
        // 
        // - **VRouter**: a vRouter.
        // 
        // - **VBR**: a VBR.
        shared_ptr<string> routerType_ {};
        // The status of the route table. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        // *   **Deleting**
        shared_ptr<string> status_ {};
        // The tags.
        shared_ptr<RouterTableListType::Tags> tags_ {};
        // The vSwitch IDs.
        shared_ptr<RouterTableListType::VSwitchIds> vSwitchIds_ {};
        // The ID of the VPC to which the route table belongs.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->routerTableListType_ == nullptr; };
      // routerTableListType Field Functions 
      bool hasRouterTableListType() const { return this->routerTableListType_ != nullptr;};
      void deleteRouterTableListType() { this->routerTableListType_ = nullptr;};
      inline const vector<RouterTableList::RouterTableListType> & getRouterTableListType() const { DARABONBA_PTR_GET_CONST(routerTableListType_, vector<RouterTableList::RouterTableListType>) };
      inline vector<RouterTableList::RouterTableListType> getRouterTableListType() { DARABONBA_PTR_GET(routerTableListType_, vector<RouterTableList::RouterTableListType>) };
      inline RouterTableList& setRouterTableListType(const vector<RouterTableList::RouterTableListType> & routerTableListType) { DARABONBA_PTR_SET_VALUE(routerTableListType_, routerTableListType) };
      inline RouterTableList& setRouterTableListType(vector<RouterTableList::RouterTableListType> && routerTableListType) { DARABONBA_PTR_SET_RVALUE(routerTableListType_, routerTableListType) };


    protected:
      shared_ptr<vector<RouterTableList::RouterTableListType>> routerTableListType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routerTableList_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteTableListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteTableListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerTableList Field Functions 
    bool hasRouterTableList() const { return this->routerTableList_ != nullptr;};
    void deleteRouterTableList() { this->routerTableList_ = nullptr;};
    inline const DescribeRouteTableListResponseBody::RouterTableList & getRouterTableList() const { DARABONBA_PTR_GET_CONST(routerTableList_, DescribeRouteTableListResponseBody::RouterTableList) };
    inline DescribeRouteTableListResponseBody::RouterTableList getRouterTableList() { DARABONBA_PTR_GET(routerTableList_, DescribeRouteTableListResponseBody::RouterTableList) };
    inline DescribeRouteTableListResponseBody& setRouterTableList(const DescribeRouteTableListResponseBody::RouterTableList & routerTableList) { DARABONBA_PTR_SET_VALUE(routerTableList_, routerTableList) };
    inline DescribeRouteTableListResponseBody& setRouterTableList(DescribeRouteTableListResponseBody::RouterTableList && routerTableList) { DARABONBA_PTR_SET_RVALUE(routerTableList_, routerTableList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteTableListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The detailed information about the route tables.
    shared_ptr<DescribeRouteTableListResponseBody::RouterTableList> routerTableList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
