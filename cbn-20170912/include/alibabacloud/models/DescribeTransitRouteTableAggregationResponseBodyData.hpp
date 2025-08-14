// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouteTableAggregationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouteTableAggregationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ScopeList, scopeList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrRouteTableId, trRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouteTableAggregationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ScopeList, scopeList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrRouteTableId, trRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
    };
    DescribeTransitRouteTableAggregationResponseBodyData() = default ;
    DescribeTransitRouteTableAggregationResponseBodyData(const DescribeTransitRouteTableAggregationResponseBodyData &) = default ;
    DescribeTransitRouteTableAggregationResponseBodyData(DescribeTransitRouteTableAggregationResponseBodyData &&) = default ;
    DescribeTransitRouteTableAggregationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouteTableAggregationResponseBodyData() = default ;
    DescribeTransitRouteTableAggregationResponseBodyData& operator=(const DescribeTransitRouteTableAggregationResponseBodyData &) = default ;
    DescribeTransitRouteTableAggregationResponseBodyData& operator=(DescribeTransitRouteTableAggregationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->routeType_ != nullptr && this->scope_ != nullptr && this->scopeList_ != nullptr && this->status_ != nullptr
        && this->trRouteTableId_ != nullptr && this->transitRouteTableAggregationCidr_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // scopeList Field Functions 
    bool hasScopeList() const { return this->scopeList_ != nullptr;};
    void deleteScopeList() { this->scopeList_ = nullptr;};
    inline const vector<string> & scopeList() const { DARABONBA_PTR_GET_CONST(scopeList_, vector<string>) };
    inline vector<string> scopeList() { DARABONBA_PTR_GET(scopeList_, vector<string>) };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setScopeList(const vector<string> & scopeList) { DARABONBA_PTR_SET_VALUE(scopeList_, scopeList) };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setScopeList(vector<string> && scopeList) { DARABONBA_PTR_SET_RVALUE(scopeList_, scopeList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trRouteTableId Field Functions 
    bool hasTrRouteTableId() const { return this->trRouteTableId_ != nullptr;};
    void deleteTrRouteTableId() { this->trRouteTableId_ = nullptr;};
    inline string trRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(trRouteTableId_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setTrRouteTableId(string trRouteTableId) { DARABONBA_PTR_SET_VALUE(trRouteTableId_, trRouteTableId) };


    // transitRouteTableAggregationCidr Field Functions 
    bool hasTransitRouteTableAggregationCidr() const { return this->transitRouteTableAggregationCidr_ != nullptr;};
    void deleteTransitRouteTableAggregationCidr() { this->transitRouteTableAggregationCidr_ = nullptr;};
    inline string transitRouteTableAggregationCidr() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationCidr_, "") };
    inline DescribeTransitRouteTableAggregationResponseBodyData& setTransitRouteTableAggregationCidr(string transitRouteTableAggregationCidr) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationCidr_, transitRouteTableAggregationCidr) };


  protected:
    // The description of the aggregate route.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the aggregate route.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the aggregate route.
    // 
    // The valid value is **Static**, which indicates a static route. By default, aggregate routes advertised to a VPC are considered custom routes.
    std::shared_ptr<string> routeType_ = nullptr;
    // The scope of networks that you want to advertise the aggregate route.
    // 
    // The valid value is **VPC**, which indicates that the aggregate route is advertised to all virtual private clouds (VPCs) that are in associated forwarding correlation with the Enterprise Edition transit router and have route synchronization enabled.
    std::shared_ptr<string> scope_ = nullptr;
    // The list of propagation ranges of the aggregation route.
    // 
    // >  You must specify at least one of the following attributes: Aggregation Scope and Aggregate Scope List. We recommend that you specify the latter. The elements in the two attributes cannot be duplicate.
    std::shared_ptr<vector<string>> scopeList_ = nullptr;
    // The status of the advertisement of the aggregate route. Valid values:
    // 
    // *   **AllConfigured**: The aggregate route is advertised to all VPCs.
    // *   **Configuring**: The aggregate route is being advertised.
    // *   **ConfigFailed**: The aggregate route failed to be advertised.
    // *   **PartialConfigured**: Failed to advertise the aggregate route to some VPCs.
    // *   **Deleting**: The aggregate route is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    std::shared_ptr<string> trRouteTableId_ = nullptr;
    // The destination CIDR block of the aggregate route.
    std::shared_ptr<string> transitRouteTableAggregationCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
