// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeChangeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChangeOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeChangeOrderResponseBody() = default ;
    DescribeChangeOrderResponseBody(const DescribeChangeOrderResponseBody &) = default ;
    DescribeChangeOrderResponseBody(DescribeChangeOrderResponseBody &&) = default ;
    DescribeChangeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChangeOrderResponseBody() = default ;
    DescribeChangeOrderResponseBody& operator=(const DescribeChangeOrderResponseBody &) = default ;
    DescribeChangeOrderResponseBody& operator=(DescribeChangeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ApplicationEnableGreyTagRoute, applicationEnableGreyTagRoute_);
        DARABONBA_PTR_TO_JSON(ApplicationUpdateStrategy, applicationUpdateStrategy_);
        DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_TO_JSON(Auto, auto_);
        DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
        DARABONBA_PTR_TO_JSON(BatchType, batchType_);
        DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
        DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_TO_JSON(CoType, coType_);
        DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CurrentPipelineId, currentPipelineId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Pipelines, pipelines_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_TO_JSON(SupportRollback, supportRollback_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ApplicationEnableGreyTagRoute, applicationEnableGreyTagRoute_);
        DARABONBA_PTR_FROM_JSON(ApplicationUpdateStrategy, applicationUpdateStrategy_);
        DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_FROM_JSON(Auto, auto_);
        DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
        DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
        DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
        DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
        DARABONBA_PTR_FROM_JSON(CoType, coType_);
        DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CurrentPipelineId, currentPipelineId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Pipelines, pipelines_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
        DARABONBA_PTR_FROM_JSON(SupportRollback, supportRollback_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Pipelines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pipelines& obj) { 
          DARABONBA_PTR_TO_JSON(BatchType, batchType_);
          DARABONBA_PTR_TO_JSON(ParallelCount, parallelCount_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Pipelines& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
          DARABONBA_PTR_FROM_JSON(ParallelCount, parallelCount_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Pipelines() = default ;
        Pipelines(const Pipelines &) = default ;
        Pipelines(Pipelines &&) = default ;
        Pipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pipelines() = default ;
        Pipelines& operator=(const Pipelines &) = default ;
        Pipelines& operator=(Pipelines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchType_ == nullptr
        && this->parallelCount_ == nullptr && this->pipelineId_ == nullptr && this->pipelineName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->updateTime_ == nullptr; };
        // batchType Field Functions 
        bool hasBatchType() const { return this->batchType_ != nullptr;};
        void deleteBatchType() { this->batchType_ = nullptr;};
        inline int32_t getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, 0) };
        inline Pipelines& setBatchType(int32_t batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


        // parallelCount Field Functions 
        bool hasParallelCount() const { return this->parallelCount_ != nullptr;};
        void deleteParallelCount() { this->parallelCount_ = nullptr;};
        inline int32_t getParallelCount() const { DARABONBA_PTR_GET_DEFAULT(parallelCount_, 0) };
        inline Pipelines& setParallelCount(int32_t parallelCount) { DARABONBA_PTR_SET_VALUE(parallelCount_, parallelCount) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline Pipelines& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // pipelineName Field Functions 
        bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
        void deletePipelineName() { this->pipelineName_ = nullptr;};
        inline string getPipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
        inline Pipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Pipelines& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Pipelines& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Pipelines& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The batch type.
        shared_ptr<int32_t> batchType_ {};
        // The number of parallel tasks in a batch.
        shared_ptr<int32_t> parallelCount_ {};
        // The ID of the batch.
        shared_ptr<string> pipelineId_ {};
        // The name of the batch.
        shared_ptr<string> pipelineName_ {};
        // The time when the batch processing started.
        shared_ptr<int64_t> startTime_ {};
        // The status of the batch. Valid values:
        // 
        // *   **0**: The batch is being prepared.
        // *   **1**: The batch is being processed.
        // *   **2**: The batch was processed.
        // *   **3**: The batch failed to be processed.
        // *   **6**: The batch processing was terminated.
        // *   **8**: The execution process is pending. You must manually release the batch.
        // *   **9**: The execution process is pending. SAE will automatically release the batch.
        // *   **10**: The batch failed to be processed due to a system exception.
        // *   **11**: The batch is pending approval.
        // *   **12**: The batch is approved and is pending execution.
        shared_ptr<int32_t> status_ {};
        // The time when the batch information was last modified.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->applicationEnableGreyTagRoute_ == nullptr && this->applicationUpdateStrategy_ == nullptr && this->approvalId_ == nullptr && this->auto_ == nullptr
        && this->batchCount_ == nullptr && this->batchType_ == nullptr && this->batchWaitTime_ == nullptr && this->changeOrderId_ == nullptr && this->coType_ == nullptr
        && this->coTypeCode_ == nullptr && this->createTime_ == nullptr && this->currentPipelineId_ == nullptr && this->description_ == nullptr && this->errorMessage_ == nullptr
        && this->pipelines_ == nullptr && this->status_ == nullptr && this->subStatus_ == nullptr && this->supportRollback_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // applicationEnableGreyTagRoute Field Functions 
      bool hasApplicationEnableGreyTagRoute() const { return this->applicationEnableGreyTagRoute_ != nullptr;};
      void deleteApplicationEnableGreyTagRoute() { this->applicationEnableGreyTagRoute_ = nullptr;};
      inline bool getApplicationEnableGreyTagRoute() const { DARABONBA_PTR_GET_DEFAULT(applicationEnableGreyTagRoute_, false) };
      inline Data& setApplicationEnableGreyTagRoute(bool applicationEnableGreyTagRoute) { DARABONBA_PTR_SET_VALUE(applicationEnableGreyTagRoute_, applicationEnableGreyTagRoute) };


      // applicationUpdateStrategy Field Functions 
      bool hasApplicationUpdateStrategy() const { return this->applicationUpdateStrategy_ != nullptr;};
      void deleteApplicationUpdateStrategy() { this->applicationUpdateStrategy_ = nullptr;};
      inline string getApplicationUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(applicationUpdateStrategy_, "") };
      inline Data& setApplicationUpdateStrategy(string applicationUpdateStrategy) { DARABONBA_PTR_SET_VALUE(applicationUpdateStrategy_, applicationUpdateStrategy) };


      // approvalId Field Functions 
      bool hasApprovalId() const { return this->approvalId_ != nullptr;};
      void deleteApprovalId() { this->approvalId_ = nullptr;};
      inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
      inline Data& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


      // auto Field Functions 
      bool hasAuto() const { return this->auto_ != nullptr;};
      void deleteAuto() { this->auto_ = nullptr;};
      inline bool getAuto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
      inline Data& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


      // batchCount Field Functions 
      bool hasBatchCount() const { return this->batchCount_ != nullptr;};
      void deleteBatchCount() { this->batchCount_ = nullptr;};
      inline int32_t getBatchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
      inline Data& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


      // batchType Field Functions 
      bool hasBatchType() const { return this->batchType_ != nullptr;};
      void deleteBatchType() { this->batchType_ = nullptr;};
      inline string getBatchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
      inline Data& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


      // batchWaitTime Field Functions 
      bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
      void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
      inline int32_t getBatchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
      inline Data& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline Data& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


      // coType Field Functions 
      bool hasCoType() const { return this->coType_ != nullptr;};
      void deleteCoType() { this->coType_ = nullptr;};
      inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
      inline Data& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


      // coTypeCode Field Functions 
      bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
      void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
      inline string getCoTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
      inline Data& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentPipelineId Field Functions 
      bool hasCurrentPipelineId() const { return this->currentPipelineId_ != nullptr;};
      void deleteCurrentPipelineId() { this->currentPipelineId_ = nullptr;};
      inline string getCurrentPipelineId() const { DARABONBA_PTR_GET_DEFAULT(currentPipelineId_, "") };
      inline Data& setCurrentPipelineId(string currentPipelineId) { DARABONBA_PTR_SET_VALUE(currentPipelineId_, currentPipelineId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // pipelines Field Functions 
      bool hasPipelines() const { return this->pipelines_ != nullptr;};
      void deletePipelines() { this->pipelines_ = nullptr;};
      inline const vector<Data::Pipelines> & getPipelines() const { DARABONBA_PTR_GET_CONST(pipelines_, vector<Data::Pipelines>) };
      inline vector<Data::Pipelines> getPipelines() { DARABONBA_PTR_GET(pipelines_, vector<Data::Pipelines>) };
      inline Data& setPipelines(const vector<Data::Pipelines> & pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };
      inline Data& setPipelines(vector<Data::Pipelines> && pipelines) { DARABONBA_PTR_SET_RVALUE(pipelines_, pipelines) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subStatus Field Functions 
      bool hasSubStatus() const { return this->subStatus_ != nullptr;};
      void deleteSubStatus() { this->subStatus_ = nullptr;};
      inline int32_t getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, 0) };
      inline Data& setSubStatus(int32_t subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


      // supportRollback Field Functions 
      bool hasSupportRollback() const { return this->supportRollback_ != nullptr;};
      void deleteSupportRollback() { this->supportRollback_ = nullptr;};
      inline bool getSupportRollback() const { DARABONBA_PTR_GET_DEFAULT(supportRollback_, false) };
      inline Data& setSupportRollback(bool supportRollback) { DARABONBA_PTR_SET_VALUE(supportRollback_, supportRollback) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      shared_ptr<bool> applicationEnableGreyTagRoute_ {};
      shared_ptr<string> applicationUpdateStrategy_ {};
      // The approval ID of the change order.
      shared_ptr<string> approvalId_ {};
      // Indicates whether SAE automatically releases the batches. Valid values:
      // 
      // *   **true**: SAE automatically releases the batches.
      // *   **false**: SAE does not automatically release the batches.
      shared_ptr<bool> auto_ {};
      // The number of release batches.
      shared_ptr<int32_t> batchCount_ {};
      // The processing method for the batches. Valid values:
      // 
      // *   **auto**: SAE automatically releases the batches.
      // *   **Manual**: You must manually release the batches.
      shared_ptr<string> batchType_ {};
      // The interval between batches in a phased release. SAE automatically releases batches at the specified interval. Unit: minutes.
      shared_ptr<int32_t> batchWaitTime_ {};
      // The ID of the change order.
      shared_ptr<string> changeOrderId_ {};
      // The change type, which corresponds to the **CoTypeCode** parameter.
      shared_ptr<string> coType_ {};
      // The code of the change type. Valid values:
      // 
      // *   **CoBindSlb**: associates a Sever Load Balancer (SLB) instance with the application.
      // *   **CoUnbindSlb**: disassociates the SLB instance from the application.
      // *   **CoCreateApp**: creates the application.
      // *   **CoDeleteApp**: deletes the application.
      // *   **CoDeploy**: deploys the application.
      // *   **CoRestartApplication**: restarts the application.
      // *   **CoRollback**: rolls back the application.
      // *   **CoScaleIn**: scales in the application.
      // *   **CoScaleOut**: scales out the application.
      // *   **CoStart**: starts the application.
      // *   **CoStop**: stops the application.
      // *   **CoRescaleApplicationVertically**: modifies the instance type.
      // *   **CoDeployHistroy**: rolls back the application to a historical version.
      // *   **CoBindNas**: associates a NAS file system with the application.
      // *   **CoUnbindNas**: disassociates the NAS file system from the application.
      // *   **CoBatchStartApplication**: starts multiple applications concurrently.
      // *   **CoBatchStopApplication**: stops multiple applications concurrently.
      // *   **CoRestartInstances**: restarts the instances.
      // *   **CoDeleteInstances**: deletes the instances.
      // *   **CoScaleInAppWithInstances**: reduces the specified number of application instances.
      shared_ptr<string> coTypeCode_ {};
      // The time when the change order was created.
      shared_ptr<string> createTime_ {};
      // The ID of the current batch.
      shared_ptr<string> currentPipelineId_ {};
      // The description of the change order.
      shared_ptr<string> description_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The batch information.
      shared_ptr<vector<Data::Pipelines>> pipelines_ {};
      // The status of the change order. Valid values:
      // 
      // *   **0**: The change order is being prepared.
      // *   **1**: The change order is being executed.
      // *   **2**: The change order was executed.
      // *   **3**: The change order failed to be executed.
      // *   **6**: The change order was terminated.
      // *   **8**: The execution process is pending. You must manually release the batches.
      // *   **9**: The execution process is pending. SAE will automatically release the batches.
      // *   **10**: The execution failed due to a system exception.
      // *   **11**: The change order is pending approval.
      // *   **12**: The change order is approved and is pending execution.
      shared_ptr<int32_t> status_ {};
      // The substatus of the change order. This parameter indicates whether an exception occurred while the change order was being executed. Valid values:
      // 
      // *   **0**: No exception occurred.
      // *   **1**: An exception occurred. For example, if an error occurs during a phased release, you must manually roll back the application. In this case, the change order cannot be completed, so the Status parameter is still displayed as "1", which indicates that the change order is being executed. You can check the value of this parameter to determine whether an exception occurs.
      shared_ptr<int32_t> subStatus_ {};
      // Indicates whether the application can be rolled back. Valid values:
      // 
      // *   **true**: The application can be rolled back.
      // *   **false**: The application cannot be rolled back.
      shared_ptr<bool> supportRollback_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeChangeOrderResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeChangeOrderResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeChangeOrderResponseBody::Data) };
    inline DescribeChangeOrderResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeChangeOrderResponseBody::Data) };
    inline DescribeChangeOrderResponseBody& setData(const DescribeChangeOrderResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeChangeOrderResponseBody& setData(DescribeChangeOrderResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeChangeOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeChangeOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChangeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeChangeOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeChangeOrderResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The details of the change order.
    shared_ptr<DescribeChangeOrderResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // *   If the call is successful, the **ErrorCode** parameter is not returned.
    // *   If the call fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the information of the change order was queried. Valid values:
    // 
    // *   **true**: The information was queried.
    // *   **false**: The information failed to be queried.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
