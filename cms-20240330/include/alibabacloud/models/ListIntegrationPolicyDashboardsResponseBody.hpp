// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyDashboardsResponseBodyDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListIntegrationPolicyDashboardsResponseBody() = default ;
    ListIntegrationPolicyDashboardsResponseBody(const ListIntegrationPolicyDashboardsResponseBody &) = default ;
    ListIntegrationPolicyDashboardsResponseBody(ListIntegrationPolicyDashboardsResponseBody &&) = default ;
    ListIntegrationPolicyDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyDashboardsResponseBody() = default ;
    ListIntegrationPolicyDashboardsResponseBody& operator=(const ListIntegrationPolicyDashboardsResponseBody &) = default ;
    ListIntegrationPolicyDashboardsResponseBody& operator=(ListIntegrationPolicyDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboards_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<ListIntegrationPolicyDashboardsResponseBodyDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<ListIntegrationPolicyDashboardsResponseBodyDashboards>) };
    inline vector<ListIntegrationPolicyDashboardsResponseBodyDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<ListIntegrationPolicyDashboardsResponseBodyDashboards>) };
    inline ListIntegrationPolicyDashboardsResponseBody& setDashboards(const vector<ListIntegrationPolicyDashboardsResponseBodyDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline ListIntegrationPolicyDashboardsResponseBody& setDashboards(vector<ListIntegrationPolicyDashboardsResponseBodyDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListIntegrationPolicyDashboardsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListIntegrationPolicyDashboardsResponseBodyDashboards>> dashboards_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
