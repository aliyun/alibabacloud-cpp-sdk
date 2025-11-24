// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERACCESSLOGDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERACCESSLOGDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterAccessLogDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterAccessLogDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterAccessLogDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGuestClusterAccessLogDashboardsResponseBody() = default ;
    DescribeGuestClusterAccessLogDashboardsResponseBody(const DescribeGuestClusterAccessLogDashboardsResponseBody &) = default ;
    DescribeGuestClusterAccessLogDashboardsResponseBody(DescribeGuestClusterAccessLogDashboardsResponseBody &&) = default ;
    DescribeGuestClusterAccessLogDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterAccessLogDashboardsResponseBody() = default ;
    DescribeGuestClusterAccessLogDashboardsResponseBody& operator=(const DescribeGuestClusterAccessLogDashboardsResponseBody &) = default ;
    DescribeGuestClusterAccessLogDashboardsResponseBody& operator=(DescribeGuestClusterAccessLogDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboards_ == nullptr
        && return this->k8sClusterId_ == nullptr && return this->requestId_ == nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>) };
    inline vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>) };
    inline DescribeGuestClusterAccessLogDashboardsResponseBody& setDashboards(const vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline DescribeGuestClusterAccessLogDashboardsResponseBody& setDashboards(vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeGuestClusterAccessLogDashboardsResponseBody& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGuestClusterAccessLogDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access log dashboards of the cluster on the data plane.
    std::shared_ptr<vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>> dashboards_ = nullptr;
    // The ID of the cluster on the data plane.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
