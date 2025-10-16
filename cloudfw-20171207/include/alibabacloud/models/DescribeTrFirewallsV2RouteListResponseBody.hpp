// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2RouteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2RouteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallRouteDetailList, firewallRouteDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2RouteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallRouteDetailList, firewallRouteDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrFirewallsV2RouteListResponseBody() = default ;
    DescribeTrFirewallsV2RouteListResponseBody(const DescribeTrFirewallsV2RouteListResponseBody &) = default ;
    DescribeTrFirewallsV2RouteListResponseBody(DescribeTrFirewallsV2RouteListResponseBody &&) = default ;
    DescribeTrFirewallsV2RouteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2RouteListResponseBody() = default ;
    DescribeTrFirewallsV2RouteListResponseBody& operator=(const DescribeTrFirewallsV2RouteListResponseBody &) = default ;
    DescribeTrFirewallsV2RouteListResponseBody& operator=(DescribeTrFirewallsV2RouteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallRouteDetailList_ == nullptr
        && return this->requestId_ == nullptr; };
    // firewallRouteDetailList Field Functions 
    bool hasFirewallRouteDetailList() const { return this->firewallRouteDetailList_ != nullptr;};
    void deleteFirewallRouteDetailList() { this->firewallRouteDetailList_ = nullptr;};
    inline const vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList> & firewallRouteDetailList() const { DARABONBA_PTR_GET_CONST(firewallRouteDetailList_, vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList>) };
    inline vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList> firewallRouteDetailList() { DARABONBA_PTR_GET(firewallRouteDetailList_, vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList>) };
    inline DescribeTrFirewallsV2RouteListResponseBody& setFirewallRouteDetailList(const vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList> & firewallRouteDetailList) { DARABONBA_PTR_SET_VALUE(firewallRouteDetailList_, firewallRouteDetailList) };
    inline DescribeTrFirewallsV2RouteListResponseBody& setFirewallRouteDetailList(vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList> && firewallRouteDetailList) { DARABONBA_PTR_SET_RVALUE(firewallRouteDetailList_, firewallRouteDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The route tables of Cloud Firewall.
    std::shared_ptr<vector<DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList>> firewallRouteDetailList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
