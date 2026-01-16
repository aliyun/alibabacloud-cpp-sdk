// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTELASTICCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTELASTICCONFIGINPUT_HPP_
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
  class PutElasticConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutElasticConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_TO_JSON(scalingPolicies, scalingPolicies_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, PutElasticConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_FROM_JSON(scalingPolicies, scalingPolicies_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
    };
    PutElasticConfigInput() = default ;
    PutElasticConfigInput(const PutElasticConfigInput &) = default ;
    PutElasticConfigInput(PutElasticConfigInput &&) = default ;
    PutElasticConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutElasticConfigInput() = default ;
    PutElasticConfigInput& operator=(const PutElasticConfigInput &) = default ;
    PutElasticConfigInput& operator=(PutElasticConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->minInstances_ == nullptr
        && this->residentPoolId_ == nullptr && this->scalingPolicies_ == nullptr && this->scheduledPolicies_ == nullptr; };
    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline PutElasticConfigInput& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // residentPoolId Field Functions 
    bool hasResidentPoolId() const { return this->residentPoolId_ != nullptr;};
    void deleteResidentPoolId() { this->residentPoolId_ = nullptr;};
    inline string getResidentPoolId() const { DARABONBA_PTR_GET_DEFAULT(residentPoolId_, "") };
    inline PutElasticConfigInput& setResidentPoolId(string residentPoolId) { DARABONBA_PTR_SET_VALUE(residentPoolId_, residentPoolId) };


    // scalingPolicies Field Functions 
    bool hasScalingPolicies() const { return this->scalingPolicies_ != nullptr;};
    void deleteScalingPolicies() { this->scalingPolicies_ = nullptr;};
    inline const vector<ScalingPolicy> & getScalingPolicies() const { DARABONBA_PTR_GET_CONST(scalingPolicies_, vector<ScalingPolicy>) };
    inline vector<ScalingPolicy> getScalingPolicies() { DARABONBA_PTR_GET(scalingPolicies_, vector<ScalingPolicy>) };
    inline PutElasticConfigInput& setScalingPolicies(const vector<ScalingPolicy> & scalingPolicies) { DARABONBA_PTR_SET_VALUE(scalingPolicies_, scalingPolicies) };
    inline PutElasticConfigInput& setScalingPolicies(vector<ScalingPolicy> && scalingPolicies) { DARABONBA_PTR_SET_RVALUE(scalingPolicies_, scalingPolicies) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<ScheduledPolicy> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline vector<ScheduledPolicy> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline PutElasticConfigInput& setScheduledPolicies(const vector<ScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline PutElasticConfigInput& setScheduledPolicies(vector<ScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


  protected:
    shared_ptr<int64_t> minInstances_ {};
    shared_ptr<string> residentPoolId_ {};
    shared_ptr<vector<ScalingPolicy>> scalingPolicies_ {};
    shared_ptr<vector<ScheduledPolicy>> scheduledPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
