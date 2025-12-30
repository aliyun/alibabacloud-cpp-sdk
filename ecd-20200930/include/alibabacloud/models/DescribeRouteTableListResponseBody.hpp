// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRouteTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTableList, routeTableList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTableList, routeTableList_);
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
    class RouteTableList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTableList& obj) { 
        DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
        DARABONBA_PTR_TO_JSON(RouterType, routerType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTableList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
        DARABONBA_PTR_FROM_JSON(RouterType, routerType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      RouteTableList() = default ;
      RouteTableList(const RouteTableList &) = default ;
      RouteTableList(RouteTableList &&) = default ;
      RouteTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTableList() = default ;
      RouteTableList& operator=(const RouteTableList &) = default ;
      RouteTableList& operator=(RouteTableList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associateType_ == nullptr
        && this->routeTableId_ == nullptr && this->routeTableType_ == nullptr && this->routerType_ == nullptr && this->status_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr; };
      // associateType Field Functions 
      bool hasAssociateType() const { return this->associateType_ != nullptr;};
      void deleteAssociateType() { this->associateType_ = nullptr;};
      inline string getAssociateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
      inline RouteTableList& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteTableList& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // routeTableType Field Functions 
      bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
      void deleteRouteTableType() { this->routeTableType_ = nullptr;};
      inline string getRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
      inline RouteTableList& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


      // routerType Field Functions 
      bool hasRouterType() const { return this->routerType_ != nullptr;};
      void deleteRouterType() { this->routerType_ = nullptr;};
      inline string getRouterType() const { DARABONBA_PTR_GET_DEFAULT(routerType_, "") };
      inline RouteTableList& setRouterType(string routerType) { DARABONBA_PTR_SET_VALUE(routerType_, routerType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteTableList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline RouteTableList& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline RouteTableList& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline RouteTableList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> associateType_ {};
      shared_ptr<string> routeTableId_ {};
      shared_ptr<string> routeTableType_ {};
      shared_ptr<string> routerType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<string>> vSwitchIds_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeTableList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRouteTableListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteTableListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTableList Field Functions 
    bool hasRouteTableList() const { return this->routeTableList_ != nullptr;};
    void deleteRouteTableList() { this->routeTableList_ = nullptr;};
    inline const vector<DescribeRouteTableListResponseBody::RouteTableList> & getRouteTableList() const { DARABONBA_PTR_GET_CONST(routeTableList_, vector<DescribeRouteTableListResponseBody::RouteTableList>) };
    inline vector<DescribeRouteTableListResponseBody::RouteTableList> getRouteTableList() { DARABONBA_PTR_GET(routeTableList_, vector<DescribeRouteTableListResponseBody::RouteTableList>) };
    inline DescribeRouteTableListResponseBody& setRouteTableList(const vector<DescribeRouteTableListResponseBody::RouteTableList> & routeTableList) { DARABONBA_PTR_SET_VALUE(routeTableList_, routeTableList) };
    inline DescribeRouteTableListResponseBody& setRouteTableList(vector<DescribeRouteTableListResponseBody::RouteTableList> && routeTableList) { DARABONBA_PTR_SET_RVALUE(routeTableList_, routeTableList) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRouteTableListResponseBody::RouteTableList>> routeTableList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
