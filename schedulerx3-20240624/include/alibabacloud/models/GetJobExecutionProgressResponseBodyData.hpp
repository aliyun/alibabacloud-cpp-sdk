// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataRootProgress.hpp>
#include <vector>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataShardingProgress.hpp>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataTaskProgress.hpp>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataTotalProgress.hpp>
#include <alibabacloud/models/GetJobExecutionProgressResponseBodyDataWorkerProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(RootProgress, rootProgress_);
      DARABONBA_PTR_TO_JSON(ShardingProgress, shardingProgress_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_TO_JSON(TotalProgress, totalProgress_);
      DARABONBA_PTR_TO_JSON(WorkerProgress, workerProgress_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(RootProgress, rootProgress_);
      DARABONBA_PTR_FROM_JSON(ShardingProgress, shardingProgress_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
      DARABONBA_PTR_FROM_JSON(TotalProgress, totalProgress_);
      DARABONBA_PTR_FROM_JSON(WorkerProgress, workerProgress_);
    };
    GetJobExecutionProgressResponseBodyData() = default ;
    GetJobExecutionProgressResponseBodyData(const GetJobExecutionProgressResponseBodyData &) = default ;
    GetJobExecutionProgressResponseBodyData(GetJobExecutionProgressResponseBodyData &&) = default ;
    GetJobExecutionProgressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyData() = default ;
    GetJobExecutionProgressResponseBodyData& operator=(const GetJobExecutionProgressResponseBodyData &) = default ;
    GetJobExecutionProgressResponseBodyData& operator=(GetJobExecutionProgressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->jobDescription_ != nullptr && this->rootProgress_ != nullptr && this->shardingProgress_ != nullptr && this->startTime_ != nullptr && this->taskProgress_ != nullptr
        && this->totalProgress_ != nullptr && this->workerProgress_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobExecutionProgressResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline GetJobExecutionProgressResponseBodyData& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // rootProgress Field Functions 
    bool hasRootProgress() const { return this->rootProgress_ != nullptr;};
    void deleteRootProgress() { this->rootProgress_ = nullptr;};
    inline const Models::GetJobExecutionProgressResponseBodyDataRootProgress & rootProgress() const { DARABONBA_PTR_GET_CONST(rootProgress_, Models::GetJobExecutionProgressResponseBodyDataRootProgress) };
    inline Models::GetJobExecutionProgressResponseBodyDataRootProgress rootProgress() { DARABONBA_PTR_GET(rootProgress_, Models::GetJobExecutionProgressResponseBodyDataRootProgress) };
    inline GetJobExecutionProgressResponseBodyData& setRootProgress(const Models::GetJobExecutionProgressResponseBodyDataRootProgress & rootProgress) { DARABONBA_PTR_SET_VALUE(rootProgress_, rootProgress) };
    inline GetJobExecutionProgressResponseBodyData& setRootProgress(Models::GetJobExecutionProgressResponseBodyDataRootProgress && rootProgress) { DARABONBA_PTR_SET_RVALUE(rootProgress_, rootProgress) };


    // shardingProgress Field Functions 
    bool hasShardingProgress() const { return this->shardingProgress_ != nullptr;};
    void deleteShardingProgress() { this->shardingProgress_ = nullptr;};
    inline const vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress> & shardingProgress() const { DARABONBA_PTR_GET_CONST(shardingProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress>) };
    inline vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress> shardingProgress() { DARABONBA_PTR_GET(shardingProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress>) };
    inline GetJobExecutionProgressResponseBodyData& setShardingProgress(const vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress> & shardingProgress) { DARABONBA_PTR_SET_VALUE(shardingProgress_, shardingProgress) };
    inline GetJobExecutionProgressResponseBodyData& setShardingProgress(vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress> && shardingProgress) { DARABONBA_PTR_SET_RVALUE(shardingProgress_, shardingProgress) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobExecutionProgressResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskProgress Field Functions 
    bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
    void deleteTaskProgress() { this->taskProgress_ = nullptr;};
    inline const vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress> & taskProgress() const { DARABONBA_PTR_GET_CONST(taskProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress>) };
    inline vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress> taskProgress() { DARABONBA_PTR_GET(taskProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress>) };
    inline GetJobExecutionProgressResponseBodyData& setTaskProgress(const vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress> & taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };
    inline GetJobExecutionProgressResponseBodyData& setTaskProgress(vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress> && taskProgress) { DARABONBA_PTR_SET_RVALUE(taskProgress_, taskProgress) };


    // totalProgress Field Functions 
    bool hasTotalProgress() const { return this->totalProgress_ != nullptr;};
    void deleteTotalProgress() { this->totalProgress_ = nullptr;};
    inline const Models::GetJobExecutionProgressResponseBodyDataTotalProgress & totalProgress() const { DARABONBA_PTR_GET_CONST(totalProgress_, Models::GetJobExecutionProgressResponseBodyDataTotalProgress) };
    inline Models::GetJobExecutionProgressResponseBodyDataTotalProgress totalProgress() { DARABONBA_PTR_GET(totalProgress_, Models::GetJobExecutionProgressResponseBodyDataTotalProgress) };
    inline GetJobExecutionProgressResponseBodyData& setTotalProgress(const Models::GetJobExecutionProgressResponseBodyDataTotalProgress & totalProgress) { DARABONBA_PTR_SET_VALUE(totalProgress_, totalProgress) };
    inline GetJobExecutionProgressResponseBodyData& setTotalProgress(Models::GetJobExecutionProgressResponseBodyDataTotalProgress && totalProgress) { DARABONBA_PTR_SET_RVALUE(totalProgress_, totalProgress) };


    // workerProgress Field Functions 
    bool hasWorkerProgress() const { return this->workerProgress_ != nullptr;};
    void deleteWorkerProgress() { this->workerProgress_ = nullptr;};
    inline const vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress> & workerProgress() const { DARABONBA_PTR_GET_CONST(workerProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress>) };
    inline vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress> workerProgress() { DARABONBA_PTR_GET(workerProgress_, vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress>) };
    inline GetJobExecutionProgressResponseBodyData& setWorkerProgress(const vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress> & workerProgress) { DARABONBA_PTR_SET_VALUE(workerProgress_, workerProgress) };
    inline GetJobExecutionProgressResponseBodyData& setWorkerProgress(vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress> && workerProgress) { DARABONBA_PTR_SET_RVALUE(workerProgress_, workerProgress) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> jobDescription_ = nullptr;
    std::shared_ptr<Models::GetJobExecutionProgressResponseBodyDataRootProgress> rootProgress_ = nullptr;
    std::shared_ptr<vector<Models::GetJobExecutionProgressResponseBodyDataShardingProgress>> shardingProgress_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<vector<Models::GetJobExecutionProgressResponseBodyDataTaskProgress>> taskProgress_ = nullptr;
    std::shared_ptr<Models::GetJobExecutionProgressResponseBodyDataTotalProgress> totalProgress_ = nullptr;
    std::shared_ptr<vector<Models::GetJobExecutionProgressResponseBodyDataWorkerProgress>> workerProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
