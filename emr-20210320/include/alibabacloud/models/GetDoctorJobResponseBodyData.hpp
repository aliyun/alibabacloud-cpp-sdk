// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorJobResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(FinalStatus, finalStatus_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(FinalStatus, finalStatus_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(LaunchTime, launchTime_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    GetDoctorJobResponseBodyData() = default ;
    GetDoctorJobResponseBodyData(const GetDoctorJobResponseBodyData &) = default ;
    GetDoctorJobResponseBodyData(GetDoctorJobResponseBodyData &&) = default ;
    GetDoctorJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorJobResponseBodyData() = default ;
    GetDoctorJobResponseBodyData& operator=(const GetDoctorJobResponseBodyData &) = default ;
    GetDoctorJobResponseBodyData& operator=(GetDoctorJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->elapsedTime_ != nullptr && this->finalStatus_ != nullptr && this->finishTime_ != nullptr && this->launchTime_ != nullptr
        && this->metrics_ != nullptr && this->queue_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr && this->type_ != nullptr
        && this->user_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetDoctorJobResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetDoctorJobResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline GetDoctorJobResponseBodyData& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // finalStatus Field Functions 
    bool hasFinalStatus() const { return this->finalStatus_ != nullptr;};
    void deleteFinalStatus() { this->finalStatus_ = nullptr;};
    inline string finalStatus() const { DARABONBA_PTR_GET_DEFAULT(finalStatus_, "") };
    inline GetDoctorJobResponseBodyData& setFinalStatus(string finalStatus) { DARABONBA_PTR_SET_VALUE(finalStatus_, finalStatus) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline GetDoctorJobResponseBodyData& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // launchTime Field Functions 
    bool hasLaunchTime() const { return this->launchTime_ != nullptr;};
    void deleteLaunchTime() { this->launchTime_ = nullptr;};
    inline int64_t launchTime() const { DARABONBA_PTR_GET_DEFAULT(launchTime_, 0L) };
    inline GetDoctorJobResponseBodyData& setLaunchTime(int64_t launchTime) { DARABONBA_PTR_SET_VALUE(launchTime_, launchTime) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorJobResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorJobResponseBodyDataMetrics) };
    inline Models::GetDoctorJobResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorJobResponseBodyDataMetrics) };
    inline GetDoctorJobResponseBodyData& setMetrics(const Models::GetDoctorJobResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorJobResponseBodyData& setMetrics(Models::GetDoctorJobResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline GetDoctorJobResponseBodyData& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetDoctorJobResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetDoctorJobResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDoctorJobResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetDoctorJobResponseBodyData& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of the job that was submitted to YARN.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> appName_ = nullptr;
    // The total running time of the job. Unit: milliseconds.
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    // The final state of the job. Valid values:
    // 
    // *   SUCCEEDED
    // *   FAILED
    // *   KILLED
    // *   ENDED
    // *   UNDEFINED
    std::shared_ptr<string> finalStatus_ = nullptr;
    // The time when the job ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The time when the job was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> launchTime_ = nullptr;
    // The data about metrics.
    std::shared_ptr<Models::GetDoctorJobResponseBodyDataMetrics> metrics_ = nullptr;
    // The YARN queue to which the job was submitted.
    std::shared_ptr<string> queue_ = nullptr;
    // The time when the job was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The running state of the job. Valid values:
    // 
    // *   FINISHED
    // *   FAILED
    // *   KILLED
    std::shared_ptr<string> state_ = nullptr;
    // The type of the compute engine.
    std::shared_ptr<string> type_ = nullptr;
    // The username that was used to submit the job.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
