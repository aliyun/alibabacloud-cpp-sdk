// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancePlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstancePlansResponseBody() = default ;
    DescribeDBInstancePlansResponseBody(const DescribeDBInstancePlansResponseBody &) = default ;
    DescribeDBInstancePlansResponseBody(DescribeDBInstancePlansResponseBody &&) = default ;
    DescribeDBInstancePlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePlansResponseBody() = default ;
    DescribeDBInstancePlansResponseBody& operator=(const DescribeDBInstancePlansResponseBody &) = default ;
    DescribeDBInstancePlansResponseBody& operator=(DescribeDBInstancePlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(PlanList, planList_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(PlanList, planList_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PlanList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PlanList& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(PlanConfig, planConfig_);
          DARABONBA_PTR_TO_JSON(PlanDesc, planDesc_);
          DARABONBA_PTR_TO_JSON(PlanEndDate, planEndDate_);
          DARABONBA_PTR_TO_JSON(PlanId, planId_);
          DARABONBA_PTR_TO_JSON(PlanName, planName_);
          DARABONBA_PTR_TO_JSON(PlanScheduleType, planScheduleType_);
          DARABONBA_PTR_TO_JSON(PlanStartDate, planStartDate_);
          DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
          DARABONBA_PTR_TO_JSON(PlanType, planType_);
        };
        friend void from_json(const Darabonba::Json& j, PlanList& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(PlanConfig, planConfig_);
          DARABONBA_PTR_FROM_JSON(PlanDesc, planDesc_);
          DARABONBA_PTR_FROM_JSON(PlanEndDate, planEndDate_);
          DARABONBA_PTR_FROM_JSON(PlanId, planId_);
          DARABONBA_PTR_FROM_JSON(PlanName, planName_);
          DARABONBA_PTR_FROM_JSON(PlanScheduleType, planScheduleType_);
          DARABONBA_PTR_FROM_JSON(PlanStartDate, planStartDate_);
          DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
          DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        };
        PlanList() = default ;
        PlanList(const PlanList &) = default ;
        PlanList(PlanList &&) = default ;
        PlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PlanList() = default ;
        PlanList& operator=(const PlanList &) = default ;
        PlanList& operator=(PlanList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->planConfig_ == nullptr && this->planDesc_ == nullptr && this->planEndDate_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr
        && this->planScheduleType_ == nullptr && this->planStartDate_ == nullptr && this->planStatus_ == nullptr && this->planType_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline PlanList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // planConfig Field Functions 
        bool hasPlanConfig() const { return this->planConfig_ != nullptr;};
        void deletePlanConfig() { this->planConfig_ = nullptr;};
        inline string getPlanConfig() const { DARABONBA_PTR_GET_DEFAULT(planConfig_, "") };
        inline PlanList& setPlanConfig(string planConfig) { DARABONBA_PTR_SET_VALUE(planConfig_, planConfig) };


        // planDesc Field Functions 
        bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
        void deletePlanDesc() { this->planDesc_ = nullptr;};
        inline string getPlanDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
        inline PlanList& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


        // planEndDate Field Functions 
        bool hasPlanEndDate() const { return this->planEndDate_ != nullptr;};
        void deletePlanEndDate() { this->planEndDate_ = nullptr;};
        inline string getPlanEndDate() const { DARABONBA_PTR_GET_DEFAULT(planEndDate_, "") };
        inline PlanList& setPlanEndDate(string planEndDate) { DARABONBA_PTR_SET_VALUE(planEndDate_, planEndDate) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
        inline PlanList& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // planName Field Functions 
        bool hasPlanName() const { return this->planName_ != nullptr;};
        void deletePlanName() { this->planName_ = nullptr;};
        inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
        inline PlanList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


        // planScheduleType Field Functions 
        bool hasPlanScheduleType() const { return this->planScheduleType_ != nullptr;};
        void deletePlanScheduleType() { this->planScheduleType_ = nullptr;};
        inline string getPlanScheduleType() const { DARABONBA_PTR_GET_DEFAULT(planScheduleType_, "") };
        inline PlanList& setPlanScheduleType(string planScheduleType) { DARABONBA_PTR_SET_VALUE(planScheduleType_, planScheduleType) };


        // planStartDate Field Functions 
        bool hasPlanStartDate() const { return this->planStartDate_ != nullptr;};
        void deletePlanStartDate() { this->planStartDate_ = nullptr;};
        inline string getPlanStartDate() const { DARABONBA_PTR_GET_DEFAULT(planStartDate_, "") };
        inline PlanList& setPlanStartDate(string planStartDate) { DARABONBA_PTR_SET_VALUE(planStartDate_, planStartDate) };


        // planStatus Field Functions 
        bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
        void deletePlanStatus() { this->planStatus_ = nullptr;};
        inline string getPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
        inline PlanList& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


        // planType Field Functions 
        bool hasPlanType() const { return this->planType_ != nullptr;};
        void deletePlanType() { this->planType_ = nullptr;};
        inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
        inline PlanList& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      protected:
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The execution information of the plan.
        shared_ptr<string> planConfig_ {};
        // The description of the plan.
        shared_ptr<string> planDesc_ {};
        // The end time of the plan. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > 
        // 
        // *   This parameter is returned only for the plans that are periodically executed.
        // 
        // *   If you did not specify the end time when you created the plan, this parameter is not returned.
        shared_ptr<string> planEndDate_ {};
        // The plan ID.
        shared_ptr<string> planId_ {};
        // The name of the plan.
        shared_ptr<string> planName_ {};
        // The execution mode of the plan. Valid values:
        // 
        // *   **Postpone**: The plan is executed later.
        // *   **Regular**: The plan is executed periodically.
        shared_ptr<string> planScheduleType_ {};
        // The start time of the plan. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        // 
        // > 
        // 
        // *   This parameter is returned only for the plans that are periodically executed.
        // 
        // *   If you did not specify the start time when you created the plan, the current time is returned.
        shared_ptr<string> planStartDate_ {};
        // The status of the plan. Valid values:
        // 
        // *   **active**
        // *   **cancel**
        // *   **deleted**
        // *   **finished**
        shared_ptr<string> planStatus_ {};
        // The type of the plan. Valid values:
        // 
        // *   **PauseResume**: pauses and resumes an instance.
        // *   **Resize**: scales an instance.
        shared_ptr<string> planType_ {};
      };

      virtual bool empty() const override { return this->planList_ == nullptr; };
      // planList Field Functions 
      bool hasPlanList() const { return this->planList_ != nullptr;};
      void deletePlanList() { this->planList_ = nullptr;};
      inline const vector<Items::PlanList> & getPlanList() const { DARABONBA_PTR_GET_CONST(planList_, vector<Items::PlanList>) };
      inline vector<Items::PlanList> getPlanList() { DARABONBA_PTR_GET(planList_, vector<Items::PlanList>) };
      inline Items& setPlanList(const vector<Items::PlanList> & planList) { DARABONBA_PTR_SET_VALUE(planList_, planList) };
      inline Items& setPlanList(vector<Items::PlanList> && planList) { DARABONBA_PTR_SET_RVALUE(planList_, planList) };


    protected:
      shared_ptr<vector<Items::PlanList>> planList_ {};
    };

    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDBInstancePlansResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstancePlansResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstancePlansResponseBody::Items) };
    inline DescribeDBInstancePlansResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstancePlansResponseBody::Items) };
    inline DescribeDBInstancePlansResponseBody& setItems(const DescribeDBInstancePlansResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstancePlansResponseBody& setItems(DescribeDBInstancePlansResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstancePlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstancePlansResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancePlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstancePlansResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstancePlansResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The error message.
    // 
    // This parameter is returned only if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The queried plans.
    shared_ptr<DescribeDBInstancePlansResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // If the request was successful, **success** is returned. If the request failed, this parameter is not returned.
    shared_ptr<string> status_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
