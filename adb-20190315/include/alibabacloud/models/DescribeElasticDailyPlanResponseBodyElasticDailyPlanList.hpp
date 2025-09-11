// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODYELASTICDAILYPLANLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODYELASTICDAILYPLANLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeElasticDailyPlanResponseBodyElasticDailyPlanList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& obj) { 
      DARABONBA_PTR_TO_JSON(Day, day_);
      DARABONBA_PTR_TO_JSON(ElasticNodeNum, elasticNodeNum_);
      DARABONBA_PTR_TO_JSON(ElasticPlanType, elasticPlanType_);
      DARABONBA_PTR_TO_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(PlanEndTs, planEndTs_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanStartTs, planStartTs_);
      DARABONBA_PTR_TO_JSON(ResourcePoolName, resourcePoolName_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& obj) { 
      DARABONBA_PTR_FROM_JSON(Day, day_);
      DARABONBA_PTR_FROM_JSON(ElasticNodeNum, elasticNodeNum_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanType, elasticPlanType_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanWorkerSpec, elasticPlanWorkerSpec_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(PlanEndTs, planEndTs_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanStartTs, planStartTs_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolName, resourcePoolName_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList() = default ;
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList(const DescribeElasticDailyPlanResponseBodyElasticDailyPlanList &) = default ;
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList(DescribeElasticDailyPlanResponseBodyElasticDailyPlanList &&) = default ;
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticDailyPlanResponseBodyElasticDailyPlanList() = default ;
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& operator=(const DescribeElasticDailyPlanResponseBodyElasticDailyPlanList &) = default ;
    DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& operator=(DescribeElasticDailyPlanResponseBodyElasticDailyPlanList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->day_ != nullptr
        && this->elasticNodeNum_ != nullptr && this->elasticPlanType_ != nullptr && this->elasticPlanWorkerSpec_ != nullptr && this->endTs_ != nullptr && this->planEndTs_ != nullptr
        && this->planName_ != nullptr && this->planStartTs_ != nullptr && this->resourcePoolName_ != nullptr && this->startTs_ != nullptr && this->status_ != nullptr; };
    // day Field Functions 
    bool hasDay() const { return this->day_ != nullptr;};
    void deleteDay() { this->day_ = nullptr;};
    inline string day() const { DARABONBA_PTR_GET_DEFAULT(day_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setDay(string day) { DARABONBA_PTR_SET_VALUE(day_, day) };


    // elasticNodeNum Field Functions 
    bool hasElasticNodeNum() const { return this->elasticNodeNum_ != nullptr;};
    void deleteElasticNodeNum() { this->elasticNodeNum_ = nullptr;};
    inline int32_t elasticNodeNum() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeNum_, 0) };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setElasticNodeNum(int32_t elasticNodeNum) { DARABONBA_PTR_SET_VALUE(elasticNodeNum_, elasticNodeNum) };


    // elasticPlanType Field Functions 
    bool hasElasticPlanType() const { return this->elasticPlanType_ != nullptr;};
    void deleteElasticPlanType() { this->elasticPlanType_ = nullptr;};
    inline string elasticPlanType() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanType_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setElasticPlanType(string elasticPlanType) { DARABONBA_PTR_SET_VALUE(elasticPlanType_, elasticPlanType) };


    // elasticPlanWorkerSpec Field Functions 
    bool hasElasticPlanWorkerSpec() const { return this->elasticPlanWorkerSpec_ != nullptr;};
    void deleteElasticPlanWorkerSpec() { this->elasticPlanWorkerSpec_ = nullptr;};
    inline string elasticPlanWorkerSpec() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanWorkerSpec_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setElasticPlanWorkerSpec(string elasticPlanWorkerSpec) { DARABONBA_PTR_SET_VALUE(elasticPlanWorkerSpec_, elasticPlanWorkerSpec) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline string endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // planEndTs Field Functions 
    bool hasPlanEndTs() const { return this->planEndTs_ != nullptr;};
    void deletePlanEndTs() { this->planEndTs_ = nullptr;};
    inline string planEndTs() const { DARABONBA_PTR_GET_DEFAULT(planEndTs_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setPlanEndTs(string planEndTs) { DARABONBA_PTR_SET_VALUE(planEndTs_, planEndTs) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planStartTs Field Functions 
    bool hasPlanStartTs() const { return this->planStartTs_ != nullptr;};
    void deletePlanStartTs() { this->planStartTs_ = nullptr;};
    inline string planStartTs() const { DARABONBA_PTR_GET_DEFAULT(planStartTs_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setPlanStartTs(string planStartTs) { DARABONBA_PTR_SET_VALUE(planStartTs_, planStartTs) };


    // resourcePoolName Field Functions 
    bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
    void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
    inline string resourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline string startTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, "") };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setStartTs(string startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeElasticDailyPlanResponseBodyElasticDailyPlanList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The start date of the current-day scaling plan. The date is in the yyyy-MM-dd format.
    std::shared_ptr<string> day_ = nullptr;
    // The number of nodes involved in the scaling plan.
    // 
    // *   If ElasticPlanType is set to **worker**, a value of 0 or null is returned.
    // *   If ElasticPlanType is set to **executorcombineworker** or **executor**, a value greater than 0 is returned.
    std::shared_ptr<int32_t> elasticNodeNum_ = nullptr;
    // The type of the scaling plan. Default value: executorcombineworker. Valid values:
    // 
    // *   **worker**: scales only elastic I/O resources.
    // *   **executor**: scales only computing resources.
    // *   **executorcombineworker**: scales both elastic I/O resources and computing resources by proportion.
    std::shared_ptr<string> elasticPlanType_ = nullptr;
    // The resource specifications that can be scaled up by the scaling plan. Default value: 8 Core 64 GB. Valid values:
    // 
    // *   8 Core 64 GB
    // *   16 Core 64 GB
    // *   32 Core 64 GB
    // *   64 Core 128 GB
    // *   12 Core 96 GB
    // *   24 Core 96 GB
    // *   52 Core 86 GB
    std::shared_ptr<string> elasticPlanWorkerSpec_ = nullptr;
    // The actual restoration time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> endTs_ = nullptr;
    // The scheduled restoration time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> planEndTs_ = nullptr;
    // The name of the scaling plan.
    std::shared_ptr<string> planName_ = nullptr;
    // The scheduled scale-up time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> planStartTs_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourcePoolName_ = nullptr;
    // The actual scale-up time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> startTs_ = nullptr;
    // The execution state of the current-day scaling plan. Multiple values are separated by commas (,). Valid values:
    // 
    // *   **1**: The scaling plan is not executed.
    // *   **2**: The scaling plan is being executed.
    // *   **3**: The scaling plan is executed.
    // *   **4**: The scaling plan fails to be executed.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
