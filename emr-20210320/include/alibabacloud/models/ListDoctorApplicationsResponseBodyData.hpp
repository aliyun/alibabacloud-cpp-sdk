// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorApplicationsResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorApplicationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorApplicationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorApplicationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListDoctorApplicationsResponseBodyData() = default ;
    ListDoctorApplicationsResponseBodyData(const ListDoctorApplicationsResponseBodyData &) = default ;
    ListDoctorApplicationsResponseBodyData(ListDoctorApplicationsResponseBodyData &&) = default ;
    ListDoctorApplicationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorApplicationsResponseBodyData() = default ;
    ListDoctorApplicationsResponseBodyData& operator=(const ListDoctorApplicationsResponseBodyData &) = default ;
    ListDoctorApplicationsResponseBodyData& operator=(ListDoctorApplicationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->endTime_ == nullptr && return this->ids_ == nullptr && return this->metrics_ == nullptr
        && return this->querySql_ == nullptr && return this->queue_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr && return this->user_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::ListDoctorApplicationsResponseBodyDataAnalysis) };
    inline Models::ListDoctorApplicationsResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::ListDoctorApplicationsResponseBodyDataAnalysis) };
    inline ListDoctorApplicationsResponseBodyData& setAnalysis(const Models::ListDoctorApplicationsResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline ListDoctorApplicationsResponseBodyData& setAnalysis(Models::ListDoctorApplicationsResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListDoctorApplicationsResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDoctorApplicationsResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDoctorApplicationsResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline ListDoctorApplicationsResponseBodyData& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListDoctorApplicationsResponseBodyData& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorApplicationsResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorApplicationsResponseBodyDataMetrics) };
    inline Models::ListDoctorApplicationsResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorApplicationsResponseBodyDataMetrics) };
    inline ListDoctorApplicationsResponseBodyData& setMetrics(const Models::ListDoctorApplicationsResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorApplicationsResponseBodyData& setMetrics(Models::ListDoctorApplicationsResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string querySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline ListDoctorApplicationsResponseBodyData& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline ListDoctorApplicationsResponseBodyData& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDoctorApplicationsResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDoctorApplicationsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListDoctorApplicationsResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The analysis results of the jobs.
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataAnalysis> analysis_ = nullptr;
    // The job ID in YARN. The value of QueryID or SessionID is returned for a Hive job.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the job ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The job IDs. Multiple job IDs are separated with commas (,).
    std::shared_ptr<vector<string>> ids_ = nullptr;
    // The data about metrics.
    std::shared_ptr<Models::ListDoctorApplicationsResponseBodyDataMetrics> metrics_ = nullptr;
    // The query statement. This parameter is left empty for non-SQL jobs.
    std::shared_ptr<string> querySql_ = nullptr;
    // The YARN queue to which the job was submitted.
    std::shared_ptr<string> queue_ = nullptr;
    // The time when the job was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the compute engine.
    std::shared_ptr<string> type_ = nullptr;
    // The username that was used to submit the job.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
