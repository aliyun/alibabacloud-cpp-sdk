// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONRESPONSEBODY_HPP_
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
  class DescribeTransitRouteTableAggregationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouteTableAggregationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouteTableAggregationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeTransitRouteTableAggregationResponseBody() = default ;
    DescribeTransitRouteTableAggregationResponseBody(const DescribeTransitRouteTableAggregationResponseBody &) = default ;
    DescribeTransitRouteTableAggregationResponseBody(DescribeTransitRouteTableAggregationResponseBody &&) = default ;
    DescribeTransitRouteTableAggregationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouteTableAggregationResponseBody() = default ;
    DescribeTransitRouteTableAggregationResponseBody& operator=(const DescribeTransitRouteTableAggregationResponseBody &) = default ;
    DescribeTransitRouteTableAggregationResponseBody& operator=(DescribeTransitRouteTableAggregationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RouteType, routeType_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(ScopeList, scopeList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TrRouteTableId, trRouteTableId_);
        DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(ScopeList, scopeList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TrRouteTableId, trRouteTableId_);
        DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->routeType_ == nullptr && this->scope_ == nullptr && this->scopeList_ == nullptr && this->status_ == nullptr
        && this->trRouteTableId_ == nullptr && this->transitRouteTableAggregationCidr_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // routeType Field Functions 
      bool hasRouteType() const { return this->routeType_ != nullptr;};
      void deleteRouteType() { this->routeType_ = nullptr;};
      inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
      inline Data& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Data& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // scopeList Field Functions 
      bool hasScopeList() const { return this->scopeList_ != nullptr;};
      void deleteScopeList() { this->scopeList_ = nullptr;};
      inline const vector<string> & getScopeList() const { DARABONBA_PTR_GET_CONST(scopeList_, vector<string>) };
      inline vector<string> getScopeList() { DARABONBA_PTR_GET(scopeList_, vector<string>) };
      inline Data& setScopeList(const vector<string> & scopeList) { DARABONBA_PTR_SET_VALUE(scopeList_, scopeList) };
      inline Data& setScopeList(vector<string> && scopeList) { DARABONBA_PTR_SET_RVALUE(scopeList_, scopeList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // trRouteTableId Field Functions 
      bool hasTrRouteTableId() const { return this->trRouteTableId_ != nullptr;};
      void deleteTrRouteTableId() { this->trRouteTableId_ = nullptr;};
      inline string getTrRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(trRouteTableId_, "") };
      inline Data& setTrRouteTableId(string trRouteTableId) { DARABONBA_PTR_SET_VALUE(trRouteTableId_, trRouteTableId) };


      // transitRouteTableAggregationCidr Field Functions 
      bool hasTransitRouteTableAggregationCidr() const { return this->transitRouteTableAggregationCidr_ != nullptr;};
      void deleteTransitRouteTableAggregationCidr() { this->transitRouteTableAggregationCidr_ = nullptr;};
      inline string getTransitRouteTableAggregationCidr() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationCidr_, "") };
      inline Data& setTransitRouteTableAggregationCidr(string transitRouteTableAggregationCidr) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationCidr_, transitRouteTableAggregationCidr) };


    protected:
      // The description of the aggregate route.
      shared_ptr<string> description_ {};
      // The name of the aggregate route.
      shared_ptr<string> name_ {};
      // The type of the aggregate route.
      // 
      // The valid value is **Static**, which indicates a static route. By default, aggregate routes advertised to a VPC are considered custom routes.
      shared_ptr<string> routeType_ {};
      // The scope of networks that you want to advertise the aggregate route.
      // 
      // The valid value is **VPC**, which indicates that the aggregate route is advertised to all virtual private clouds (VPCs) that are in associated forwarding correlation with the Enterprise Edition transit router and have route synchronization enabled.
      shared_ptr<string> scope_ {};
      // The list of propagation ranges of the aggregation route.
      // 
      // >  You must specify at least one of the following attributes: Aggregation Scope and Aggregate Scope List. We recommend that you specify the latter. The elements in the two attributes cannot be duplicate.
      shared_ptr<vector<string>> scopeList_ {};
      // The status of the advertisement of the aggregate route. Valid values:
      // 
      // *   **AllConfigured**: The aggregate route is advertised to all VPCs.
      // *   **Configuring**: The aggregate route is being advertised.
      // *   **ConfigFailed**: The aggregate route failed to be advertised.
      // *   **PartialConfigured**: Failed to advertise the aggregate route to some VPCs.
      // *   **Deleting**: The aggregate route is being deleted.
      shared_ptr<string> status_ {};
      // The ID of the route table of the Enterprise Edition transit router.
      shared_ptr<string> trRouteTableId_ {};
      // The destination CIDR block of the aggregate route.
      shared_ptr<string> transitRouteTableAggregationCidr_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeTransitRouteTableAggregationResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeTransitRouteTableAggregationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeTransitRouteTableAggregationResponseBody::Data>) };
    inline vector<DescribeTransitRouteTableAggregationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeTransitRouteTableAggregationResponseBody::Data>) };
    inline DescribeTransitRouteTableAggregationResponseBody& setData(const vector<DescribeTransitRouteTableAggregationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTransitRouteTableAggregationResponseBody& setData(vector<DescribeTransitRouteTableAggregationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouteTableAggregationResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouteTableAggregationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeTransitRouteTableAggregationResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> count_ {};
    // A list of aggregate routes.
    shared_ptr<vector<DescribeTransitRouteTableAggregationResponseBody::Data>> data_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
