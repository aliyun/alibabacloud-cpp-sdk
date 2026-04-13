// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGRULE_HPP_
#define ALIBABACLOUD_MODELS_SCALINGRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ScalingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingRule& obj) { 
      DARABONBA_PTR_TO_JSON(adjustInfos, adjustInfos_);
      DARABONBA_PTR_TO_JSON(cronStr, cronStr_);
      DARABONBA_PTR_TO_JSON(disabled, disabled_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(scalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(adjustInfos, adjustInfos_);
      DARABONBA_PTR_FROM_JSON(cronStr, cronStr_);
      DARABONBA_PTR_FROM_JSON(disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(scalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    ScalingRule() = default ;
    ScalingRule(const ScalingRule &) = default ;
    ScalingRule(ScalingRule &&) = default ;
    ScalingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingRule() = default ;
    ScalingRule& operator=(const ScalingRule &) = default ;
    ScalingRule& operator=(ScalingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdjustInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdjustInfos& obj) { 
        DARABONBA_PTR_TO_JSON(componentType, componentType_);
        DARABONBA_PTR_TO_JSON(targetValue, targetValue_);
      };
      friend void from_json(const Darabonba::Json& j, AdjustInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(componentType, componentType_);
        DARABONBA_PTR_FROM_JSON(targetValue, targetValue_);
      };
      AdjustInfos() = default ;
      AdjustInfos(const AdjustInfos &) = default ;
      AdjustInfos(AdjustInfos &&) = default ;
      AdjustInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdjustInfos() = default ;
      AdjustInfos& operator=(const AdjustInfos &) = default ;
      AdjustInfos& operator=(AdjustInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentType_ == nullptr
        && this->targetValue_ == nullptr; };
      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline AdjustInfos& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // targetValue Field Functions 
      bool hasTargetValue() const { return this->targetValue_ != nullptr;};
      void deleteTargetValue() { this->targetValue_ = nullptr;};
      inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
      inline AdjustInfos& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    protected:
      shared_ptr<string> componentType_ {};
      shared_ptr<string> targetValue_ {};
    };

    virtual bool empty() const override { return this->adjustInfos_ == nullptr
        && this->cronStr_ == nullptr && this->disabled_ == nullptr && this->endTime_ == nullptr && this->ruleId_ == nullptr && this->scalingRuleName_ == nullptr
        && this->startTime_ == nullptr && this->timeZone_ == nullptr; };
    // adjustInfos Field Functions 
    bool hasAdjustInfos() const { return this->adjustInfos_ != nullptr;};
    void deleteAdjustInfos() { this->adjustInfos_ = nullptr;};
    inline const vector<ScalingRule::AdjustInfos> & getAdjustInfos() const { DARABONBA_PTR_GET_CONST(adjustInfos_, vector<ScalingRule::AdjustInfos>) };
    inline vector<ScalingRule::AdjustInfos> getAdjustInfos() { DARABONBA_PTR_GET(adjustInfos_, vector<ScalingRule::AdjustInfos>) };
    inline ScalingRule& setAdjustInfos(const vector<ScalingRule::AdjustInfos> & adjustInfos) { DARABONBA_PTR_SET_VALUE(adjustInfos_, adjustInfos) };
    inline ScalingRule& setAdjustInfos(vector<ScalingRule::AdjustInfos> && adjustInfos) { DARABONBA_PTR_SET_RVALUE(adjustInfos_, adjustInfos) };


    // cronStr Field Functions 
    bool hasCronStr() const { return this->cronStr_ != nullptr;};
    void deleteCronStr() { this->cronStr_ = nullptr;};
    inline string getCronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
    inline ScalingRule& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline ScalingRule& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ScalingRule& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ScalingRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ScalingRule& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ScalingRule& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ScalingRule& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<vector<ScalingRule::AdjustInfos>> adjustInfos_ {};
    shared_ptr<string> cronStr_ {};
    shared_ptr<bool> disabled_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> ruleId_ {};
    shared_ptr<string> scalingRuleName_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
