// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPMGRAFANADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class QueryApmGrafanaDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApmGrafanaDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentName, componentName_);
      DARABONBA_PTR_TO_JSON(dashboardId, dashboardId_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(queryParams, queryParams_);
      DARABONBA_PTR_TO_JSON(queryUrl, queryUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(step, step_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApmGrafanaDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentName, componentName_);
      DARABONBA_PTR_FROM_JSON(dashboardId, dashboardId_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(queryParams, queryParams_);
      DARABONBA_PTR_FROM_JSON(queryUrl, queryUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(step, step_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    QueryApmGrafanaDataRequest() = default ;
    QueryApmGrafanaDataRequest(const QueryApmGrafanaDataRequest &) = default ;
    QueryApmGrafanaDataRequest(QueryApmGrafanaDataRequest &&) = default ;
    QueryApmGrafanaDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApmGrafanaDataRequest() = default ;
    QueryApmGrafanaDataRequest& operator=(const QueryApmGrafanaDataRequest &) = default ;
    QueryApmGrafanaDataRequest& operator=(QueryApmGrafanaDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryParams& obj) { 
        DARABONBA_PTR_TO_JSON(panelId, panelId_);
        DARABONBA_PTR_TO_JSON(refId, refId_);
        DARABONBA_PTR_TO_JSON(variableName, variableName_);
      };
      friend void from_json(const Darabonba::Json& j, QueryParams& obj) { 
        DARABONBA_PTR_FROM_JSON(panelId, panelId_);
        DARABONBA_PTR_FROM_JSON(refId, refId_);
        DARABONBA_PTR_FROM_JSON(variableName, variableName_);
      };
      QueryParams() = default ;
      QueryParams(const QueryParams &) = default ;
      QueryParams(QueryParams &&) = default ;
      QueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryParams() = default ;
      QueryParams& operator=(const QueryParams &) = default ;
      QueryParams& operator=(QueryParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->panelId_ == nullptr
        && this->refId_ == nullptr && this->variableName_ == nullptr; };
      // panelId Field Functions 
      bool hasPanelId() const { return this->panelId_ != nullptr;};
      void deletePanelId() { this->panelId_ = nullptr;};
      inline int64_t getPanelId() const { DARABONBA_PTR_GET_DEFAULT(panelId_, 0L) };
      inline QueryParams& setPanelId(int64_t panelId) { DARABONBA_PTR_SET_VALUE(panelId_, panelId) };


      // refId Field Functions 
      bool hasRefId() const { return this->refId_ != nullptr;};
      void deleteRefId() { this->refId_ = nullptr;};
      inline string getRefId() const { DARABONBA_PTR_GET_DEFAULT(refId_, "") };
      inline QueryParams& setRefId(string refId) { DARABONBA_PTR_SET_VALUE(refId_, refId) };


      // variableName Field Functions 
      bool hasVariableName() const { return this->variableName_ != nullptr;};
      void deleteVariableName() { this->variableName_ = nullptr;};
      inline string getVariableName() const { DARABONBA_PTR_GET_DEFAULT(variableName_, "") };
      inline QueryParams& setVariableName(string variableName) { DARABONBA_PTR_SET_VALUE(variableName_, variableName) };


    protected:
      // The panel ID.
      shared_ptr<int64_t> panelId_ {};
      // The query reference ID in the panel.
      shared_ptr<string> refId_ {};
      // The variable name. Used when querying the dropdown values of dashboard variables.
      shared_ptr<string> variableName_ {};
    };

    virtual bool empty() const override { return this->componentName_ == nullptr
        && this->dashboardId_ == nullptr && this->end_ == nullptr && this->provider_ == nullptr && this->query_ == nullptr && this->queryParams_ == nullptr
        && this->queryUrl_ == nullptr && this->regionId_ == nullptr && this->start_ == nullptr && this->step_ == nullptr && this->time_ == nullptr
        && this->variables_ == nullptr && this->workspaceId_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline QueryApmGrafanaDataRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // dashboardId Field Functions 
    bool hasDashboardId() const { return this->dashboardId_ != nullptr;};
    void deleteDashboardId() { this->dashboardId_ = nullptr;};
    inline string getDashboardId() const { DARABONBA_PTR_GET_DEFAULT(dashboardId_, "") };
    inline QueryApmGrafanaDataRequest& setDashboardId(string dashboardId) { DARABONBA_PTR_SET_VALUE(dashboardId_, dashboardId) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline QueryApmGrafanaDataRequest& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline QueryApmGrafanaDataRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline QueryApmGrafanaDataRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // queryParams Field Functions 
    bool hasQueryParams() const { return this->queryParams_ != nullptr;};
    void deleteQueryParams() { this->queryParams_ = nullptr;};
    inline const QueryApmGrafanaDataRequest::QueryParams & getQueryParams() const { DARABONBA_PTR_GET_CONST(queryParams_, QueryApmGrafanaDataRequest::QueryParams) };
    inline QueryApmGrafanaDataRequest::QueryParams getQueryParams() { DARABONBA_PTR_GET(queryParams_, QueryApmGrafanaDataRequest::QueryParams) };
    inline QueryApmGrafanaDataRequest& setQueryParams(const QueryApmGrafanaDataRequest::QueryParams & queryParams) { DARABONBA_PTR_SET_VALUE(queryParams_, queryParams) };
    inline QueryApmGrafanaDataRequest& setQueryParams(QueryApmGrafanaDataRequest::QueryParams && queryParams) { DARABONBA_PTR_SET_RVALUE(queryParams_, queryParams) };


    // queryUrl Field Functions 
    bool hasQueryUrl() const { return this->queryUrl_ != nullptr;};
    void deleteQueryUrl() { this->queryUrl_ = nullptr;};
    inline string getQueryUrl() const { DARABONBA_PTR_GET_DEFAULT(queryUrl_, "") };
    inline QueryApmGrafanaDataRequest& setQueryUrl(string queryUrl) { DARABONBA_PTR_SET_VALUE(queryUrl_, queryUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryApmGrafanaDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline QueryApmGrafanaDataRequest& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline QueryApmGrafanaDataRequest& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryApmGrafanaDataRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string getVariables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline QueryApmGrafanaDataRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryApmGrafanaDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    shared_ptr<QueryApmGrafanaDataRequest::QueryParams> queryParams_ {};
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
