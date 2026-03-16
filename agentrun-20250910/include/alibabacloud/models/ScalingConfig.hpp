// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SCALINGCONFIG_HPP_
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
  class ScalingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
    };
    ScalingConfig() = default ;
    ScalingConfig(const ScalingConfig &) = default ;
    ScalingConfig(ScalingConfig &&) = default ;
    ScalingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingConfig() = default ;
    ScalingConfig& operator=(const ScalingConfig &) = default ;
    ScalingConfig& operator=(ScalingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minInstances_ == nullptr
        && this->scheduledPolicies_ == nullptr; };
    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline ScalingConfig& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<ScheduledPolicy> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline vector<ScheduledPolicy> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline ScalingConfig& setScheduledPolicies(const vector<ScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline ScalingConfig& setScheduledPolicies(vector<ScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


  protected:
    shared_ptr<int64_t> minInstances_ {};
    shared_ptr<vector<ScheduledPolicy>> scheduledPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
