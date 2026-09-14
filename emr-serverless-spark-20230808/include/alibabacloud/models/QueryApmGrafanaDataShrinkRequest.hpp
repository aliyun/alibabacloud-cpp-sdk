// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class QueryApmGrafanaDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApmGrafanaDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentName, componentName_);
      DARABONBA_PTR_TO_JSON(dashboardId, dashboardId_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryParams, queryParamsShrink_);
      DARABONBA_PTR_TO_JSON(queryUrl, queryUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(step, step_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApmGrafanaDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentName, componentName_);
      DARABONBA_PTR_FROM_JSON(dashboardId, dashboardId_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryParams, queryParamsShrink_);
      DARABONBA_PTR_FROM_JSON(queryUrl, queryUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(step, step_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    QueryApmGrafanaDataShrinkRequest() = default ;
    QueryApmGrafanaDataShrinkRequest(const QueryApmGrafanaDataShrinkRequest &) = default ;
    QueryApmGrafanaDataShrinkRequest(QueryApmGrafanaDataShrinkRequest &&) = default ;
    QueryApmGrafanaDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApmGrafanaDataShrinkRequest() = default ;
    QueryApmGrafanaDataShrinkRequest& operator=(const QueryApmGrafanaDataShrinkRequest &) = default ;
    QueryApmGrafanaDataShrinkRequest& operator=(QueryApmGrafanaDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentName_ == nullptr
        && this->dashboardId_ == nullptr && this->end_ == nullptr && this->provider_ == nullptr && this->query_ == nullptr && this->queryParamsShrink_ == nullptr
        && this->queryUrl_ == nullptr && this->regionId_ == nullptr && this->start_ == nullptr && this->step_ == nullptr && this->time_ == nullptr
        && this->variables_ == nullptr && this->workspaceId_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // dashboardId Field Functions 
    bool hasDashboardId() const { return this->dashboardId_ != nullptr;};
    void deleteDashboardId() { this->dashboardId_ = nullptr;};
    inline string getDashboardId() const { DARABONBA_PTR_GET_DEFAULT(dashboardId_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setDashboardId(string dashboardId) { DARABONBA_PTR_SET_VALUE(dashboardId_, dashboardId) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryParamsShrink Field Functions 
    bool hasQueryParamsShrink() const { return this->queryParamsShrink_ != nullptr;};
    void deleteQueryParamsShrink() { this->queryParamsShrink_ = nullptr;};
    inline string getQueryParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryParamsShrink_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setQueryParamsShrink(string queryParamsShrink) { DARABONBA_PTR_SET_VALUE(queryParamsShrink_, queryParamsShrink) };


    // queryUrl Field Functions 
    bool hasQueryUrl() const { return this->queryUrl_ != nullptr;};
    void deleteQueryUrl() { this->queryUrl_ = nullptr;};
    inline string getQueryUrl() const { DARABONBA_PTR_GET_DEFAULT(queryUrl_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setQueryUrl(string queryUrl) { DARABONBA_PTR_SET_VALUE(queryUrl_, queryUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryApmGrafanaDataShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the monitoring dashboard.
    shared_ptr<string> componentName_ {};
    // The dashboard ID.
    shared_ptr<string> dashboardId_ {};
    // The end time of the query. The value is a UNIX timestamp in seconds.
    shared_ptr<string> end_ {};
    // The datasource provider.
    shared_ptr<string> provider_ {};
    // The PromQL query expression.
    shared_ptr<string> query_ {};
    // The panel-level query parameters.
    shared_ptr<string> queryParamsShrink_ {};
    // The Grafana datasource proxy path.
    // 
    // This parameter is required.
    shared_ptr<string> queryUrl_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds.
    shared_ptr<string> start_ {};
    // The query step, in seconds.
    shared_ptr<string> step_ {};
    // The time point for an instant query. The value is a UNIX timestamp in seconds.
    shared_ptr<string> time_ {};
    // The dashboard variables, as a JSON string.
    shared_ptr<string> variables_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
