// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlans, elasticPlans_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlans, elasticPlans_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticPlansResponseBody() = default ;
    DescribeElasticPlansResponseBody(const DescribeElasticPlansResponseBody &) = default ;
    DescribeElasticPlansResponseBody(DescribeElasticPlansResponseBody &&) = default ;
    DescribeElasticPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlansResponseBody() = default ;
    DescribeElasticPlansResponseBody& operator=(const DescribeElasticPlansResponseBody &) = default ;
    DescribeElasticPlansResponseBody& operator=(DescribeElasticPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticPlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticPlans& obj) { 
        DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
        DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(NextScheduleTime, nextScheduleTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_TO_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticPlans& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
        DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(NextScheduleTime, nextScheduleTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
        DARABONBA_PTR_FROM_JSON(TargetSize, targetSize_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ElasticPlans() = default ;
      ElasticPlans(const ElasticPlans &) = default ;
      ElasticPlans(ElasticPlans &&) = default ;
      ElasticPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticPlans() = default ;
      ElasticPlans& operator=(const ElasticPlans &) = default ;
      ElasticPlans& operator=(ElasticPlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoScale_ == nullptr
        && this->elasticPlanName_ == nullptr && this->enabled_ == nullptr && this->nextScheduleTime_ == nullptr && this->resourceGroupName_ == nullptr && this->targetSize_ == nullptr
        && this->type_ == nullptr; };
      // autoScale Field Functions 
      bool hasAutoScale() const { return this->autoScale_ != nullptr;};
      void deleteAutoScale() { this->autoScale_ = nullptr;};
      inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
      inline ElasticPlans& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


      // elasticPlanName Field Functions 
      bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
      void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
      inline string getElasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
      inline ElasticPlans& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline ElasticPlans& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // nextScheduleTime Field Functions 
      bool hasNextScheduleTime() const { return this->nextScheduleTime_ != nullptr;};
      void deleteNextScheduleTime() { this->nextScheduleTime_ = nullptr;};
      inline string getNextScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(nextScheduleTime_, "") };
      inline ElasticPlans& setNextScheduleTime(string nextScheduleTime) { DARABONBA_PTR_SET_VALUE(nextScheduleTime_, nextScheduleTime) };


      // resourceGroupName Field Functions 
      bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
      void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
      inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
      inline ElasticPlans& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


      // targetSize Field Functions 
      bool hasTargetSize() const { return this->targetSize_ != nullptr;};
      void deleteTargetSize() { this->targetSize_ = nullptr;};
      inline string getTargetSize() const { DARABONBA_PTR_GET_DEFAULT(targetSize_, "") };
      inline ElasticPlans& setTargetSize(string targetSize) { DARABONBA_PTR_SET_VALUE(targetSize_, targetSize) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ElasticPlans& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether **Proportional Default Scaling for EIUs** is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> autoScale_ {};
      // The name of the scaling plan.
      shared_ptr<string> elasticPlanName_ {};
      // Indicates whether the scaling plan is immediately enabled after the plan is created. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enabled_ {};
      // The time when the next scheduling is performed.
      // 
      // > The time is in the yyyy-MM-ddTHH:mm:ssZ format.
      shared_ptr<string> nextScheduleTime_ {};
      // The name of the resource group.
      // 
      // > You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the name of a resource group within a cluster.
      shared_ptr<string> resourceGroupName_ {};
      // The amount of elastic resources after scaling.
      shared_ptr<string> targetSize_ {};
      // The type of the scaling plan. Valid values:
      // 
      // *   **EXECUTOR**: the interactive resource group type, which specifies the computing resource type.
      // *   **WORKER**: the EIU type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->elasticPlans_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // elasticPlans Field Functions 
    bool hasElasticPlans() const { return this->elasticPlans_ != nullptr;};
    void deleteElasticPlans() { this->elasticPlans_ = nullptr;};
    inline const vector<DescribeElasticPlansResponseBody::ElasticPlans> & getElasticPlans() const { DARABONBA_PTR_GET_CONST(elasticPlans_, vector<DescribeElasticPlansResponseBody::ElasticPlans>) };
    inline vector<DescribeElasticPlansResponseBody::ElasticPlans> getElasticPlans() { DARABONBA_PTR_GET(elasticPlans_, vector<DescribeElasticPlansResponseBody::ElasticPlans>) };
    inline DescribeElasticPlansResponseBody& setElasticPlans(const vector<DescribeElasticPlansResponseBody::ElasticPlans> & elasticPlans) { DARABONBA_PTR_SET_VALUE(elasticPlans_, elasticPlans) };
    inline DescribeElasticPlansResponseBody& setElasticPlans(vector<DescribeElasticPlansResponseBody::ElasticPlans> && elasticPlans) { DARABONBA_PTR_SET_RVALUE(elasticPlans_, elasticPlans) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeElasticPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeElasticPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticPlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried scaling plans.
    shared_ptr<vector<DescribeElasticPlansResponseBody::ElasticPlans>> elasticPlans_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
