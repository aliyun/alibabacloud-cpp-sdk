// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODYSTEPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKRESPONSEBODYSTEPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTaskResponseBodyStepsSubTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeTaskResponseBodySteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskResponseBodySteps& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(StageTag, stageTag_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(StepState, stepState_);
      DARABONBA_PTR_TO_JSON(StepType, stepType_);
      DARABONBA_PTR_TO_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskResponseBodySteps& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(StageTag, stageTag_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(StepState, stepState_);
      DARABONBA_PTR_FROM_JSON(StepType, stepType_);
      DARABONBA_PTR_FROM_JSON(SubTasks, subTasks_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeTaskResponseBodySteps() = default ;
    DescribeTaskResponseBodySteps(const DescribeTaskResponseBodySteps &) = default ;
    DescribeTaskResponseBodySteps(DescribeTaskResponseBodySteps &&) = default ;
    DescribeTaskResponseBodySteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskResponseBodySteps() = default ;
    DescribeTaskResponseBodySteps& operator=(const DescribeTaskResponseBodySteps &) = default ;
    DescribeTaskResponseBodySteps& operator=(DescribeTaskResponseBodySteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->stageTag_ != nullptr && this->startTime_ != nullptr && this->stepName_ != nullptr && this->stepState_ != nullptr && this->stepType_ != nullptr
        && this->subTasks_ != nullptr && this->updateTime_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTaskResponseBodySteps& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // stageTag Field Functions 
    bool hasStageTag() const { return this->stageTag_ != nullptr;};
    void deleteStageTag() { this->stageTag_ = nullptr;};
    inline string stageTag() const { DARABONBA_PTR_GET_DEFAULT(stageTag_, "") };
    inline DescribeTaskResponseBodySteps& setStageTag(string stageTag) { DARABONBA_PTR_SET_VALUE(stageTag_, stageTag) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeTaskResponseBodySteps& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline DescribeTaskResponseBodySteps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepState Field Functions 
    bool hasStepState() const { return this->stepState_ != nullptr;};
    void deleteStepState() { this->stepState_ = nullptr;};
    inline string stepState() const { DARABONBA_PTR_GET_DEFAULT(stepState_, "") };
    inline DescribeTaskResponseBodySteps& setStepState(string stepState) { DARABONBA_PTR_SET_VALUE(stepState_, stepState) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline DescribeTaskResponseBodySteps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


    // subTasks Field Functions 
    bool hasSubTasks() const { return this->subTasks_ != nullptr;};
    void deleteSubTasks() { this->subTasks_ = nullptr;};
    inline const vector<Models::DescribeTaskResponseBodyStepsSubTasks> & subTasks() const { DARABONBA_PTR_GET_CONST(subTasks_, vector<Models::DescribeTaskResponseBodyStepsSubTasks>) };
    inline vector<Models::DescribeTaskResponseBodyStepsSubTasks> subTasks() { DARABONBA_PTR_GET(subTasks_, vector<Models::DescribeTaskResponseBodyStepsSubTasks>) };
    inline DescribeTaskResponseBodySteps& setSubTasks(const vector<Models::DescribeTaskResponseBodyStepsSubTasks> & subTasks) { DARABONBA_PTR_SET_VALUE(subTasks_, subTasks) };
    inline DescribeTaskResponseBodySteps& setSubTasks(vector<Models::DescribeTaskResponseBodyStepsSubTasks> && subTasks) { DARABONBA_PTR_SET_RVALUE(subTasks_, subTasks) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeTaskResponseBodySteps& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The error message of the step.
    std::shared_ptr<string> message_ = nullptr;
    // The stage marker.
    // 
    // Valid values:
    // 
    // *   机器释放: Machine release.
    // *   节点并发初始化: Node concurrent initialization.
    // *   节点释放: Node release.
    // *   机器替换: Machine replacement.
    // *   节点缩容: Node scale-in.
    // *   提前续费: Early renewal.
    // *   物理机清理: Physical machine cleanup.
    // *   节点清理: Node cleanup.
    // *   创建K8s集群: Create Kubernetes cluster.
    // *   网络初始化: Network initialization.
    // *   节点重启: Node restart.
    // *   节点退订: Node unsubscribe.
    // *   集群扩容: Cluster scale-out.
    // *   异常机器释放: Abnormal machine release.
    std::shared_ptr<string> stageTag_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the step.
    std::shared_ptr<string> stepName_ = nullptr;
    // The step status.
    // 
    // Valid values:
    // 
    // *   execution_success
    // *   execution_failed
    std::shared_ptr<string> stepState_ = nullptr;
    // The type of the step.
    // 
    // Valid values:
    // 
    // *   normal: A normal step has only one successor step.
    // *   dispersive: A dispersive step has multiple successor steps.
    std::shared_ptr<string> stepType_ = nullptr;
    // The sub tasks.
    std::shared_ptr<vector<Models::DescribeTaskResponseBodyStepsSubTasks>> subTasks_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
