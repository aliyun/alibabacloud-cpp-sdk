// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDashboardsResponseBodyDashboardVos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardVos, dashboardVos_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(GrafanaServiceOpened, grafanaServiceOpened_);
      DARABONBA_PTR_TO_JSON(PrometheusServiceOpened, prometheusServiceOpened_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardVos, dashboardVos_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(GrafanaServiceOpened, grafanaServiceOpened_);
      DARABONBA_PTR_FROM_JSON(PrometheusServiceOpened, prometheusServiceOpened_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDashboardsResponseBody() = default ;
    ListDashboardsResponseBody(const ListDashboardsResponseBody &) = default ;
    ListDashboardsResponseBody(ListDashboardsResponseBody &&) = default ;
    ListDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDashboardsResponseBody() = default ;
    ListDashboardsResponseBody& operator=(const ListDashboardsResponseBody &) = default ;
    ListDashboardsResponseBody& operator=(ListDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboardVos_ != nullptr
        && this->environmentId_ != nullptr && this->grafanaServiceOpened_ != nullptr && this->prometheusServiceOpened_ != nullptr && this->requestId_ != nullptr; };
    // dashboardVos Field Functions 
    bool hasDashboardVos() const { return this->dashboardVos_ != nullptr;};
    void deleteDashboardVos() { this->dashboardVos_ = nullptr;};
    inline const vector<ListDashboardsResponseBodyDashboardVos> & dashboardVos() const { DARABONBA_PTR_GET_CONST(dashboardVos_, vector<ListDashboardsResponseBodyDashboardVos>) };
    inline vector<ListDashboardsResponseBodyDashboardVos> dashboardVos() { DARABONBA_PTR_GET(dashboardVos_, vector<ListDashboardsResponseBodyDashboardVos>) };
    inline ListDashboardsResponseBody& setDashboardVos(const vector<ListDashboardsResponseBodyDashboardVos> & dashboardVos) { DARABONBA_PTR_SET_VALUE(dashboardVos_, dashboardVos) };
    inline ListDashboardsResponseBody& setDashboardVos(vector<ListDashboardsResponseBodyDashboardVos> && dashboardVos) { DARABONBA_PTR_SET_RVALUE(dashboardVos_, dashboardVos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListDashboardsResponseBody& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // grafanaServiceOpened Field Functions 
    bool hasGrafanaServiceOpened() const { return this->grafanaServiceOpened_ != nullptr;};
    void deleteGrafanaServiceOpened() { this->grafanaServiceOpened_ = nullptr;};
    inline string grafanaServiceOpened() const { DARABONBA_PTR_GET_DEFAULT(grafanaServiceOpened_, "") };
    inline ListDashboardsResponseBody& setGrafanaServiceOpened(string grafanaServiceOpened) { DARABONBA_PTR_SET_VALUE(grafanaServiceOpened_, grafanaServiceOpened) };


    // prometheusServiceOpened Field Functions 
    bool hasPrometheusServiceOpened() const { return this->prometheusServiceOpened_ != nullptr;};
    void deletePrometheusServiceOpened() { this->prometheusServiceOpened_ = nullptr;};
    inline string prometheusServiceOpened() const { DARABONBA_PTR_GET_DEFAULT(prometheusServiceOpened_, "") };
    inline ListDashboardsResponseBody& setPrometheusServiceOpened(string prometheusServiceOpened) { DARABONBA_PTR_SET_VALUE(prometheusServiceOpened_, prometheusServiceOpened) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the Grafana dashboard.
    std::shared_ptr<vector<ListDashboardsResponseBodyDashboardVos>> dashboardVos_ = nullptr;
    // The ID of the environment instance.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Indicates whether Managed Service for Grafana is activated.
    std::shared_ptr<string> grafanaServiceOpened_ = nullptr;
    // Whether or not to turn on Prometheus service.
    std::shared_ptr<string> prometheusServiceOpened_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
