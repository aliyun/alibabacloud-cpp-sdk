// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScaleWithAdjustmentResponseBodyPlanResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(PlanResult, planResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(PlanResult, planResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
    };
    ScaleWithAdjustmentResponseBody() = default ;
    ScaleWithAdjustmentResponseBody(const ScaleWithAdjustmentResponseBody &) = default ;
    ScaleWithAdjustmentResponseBody(ScaleWithAdjustmentResponseBody &&) = default ;
    ScaleWithAdjustmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentResponseBody() = default ;
    ScaleWithAdjustmentResponseBody& operator=(const ScaleWithAdjustmentResponseBody &) = default ;
    ScaleWithAdjustmentResponseBody& operator=(ScaleWithAdjustmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityType_ == nullptr
        && return this->planResult_ == nullptr && return this->requestId_ == nullptr && return this->scalingActivityId_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ScaleWithAdjustmentResponseBody& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // planResult Field Functions 
    bool hasPlanResult() const { return this->planResult_ != nullptr;};
    void deletePlanResult() { this->planResult_ = nullptr;};
    inline const ScaleWithAdjustmentResponseBodyPlanResult & planResult() const { DARABONBA_PTR_GET_CONST(planResult_, ScaleWithAdjustmentResponseBodyPlanResult) };
    inline ScaleWithAdjustmentResponseBodyPlanResult planResult() { DARABONBA_PTR_GET(planResult_, ScaleWithAdjustmentResponseBodyPlanResult) };
    inline ScaleWithAdjustmentResponseBody& setPlanResult(const ScaleWithAdjustmentResponseBodyPlanResult & planResult) { DARABONBA_PTR_SET_VALUE(planResult_, planResult) };
    inline ScaleWithAdjustmentResponseBody& setPlanResult(ScaleWithAdjustmentResponseBodyPlanResult && planResult) { DARABONBA_PTR_SET_RVALUE(planResult_, planResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScaleWithAdjustmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string scalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline ScaleWithAdjustmentResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The type of the scaling activity.
    // 
    // If `ActivityType` is set to `CapacityChange`, only the expected number of instances is changed during the scaling activity specified by ScalingActivityId and no scale-out is triggered.
    // 
    // This parameter is applicable to only scaling groups that have an expected number of instances.
    std::shared_ptr<string> activityType_ = nullptr;
    // The elastic planning result returned when the ExecutionMode is set to PlanOnly.
    std::shared_ptr<ScaleWithAdjustmentResponseBodyPlanResult> planResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the scaling activity.
    std::shared_ptr<string> scalingActivityId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
