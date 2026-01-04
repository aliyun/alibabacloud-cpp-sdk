// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESRESPONSEBODY_HPP_
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
  class DescribeEnsRouteTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsRouteTablesResponseBody() = default ;
    DescribeEnsRouteTablesResponseBody(const DescribeEnsRouteTablesResponseBody &) = default ;
    DescribeEnsRouteTablesResponseBody(DescribeEnsRouteTablesResponseBody &&) = default ;
    DescribeEnsRouteTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteTablesResponseBody() = default ;
    DescribeEnsRouteTablesResponseBody& operator=(const DescribeEnsRouteTablesResponseBody &) = default ;
    DescribeEnsRouteTablesResponseBody& operator=(DescribeEnsRouteTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTables& obj) { 
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
      friend void from_json(const Darabonba::Json& j, RouteTables& obj) { 
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
      RouteTables() = default ;
      RouteTables(const RouteTables &) = default ;
      RouteTables(RouteTables &&) = default ;
      RouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTables() = default ;
      RouteTables& operator=(const RouteTables &) = default ;
      RouteTables& operator=(RouteTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associateType_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->isDefaultGatewayRouteTable_ == nullptr && this->networkId_ == nullptr
        && this->routeTableId_ == nullptr && this->routeTableName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->vSwitchIds_ == nullptr; };
      // associateType Field Functions 
      bool hasAssociateType() const { return this->associateType_ != nullptr;};
      void deleteAssociateType() { this->associateType_ = nullptr;};
      inline string getAssociateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
      inline RouteTables& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RouteTables& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteTables& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline RouteTables& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // isDefaultGatewayRouteTable Field Functions 
      bool hasIsDefaultGatewayRouteTable() const { return this->isDefaultGatewayRouteTable_ != nullptr;};
      void deleteIsDefaultGatewayRouteTable() { this->isDefaultGatewayRouteTable_ = nullptr;};
      inline bool getIsDefaultGatewayRouteTable() const { DARABONBA_PTR_GET_DEFAULT(isDefaultGatewayRouteTable_, false) };
      inline RouteTables& setIsDefaultGatewayRouteTable(bool isDefaultGatewayRouteTable) { DARABONBA_PTR_SET_VALUE(isDefaultGatewayRouteTable_, isDefaultGatewayRouteTable) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline RouteTables& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteTables& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // routeTableName Field Functions 
      bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
      void deleteRouteTableName() { this->routeTableName_ = nullptr;};
      inline string getRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
      inline RouteTables& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteTables& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RouteTables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline RouteTables& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline RouteTables& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The type of the resource with which the route table is associated. Valid values:
      // 
      // *   **VSwitch**
      // *   **Gateway**
      shared_ptr<string> associateType_ {};
      // The time when the route table was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The ID of the edge node.
      shared_ptr<string> ensRegionId_ {};
      // Specifies whether it is the default gateway route table.
      shared_ptr<bool> isDefaultGatewayRouteTable_ {};
      // The ID of the network.
      shared_ptr<string> networkId_ {};
      // The ID of the route table.
      shared_ptr<string> routeTableId_ {};
      // The name of the route table that you want to query.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
      shared_ptr<string> routeTableName_ {};
      // The status. Valid values:
      // 
      // *   Available: The route table is available.
      shared_ptr<string> status_ {};
      // The type of the route table. Examples:
      // 
      // *   Custom: custom route table.
      // *   System: system route table.
      shared_ptr<string> type_ {};
      // The vSwitches that are associated with the route table.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeTables_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRouteTablesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRouteTablesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRouteTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTables Field Functions 
    bool hasRouteTables() const { return this->routeTables_ != nullptr;};
    void deleteRouteTables() { this->routeTables_ = nullptr;};
    inline const vector<DescribeEnsRouteTablesResponseBody::RouteTables> & getRouteTables() const { DARABONBA_PTR_GET_CONST(routeTables_, vector<DescribeEnsRouteTablesResponseBody::RouteTables>) };
    inline vector<DescribeEnsRouteTablesResponseBody::RouteTables> getRouteTables() { DARABONBA_PTR_GET(routeTables_, vector<DescribeEnsRouteTablesResponseBody::RouteTables>) };
    inline DescribeEnsRouteTablesResponseBody& setRouteTables(const vector<DescribeEnsRouteTablesResponseBody::RouteTables> & routeTables) { DARABONBA_PTR_SET_VALUE(routeTables_, routeTables) };
    inline DescribeEnsRouteTablesResponseBody& setRouteTables(vector<DescribeEnsRouteTablesResponseBody::RouteTables> && routeTables) { DARABONBA_PTR_SET_RVALUE(routeTables_, routeTables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsRouteTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the route tables.
    shared_ptr<vector<DescribeEnsRouteTablesResponseBody::RouteTables>> routeTables_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
