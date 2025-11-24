// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAFANADASHBOARDURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAFANADASHBOARDURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGrafanaDashboardUrlResponseBodyDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetGrafanaDashboardUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrafanaDashboardUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrafanaDashboardUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGrafanaDashboardUrlResponseBody() = default ;
    GetGrafanaDashboardUrlResponseBody(const GetGrafanaDashboardUrlResponseBody &) = default ;
    GetGrafanaDashboardUrlResponseBody(GetGrafanaDashboardUrlResponseBody &&) = default ;
    GetGrafanaDashboardUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrafanaDashboardUrlResponseBody() = default ;
    GetGrafanaDashboardUrlResponseBody& operator=(const GetGrafanaDashboardUrlResponseBody &) = default ;
    GetGrafanaDashboardUrlResponseBody& operator=(GetGrafanaDashboardUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboards_ == nullptr
        && return this->requestId_ == nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<GetGrafanaDashboardUrlResponseBodyDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<GetGrafanaDashboardUrlResponseBodyDashboards>) };
    inline vector<GetGrafanaDashboardUrlResponseBodyDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<GetGrafanaDashboardUrlResponseBodyDashboards>) };
    inline GetGrafanaDashboardUrlResponseBody& setDashboards(const vector<GetGrafanaDashboardUrlResponseBodyDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline GetGrafanaDashboardUrlResponseBody& setDashboards(vector<GetGrafanaDashboardUrlResponseBodyDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGrafanaDashboardUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the dashboard.
    std::shared_ptr<vector<GetGrafanaDashboardUrlResponseBodyDashboards>> dashboards_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
