// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODYSTRATEGIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODYSTRATEGIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyResponseBodyStrategiesConfigTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyResponseBodyStrategies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyResponseBodyStrategies& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigTargets, configTargets_);
      DARABONBA_PTR_TO_JSON(CustomType, customType_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecStatus, execStatus_);
      DARABONBA_PTR_TO_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PassRate, passRate_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(ProcessRate, processRate_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserModifyTime, userModifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyResponseBodyStrategies& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigTargets, configTargets_);
      DARABONBA_PTR_FROM_JSON(CustomType, customType_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecStatus, execStatus_);
      DARABONBA_PTR_FROM_JSON(ExecutionType, executionType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(ProcessRate, processRate_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserModifyTime, userModifyTime_);
    };
    DescribeStrategyResponseBodyStrategies() = default ;
    DescribeStrategyResponseBodyStrategies(const DescribeStrategyResponseBodyStrategies &) = default ;
    DescribeStrategyResponseBodyStrategies(DescribeStrategyResponseBodyStrategies &&) = default ;
    DescribeStrategyResponseBodyStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyResponseBodyStrategies() = default ;
    DescribeStrategyResponseBodyStrategies& operator=(const DescribeStrategyResponseBodyStrategies &) = default ;
    DescribeStrategyResponseBodyStrategies& operator=(DescribeStrategyResponseBodyStrategies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configTargets_ == nullptr
        && return this->customType_ == nullptr && return this->cycleDays_ == nullptr && return this->cycleStartTime_ == nullptr && return this->ecsCount_ == nullptr && return this->endTime_ == nullptr
        && return this->execStatus_ == nullptr && return this->executionType_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->passRate_ == nullptr
        && return this->percent_ == nullptr && return this->processRate_ == nullptr && return this->riskCount_ == nullptr && return this->startTime_ == nullptr && return this->type_ == nullptr
        && return this->userModifyTime_ == nullptr; };
    // configTargets Field Functions 
    bool hasConfigTargets() const { return this->configTargets_ != nullptr;};
    void deleteConfigTargets() { this->configTargets_ = nullptr;};
    inline const vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets> & configTargets() const { DARABONBA_PTR_GET_CONST(configTargets_, vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets>) };
    inline vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets> configTargets() { DARABONBA_PTR_GET(configTargets_, vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets>) };
    inline DescribeStrategyResponseBodyStrategies& setConfigTargets(const vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets> & configTargets) { DARABONBA_PTR_SET_VALUE(configTargets_, configTargets) };
    inline DescribeStrategyResponseBodyStrategies& setConfigTargets(vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets> && configTargets) { DARABONBA_PTR_SET_RVALUE(configTargets_, configTargets) };


    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline string customType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
    inline DescribeStrategyResponseBodyStrategies& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline int32_t cycleDays() const { DARABONBA_PTR_GET_DEFAULT(cycleDays_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setCycleDays(int32_t cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };


    // cycleStartTime Field Functions 
    bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
    void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
    inline int32_t cycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setCycleStartTime(int32_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeStrategyResponseBodyStrategies& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // execStatus Field Functions 
    bool hasExecStatus() const { return this->execStatus_ != nullptr;};
    void deleteExecStatus() { this->execStatus_ = nullptr;};
    inline int32_t execStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline DescribeStrategyResponseBodyStrategies& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStrategyResponseBodyStrategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // passRate Field Functions 
    bool hasPassRate() const { return this->passRate_ != nullptr;};
    void deletePassRate() { this->passRate_ = nullptr;};
    inline int32_t passRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setPassRate(int32_t passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeStrategyResponseBodyStrategies& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // processRate Field Functions 
    bool hasProcessRate() const { return this->processRate_ != nullptr;};
    void deleteProcessRate() { this->processRate_ = nullptr;};
    inline int32_t processRate() const { DARABONBA_PTR_GET_DEFAULT(processRate_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setProcessRate(int32_t processRate) { DARABONBA_PTR_SET_VALUE(processRate_, processRate) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int32_t riskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStrategyResponseBodyStrategies& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeStrategyResponseBodyStrategies& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userModifyTime Field Functions 
    bool hasUserModifyTime() const { return this->userModifyTime_ != nullptr;};
    void deleteUserModifyTime() { this->userModifyTime_ = nullptr;};
    inline int64_t userModifyTime() const { DARABONBA_PTR_GET_DEFAULT(userModifyTime_, 0L) };
    inline DescribeStrategyResponseBodyStrategies& setUserModifyTime(int64_t userModifyTime) { DARABONBA_PTR_SET_VALUE(userModifyTime_, userModifyTime) };


  protected:
    // The details of the assets to which the baseline check policy is applied.
    std::shared_ptr<vector<Models::DescribeStrategyResponseBodyStrategiesConfigTargets>> configTargets_ = nullptr;
    // The type of the baseline check policy. Valid values:
    // 
    // *   **common**
    // *   **custom**
    std::shared_ptr<string> customType_ = nullptr;
    // The cycle of the baseline check. Valid values:
    // 
    // *   **1**: every 2 days
    // *   **3**: every 4 days
    // *   **7**: every 8 days
    // *   30: every 31 days
    std::shared_ptr<int32_t> cycleDays_ = nullptr;
    // The time when the baseline check starts. Valid values:
    // 
    // *   **0**: The baseline check starts within the time range from 00:00 to 06:00.
    // *   **6**: The baseline check starts within the time range from 06:00 to 12:00.
    // *   **12**: The baseline check starts within the time range from 12:00 to 18:00.
    // *   **18**: The baseline check starts within the time range from 18:00 to 24:00.
    std::shared_ptr<int32_t> cycleStartTime_ = nullptr;
    // The number of the assets to which the baseline check policy is applied.
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    // The end time of the baseline check policy.
    std::shared_ptr<string> endTime_ = nullptr;
    // The status of the baseline check policy. Valid values:
    // 
    // *   **1**: not executed
    // *   **2**: executing
    std::shared_ptr<int32_t> execStatus_ = nullptr;
    std::shared_ptr<string> executionType_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the baseline check policy.
    std::shared_ptr<string> name_ = nullptr;
    // The proportion of risky baselines in the baseline check result.
    std::shared_ptr<int32_t> passRate_ = nullptr;
    // The progress of the baseline check by using the baseline. This parameter is returned only if the value of the ExecStatus parameter is 2.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of the assets on which the baseline check is complete.
    std::shared_ptr<int32_t> processRate_ = nullptr;
    // The number of baseline check items in the baseline check policy.
    std::shared_ptr<int32_t> riskCount_ = nullptr;
    // The start time of the baseline check policy.
    std::shared_ptr<string> startTime_ = nullptr;
    // The source type of the baseline check policy. Valid values:
    // 
    // *   **1**: indicates a built-in policy provided and performed by Security Center by default.
    // *   **2**: indicates a user-defined policy. It can be a standard or custom baseline check policy.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The time when the baseline check policy was last modified.
    std::shared_ptr<int64_t> userModifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
