// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class PlanResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanResult& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceAllocations, resourceAllocations_);
      };
      friend void from_json(const Darabonba::Json& j, PlanResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceAllocations, resourceAllocations_);
      };
      PlanResult() = default ;
      PlanResult(const PlanResult &) = default ;
      PlanResult(PlanResult &&) = default ;
      PlanResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlanResult() = default ;
      PlanResult& operator=(const PlanResult &) = default ;
      PlanResult& operator=(PlanResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceAllocations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceAllocations& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceAllocations& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ResourceAllocations() = default ;
        ResourceAllocations(const ResourceAllocations &) = default ;
        ResourceAllocations(ResourceAllocations &&) = default ;
        ResourceAllocations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceAllocations() = default ;
        ResourceAllocations& operator=(const ResourceAllocations &) = default ;
        ResourceAllocations& operator=(ResourceAllocations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->spotStrategy_ == nullptr && this->zoneId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline ResourceAllocations& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline ResourceAllocations& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ResourceAllocations& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline ResourceAllocations& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ResourceAllocations& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The number of instances.
        shared_ptr<int32_t> amount_ {};
        // The billing method of the instance. Valid values:
        // 
        // *   **Prepaid**: subscription.
        // *   **Postpaid**: pay-as-you-go.
        shared_ptr<string> instanceChargeType_ {};
        // The instance type.
        shared_ptr<string> instanceType_ {};
        // The spot policy of instances. Valid values:
        // 
        // *   NoSpot: The instances are created as pay-as-you-go instances.
        // *   SpotWithPriceLimit: The instances are created as spot instances for which you can specify the maximum hourly price.
        // *   SpotAsPriceGo: The instances are spot instances for which the market price at the time of purchase is automatically used as the bid price.
        shared_ptr<string> spotStrategy_ {};
        // The ID of the zone.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->resourceAllocations_ == nullptr; };
      // resourceAllocations Field Functions 
      bool hasResourceAllocations() const { return this->resourceAllocations_ != nullptr;};
      void deleteResourceAllocations() { this->resourceAllocations_ = nullptr;};
      inline const vector<PlanResult::ResourceAllocations> & getResourceAllocations() const { DARABONBA_PTR_GET_CONST(resourceAllocations_, vector<PlanResult::ResourceAllocations>) };
      inline vector<PlanResult::ResourceAllocations> getResourceAllocations() { DARABONBA_PTR_GET(resourceAllocations_, vector<PlanResult::ResourceAllocations>) };
      inline PlanResult& setResourceAllocations(const vector<PlanResult::ResourceAllocations> & resourceAllocations) { DARABONBA_PTR_SET_VALUE(resourceAllocations_, resourceAllocations) };
      inline PlanResult& setResourceAllocations(vector<PlanResult::ResourceAllocations> && resourceAllocations) { DARABONBA_PTR_SET_RVALUE(resourceAllocations_, resourceAllocations) };


    protected:
      // The resource allocation information in the elastic planning result.
      shared_ptr<vector<PlanResult::ResourceAllocations>> resourceAllocations_ {};
    };

    virtual bool empty() const override { return this->activityType_ == nullptr
        && this->planResult_ == nullptr && this->requestId_ == nullptr && this->scalingActivityId_ == nullptr; };
    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ScaleWithAdjustmentResponseBody& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // planResult Field Functions 
    bool hasPlanResult() const { return this->planResult_ != nullptr;};
    void deletePlanResult() { this->planResult_ = nullptr;};
    inline const ScaleWithAdjustmentResponseBody::PlanResult & getPlanResult() const { DARABONBA_PTR_GET_CONST(planResult_, ScaleWithAdjustmentResponseBody::PlanResult) };
    inline ScaleWithAdjustmentResponseBody::PlanResult getPlanResult() { DARABONBA_PTR_GET(planResult_, ScaleWithAdjustmentResponseBody::PlanResult) };
    inline ScaleWithAdjustmentResponseBody& setPlanResult(const ScaleWithAdjustmentResponseBody::PlanResult & planResult) { DARABONBA_PTR_SET_VALUE(planResult_, planResult) };
    inline ScaleWithAdjustmentResponseBody& setPlanResult(ScaleWithAdjustmentResponseBody::PlanResult && planResult) { DARABONBA_PTR_SET_RVALUE(planResult_, planResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScaleWithAdjustmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline ScaleWithAdjustmentResponseBody& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


  protected:
    // The type of the scaling activity.
    // 
    // If `ActivityType` is set to `CapacityChange`, only the expected number of instances is changed during the scaling activity specified by ScalingActivityId and no scale-out is triggered.
    // 
    // This parameter is applicable to only scaling groups that have an expected number of instances.
    shared_ptr<string> activityType_ {};
    // The elastic planning result returned when the ExecutionMode is set to PlanOnly.
    shared_ptr<ScaleWithAdjustmentResponseBody::PlanResult> planResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the scaling activity.
    shared_ptr<string> scalingActivityId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
