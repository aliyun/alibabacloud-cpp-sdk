// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTaskAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SupportCancel, supportCancel_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProcess, taskProcess_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(OperationProgressSet, operationProgressSet_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SupportCancel, supportCancel_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProcess, taskProcess_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTaskAttributeResponseBody() = default ;
    DescribeTaskAttributeResponseBody(const DescribeTaskAttributeResponseBody &) = default ;
    DescribeTaskAttributeResponseBody(DescribeTaskAttributeResponseBody &&) = default ;
    DescribeTaskAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskAttributeResponseBody() = default ;
    DescribeTaskAttributeResponseBody& operator=(const DescribeTaskAttributeResponseBody &) = default ;
    DescribeTaskAttributeResponseBody& operator=(DescribeTaskAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationProgressSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationProgressSet& obj) { 
        DARABONBA_PTR_TO_JSON(OperationProgress, operationProgress_);
      };
      friend void from_json(const Darabonba::Json& j, OperationProgressSet& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationProgress, operationProgress_);
      };
      OperationProgressSet() = default ;
      OperationProgressSet(const OperationProgressSet &) = default ;
      OperationProgressSet(OperationProgressSet &&) = default ;
      OperationProgressSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationProgressSet() = default ;
      OperationProgressSet& operator=(const OperationProgressSet &) = default ;
      OperationProgressSet& operator=(OperationProgressSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OperationProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OperationProgress& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
          DARABONBA_PTR_TO_JSON(RelatedItemSet, relatedItemSet_);
        };
        friend void from_json(const Darabonba::Json& j, OperationProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
          DARABONBA_PTR_FROM_JSON(RelatedItemSet, relatedItemSet_);
        };
        OperationProgress() = default ;
        OperationProgress(const OperationProgress &) = default ;
        OperationProgress(OperationProgress &&) = default ;
        OperationProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OperationProgress() = default ;
        OperationProgress& operator=(const OperationProgress &) = default ;
        OperationProgress& operator=(OperationProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelatedItemSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelatedItemSet& obj) { 
            DARABONBA_PTR_TO_JSON(RelatedItem, relatedItem_);
          };
          friend void from_json(const Darabonba::Json& j, RelatedItemSet& obj) { 
            DARABONBA_PTR_FROM_JSON(RelatedItem, relatedItem_);
          };
          RelatedItemSet() = default ;
          RelatedItemSet(const RelatedItemSet &) = default ;
          RelatedItemSet(RelatedItemSet &&) = default ;
          RelatedItemSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelatedItemSet() = default ;
          RelatedItemSet& operator=(const RelatedItemSet &) = default ;
          RelatedItemSet& operator=(RelatedItemSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RelatedItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RelatedItem& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, RelatedItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            RelatedItem() = default ;
            RelatedItem(const RelatedItem &) = default ;
            RelatedItem(RelatedItem &&) = default ;
            RelatedItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RelatedItem() = default ;
            RelatedItem& operator=(const RelatedItem &) = default ;
            RelatedItem& operator=(RelatedItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline RelatedItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline RelatedItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The name of the related item.
            shared_ptr<string> name_ {};
            // The value of the related item.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->relatedItem_ == nullptr; };
          // relatedItem Field Functions 
          bool hasRelatedItem() const { return this->relatedItem_ != nullptr;};
          void deleteRelatedItem() { this->relatedItem_ = nullptr;};
          inline const vector<RelatedItemSet::RelatedItem> & getRelatedItem() const { DARABONBA_PTR_GET_CONST(relatedItem_, vector<RelatedItemSet::RelatedItem>) };
          inline vector<RelatedItemSet::RelatedItem> getRelatedItem() { DARABONBA_PTR_GET(relatedItem_, vector<RelatedItemSet::RelatedItem>) };
          inline RelatedItemSet& setRelatedItem(const vector<RelatedItemSet::RelatedItem> & relatedItem) { DARABONBA_PTR_SET_VALUE(relatedItem_, relatedItem) };
          inline RelatedItemSet& setRelatedItem(vector<RelatedItemSet::RelatedItem> && relatedItem) { DARABONBA_PTR_SET_RVALUE(relatedItem_, relatedItem) };


        protected:
          shared_ptr<vector<RelatedItemSet::RelatedItem>> relatedItem_ {};
        };

        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->operationStatus_ == nullptr && this->relatedItemSet_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline OperationProgress& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline OperationProgress& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // operationStatus Field Functions 
        bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
        void deleteOperationStatus() { this->operationStatus_ = nullptr;};
        inline string getOperationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
        inline OperationProgress& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


        // relatedItemSet Field Functions 
        bool hasRelatedItemSet() const { return this->relatedItemSet_ != nullptr;};
        void deleteRelatedItemSet() { this->relatedItemSet_ = nullptr;};
        inline const OperationProgress::RelatedItemSet & getRelatedItemSet() const { DARABONBA_PTR_GET_CONST(relatedItemSet_, OperationProgress::RelatedItemSet) };
        inline OperationProgress::RelatedItemSet getRelatedItemSet() { DARABONBA_PTR_GET(relatedItemSet_, OperationProgress::RelatedItemSet) };
        inline OperationProgress& setRelatedItemSet(const OperationProgress::RelatedItemSet & relatedItemSet) { DARABONBA_PTR_SET_VALUE(relatedItemSet_, relatedItemSet) };
        inline OperationProgress& setRelatedItemSet(OperationProgress::RelatedItemSet && relatedItemSet) { DARABONBA_PTR_SET_RVALUE(relatedItemSet_, relatedItemSet) };


      protected:
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The status of the operation.
        shared_ptr<string> operationStatus_ {};
        // The type of resource information.
        shared_ptr<OperationProgress::RelatedItemSet> relatedItemSet_ {};
      };

      virtual bool empty() const override { return this->operationProgress_ == nullptr; };
      // operationProgress Field Functions 
      bool hasOperationProgress() const { return this->operationProgress_ != nullptr;};
      void deleteOperationProgress() { this->operationProgress_ = nullptr;};
      inline const vector<OperationProgressSet::OperationProgress> & getOperationProgress() const { DARABONBA_PTR_GET_CONST(operationProgress_, vector<OperationProgressSet::OperationProgress>) };
      inline vector<OperationProgressSet::OperationProgress> getOperationProgress() { DARABONBA_PTR_GET(operationProgress_, vector<OperationProgressSet::OperationProgress>) };
      inline OperationProgressSet& setOperationProgress(const vector<OperationProgressSet::OperationProgress> & operationProgress) { DARABONBA_PTR_SET_VALUE(operationProgress_, operationProgress) };
      inline OperationProgressSet& setOperationProgress(vector<OperationProgressSet::OperationProgress> && operationProgress) { DARABONBA_PTR_SET_RVALUE(operationProgress_, operationProgress) };


    protected:
      shared_ptr<vector<OperationProgressSet::OperationProgress>> operationProgress_ {};
    };

    virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->failedCount_ == nullptr && this->finishedTime_ == nullptr && this->operationProgressSet_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->successCount_ == nullptr && this->supportCancel_ == nullptr && this->taskAction_ == nullptr && this->taskId_ == nullptr && this->taskProcess_ == nullptr
        && this->taskStatus_ == nullptr && this->totalCount_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeTaskAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeTaskAttributeResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // operationProgressSet Field Functions 
    bool hasOperationProgressSet() const { return this->operationProgressSet_ != nullptr;};
    void deleteOperationProgressSet() { this->operationProgressSet_ = nullptr;};
    inline const DescribeTaskAttributeResponseBody::OperationProgressSet & getOperationProgressSet() const { DARABONBA_PTR_GET_CONST(operationProgressSet_, DescribeTaskAttributeResponseBody::OperationProgressSet) };
    inline DescribeTaskAttributeResponseBody::OperationProgressSet getOperationProgressSet() { DARABONBA_PTR_GET(operationProgressSet_, DescribeTaskAttributeResponseBody::OperationProgressSet) };
    inline DescribeTaskAttributeResponseBody& setOperationProgressSet(const DescribeTaskAttributeResponseBody::OperationProgressSet & operationProgressSet) { DARABONBA_PTR_SET_VALUE(operationProgressSet_, operationProgressSet) };
    inline DescribeTaskAttributeResponseBody& setOperationProgressSet(DescribeTaskAttributeResponseBody::OperationProgressSet && operationProgressSet) { DARABONBA_PTR_SET_RVALUE(operationProgressSet_, operationProgressSet) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTaskAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // supportCancel Field Functions 
    bool hasSupportCancel() const { return this->supportCancel_ != nullptr;};
    void deleteSupportCancel() { this->supportCancel_ = nullptr;};
    inline string getSupportCancel() const { DARABONBA_PTR_GET_DEFAULT(supportCancel_, "") };
    inline DescribeTaskAttributeResponseBody& setSupportCancel(string supportCancel) { DARABONBA_PTR_SET_VALUE(supportCancel_, supportCancel) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProcess Field Functions 
    bool hasTaskProcess() const { return this->taskProcess_ != nullptr;};
    void deleteTaskProcess() { this->taskProcess_ = nullptr;};
    inline string getTaskProcess() const { DARABONBA_PTR_GET_DEFAULT(taskProcess_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskProcess(string taskProcess) { DARABONBA_PTR_SET_VALUE(taskProcess_, taskProcess) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeTaskAttributeResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTaskAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The time when the task was created.
    shared_ptr<string> creationTime_ {};
    // The number of failed tasks.
    shared_ptr<int32_t> failedCount_ {};
    // The time when the task was completed.
    shared_ptr<string> finishedTime_ {};
    // The return data of the task.
    shared_ptr<DescribeTaskAttributeResponseBody::OperationProgressSet> operationProgressSet_ {};
    // The region ID of the task.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of completed tasks.
    shared_ptr<int32_t> successCount_ {};
    // Indicates whether the task can be canceled by calling the [CancelTask](https://help.aliyun.com/document_detail/25624.html) operation. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> supportCancel_ {};
    // The name of the operation that generated the task.
    shared_ptr<string> taskAction_ {};
    // The ID of the task.
    shared_ptr<string> taskId_ {};
    // The progress of the task.
    shared_ptr<string> taskProcess_ {};
    // The status of the task.
    shared_ptr<string> taskStatus_ {};
    // The total number of tasks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
