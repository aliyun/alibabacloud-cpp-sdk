// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys.hpp>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTablesRouteTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTable& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTable& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTable() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTable(const DescribeRouteTablesResponseBodyRouteTablesRouteTable &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTable(DescribeRouteTablesResponseBodyRouteTablesRouteTable &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTable() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTable& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTable &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTable& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->resourceGroupId_ != nullptr && this->routeEntrys_ != nullptr && this->routeTableId_ != nullptr && this->routeTableType_ != nullptr && this->status_ != nullptr
        && this->VRouterId_ != nullptr && this->vSwitchIds_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // routeEntrys Field Functions 
    bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
    void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
    inline const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys & routeEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys) };
    inline Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys routeEntrys() { DARABONBA_PTR_GET(routeEntrys_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setRouteEntrys(const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setRouteEntrys(Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableType Field Functions 
    bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
    void deleteRouteTableType() { this->routeTableType_ = nullptr;};
    inline string routeTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds) };
    inline Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setVSwitchIds(const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setVSwitchIds(Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The time when the route table was created.
    // 
    // The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the resource group to which the route table belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the route.
    std::shared_ptr<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys> routeEntrys_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The type of the route table. Valid values:
    // 
    // *   **Custom**
    // *   **System**
    std::shared_ptr<string> routeTableType_ = nullptr;
    // The status of the route table. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The vRouter ID.
    std::shared_ptr<string> VRouterId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableVSwitchIds> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
