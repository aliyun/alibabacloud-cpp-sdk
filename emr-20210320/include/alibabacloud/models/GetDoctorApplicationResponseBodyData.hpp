// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataAnalysis.hpp>
#include <vector>
#include <alibabacloud/models/GetDoctorApplicationResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Analysis, analysis_);
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
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
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
    GetDoctorApplicationResponseBodyData() = default ;
    GetDoctorApplicationResponseBodyData(const GetDoctorApplicationResponseBodyData &) = default ;
    GetDoctorApplicationResponseBodyData(GetDoctorApplicationResponseBodyData &&) = default ;
    GetDoctorApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBodyData() = default ;
    GetDoctorApplicationResponseBodyData& operator=(const GetDoctorApplicationResponseBodyData &) = default ;
    GetDoctorApplicationResponseBodyData& operator=(GetDoctorApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysis_ == nullptr
        && return this->appName_ == nullptr && return this->endTime_ == nullptr && return this->ids_ == nullptr && return this->metrics_ == nullptr && return this->querySql_ == nullptr
        && return this->queue_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr && return this->user_ == nullptr; };
    // analysis Field Functions 
    bool hasAnalysis() const { return this->analysis_ != nullptr;};
    void deleteAnalysis() { this->analysis_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataAnalysis & analysis() const { DARABONBA_PTR_GET_CONST(analysis_, Models::GetDoctorApplicationResponseBodyDataAnalysis) };
    inline Models::GetDoctorApplicationResponseBodyDataAnalysis analysis() { DARABONBA_PTR_GET(analysis_, Models::GetDoctorApplicationResponseBodyDataAnalysis) };
    inline GetDoctorApplicationResponseBodyData& setAnalysis(const Models::GetDoctorApplicationResponseBodyDataAnalysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
    inline GetDoctorApplicationResponseBodyData& setAnalysis(Models::GetDoctorApplicationResponseBodyDataAnalysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetDoctorApplicationResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDoctorApplicationResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline GetDoctorApplicationResponseBodyData& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline GetDoctorApplicationResponseBodyData& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorApplicationResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorApplicationResponseBodyDataMetrics) };
    inline Models::GetDoctorApplicationResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorApplicationResponseBodyDataMetrics) };
    inline GetDoctorApplicationResponseBodyData& setMetrics(const Models::GetDoctorApplicationResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorApplicationResponseBodyData& setMetrics(Models::GetDoctorApplicationResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // querySql Field Functions 
    bool hasQuerySql() const { return this->querySql_ != nullptr;};
    void deleteQuerySql() { this->querySql_ = nullptr;};
    inline string querySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
    inline GetDoctorApplicationResponseBodyData& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline GetDoctorApplicationResponseBodyData& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetDoctorApplicationResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDoctorApplicationResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetDoctorApplicationResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The job analysis result.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataAnalysis> analysis_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> appName_ = nullptr;
    // The end time of the job. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The job IDs. Multiple job IDs are separated with commas (,).
    std::shared_ptr<vector<string>> ids_ = nullptr;
    // The metric information.
    std::shared_ptr<Models::GetDoctorApplicationResponseBodyDataMetrics> metrics_ = nullptr;
    // The SQL statement of the job. This parameter is left empty for non-SQL jobs.
    std::shared_ptr<string> querySql_ = nullptr;
    // The YARN queue to which the job was submitted.
    std::shared_ptr<string> queue_ = nullptr;
    // The time when the job was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the compute engine.
    std::shared_ptr<string> type_ = nullptr;
    // The username that is used to submit the job.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
