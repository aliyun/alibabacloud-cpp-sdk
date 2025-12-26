// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNCHILDRUNS_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNCHILDRUNS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlowRunChildRunsFlowSource.hpp>
#include <alibabacloud/models/FlowRunChildRunsJobInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunChildRuns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunChildRuns& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_TO_JSON(FlowSource, flowSource_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(RunName, runName_);
      DARABONBA_PTR_TO_JSON(RunResult, runResult_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunChildRuns& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FlowRunId, flowRunId_);
      DARABONBA_PTR_FROM_JSON(FlowSource, flowSource_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(JobInfo, jobInfo_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(RunName, runName_);
      DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
    };
    FlowRunChildRuns() = default ;
    FlowRunChildRuns(const FlowRunChildRuns &) = default ;
    FlowRunChildRuns(FlowRunChildRuns &&) = default ;
    FlowRunChildRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunChildRuns() = default ;
    FlowRunChildRuns& operator=(const FlowRunChildRuns &) = default ;
    FlowRunChildRuns& operator=(FlowRunChildRuns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->flowRunId_ == nullptr && return this->flowSource_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtModifiedTime_ == nullptr
        && return this->gmtStartTime_ == nullptr && return this->jobInfo_ == nullptr && return this->runMode_ == nullptr && return this->runName_ == nullptr && return this->runResult_ == nullptr
        && return this->runStatus_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline FlowRunChildRuns& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // flowRunId Field Functions 
    bool hasFlowRunId() const { return this->flowRunId_ != nullptr;};
    void deleteFlowRunId() { this->flowRunId_ = nullptr;};
    inline string flowRunId() const { DARABONBA_PTR_GET_DEFAULT(flowRunId_, "") };
    inline FlowRunChildRuns& setFlowRunId(string flowRunId) { DARABONBA_PTR_SET_VALUE(flowRunId_, flowRunId) };


    // flowSource Field Functions 
    bool hasFlowSource() const { return this->flowSource_ != nullptr;};
    void deleteFlowSource() { this->flowSource_ = nullptr;};
    inline const Models::FlowRunChildRunsFlowSource & flowSource() const { DARABONBA_PTR_GET_CONST(flowSource_, Models::FlowRunChildRunsFlowSource) };
    inline Models::FlowRunChildRunsFlowSource flowSource() { DARABONBA_PTR_GET(flowSource_, Models::FlowRunChildRunsFlowSource) };
    inline FlowRunChildRuns& setFlowSource(const Models::FlowRunChildRunsFlowSource & flowSource) { DARABONBA_PTR_SET_VALUE(flowSource_, flowSource) };
    inline FlowRunChildRuns& setFlowSource(Models::FlowRunChildRunsFlowSource && flowSource) { DARABONBA_PTR_SET_RVALUE(flowSource_, flowSource) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline FlowRunChildRuns& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline FlowRunChildRuns& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline FlowRunChildRuns& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline FlowRunChildRuns& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // jobInfo Field Functions 
    bool hasJobInfo() const { return this->jobInfo_ != nullptr;};
    void deleteJobInfo() { this->jobInfo_ = nullptr;};
    inline const Models::FlowRunChildRunsJobInfo & jobInfo() const { DARABONBA_PTR_GET_CONST(jobInfo_, Models::FlowRunChildRunsJobInfo) };
    inline Models::FlowRunChildRunsJobInfo jobInfo() { DARABONBA_PTR_GET(jobInfo_, Models::FlowRunChildRunsJobInfo) };
    inline FlowRunChildRuns& setJobInfo(const Models::FlowRunChildRunsJobInfo & jobInfo) { DARABONBA_PTR_SET_VALUE(jobInfo_, jobInfo) };
    inline FlowRunChildRuns& setJobInfo(Models::FlowRunChildRunsJobInfo && jobInfo) { DARABONBA_PTR_SET_RVALUE(jobInfo_, jobInfo) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline FlowRunChildRuns& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // runName Field Functions 
    bool hasRunName() const { return this->runName_ != nullptr;};
    void deleteRunName() { this->runName_ = nullptr;};
    inline string runName() const { DARABONBA_PTR_GET_DEFAULT(runName_, "") };
    inline FlowRunChildRuns& setRunName(string runName) { DARABONBA_PTR_SET_VALUE(runName_, runName) };


    // runResult Field Functions 
    bool hasRunResult() const { return this->runResult_ != nullptr;};
    void deleteRunResult() { this->runResult_ = nullptr;};
    inline string runResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
    inline FlowRunChildRuns& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string runStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline FlowRunChildRuns& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


  protected:
    // 运行时长
    std::shared_ptr<int32_t> duration_ = nullptr;
    // 应用流运行ID
    std::shared_ptr<string> flowRunId_ = nullptr;
    // 应用流来源
    std::shared_ptr<Models::FlowRunChildRunsFlowSource> flowSource_ = nullptr;
    // 创建时间
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // 结束时间
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    // 修改时间
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // 开始时间
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    // 任务信息
    std::shared_ptr<Models::FlowRunChildRunsJobInfo> jobInfo_ = nullptr;
    // 运行模式
    std::shared_ptr<string> runMode_ = nullptr;
    // 运行名称
    std::shared_ptr<string> runName_ = nullptr;
    // 运行结果
    std::shared_ptr<string> runResult_ = nullptr;
    // 运行状态
    std::shared_ptr<string> runStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
