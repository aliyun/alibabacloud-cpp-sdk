// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMERSCHEDULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYDATATIMERSCHEDULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyDataTimerSchedules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& obj) { 
      DARABONBA_PTR_TO_JSON(AtTime, atTime_);
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(TargetReplicas, targetReplicas_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& obj) { 
      DARABONBA_PTR_FROM_JSON(AtTime, atTime_);
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(TargetReplicas, targetReplicas_);
    };
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules() = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules(const UpdateApplicationScalingRuleResponseBodyDataTimerSchedules &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules(UpdateApplicationScalingRuleResponseBodyDataTimerSchedules &&) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyDataTimerSchedules() = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& operator=(const UpdateApplicationScalingRuleResponseBodyDataTimerSchedules &) = default ;
    UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& operator=(UpdateApplicationScalingRuleResponseBodyDataTimerSchedules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->atTime_ == nullptr
        && return this->maxReplicas_ == nullptr && return this->minReplicas_ == nullptr && return this->targetReplicas_ == nullptr; };
    // atTime Field Functions 
    bool hasAtTime() const { return this->atTime_ != nullptr;};
    void deleteAtTime() { this->atTime_ = nullptr;};
    inline string atTime() const { DARABONBA_PTR_GET_DEFAULT(atTime_, "") };
    inline UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& setAtTime(string atTime) { DARABONBA_PTR_SET_VALUE(atTime_, atTime) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // targetReplicas Field Functions 
    bool hasTargetReplicas() const { return this->targetReplicas_ != nullptr;};
    void deleteTargetReplicas() { this->targetReplicas_ = nullptr;};
    inline int32_t targetReplicas() const { DARABONBA_PTR_GET_DEFAULT(targetReplicas_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyDataTimerSchedules& setTargetReplicas(int32_t targetReplicas) { DARABONBA_PTR_SET_VALUE(targetReplicas_, targetReplicas) };


  protected:
    // The point in time. Format: **Hour:Minute**.
    std::shared_ptr<string> atTime_ = nullptr;
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    // The expected number of instances.
    std::shared_ptr<int32_t> targetReplicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
