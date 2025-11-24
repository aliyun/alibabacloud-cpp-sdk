// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERGRAFANARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERGRAFANARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterGrafanaResponseBodyDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClusterGrafanaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterGrafanaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterGrafanaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterGrafanaResponseBody() = default ;
    DescribeClusterGrafanaResponseBody(const DescribeClusterGrafanaResponseBody &) = default ;
    DescribeClusterGrafanaResponseBody(DescribeClusterGrafanaResponseBody &&) = default ;
    DescribeClusterGrafanaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterGrafanaResponseBody() = default ;
    DescribeClusterGrafanaResponseBody& operator=(const DescribeClusterGrafanaResponseBody &) = default ;
    DescribeClusterGrafanaResponseBody& operator=(DescribeClusterGrafanaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboards_ == nullptr
        && return this->requestId_ == nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<DescribeClusterGrafanaResponseBodyDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<DescribeClusterGrafanaResponseBodyDashboards>) };
    inline vector<DescribeClusterGrafanaResponseBodyDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<DescribeClusterGrafanaResponseBodyDashboards>) };
    inline DescribeClusterGrafanaResponseBody& setDashboards(const vector<DescribeClusterGrafanaResponseBodyDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline DescribeClusterGrafanaResponseBody& setDashboards(vector<DescribeClusterGrafanaResponseBodyDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterGrafanaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about Grafana dashboards.
    std::shared_ptr<vector<DescribeClusterGrafanaResponseBodyDashboards>> dashboards_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
