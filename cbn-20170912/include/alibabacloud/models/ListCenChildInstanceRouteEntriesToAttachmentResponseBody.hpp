// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenChildInstanceRouteEntriesToAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenChildInstanceRouteEntriesToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntry, routeEntry_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenChildInstanceRouteEntriesToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntry, routeEntry_);
    };
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(const ListCenChildInstanceRouteEntriesToAttachmentResponseBody &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(ListCenChildInstanceRouteEntriesToAttachmentResponseBody &&) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenChildInstanceRouteEntriesToAttachmentResponseBody() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody& operator=(const ListCenChildInstanceRouteEntriesToAttachmentResponseBody &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody& operator=(ListCenChildInstanceRouteEntriesToAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->routeEntry_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntry Field Functions 
    bool hasRouteEntry() const { return this->routeEntry_ != nullptr;};
    void deleteRouteEntry() { this->routeEntry_ = nullptr;};
    inline const vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry> & routeEntry() const { DARABONBA_PTR_GET_CONST(routeEntry_, vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry>) };
    inline vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry> routeEntry() { DARABONBA_PTR_GET(routeEntry_, vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry>) };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRouteEntry(const vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry> & routeEntry) { DARABONBA_PTR_SET_VALUE(routeEntry_, routeEntry) };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRouteEntry(vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry> && routeEntry) { DARABONBA_PTR_SET_RVALUE(routeEntry_, routeEntry) };


  protected:
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed information about the route.
    std::shared_ptr<vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBodyRouteEntry>> routeEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
