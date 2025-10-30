// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSDASHBOARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusDashboardsResponseBodyPrometheusDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusDashboardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusDashboardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusDashboards, prometheusDashboards_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusDashboardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusDashboards, prometheusDashboards_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListPrometheusDashboardsResponseBody() = default ;
    ListPrometheusDashboardsResponseBody(const ListPrometheusDashboardsResponseBody &) = default ;
    ListPrometheusDashboardsResponseBody(ListPrometheusDashboardsResponseBody &&) = default ;
    ListPrometheusDashboardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusDashboardsResponseBody() = default ;
    ListPrometheusDashboardsResponseBody& operator=(const ListPrometheusDashboardsResponseBody &) = default ;
    ListPrometheusDashboardsResponseBody& operator=(ListPrometheusDashboardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusDashboards_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // prometheusDashboards Field Functions 
    bool hasPrometheusDashboards() const { return this->prometheusDashboards_ != nullptr;};
    void deletePrometheusDashboards() { this->prometheusDashboards_ = nullptr;};
    inline const vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards> & prometheusDashboards() const { DARABONBA_PTR_GET_CONST(prometheusDashboards_, vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards>) };
    inline vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards> prometheusDashboards() { DARABONBA_PTR_GET(prometheusDashboards_, vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards>) };
    inline ListPrometheusDashboardsResponseBody& setPrometheusDashboards(const vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards> & prometheusDashboards) { DARABONBA_PTR_SET_VALUE(prometheusDashboards_, prometheusDashboards) };
    inline ListPrometheusDashboardsResponseBody& setPrometheusDashboards(vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards> && prometheusDashboards) { DARABONBA_PTR_SET_RVALUE(prometheusDashboards_, prometheusDashboards) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusDashboardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrometheusDashboardsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of Prometheus instance dashboards.
    std::shared_ptr<vector<ListPrometheusDashboardsResponseBodyPrometheusDashboards>> prometheusDashboards_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of instances
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
