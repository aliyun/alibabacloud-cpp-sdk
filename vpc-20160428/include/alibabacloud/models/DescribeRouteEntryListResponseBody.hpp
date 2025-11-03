// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntrys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
    };
    DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody(DescribeRouteEntryListResponseBody &&) = default ;
    DescribeRouteEntryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody& operator=(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody& operator=(DescribeRouteEntryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->routeEntrys_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteEntryListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteEntryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrys Field Functions 
    bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
    void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
    inline const DescribeRouteEntryListResponseBodyRouteEntrys & routeEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, DescribeRouteEntryListResponseBodyRouteEntrys) };
    inline DescribeRouteEntryListResponseBodyRouteEntrys routeEntrys() { DARABONBA_PTR_GET(routeEntrys_, DescribeRouteEntryListResponseBodyRouteEntrys) };
    inline DescribeRouteEntryListResponseBody& setRouteEntrys(const DescribeRouteEntryListResponseBodyRouteEntrys & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
    inline DescribeRouteEntryListResponseBody& setRouteEntrys(DescribeRouteEntryListResponseBodyRouteEntrys && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the routes.
    std::shared_ptr<DescribeRouteEntryListResponseBodyRouteEntrys> routeEntrys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
