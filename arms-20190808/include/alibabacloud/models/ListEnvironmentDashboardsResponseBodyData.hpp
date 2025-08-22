// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTDASHBOARDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentDashboardsResponseBodyDataDashboards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentDashboardsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentDashboardsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentDashboardsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Dashboards, dashboards_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnvironmentDashboardsResponseBodyData() = default ;
    ListEnvironmentDashboardsResponseBodyData(const ListEnvironmentDashboardsResponseBodyData &) = default ;
    ListEnvironmentDashboardsResponseBodyData(ListEnvironmentDashboardsResponseBodyData &&) = default ;
    ListEnvironmentDashboardsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentDashboardsResponseBodyData() = default ;
    ListEnvironmentDashboardsResponseBodyData& operator=(const ListEnvironmentDashboardsResponseBodyData &) = default ;
    ListEnvironmentDashboardsResponseBodyData& operator=(ListEnvironmentDashboardsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboards_ != nullptr
        && this->total_ != nullptr; };
    // dashboards Field Functions 
    bool hasDashboards() const { return this->dashboards_ != nullptr;};
    void deleteDashboards() { this->dashboards_ = nullptr;};
    inline const vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards> & dashboards() const { DARABONBA_PTR_GET_CONST(dashboards_, vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards>) };
    inline vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards> dashboards() { DARABONBA_PTR_GET(dashboards_, vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards>) };
    inline ListEnvironmentDashboardsResponseBodyData& setDashboards(const vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards> & dashboards) { DARABONBA_PTR_SET_VALUE(dashboards_, dashboards) };
    inline ListEnvironmentDashboardsResponseBodyData& setDashboards(vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards> && dashboards) { DARABONBA_PTR_SET_RVALUE(dashboards_, dashboards) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEnvironmentDashboardsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The dashboards.
    std::shared_ptr<vector<Models::ListEnvironmentDashboardsResponseBodyDataDashboards>> dashboards_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
