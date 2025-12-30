// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoveryPlans, recoveryPlans_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoveryPlans, recoveryPlans_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeGtmRecoveryPlansResponseBody() = default ;
    DescribeGtmRecoveryPlansResponseBody(const DescribeGtmRecoveryPlansResponseBody &) = default ;
    DescribeGtmRecoveryPlansResponseBody(DescribeGtmRecoveryPlansResponseBody &&) = default ;
    DescribeGtmRecoveryPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlansResponseBody() = default ;
    DescribeGtmRecoveryPlansResponseBody& operator=(const DescribeGtmRecoveryPlansResponseBody &) = default ;
    DescribeGtmRecoveryPlansResponseBody& operator=(DescribeGtmRecoveryPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecoveryPlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecoveryPlans& obj) { 
        DARABONBA_PTR_TO_JSON(RecoveryPlan, recoveryPlan_);
      };
      friend void from_json(const Darabonba::Json& j, RecoveryPlans& obj) { 
        DARABONBA_PTR_FROM_JSON(RecoveryPlan, recoveryPlan_);
      };
      RecoveryPlans() = default ;
      RecoveryPlans(const RecoveryPlans &) = default ;
      RecoveryPlans(RecoveryPlans &&) = default ;
      RecoveryPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecoveryPlans() = default ;
      RecoveryPlans& operator=(const RecoveryPlans &) = default ;
      RecoveryPlans& operator=(RecoveryPlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecoveryPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecoveryPlan& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
          DARABONBA_PTR_TO_JSON(LastExecuteTime, lastExecuteTime_);
          DARABONBA_PTR_TO_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
          DARABONBA_PTR_TO_JSON(LastRollbackTime, lastRollbackTime_);
          DARABONBA_PTR_TO_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RecoveryPlanId, recoveryPlanId_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, RecoveryPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(FaultAddrPoolNum, faultAddrPoolNum_);
          DARABONBA_PTR_FROM_JSON(LastExecuteTime, lastExecuteTime_);
          DARABONBA_PTR_FROM_JSON(LastExecuteTimestamp, lastExecuteTimestamp_);
          DARABONBA_PTR_FROM_JSON(LastRollbackTime, lastRollbackTime_);
          DARABONBA_PTR_FROM_JSON(LastRollbackTimestamp, lastRollbackTimestamp_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RecoveryPlanId, recoveryPlanId_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        };
        RecoveryPlan() = default ;
        RecoveryPlan(const RecoveryPlan &) = default ;
        RecoveryPlan(RecoveryPlan &&) = default ;
        RecoveryPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecoveryPlan() = default ;
        RecoveryPlan& operator=(const RecoveryPlan &) = default ;
        RecoveryPlan& operator=(RecoveryPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->faultAddrPoolNum_ == nullptr && this->lastExecuteTime_ == nullptr && this->lastExecuteTimestamp_ == nullptr && this->lastRollbackTime_ == nullptr
        && this->lastRollbackTimestamp_ == nullptr && this->name_ == nullptr && this->recoveryPlanId_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline RecoveryPlan& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline RecoveryPlan& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // faultAddrPoolNum Field Functions 
        bool hasFaultAddrPoolNum() const { return this->faultAddrPoolNum_ != nullptr;};
        void deleteFaultAddrPoolNum() { this->faultAddrPoolNum_ = nullptr;};
        inline int32_t getFaultAddrPoolNum() const { DARABONBA_PTR_GET_DEFAULT(faultAddrPoolNum_, 0) };
        inline RecoveryPlan& setFaultAddrPoolNum(int32_t faultAddrPoolNum) { DARABONBA_PTR_SET_VALUE(faultAddrPoolNum_, faultAddrPoolNum) };


        // lastExecuteTime Field Functions 
        bool hasLastExecuteTime() const { return this->lastExecuteTime_ != nullptr;};
        void deleteLastExecuteTime() { this->lastExecuteTime_ = nullptr;};
        inline string getLastExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTime_, "") };
        inline RecoveryPlan& setLastExecuteTime(string lastExecuteTime) { DARABONBA_PTR_SET_VALUE(lastExecuteTime_, lastExecuteTime) };


        // lastExecuteTimestamp Field Functions 
        bool hasLastExecuteTimestamp() const { return this->lastExecuteTimestamp_ != nullptr;};
        void deleteLastExecuteTimestamp() { this->lastExecuteTimestamp_ = nullptr;};
        inline int64_t getLastExecuteTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastExecuteTimestamp_, 0L) };
        inline RecoveryPlan& setLastExecuteTimestamp(int64_t lastExecuteTimestamp) { DARABONBA_PTR_SET_VALUE(lastExecuteTimestamp_, lastExecuteTimestamp) };


        // lastRollbackTime Field Functions 
        bool hasLastRollbackTime() const { return this->lastRollbackTime_ != nullptr;};
        void deleteLastRollbackTime() { this->lastRollbackTime_ = nullptr;};
        inline string getLastRollbackTime() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTime_, "") };
        inline RecoveryPlan& setLastRollbackTime(string lastRollbackTime) { DARABONBA_PTR_SET_VALUE(lastRollbackTime_, lastRollbackTime) };


        // lastRollbackTimestamp Field Functions 
        bool hasLastRollbackTimestamp() const { return this->lastRollbackTimestamp_ != nullptr;};
        void deleteLastRollbackTimestamp() { this->lastRollbackTimestamp_ = nullptr;};
        inline int64_t getLastRollbackTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRollbackTimestamp_, 0L) };
        inline RecoveryPlan& setLastRollbackTimestamp(int64_t lastRollbackTimestamp) { DARABONBA_PTR_SET_VALUE(lastRollbackTimestamp_, lastRollbackTimestamp) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RecoveryPlan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // recoveryPlanId Field Functions 
        bool hasRecoveryPlanId() const { return this->recoveryPlanId_ != nullptr;};
        void deleteRecoveryPlanId() { this->recoveryPlanId_ = nullptr;};
        inline int64_t getRecoveryPlanId() const { DARABONBA_PTR_GET_DEFAULT(recoveryPlanId_, 0L) };
        inline RecoveryPlan& setRecoveryPlanId(int64_t recoveryPlanId) { DARABONBA_PTR_SET_VALUE(recoveryPlanId_, recoveryPlanId) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline RecoveryPlan& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecoveryPlan& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline RecoveryPlan& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline RecoveryPlan& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        // The time when the disaster recovery plan was created.
        shared_ptr<string> createTime_ {};
        // The UNIX timestamp that indicates when the disaster recovery plan was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The number of faulty address pools.
        shared_ptr<int32_t> faultAddrPoolNum_ {};
        // The last time when the disaster recovery plan was executed.
        shared_ptr<string> lastExecuteTime_ {};
        // The UNIX timestamp that indicates the last time when the disaster recovery plan was executed.
        shared_ptr<int64_t> lastExecuteTimestamp_ {};
        // The last time when the disaster recovery plan was rolled back.
        shared_ptr<string> lastRollbackTime_ {};
        // The UNIX timestamp that indicates the last time when the disaster recovery plan was rolled back.
        shared_ptr<int64_t> lastRollbackTimestamp_ {};
        // The name of the disaster recovery plan.
        shared_ptr<string> name_ {};
        // The ID of the disaster recovery plan.
        shared_ptr<int64_t> recoveryPlanId_ {};
        // The remarks about the disaster recovery plan.
        shared_ptr<string> remark_ {};
        // The status of the disaster recovery plan. Valid values:
        // 
        // *   **UNEXECUTED**: The plan is not executed.
        // *   **EXECUTED**: The plan is executed.
        // *   **ROLLED_BACK**: The plan is rolled back.
        shared_ptr<string> status_ {};
        // The last time when the disaster recovery plan was updated.
        shared_ptr<string> updateTime_ {};
        // The UNIX timestamp that indicates the last time when the disaster recovery plan was updated.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->recoveryPlan_ == nullptr; };
      // recoveryPlan Field Functions 
      bool hasRecoveryPlan() const { return this->recoveryPlan_ != nullptr;};
      void deleteRecoveryPlan() { this->recoveryPlan_ = nullptr;};
      inline const vector<RecoveryPlans::RecoveryPlan> & getRecoveryPlan() const { DARABONBA_PTR_GET_CONST(recoveryPlan_, vector<RecoveryPlans::RecoveryPlan>) };
      inline vector<RecoveryPlans::RecoveryPlan> getRecoveryPlan() { DARABONBA_PTR_GET(recoveryPlan_, vector<RecoveryPlans::RecoveryPlan>) };
      inline RecoveryPlans& setRecoveryPlan(const vector<RecoveryPlans::RecoveryPlan> & recoveryPlan) { DARABONBA_PTR_SET_VALUE(recoveryPlan_, recoveryPlan) };
      inline RecoveryPlans& setRecoveryPlan(vector<RecoveryPlans::RecoveryPlan> && recoveryPlan) { DARABONBA_PTR_SET_RVALUE(recoveryPlan_, recoveryPlan) };


    protected:
      shared_ptr<vector<RecoveryPlans::RecoveryPlan>> recoveryPlan_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->recoveryPlans_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGtmRecoveryPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGtmRecoveryPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoveryPlans Field Functions 
    bool hasRecoveryPlans() const { return this->recoveryPlans_ != nullptr;};
    void deleteRecoveryPlans() { this->recoveryPlans_ = nullptr;};
    inline const DescribeGtmRecoveryPlansResponseBody::RecoveryPlans & getRecoveryPlans() const { DARABONBA_PTR_GET_CONST(recoveryPlans_, DescribeGtmRecoveryPlansResponseBody::RecoveryPlans) };
    inline DescribeGtmRecoveryPlansResponseBody::RecoveryPlans getRecoveryPlans() { DARABONBA_PTR_GET(recoveryPlans_, DescribeGtmRecoveryPlansResponseBody::RecoveryPlans) };
    inline DescribeGtmRecoveryPlansResponseBody& setRecoveryPlans(const DescribeGtmRecoveryPlansResponseBody::RecoveryPlans & recoveryPlans) { DARABONBA_PTR_SET_VALUE(recoveryPlans_, recoveryPlans) };
    inline DescribeGtmRecoveryPlansResponseBody& setRecoveryPlans(DescribeGtmRecoveryPlansResponseBody::RecoveryPlans && recoveryPlans) { DARABONBA_PTR_SET_RVALUE(recoveryPlans_, recoveryPlans) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmRecoveryPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeGtmRecoveryPlansResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeGtmRecoveryPlansResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The details about the queried disaster recovery plans.
    shared_ptr<DescribeGtmRecoveryPlansResponseBody::RecoveryPlans> recoveryPlans_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
