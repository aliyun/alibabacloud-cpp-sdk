// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
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
      DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTable& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
      DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
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
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->routeEntrys_ == nullptr && return this->routeTableId_ == nullptr && return this->routeTableType_ == nullptr && return this->VRouterId_ == nullptr; };
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


    // VRouterId Field Functions 
    bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
    void deleteVRouterId() { this->VRouterId_ = nullptr;};
    inline string VRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTable& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrys> routeEntrys_ = nullptr;
    std::shared_ptr<string> routeTableId_ = nullptr;
    std::shared_ptr<string> routeTableType_ = nullptr;
    std::shared_ptr<string> VRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
