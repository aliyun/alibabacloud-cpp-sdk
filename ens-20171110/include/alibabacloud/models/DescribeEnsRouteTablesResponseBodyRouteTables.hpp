// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESRESPONSEBODYROUTETABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESRESPONSEBODYROUTETABLES_HPP_
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
  class DescribeEnsRouteTablesResponseBodyRouteTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteTablesResponseBodyRouteTables& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(IsDefaultGatewayRouteTable, isDefaultGatewayRouteTable_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteTablesResponseBodyRouteTables& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(IsDefaultGatewayRouteTable, isDefaultGatewayRouteTable_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeEnsRouteTablesResponseBodyRouteTables() = default ;
    DescribeEnsRouteTablesResponseBodyRouteTables(const DescribeEnsRouteTablesResponseBodyRouteTables &) = default ;
    DescribeEnsRouteTablesResponseBodyRouteTables(DescribeEnsRouteTablesResponseBodyRouteTables &&) = default ;
    DescribeEnsRouteTablesResponseBodyRouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteTablesResponseBodyRouteTables() = default ;
    DescribeEnsRouteTablesResponseBodyRouteTables& operator=(const DescribeEnsRouteTablesResponseBodyRouteTables &) = default ;
    DescribeEnsRouteTablesResponseBodyRouteTables& operator=(DescribeEnsRouteTablesResponseBodyRouteTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associateType_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->isDefaultGatewayRouteTable_ == nullptr && return this->networkId_ == nullptr
        && return this->routeTableId_ == nullptr && return this->routeTableName_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string associateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // isDefaultGatewayRouteTable Field Functions 
    bool hasIsDefaultGatewayRouteTable() const { return this->isDefaultGatewayRouteTable_ != nullptr;};
    void deleteIsDefaultGatewayRouteTable() { this->isDefaultGatewayRouteTable_ = nullptr;};
    inline bool isDefaultGatewayRouteTable() const { DARABONBA_PTR_GET_DEFAULT(isDefaultGatewayRouteTable_, false) };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setIsDefaultGatewayRouteTable(bool isDefaultGatewayRouteTable) { DARABONBA_PTR_SET_VALUE(isDefaultGatewayRouteTable_, isDefaultGatewayRouteTable) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableName Field Functions 
    bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
    void deleteRouteTableName() { this->routeTableName_ = nullptr;};
    inline string routeTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeEnsRouteTablesResponseBodyRouteTables& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The type of the resource with which the route table is associated. Valid values:
    // 
    // *   **VSwitch**
    // *   **Gateway**
    std::shared_ptr<string> associateType_ = nullptr;
    // The time when the route table was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // Specifies whether it is the default gateway route table.
    std::shared_ptr<bool> isDefaultGatewayRouteTable_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The name of the route table that you want to query.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> routeTableName_ = nullptr;
    // The status. Valid values:
    // 
    // *   Available: The route table is available.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the route table. Examples:
    // 
    // *   Custom: custom route table.
    // *   System: system route table.
    std::shared_ptr<string> type_ = nullptr;
    // The vSwitches that are associated with the route table.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
