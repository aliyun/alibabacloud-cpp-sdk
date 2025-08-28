// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCROUTEENTRYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcRouteEntrySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcRouteEntrySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrySummarys, routeEntrySummarys_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcRouteEntrySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrySummarys, routeEntrySummarys_);
    };
    GetVpcRouteEntrySummaryResponseBody() = default ;
    GetVpcRouteEntrySummaryResponseBody(const GetVpcRouteEntrySummaryResponseBody &) = default ;
    GetVpcRouteEntrySummaryResponseBody(GetVpcRouteEntrySummaryResponseBody &&) = default ;
    GetVpcRouteEntrySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcRouteEntrySummaryResponseBody() = default ;
    GetVpcRouteEntrySummaryResponseBody& operator=(const GetVpcRouteEntrySummaryResponseBody &) = default ;
    GetVpcRouteEntrySummaryResponseBody& operator=(GetVpcRouteEntrySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->routeEntrySummarys_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcRouteEntrySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrySummarys Field Functions 
    bool hasRouteEntrySummarys() const { return this->routeEntrySummarys_ != nullptr;};
    void deleteRouteEntrySummarys() { this->routeEntrySummarys_ = nullptr;};
    inline const vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys> & routeEntrySummarys() const { DARABONBA_PTR_GET_CONST(routeEntrySummarys_, vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys>) };
    inline vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys> routeEntrySummarys() { DARABONBA_PTR_GET(routeEntrySummarys_, vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys>) };
    inline GetVpcRouteEntrySummaryResponseBody& setRouteEntrySummarys(const vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys> & routeEntrySummarys) { DARABONBA_PTR_SET_VALUE(routeEntrySummarys_, routeEntrySummarys) };
    inline GetVpcRouteEntrySummaryResponseBody& setRouteEntrySummarys(vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys> && routeEntrySummarys) { DARABONBA_PTR_SET_RVALUE(routeEntrySummarys_, routeEntrySummarys) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the routes in the route tables.
    std::shared_ptr<vector<GetVpcRouteEntrySummaryResponseBodyRouteEntrySummarys>> routeEntrySummarys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
