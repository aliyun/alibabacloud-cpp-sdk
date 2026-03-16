// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SCALINGSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScheduledPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ScalingStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingStatus& obj) { 
      DARABONBA_PTR_TO_JSON(currentError, currentError_);
      DARABONBA_PTR_TO_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
      DARABONBA_PTR_TO_JSON(targetInstances, targetInstances_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(currentError, currentError_);
      DARABONBA_PTR_FROM_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
      DARABONBA_PTR_FROM_JSON(targetInstances, targetInstances_);
    };
    ScalingStatus() = default ;
    ScalingStatus(const ScalingStatus &) = default ;
    ScalingStatus(ScalingStatus &&) = default ;
    ScalingStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingStatus() = default ;
    ScalingStatus& operator=(const ScalingStatus &) = default ;
    ScalingStatus& operator=(ScalingStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentError_ == nullptr
        && this->currentInstances_ == nullptr && this->minInstances_ == nullptr && this->scheduledPolicies_ == nullptr && this->targetInstances_ == nullptr; };
    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string getCurrentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline ScalingStatus& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // currentInstances Field Functions 
    bool hasCurrentInstances() const { return this->currentInstances_ != nullptr;};
    void deleteCurrentInstances() { this->currentInstances_ = nullptr;};
    inline int64_t getCurrentInstances() const { DARABONBA_PTR_GET_DEFAULT(currentInstances_, 0L) };
    inline ScalingStatus& setCurrentInstances(int64_t currentInstances) { DARABONBA_PTR_SET_VALUE(currentInstances_, currentInstances) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline ScalingStatus& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<ScheduledPolicy> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline vector<ScheduledPolicy> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline ScalingStatus& setScheduledPolicies(const vector<ScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline ScalingStatus& setScheduledPolicies(vector<ScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


    // targetInstances Field Functions 
    bool hasTargetInstances() const { return this->targetInstances_ != nullptr;};
    void deleteTargetInstances() { this->targetInstances_ = nullptr;};
    inline int64_t getTargetInstances() const { DARABONBA_PTR_GET_DEFAULT(targetInstances_, 0L) };
    inline ScalingStatus& setTargetInstances(int64_t targetInstances) { DARABONBA_PTR_SET_VALUE(targetInstances_, targetInstances) };


  protected:
    shared_ptr<string> currentError_ {};
    shared_ptr<int64_t> currentInstances_ {};
    shared_ptr<int64_t> minInstances_ {};
    shared_ptr<vector<ScheduledPolicy>> scheduledPolicies_ {};
    shared_ptr<int64_t> targetInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
