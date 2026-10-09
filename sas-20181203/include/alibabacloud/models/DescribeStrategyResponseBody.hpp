// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
    };
    DescribeStrategyResponseBody() = default ;
    DescribeStrategyResponseBody(const DescribeStrategyResponseBody &) = default ;
    DescribeStrategyResponseBody(DescribeStrategyResponseBody &&) = default ;
    DescribeStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyResponseBody() = default ;
    DescribeStrategyResponseBody& operator=(const DescribeStrategyResponseBody &) = default ;
    DescribeStrategyResponseBody& operator=(DescribeStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategies& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Strategies& obj) { 
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
      Strategies() = default ;
      Strategies(const Strategies &) = default ;
      Strategies(Strategies &&) = default ;
      Strategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategies() = default ;
      Strategies& operator=(const Strategies &) = default ;
      Strategies& operator=(Strategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigTargets& obj) { 
          DARABONBA_PTR_TO_JSON(Flag, flag_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(Flag, flag_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        ConfigTargets() = default ;
        ConfigTargets(const ConfigTargets &) = default ;
        ConfigTargets(ConfigTargets &&) = default ;
        ConfigTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigTargets() = default ;
        ConfigTargets& operator=(const ConfigTargets &) = default ;
        ConfigTargets& operator=(ConfigTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flag_ == nullptr
        && this->target_ == nullptr && this->targetType_ == nullptr; };
        // flag Field Functions 
        bool hasFlag() const { return this->flag_ != nullptr;};
        void deleteFlag() { this->flag_ = nullptr;};
        inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
        inline ConfigTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
        inline ConfigTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline ConfigTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // Specifies whether the policy applies to the asset group. Valid values:
        // 
        // - **add**: the policy applies to the asset group.
        // - **del**: the policy does not apply to the asset group.
        shared_ptr<string> flag_ {};
        // The group ID or UUID of the asset to which the policy applies.
        shared_ptr<string> target_ {};
        // The method used to add the assets to which the policy applies. Valid values:
        // 
        // - **groupId**: assets are added by group.
        // - **uuid**: assets are added individually.
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->configTargets_ == nullptr
        && this->customType_ == nullptr && this->cycleDays_ == nullptr && this->cycleStartTime_ == nullptr && this->ecsCount_ == nullptr && this->endTime_ == nullptr
        && this->execStatus_ == nullptr && this->executionType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->passRate_ == nullptr
        && this->percent_ == nullptr && this->processRate_ == nullptr && this->riskCount_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr
        && this->userModifyTime_ == nullptr; };
      // configTargets Field Functions 
      bool hasConfigTargets() const { return this->configTargets_ != nullptr;};
      void deleteConfigTargets() { this->configTargets_ = nullptr;};
      inline const vector<Strategies::ConfigTargets> & getConfigTargets() const { DARABONBA_PTR_GET_CONST(configTargets_, vector<Strategies::ConfigTargets>) };
      inline vector<Strategies::ConfigTargets> getConfigTargets() { DARABONBA_PTR_GET(configTargets_, vector<Strategies::ConfigTargets>) };
      inline Strategies& setConfigTargets(const vector<Strategies::ConfigTargets> & configTargets) { DARABONBA_PTR_SET_VALUE(configTargets_, configTargets) };
      inline Strategies& setConfigTargets(vector<Strategies::ConfigTargets> && configTargets) { DARABONBA_PTR_SET_RVALUE(configTargets_, configTargets) };


      // customType Field Functions 
      bool hasCustomType() const { return this->customType_ != nullptr;};
      void deleteCustomType() { this->customType_ = nullptr;};
      inline string getCustomType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
      inline Strategies& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


      // cycleDays Field Functions 
      bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
      void deleteCycleDays() { this->cycleDays_ = nullptr;};
      inline int32_t getCycleDays() const { DARABONBA_PTR_GET_DEFAULT(cycleDays_, 0) };
      inline Strategies& setCycleDays(int32_t cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };


      // cycleStartTime Field Functions 
      bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
      void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
      inline int32_t getCycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0) };
      inline Strategies& setCycleStartTime(int32_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


      // ecsCount Field Functions 
      bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
      void deleteEcsCount() { this->ecsCount_ = nullptr;};
      inline int32_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
      inline Strategies& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Strategies& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // execStatus Field Functions 
      bool hasExecStatus() const { return this->execStatus_ != nullptr;};
      void deleteExecStatus() { this->execStatus_ = nullptr;};
      inline int32_t getExecStatus() const { DARABONBA_PTR_GET_DEFAULT(execStatus_, 0) };
      inline Strategies& setExecStatus(int32_t execStatus) { DARABONBA_PTR_SET_VALUE(execStatus_, execStatus) };


      // executionType Field Functions 
      bool hasExecutionType() const { return this->executionType_ != nullptr;};
      void deleteExecutionType() { this->executionType_ = nullptr;};
      inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
      inline Strategies& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Strategies& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Strategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // passRate Field Functions 
      bool hasPassRate() const { return this->passRate_ != nullptr;};
      void deletePassRate() { this->passRate_ = nullptr;};
      inline int32_t getPassRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, 0) };
      inline Strategies& setPassRate(int32_t passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline string getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
      inline Strategies& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // processRate Field Functions 
      bool hasProcessRate() const { return this->processRate_ != nullptr;};
      void deleteProcessRate() { this->processRate_ = nullptr;};
      inline int32_t getProcessRate() const { DARABONBA_PTR_GET_DEFAULT(processRate_, 0) };
      inline Strategies& setProcessRate(int32_t processRate) { DARABONBA_PTR_SET_VALUE(processRate_, processRate) };


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int32_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0) };
      inline Strategies& setRiskCount(int32_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Strategies& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Strategies& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userModifyTime Field Functions 
      bool hasUserModifyTime() const { return this->userModifyTime_ != nullptr;};
      void deleteUserModifyTime() { this->userModifyTime_ = nullptr;};
      inline int64_t getUserModifyTime() const { DARABONBA_PTR_GET_DEFAULT(userModifyTime_, 0L) };
      inline Strategies& setUserModifyTime(int64_t userModifyTime) { DARABONBA_PTR_SET_VALUE(userModifyTime_, userModifyTime) };


    protected:
      // The collection of information about the assets to which the policy applies.
      shared_ptr<vector<Strategies::ConfigTargets>> configTargets_ {};
      // The type of the policy. Valid values:
      // 
      // - **common**: standard policy
      // - **custom**: custom policy
      shared_ptr<string> customType_ {};
      // The interval of the baseline check. Valid values:
      // 
      // - **1**: every 1 day
      // - **3**: every 3 days
      // - **7**: every 7 days
      // - **30**: every 30 days
      shared_ptr<int32_t> cycleDays_ {};
      // The start time of the baseline check. Valid values:
      // 
      // - **0**: the baseline check starts between 00:00 and 06:00.
      // - **6**: the baseline check starts between 06:00 and 12:00.
      // - **12**: the baseline check starts between 12:00 and 18:00.
      // - **18**: the baseline check starts between 18:00 and 24:00.
      shared_ptr<int32_t> cycleStartTime_ {};
      // The number of assets to which the policy applies.
      shared_ptr<int32_t> ecsCount_ {};
      // The end time of the baseline check policy execution. The value is in the HH:mm:ss format.
      shared_ptr<string> endTime_ {};
      // The execution status of the baseline check policy. Valid values:
      // 
      // - **1**: not executed
      // - **2**: executing
      shared_ptr<int32_t> execStatus_ {};
      // The trigger method of the baseline scan. Valid values:
      // 
      // - **Schedule**: triggered by a scheduled task.
      // - **Manual**: triggered manually.
      shared_ptr<string> executionType_ {};
      // The ID of the policy.
      shared_ptr<int32_t> id_ {};
      // The name of the policy.
      shared_ptr<string> name_ {};
      // The proportion of baselines with risks detected during the execution of the baseline check policy.
      shared_ptr<int32_t> passRate_ {};
      // The progress of the baseline check. This parameter is returned only for baselines where ExecStatus is set to 2.
      shared_ptr<string> percent_ {};
      // The number of assets on which the baseline check is complete.
      shared_ptr<int32_t> processRate_ {};
      // The number of baseline check items included in the policy.
      shared_ptr<int32_t> riskCount_ {};
      // The start time of the baseline check policy execution. The value is in the HH:mm:ss format.
      shared_ptr<string> startTime_ {};
      // The source type of the policy. Valid values:
      // 
      // - **1**: a built-in policy, which is the default baseline check policy that Security Center executes.
      // - **2**: a user-added policy, including standard policies and custom policies created by users.
      shared_ptr<int32_t> type_ {};
      // The last modification time of the baseline check policy. The value is in the YYYY-MM-DD HH:mm:ss format.
      shared_ptr<int64_t> userModifyTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const vector<DescribeStrategyResponseBody::Strategies> & getStrategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<DescribeStrategyResponseBody::Strategies>) };
    inline vector<DescribeStrategyResponseBody::Strategies> getStrategies() { DARABONBA_PTR_GET(strategies_, vector<DescribeStrategyResponseBody::Strategies>) };
    inline DescribeStrategyResponseBody& setStrategies(const vector<DescribeStrategyResponseBody::Strategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeStrategyResponseBody& setStrategies(vector<DescribeStrategyResponseBody::Strategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


  protected:
    // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request. You can use the ID to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // The collection of detailed information about the policies.
    shared_ptr<vector<DescribeStrategyResponseBody::Strategies>> strategies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
