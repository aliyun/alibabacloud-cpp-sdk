// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeElasticPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlanList, elasticPlanList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlanList, elasticPlanList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticPlanResponseBody() = default ;
    DescribeElasticPlanResponseBody(const DescribeElasticPlanResponseBody &) = default ;
    DescribeElasticPlanResponseBody(DescribeElasticPlanResponseBody &&) = default ;
    DescribeElasticPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanResponseBody() = default ;
    DescribeElasticPlanResponseBody& operator=(const DescribeElasticPlanResponseBody &) = default ;
    DescribeElasticPlanResponseBody& operator=(DescribeElasticPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticPlanList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticPlanList& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticNodeNum, elasticNodeNum_);
        DARABONBA_PTR_TO_JSON(ElasticPlanType, elasticPlanType_);
        DARABONBA_PTR_TO_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EndDay, endDay_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(MonthlyRepeat, monthlyRepeat_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
        DARABONBA_PTR_TO_JSON(StartDay, startDay_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(WeeklyRepeat, weeklyRepeat_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticPlanList& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticNodeNum, elasticNodeNum_);
        DARABONBA_PTR_FROM_JSON(ElasticPlanType, elasticPlanType_);
        DARABONBA_PTR_FROM_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EndDay, endDay_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(MonthlyRepeat, monthlyRepeat_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
        DARABONBA_PTR_FROM_JSON(StartDay, startDay_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(WeeklyRepeat, weeklyRepeat_);
      };
      ElasticPlanList() = default ;
      ElasticPlanList(const ElasticPlanList &) = default ;
      ElasticPlanList(ElasticPlanList &&) = default ;
      ElasticPlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticPlanList() = default ;
      ElasticPlanList& operator=(const ElasticPlanList &) = default ;
      ElasticPlanList& operator=(ElasticPlanList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->elasticNodeNum_ == nullptr
        && this->elasticPlanType_ == nullptr && this->elasticPlanWorkerSpec_ == nullptr && this->enable_ == nullptr && this->endDay_ == nullptr && this->endTime_ == nullptr
        && this->monthlyRepeat_ == nullptr && this->planName_ == nullptr && this->resourcePoolName_ == nullptr && this->startDay_ == nullptr && this->startTime_ == nullptr
        && this->weeklyRepeat_ == nullptr; };
      // elasticNodeNum Field Functions 
      bool hasElasticNodeNum() const { return this->elasticNodeNum_ != nullptr;};
      void deleteElasticNodeNum() { this->elasticNodeNum_ = nullptr;};
      inline int32_t getElasticNodeNum() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeNum_, 0) };
      inline ElasticPlanList& setElasticNodeNum(int32_t elasticNodeNum) { DARABONBA_PTR_SET_VALUE(elasticNodeNum_, elasticNodeNum) };


      // elasticPlanType Field Functions 
      bool hasElasticPlanType() const { return this->elasticPlanType_ != nullptr;};
      void deleteElasticPlanType() { this->elasticPlanType_ = nullptr;};
      inline string getElasticPlanType() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanType_, "") };
      inline ElasticPlanList& setElasticPlanType(string elasticPlanType) { DARABONBA_PTR_SET_VALUE(elasticPlanType_, elasticPlanType) };


      // elasticPlanWorkerSpec Field Functions 
      bool hasElasticPlanWorkerSpec() const { return this->elasticPlanWorkerSpec_ != nullptr;};
      void deleteElasticPlanWorkerSpec() { this->elasticPlanWorkerSpec_ = nullptr;};
      inline string getElasticPlanWorkerSpec() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanWorkerSpec_, "") };
      inline ElasticPlanList& setElasticPlanWorkerSpec(string elasticPlanWorkerSpec) { DARABONBA_PTR_SET_VALUE(elasticPlanWorkerSpec_, elasticPlanWorkerSpec) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline ElasticPlanList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // endDay Field Functions 
      bool hasEndDay() const { return this->endDay_ != nullptr;};
      void deleteEndDay() { this->endDay_ = nullptr;};
      inline string getEndDay() const { DARABONBA_PTR_GET_DEFAULT(endDay_, "") };
      inline ElasticPlanList& setEndDay(string endDay) { DARABONBA_PTR_SET_VALUE(endDay_, endDay) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline ElasticPlanList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // monthlyRepeat Field Functions 
      bool hasMonthlyRepeat() const { return this->monthlyRepeat_ != nullptr;};
      void deleteMonthlyRepeat() { this->monthlyRepeat_ = nullptr;};
      inline string getMonthlyRepeat() const { DARABONBA_PTR_GET_DEFAULT(monthlyRepeat_, "") };
      inline ElasticPlanList& setMonthlyRepeat(string monthlyRepeat) { DARABONBA_PTR_SET_VALUE(monthlyRepeat_, monthlyRepeat) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline ElasticPlanList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // resourcePoolName Field Functions 
      bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
      void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
      inline string getResourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
      inline ElasticPlanList& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


      // startDay Field Functions 
      bool hasStartDay() const { return this->startDay_ != nullptr;};
      void deleteStartDay() { this->startDay_ = nullptr;};
      inline string getStartDay() const { DARABONBA_PTR_GET_DEFAULT(startDay_, "") };
      inline ElasticPlanList& setStartDay(string startDay) { DARABONBA_PTR_SET_VALUE(startDay_, startDay) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline ElasticPlanList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // weeklyRepeat Field Functions 
      bool hasWeeklyRepeat() const { return this->weeklyRepeat_ != nullptr;};
      void deleteWeeklyRepeat() { this->weeklyRepeat_ = nullptr;};
      inline string getWeeklyRepeat() const { DARABONBA_PTR_GET_DEFAULT(weeklyRepeat_, "") };
      inline ElasticPlanList& setWeeklyRepeat(string weeklyRepeat) { DARABONBA_PTR_SET_VALUE(weeklyRepeat_, weeklyRepeat) };


    protected:
      // The number of nodes that are involved in the scaling plan.
      // 
      // *   If ElasticPlanType is set to **worker**, a value of 0 or null is returned.
      // *   If ElasticPlanType is set to **executorcombineworker** or **executor**, a value greater than 0 is returned.
      shared_ptr<int32_t> elasticNodeNum_ {};
      // The type of the scaling plan. Valid values:
      // 
      // *   **worker**: scales only elastic I/O resources.
      // *   **executor**: scales only computing resources.
      // *   **executorcombineworker** (default): scales both elastic I/O resources and computing resources by proportion.
      shared_ptr<string> elasticPlanType_ {};
      // The resource specifications that can be scaled up by the scaling plan. Valid values:
      // 
      // *   8 Core 64 GB (default)
      // *   16 Core 64 GB
      // *   32 Core 64 GB
      // *   64 Core 128 GB
      // *   12 Core 96 GB
      // *   24 Core 96 GB
      // *   52 Core 86 GB
      shared_ptr<string> elasticPlanWorkerSpec_ {};
      // Indicates whether the scaling plan takes effect. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> enable_ {};
      // The end date of the scaling plan. This parameter is returned only if the end date of the scaling plan is set. The date is in the yyyy-MM-dd format.
      shared_ptr<string> endDay_ {};
      // The restoration time of the scaling plan. The interval between the scale-up time and the restoration time cannot be more than 24 hours. The time is in the HH:mm:ss format.
      shared_ptr<string> endTime_ {};
      // The days of the month when the scaling plan was executed. A value indicates a day of the month. Multiple values are separated by commas (,).
      shared_ptr<string> monthlyRepeat_ {};
      // The name of the scaling plan.
      shared_ptr<string> planName_ {};
      // The name of the resource group.
      shared_ptr<string> resourcePoolName_ {};
      // The start date of the scaling plan. This parameter is returned only if the start date of the scaling plan is set. The date is in the yyyy-MM-dd format.
      shared_ptr<string> startDay_ {};
      // The scale-up time of the scaling plan. The time is in the HH:mm:ss format.
      shared_ptr<string> startTime_ {};
      // The days of the week when the scaling plan was executed. Valid values: 0 to 6, which indicate Sunday to Saturday. Multiple values are separated by commas (,).
      shared_ptr<string> weeklyRepeat_ {};
    };

    virtual bool empty() const override { return this->elasticPlanList_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticPlanList Field Functions 
    bool hasElasticPlanList() const { return this->elasticPlanList_ != nullptr;};
    void deleteElasticPlanList() { this->elasticPlanList_ = nullptr;};
    inline const vector<DescribeElasticPlanResponseBody::ElasticPlanList> & getElasticPlanList() const { DARABONBA_PTR_GET_CONST(elasticPlanList_, vector<DescribeElasticPlanResponseBody::ElasticPlanList>) };
    inline vector<DescribeElasticPlanResponseBody::ElasticPlanList> getElasticPlanList() { DARABONBA_PTR_GET(elasticPlanList_, vector<DescribeElasticPlanResponseBody::ElasticPlanList>) };
    inline DescribeElasticPlanResponseBody& setElasticPlanList(const vector<DescribeElasticPlanResponseBody::ElasticPlanList> & elasticPlanList) { DARABONBA_PTR_SET_VALUE(elasticPlanList_, elasticPlanList) };
    inline DescribeElasticPlanResponseBody& setElasticPlanList(vector<DescribeElasticPlanResponseBody::ElasticPlanList> && elasticPlanList) { DARABONBA_PTR_SET_RVALUE(elasticPlanList_, elasticPlanList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried scaling plans.
    shared_ptr<vector<DescribeElasticPlanResponseBody::ElasticPlanList>> elasticPlanList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
