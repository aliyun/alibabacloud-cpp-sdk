// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODY_HPP_
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
  class DescribeElasticDailyPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticDailyPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticDailyPlanList, elasticDailyPlanList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticDailyPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticDailyPlanList, elasticDailyPlanList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticDailyPlanResponseBody() = default ;
    DescribeElasticDailyPlanResponseBody(const DescribeElasticDailyPlanResponseBody &) = default ;
    DescribeElasticDailyPlanResponseBody(DescribeElasticDailyPlanResponseBody &&) = default ;
    DescribeElasticDailyPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticDailyPlanResponseBody() = default ;
    DescribeElasticDailyPlanResponseBody& operator=(const DescribeElasticDailyPlanResponseBody &) = default ;
    DescribeElasticDailyPlanResponseBody& operator=(DescribeElasticDailyPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticDailyPlanList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticDailyPlanList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ElasticDailyPlanList& obj) { 
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
      ElasticDailyPlanList() = default ;
      ElasticDailyPlanList(const ElasticDailyPlanList &) = default ;
      ElasticDailyPlanList(ElasticDailyPlanList &&) = default ;
      ElasticDailyPlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticDailyPlanList() = default ;
      ElasticDailyPlanList& operator=(const ElasticDailyPlanList &) = default ;
      ElasticDailyPlanList& operator=(ElasticDailyPlanList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->day_ == nullptr
        && this->elasticNodeNum_ == nullptr && this->elasticPlanType_ == nullptr && this->elasticPlanWorkerSpec_ == nullptr && this->endTs_ == nullptr && this->planEndTs_ == nullptr
        && this->planName_ == nullptr && this->planStartTs_ == nullptr && this->resourcePoolName_ == nullptr && this->startTs_ == nullptr && this->status_ == nullptr; };
      // day Field Functions 
      bool hasDay() const { return this->day_ != nullptr;};
      void deleteDay() { this->day_ = nullptr;};
      inline string getDay() const { DARABONBA_PTR_GET_DEFAULT(day_, "") };
      inline ElasticDailyPlanList& setDay(string day) { DARABONBA_PTR_SET_VALUE(day_, day) };


      // elasticNodeNum Field Functions 
      bool hasElasticNodeNum() const { return this->elasticNodeNum_ != nullptr;};
      void deleteElasticNodeNum() { this->elasticNodeNum_ = nullptr;};
      inline int32_t getElasticNodeNum() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeNum_, 0) };
      inline ElasticDailyPlanList& setElasticNodeNum(int32_t elasticNodeNum) { DARABONBA_PTR_SET_VALUE(elasticNodeNum_, elasticNodeNum) };


      // elasticPlanType Field Functions 
      bool hasElasticPlanType() const { return this->elasticPlanType_ != nullptr;};
      void deleteElasticPlanType() { this->elasticPlanType_ = nullptr;};
      inline string getElasticPlanType() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanType_, "") };
      inline ElasticDailyPlanList& setElasticPlanType(string elasticPlanType) { DARABONBA_PTR_SET_VALUE(elasticPlanType_, elasticPlanType) };


      // elasticPlanWorkerSpec Field Functions 
      bool hasElasticPlanWorkerSpec() const { return this->elasticPlanWorkerSpec_ != nullptr;};
      void deleteElasticPlanWorkerSpec() { this->elasticPlanWorkerSpec_ = nullptr;};
      inline string getElasticPlanWorkerSpec() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanWorkerSpec_, "") };
      inline ElasticDailyPlanList& setElasticPlanWorkerSpec(string elasticPlanWorkerSpec) { DARABONBA_PTR_SET_VALUE(elasticPlanWorkerSpec_, elasticPlanWorkerSpec) };


      // endTs Field Functions 
      bool hasEndTs() const { return this->endTs_ != nullptr;};
      void deleteEndTs() { this->endTs_ = nullptr;};
      inline string getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, "") };
      inline ElasticDailyPlanList& setEndTs(string endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


      // planEndTs Field Functions 
      bool hasPlanEndTs() const { return this->planEndTs_ != nullptr;};
      void deletePlanEndTs() { this->planEndTs_ = nullptr;};
      inline string getPlanEndTs() const { DARABONBA_PTR_GET_DEFAULT(planEndTs_, "") };
      inline ElasticDailyPlanList& setPlanEndTs(string planEndTs) { DARABONBA_PTR_SET_VALUE(planEndTs_, planEndTs) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline ElasticDailyPlanList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planStartTs Field Functions 
      bool hasPlanStartTs() const { return this->planStartTs_ != nullptr;};
      void deletePlanStartTs() { this->planStartTs_ = nullptr;};
      inline string getPlanStartTs() const { DARABONBA_PTR_GET_DEFAULT(planStartTs_, "") };
      inline ElasticDailyPlanList& setPlanStartTs(string planStartTs) { DARABONBA_PTR_SET_VALUE(planStartTs_, planStartTs) };


      // resourcePoolName Field Functions 
      bool hasResourcePoolName() const { return this->resourcePoolName_ != nullptr;};
      void deleteResourcePoolName() { this->resourcePoolName_ = nullptr;};
      inline string getResourcePoolName() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolName_, "") };
      inline ElasticDailyPlanList& setResourcePoolName(string resourcePoolName) { DARABONBA_PTR_SET_VALUE(resourcePoolName_, resourcePoolName) };


      // startTs Field Functions 
      bool hasStartTs() const { return this->startTs_ != nullptr;};
      void deleteStartTs() { this->startTs_ = nullptr;};
      inline string getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, "") };
      inline ElasticDailyPlanList& setStartTs(string startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ElasticDailyPlanList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The start date of the current-day scaling plan. The date is in the yyyy-MM-dd format.
      shared_ptr<string> day_ {};
      // The number of nodes involved in the scaling plan.
      // 
      // *   If ElasticPlanType is set to **worker**, a value of 0 or null is returned.
      // *   If ElasticPlanType is set to **executorcombineworker** or **executor**, a value greater than 0 is returned.
      shared_ptr<int32_t> elasticNodeNum_ {};
      // The type of the scaling plan. Default value: executorcombineworker. Valid values:
      // 
      // *   **worker**: scales only elastic I/O resources.
      // *   **executor**: scales only computing resources.
      // *   **executorcombineworker**: scales both elastic I/O resources and computing resources by proportion.
      shared_ptr<string> elasticPlanType_ {};
      // The resource specifications that can be scaled up by the scaling plan. Default value: 8 Core 64 GB. Valid values:
      // 
      // *   8 Core 64 GB
      // *   16 Core 64 GB
      // *   32 Core 64 GB
      // *   64 Core 128 GB
      // *   12 Core 96 GB
      // *   24 Core 96 GB
      // *   52 Core 86 GB
      shared_ptr<string> elasticPlanWorkerSpec_ {};
      // The actual restoration time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> endTs_ {};
      // The scheduled restoration time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> planEndTs_ {};
      // The name of the scaling plan.
      shared_ptr<string> planName_ {};
      // The scheduled scale-up time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> planStartTs_ {};
      // The name of the resource group.
      shared_ptr<string> resourcePoolName_ {};
      // The actual scale-up time. The time is in the yyyy-MM-dd hh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> startTs_ {};
      // The execution state of the current-day scaling plan. Multiple values are separated by commas (,). Valid values:
      // 
      // *   **1**: The scaling plan is not executed.
      // *   **2**: The scaling plan is being executed.
      // *   **3**: The scaling plan is executed.
      // *   **4**: The scaling plan fails to be executed.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->elasticDailyPlanList_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticDailyPlanList Field Functions 
    bool hasElasticDailyPlanList() const { return this->elasticDailyPlanList_ != nullptr;};
    void deleteElasticDailyPlanList() { this->elasticDailyPlanList_ = nullptr;};
    inline const vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList> & getElasticDailyPlanList() const { DARABONBA_PTR_GET_CONST(elasticDailyPlanList_, vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList>) };
    inline vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList> getElasticDailyPlanList() { DARABONBA_PTR_GET(elasticDailyPlanList_, vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList>) };
    inline DescribeElasticDailyPlanResponseBody& setElasticDailyPlanList(const vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList> & elasticDailyPlanList) { DARABONBA_PTR_SET_VALUE(elasticDailyPlanList_, elasticDailyPlanList) };
    inline DescribeElasticDailyPlanResponseBody& setElasticDailyPlanList(vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList> && elasticDailyPlanList) { DARABONBA_PTR_SET_RVALUE(elasticDailyPlanList_, elasticDailyPlanList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticDailyPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the current-day scaling plans.
    shared_ptr<vector<DescribeElasticDailyPlanResponseBody::ElasticDailyPlanList>> elasticDailyPlanList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
