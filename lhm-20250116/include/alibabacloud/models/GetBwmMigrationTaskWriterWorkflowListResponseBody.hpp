// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBWMMIGRATIONTASKWRITERWORKFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBWMMIGRATIONTASKWRITERWORKFLOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetBwmMigrationTaskWriterWorkflowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBwmMigrationTaskWriterWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(empty, empty_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(notEmpty, notEmpty_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, GetBwmMigrationTaskWriterWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(empty, empty_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(notEmpty, notEmpty_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
    };
    GetBwmMigrationTaskWriterWorkflowListResponseBody() = default ;
    GetBwmMigrationTaskWriterWorkflowListResponseBody(const GetBwmMigrationTaskWriterWorkflowListResponseBody &) = default ;
    GetBwmMigrationTaskWriterWorkflowListResponseBody(GetBwmMigrationTaskWriterWorkflowListResponseBody &&) = default ;
    GetBwmMigrationTaskWriterWorkflowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBwmMigrationTaskWriterWorkflowListResponseBody() = default ;
    GetBwmMigrationTaskWriterWorkflowListResponseBody& operator=(const GetBwmMigrationTaskWriterWorkflowListResponseBody &) = default ;
    GetBwmMigrationTaskWriterWorkflowListResponseBody& operator=(GetBwmMigrationTaskWriterWorkflowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cron, cron_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(submitDetail, submitDetail_);
        DARABONBA_PTR_TO_JSON(submitStatus, submitStatus_);
        DARABONBA_PTR_TO_JSON(targetWorkflowId, targetWorkflowId_);
        DARABONBA_PTR_TO_JSON(targetWorkflowName, targetWorkflowName_);
        DARABONBA_PTR_TO_JSON(taskNodeCount, taskNodeCount_);
        DARABONBA_PTR_TO_JSON(workflowId, workflowId_);
        DARABONBA_PTR_TO_JSON(workflowName, workflowName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cron, cron_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(submitDetail, submitDetail_);
        DARABONBA_PTR_FROM_JSON(submitStatus, submitStatus_);
        DARABONBA_PTR_FROM_JSON(targetWorkflowId, targetWorkflowId_);
        DARABONBA_PTR_FROM_JSON(targetWorkflowName, targetWorkflowName_);
        DARABONBA_PTR_FROM_JSON(taskNodeCount, taskNodeCount_);
        DARABONBA_PTR_FROM_JSON(workflowId, workflowId_);
        DARABONBA_PTR_FROM_JSON(workflowName, workflowName_);
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
      virtual bool empty() const override { return this->cron_ == nullptr
        && this->id_ == nullptr && this->submitDetail_ == nullptr && this->submitStatus_ == nullptr && this->targetWorkflowId_ == nullptr && this->targetWorkflowName_ == nullptr
        && this->taskNodeCount_ == nullptr && this->workflowId_ == nullptr && this->workflowName_ == nullptr; };
      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Data& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // submitDetail Field Functions 
      bool hasSubmitDetail() const { return this->submitDetail_ != nullptr;};
      void deleteSubmitDetail() { this->submitDetail_ = nullptr;};
      inline string getSubmitDetail() const { DARABONBA_PTR_GET_DEFAULT(submitDetail_, "") };
      inline Data& setSubmitDetail(string submitDetail) { DARABONBA_PTR_SET_VALUE(submitDetail_, submitDetail) };


      // submitStatus Field Functions 
      bool hasSubmitStatus() const { return this->submitStatus_ != nullptr;};
      void deleteSubmitStatus() { this->submitStatus_ = nullptr;};
      inline string getSubmitStatus() const { DARABONBA_PTR_GET_DEFAULT(submitStatus_, "") };
      inline Data& setSubmitStatus(string submitStatus) { DARABONBA_PTR_SET_VALUE(submitStatus_, submitStatus) };


      // targetWorkflowId Field Functions 
      bool hasTargetWorkflowId() const { return this->targetWorkflowId_ != nullptr;};
      void deleteTargetWorkflowId() { this->targetWorkflowId_ = nullptr;};
      inline string getTargetWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(targetWorkflowId_, "") };
      inline Data& setTargetWorkflowId(string targetWorkflowId) { DARABONBA_PTR_SET_VALUE(targetWorkflowId_, targetWorkflowId) };


      // targetWorkflowName Field Functions 
      bool hasTargetWorkflowName() const { return this->targetWorkflowName_ != nullptr;};
      void deleteTargetWorkflowName() { this->targetWorkflowName_ = nullptr;};
      inline string getTargetWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(targetWorkflowName_, "") };
      inline Data& setTargetWorkflowName(string targetWorkflowName) { DARABONBA_PTR_SET_VALUE(targetWorkflowName_, targetWorkflowName) };


      // taskNodeCount Field Functions 
      bool hasTaskNodeCount() const { return this->taskNodeCount_ != nullptr;};
      void deleteTaskNodeCount() { this->taskNodeCount_ = nullptr;};
      inline int32_t getTaskNodeCount() const { DARABONBA_PTR_GET_DEFAULT(taskNodeCount_, 0) };
      inline Data& setTaskNodeCount(int32_t taskNodeCount) { DARABONBA_PTR_SET_VALUE(taskNodeCount_, taskNodeCount) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
      inline Data& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      // workflowName Field Functions 
      bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
      void deleteWorkflowName() { this->workflowName_ = nullptr;};
      inline string getWorkflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
      inline Data& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


    protected:
      // The cron expression.
      shared_ptr<string> cron_ {};
      // The database primary key ID.
      shared_ptr<int32_t> id_ {};
      // The submit failure error message.
      shared_ptr<string> submitDetail_ {};
      // Filter by status. Valid values:
      // - WRT_INIT: Submit not started.
      // - WRT_RUN: Submitting.
      // - WRT_SUCC: All submitted successfully.
      // - WRT_FAIL: All submissions failed.
      // - WRT_PART_FAIL: Some submissions failed.
      // - DPY_SUCC: Published successfully.
      // - DPY_FAIL: Publish failed.
      shared_ptr<string> submitStatus_ {};
      // The workflow ID written to the target side.
      shared_ptr<string> targetWorkflowId_ {};
      // The workflow name on the target side.
      shared_ptr<string> targetWorkflowName_ {};
      // The number of nodes.
      shared_ptr<int32_t> taskNodeCount_ {};
      // The actual workflow ID.
      shared_ptr<string> workflowId_ {};
      // The workflow name.
      shared_ptr<string> workflowName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->empty_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->notEmpty_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data>) };
    inline vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data>) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setData(const vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setData(vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // empty Field Functions 
    bool hasEmpty() const { return this->empty_ != nullptr;};
    void deleteEmpty() { this->empty_ = nullptr;};
    inline bool getEmpty() const { DARABONBA_PTR_GET_DEFAULT(empty_, false) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setEmpty(bool empty) { DARABONBA_PTR_SET_VALUE(empty_, empty) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // notEmpty Field Functions 
    bool hasNotEmpty() const { return this->notEmpty_ != nullptr;};
    void deleteNotEmpty() { this->notEmpty_ = nullptr;};
    inline bool getNotEmpty() const { DARABONBA_PTR_GET_DEFAULT(notEmpty_, false) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setNotEmpty(bool notEmpty) { DARABONBA_PTR_SET_VALUE(notEmpty_, notEmpty) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline GetBwmMigrationTaskWriterWorkflowListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The response data.
    shared_ptr<vector<GetBwmMigrationTaskWriterWorkflowListResponseBody::Data>> data_ {};
    // Indicates whether the result is empty.
    shared_ptr<bool> empty_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // Indicates whether the result is not empty.
    shared_ptr<bool> notEmpty_ {};
    // The page number.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, check errCode and errMessage for details.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
