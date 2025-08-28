// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds.hpp>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags.hpp>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListResponseBodyRouterTableListRouterTableListType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& obj) { 
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
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListType &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType(DescribeRouteTableListResponseBodyRouterTableListRouterTableListType &&) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBodyRouterTableListRouterTableListType() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& operator=(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListType &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& operator=(DescribeRouteTableListResponseBodyRouterTableListRouterTableListType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateType_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->gatewayIds_ != nullptr && this->ownerId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->routePropagationEnable_ != nullptr && this->routeTableId_ != nullptr && this->routeTableName_ != nullptr && this->routeTableType_ != nullptr && this->routerId_ != nullptr
        && this->routerType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->vSwitchIds_ != nullptr && this->vpcId_ != nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string associateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayIds Field Functions 
    bool hasGatewayIds() const { return this->gatewayIds_ != nullptr;};
    void deleteGatewayIds() { this->gatewayIds_ = nullptr;};
    inline const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds & gatewayIds() const { DARABONBA_PTR_GET_CONST(gatewayIds_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds) };
    inline Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds gatewayIds() { DARABONBA_PTR_GET(gatewayIds_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setGatewayIds(const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds & gatewayIds) { DARABONBA_PTR_SET_VALUE(gatewayIds_, gatewayIds) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setGatewayIds(Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds && gatewayIds) { DARABONBA_PTR_SET_RVALUE(gatewayIds_, gatewayIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routePropagationEnable Field Functions 
    bool hasRoutePropagationEnable() const { return this->routePropagationEnable_ != nullptr;};
    void deleteRoutePropagationEnable() { this->routePropagationEnable_ = nullptr;};
    inline bool routePropagationEnable() const { DARABONBA_PTR_GET_DEFAULT(routePropagationEnable_, false) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRoutePropagationEnable(bool routePropagationEnable) { DARABONBA_PTR_SET_VALUE(routePropagationEnable_, routePropagationEnable) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableName Field Functions 
    bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
    void deleteRouteTableName() { this->routeTableName_ = nullptr;};
    inline string routeTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


    // routeTableType Field Functions 
    bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
    void deleteRouteTableType() { this->routeTableType_ = nullptr;};
    inline string routeTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // routerType Field Functions 
    bool hasRouterType() const { return this->routerType_ != nullptr;};
    void deleteRouterType() { this->routerType_ = nullptr;};
    inline string routerType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags) };
    inline Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setTags(const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setTags(Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds) };
    inline Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setVSwitchIds(const Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setVSwitchIds(Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListType& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The type of the cloud resource with which the route table is associated. Valid values:
    // 
    // *   **VSwitch**: vSwitch
    // *   **Gateway**: IPv4 gateway
    std::shared_ptr<string> associateType_ = nullptr;
    // The time when the route table was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about the route table.
    std::shared_ptr<string> description_ = nullptr;
    // The detailed information about the IPv4 gateway.
    std::shared_ptr<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeGatewayIds> gatewayIds_ = nullptr;
    // The ID of the Alibaba Cloud account to which the route table belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group to which the route table belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Whether to receive the propagation routes. Valid Values:
    // 
    // *   **true**: received.
    // 
    // *   **false**: not received.
    std::shared_ptr<bool> routePropagationEnable_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The name of the route table.
    std::shared_ptr<string> routeTableName_ = nullptr;
    // The type of the route table. Valid values:
    // 
    // *   **Custom**
    // *   **System**
    std::shared_ptr<string> routeTableType_ = nullptr;
    // The ID of the vRouter to which the route table belongs.
    std::shared_ptr<string> routerId_ = nullptr;
    // The type of the vRouter to which the route table belongs. Valid values:
    // 
    // - **VRouter**: a vRouter.
    // 
    // - **VBR**: a VBR.
    std::shared_ptr<string> routerType_ = nullptr;
    // The status of the route table. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags> tags_ = nullptr;
    // The vSwitch IDs.
    std::shared_ptr<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeVSwitchIds> vSwitchIds_ = nullptr;
    // The ID of the VPC to which the route table belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
