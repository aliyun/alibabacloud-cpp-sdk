// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULESRESULTTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULESRESULTTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger(const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger(DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger &&) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& operator=(const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& operator=(DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && return this->minReplicas_ == nullptr && return this->triggers_ == nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers>) };
    inline vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers> triggers() { DARABONBA_PTR_GET(triggers_, vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers>) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& setTriggers(const vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTrigger& setTriggers(vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    // The maximum number of replicas. The upper limit is 1000.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // The minimum number of replicas. The lower limit is 0.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    // The configurations of the trigger.
    std::shared_ptr<vector<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultTriggerTriggers>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
