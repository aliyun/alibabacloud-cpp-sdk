// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGCONFIGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SCALINGCONFIGSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingPolicy.hpp>
#include <alibabacloud/models/ScheduledPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ScalingConfigStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingConfigStatus& obj) { 
      DARABONBA_PTR_TO_JSON(currentError, currentError_);
      DARABONBA_PTR_TO_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(horizontalScalingPolicies, horizontalScalingPolicies_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
      DARABONBA_PTR_TO_JSON(targetInstances, targetInstances_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingConfigStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(currentError, currentError_);
      DARABONBA_PTR_FROM_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(horizontalScalingPolicies, horizontalScalingPolicies_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
      DARABONBA_PTR_FROM_JSON(targetInstances, targetInstances_);
    };
    ScalingConfigStatus() = default ;
    ScalingConfigStatus(const ScalingConfigStatus &) = default ;
    ScalingConfigStatus(ScalingConfigStatus &&) = default ;
    ScalingConfigStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingConfigStatus() = default ;
    ScalingConfigStatus& operator=(const ScalingConfigStatus &) = default ;
    ScalingConfigStatus& operator=(ScalingConfigStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentError_ != nullptr
        && this->currentInstances_ != nullptr && this->functionArn_ != nullptr && this->horizontalScalingPolicies_ != nullptr && this->minInstances_ != nullptr && this->residentPoolId_ != nullptr
        && this->scheduledPolicies_ != nullptr && this->targetInstances_ != nullptr; };
    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string currentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline ScalingConfigStatus& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // currentInstances Field Functions 
    bool hasCurrentInstances() const { return this->currentInstances_ != nullptr;};
    void deleteCurrentInstances() { this->currentInstances_ = nullptr;};
    inline int64_t currentInstances() const { DARABONBA_PTR_GET_DEFAULT(currentInstances_, 0L) };
    inline ScalingConfigStatus& setCurrentInstances(int64_t currentInstances) { DARABONBA_PTR_SET_VALUE(currentInstances_, currentInstances) };


    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string functionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline ScalingConfigStatus& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // horizontalScalingPolicies Field Functions 
    bool hasHorizontalScalingPolicies() const { return this->horizontalScalingPolicies_ != nullptr;};
    void deleteHorizontalScalingPolicies() { this->horizontalScalingPolicies_ = nullptr;};
    inline const vector<ScalingPolicy> & horizontalScalingPolicies() const { DARABONBA_PTR_GET_CONST(horizontalScalingPolicies_, vector<ScalingPolicy>) };
    inline vector<ScalingPolicy> horizontalScalingPolicies() { DARABONBA_PTR_GET(horizontalScalingPolicies_, vector<ScalingPolicy>) };
    inline ScalingConfigStatus& setHorizontalScalingPolicies(const vector<ScalingPolicy> & horizontalScalingPolicies) { DARABONBA_PTR_SET_VALUE(horizontalScalingPolicies_, horizontalScalingPolicies) };
    inline ScalingConfigStatus& setHorizontalScalingPolicies(vector<ScalingPolicy> && horizontalScalingPolicies) { DARABONBA_PTR_SET_RVALUE(horizontalScalingPolicies_, horizontalScalingPolicies) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t minInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline ScalingConfigStatus& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // residentPoolId Field Functions 
    bool hasResidentPoolId() const { return this->residentPoolId_ != nullptr;};
    void deleteResidentPoolId() { this->residentPoolId_ = nullptr;};
    inline string residentPoolId() const { DARABONBA_PTR_GET_DEFAULT(residentPoolId_, "") };
    inline ScalingConfigStatus& setResidentPoolId(string residentPoolId) { DARABONBA_PTR_SET_VALUE(residentPoolId_, residentPoolId) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<ScheduledPolicy> & scheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline vector<ScheduledPolicy> scheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline ScalingConfigStatus& setScheduledPolicies(const vector<ScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline ScalingConfigStatus& setScheduledPolicies(vector<ScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


    // targetInstances Field Functions 
    bool hasTargetInstances() const { return this->targetInstances_ != nullptr;};
    void deleteTargetInstances() { this->targetInstances_ = nullptr;};
    inline int64_t targetInstances() const { DARABONBA_PTR_GET_DEFAULT(targetInstances_, 0L) };
    inline ScalingConfigStatus& setTargetInstances(int64_t targetInstances) { DARABONBA_PTR_SET_VALUE(targetInstances_, targetInstances) };


  protected:
    std::shared_ptr<string> currentError_ = nullptr;
    std::shared_ptr<int64_t> currentInstances_ = nullptr;
    std::shared_ptr<string> functionArn_ = nullptr;
    std::shared_ptr<vector<ScalingPolicy>> horizontalScalingPolicies_ = nullptr;
    std::shared_ptr<int64_t> minInstances_ = nullptr;
    std::shared_ptr<string> residentPoolId_ = nullptr;
    std::shared_ptr<vector<ScheduledPolicy>> scheduledPolicies_ = nullptr;
    std::shared_ptr<int64_t> targetInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
