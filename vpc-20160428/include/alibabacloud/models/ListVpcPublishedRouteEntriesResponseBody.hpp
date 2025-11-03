// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcPublishedRouteEntriesResponseBodyRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcPublishedRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
    };
    ListVpcPublishedRouteEntriesResponseBody() = default ;
    ListVpcPublishedRouteEntriesResponseBody(const ListVpcPublishedRouteEntriesResponseBody &) = default ;
    ListVpcPublishedRouteEntriesResponseBody(ListVpcPublishedRouteEntriesResponseBody &&) = default ;
    ListVpcPublishedRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPublishedRouteEntriesResponseBody() = default ;
    ListVpcPublishedRouteEntriesResponseBody& operator=(const ListVpcPublishedRouteEntriesResponseBody &) = default ;
    ListVpcPublishedRouteEntriesResponseBody& operator=(ListVpcPublishedRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->routeEntries_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPublishedRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcPublishedRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries> & routeEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries>) };
    inline vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries> routeEntries() { DARABONBA_PTR_GET(routeEntries_, vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries>) };
    inline ListVpcPublishedRouteEntriesResponseBody& setRouteEntries(const vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline ListVpcPublishedRouteEntriesResponseBody& setRouteEntries(vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


  protected:
    // Indicates whether there is a token for the next query. Values:
    // 
    // - If **NextToken** is empty, it means there is no next query.
    // - If **NextToken** has a return value, this value indicates the token for the start of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of route entry publishing status information.
    std::shared_ptr<vector<ListVpcPublishedRouteEntriesResponseBodyRouteEntries>> routeEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
