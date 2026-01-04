// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTETABLESREQUEST_HPP_
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
  class DescribeEnsRouteTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableName, routeTableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeEnsRouteTablesRequest() = default ;
    DescribeEnsRouteTablesRequest(const DescribeEnsRouteTablesRequest &) = default ;
    DescribeEnsRouteTablesRequest(DescribeEnsRouteTablesRequest &&) = default ;
    DescribeEnsRouteTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteTablesRequest() = default ;
    DescribeEnsRouteTablesRequest& operator=(const DescribeEnsRouteTablesRequest &) = default ;
    DescribeEnsRouteTablesRequest& operator=(DescribeEnsRouteTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associateType_ == nullptr
        && this->ensRegionId_ == nullptr && this->ensRegionIds_ == nullptr && this->networkId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->routeTableId_ == nullptr && this->routeTableName_ == nullptr && this->type_ == nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string getAssociateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline DescribeEnsRouteTablesRequest& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsRouteTablesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeEnsRouteTablesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeEnsRouteTablesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeEnsRouteTablesRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRouteTablesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRouteTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeEnsRouteTablesRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableName Field Functions 
    bool hasRouteTableName() const { return this->routeTableName_ != nullptr;};
    void deleteRouteTableName() { this->routeTableName_ = nullptr;};
    inline string getRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(routeTableName_, "") };
    inline DescribeEnsRouteTablesRequest& setRouteTableName(string routeTableName) { DARABONBA_PTR_SET_VALUE(routeTableName_, routeTableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEnsRouteTablesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the resource with which the route table is associated. Valid values:
    // 
    // *   **VSwitch**
    // *   **Gateway**
    shared_ptr<string> associateType_ {};
    // The ID of the ENS node.
    shared_ptr<string> ensRegionId_ {};
    // The IDs of edge nodes. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> ensRegionIds_ {};
    // The ID of the network.
    shared_ptr<string> networkId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the route table.
    shared_ptr<string> routeTableId_ {};
    // The name of the route table.
    shared_ptr<string> routeTableName_ {};
    // The SNAT type.
    // 
    // *   FullCone: full cone NAT.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
