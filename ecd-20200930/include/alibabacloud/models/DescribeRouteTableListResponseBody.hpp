// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouteTableList.hpp>
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
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->routeTableList_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRouteTableListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteTableListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTableList Field Functions 
    bool hasRouteTableList() const { return this->routeTableList_ != nullptr;};
    void deleteRouteTableList() { this->routeTableList_ = nullptr;};
    inline const vector<DescribeRouteTableListResponseBodyRouteTableList> & routeTableList() const { DARABONBA_PTR_GET_CONST(routeTableList_, vector<DescribeRouteTableListResponseBodyRouteTableList>) };
    inline vector<DescribeRouteTableListResponseBodyRouteTableList> routeTableList() { DARABONBA_PTR_GET(routeTableList_, vector<DescribeRouteTableListResponseBodyRouteTableList>) };
    inline DescribeRouteTableListResponseBody& setRouteTableList(const vector<DescribeRouteTableListResponseBodyRouteTableList> & routeTableList) { DARABONBA_PTR_SET_VALUE(routeTableList_, routeTableList) };
    inline DescribeRouteTableListResponseBody& setRouteTableList(vector<DescribeRouteTableListResponseBodyRouteTableList> && routeTableList) { DARABONBA_PTR_SET_RVALUE(routeTableList_, routeTableList) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeRouteTableListResponseBodyRouteTableList>> routeTableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
