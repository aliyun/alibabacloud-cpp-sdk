// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryApprovalInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApprovalInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApprovalInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryApprovalInfoResponseBody() = default ;
    QueryApprovalInfoResponseBody(const QueryApprovalInfoResponseBody &) = default ;
    QueryApprovalInfoResponseBody(QueryApprovalInfoResponseBody &&) = default ;
    QueryApprovalInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApprovalInfoResponseBody() = default ;
    QueryApprovalInfoResponseBody& operator=(const QueryApprovalInfoResponseBody &) = default ;
    QueryApprovalInfoResponseBody& operator=(QueryApprovalInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Start, start_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicantId, applicantId_);
          DARABONBA_PTR_TO_JSON(ApplicantName, applicantName_);
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_TO_JSON(ApproverId, approverId_);
          DARABONBA_PTR_TO_JSON(ApproverName, approverName_);
          DARABONBA_PTR_TO_JSON(DeleteFlag, deleteFlag_);
          DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_TO_JSON(FlagStatus, flagStatus_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HandleReason, handleReason_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicantId, applicantId_);
          DARABONBA_PTR_FROM_JSON(ApplicantName, applicantName_);
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_FROM_JSON(ApproverId, approverId_);
          DARABONBA_PTR_FROM_JSON(ApproverName, approverName_);
          DARABONBA_PTR_FROM_JSON(DeleteFlag, deleteFlag_);
          DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
          DARABONBA_PTR_FROM_JSON(FlagStatus, flagStatus_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HandleReason, handleReason_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
        virtual bool empty() const override { return this->applicantId_ == nullptr
        && this->applicantName_ == nullptr && this->applicationId_ == nullptr && this->applyReason_ == nullptr && this->approverId_ == nullptr && this->approverName_ == nullptr
        && this->deleteFlag_ == nullptr && this->expireDate_ == nullptr && this->flagStatus_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->handleReason_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->workspaceName_ == nullptr; };
        // applicantId Field Functions 
        bool hasApplicantId() const { return this->applicantId_ != nullptr;};
        void deleteApplicantId() { this->applicantId_ = nullptr;};
        inline string getApplicantId() const { DARABONBA_PTR_GET_DEFAULT(applicantId_, "") };
        inline Data& setApplicantId(string applicantId) { DARABONBA_PTR_SET_VALUE(applicantId_, applicantId) };


        // applicantName Field Functions 
        bool hasApplicantName() const { return this->applicantName_ != nullptr;};
        void deleteApplicantName() { this->applicantName_ = nullptr;};
        inline string getApplicantName() const { DARABONBA_PTR_GET_DEFAULT(applicantName_, "") };
        inline Data& setApplicantName(string applicantName) { DARABONBA_PTR_SET_VALUE(applicantName_, applicantName) };


        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
        inline Data& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applyReason Field Functions 
        bool hasApplyReason() const { return this->applyReason_ != nullptr;};
        void deleteApplyReason() { this->applyReason_ = nullptr;};
        inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
        inline Data& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


        // approverId Field Functions 
        bool hasApproverId() const { return this->approverId_ != nullptr;};
        void deleteApproverId() { this->approverId_ = nullptr;};
        inline string getApproverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
        inline Data& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


        // approverName Field Functions 
        bool hasApproverName() const { return this->approverName_ != nullptr;};
        void deleteApproverName() { this->approverName_ = nullptr;};
        inline string getApproverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
        inline Data& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


        // deleteFlag Field Functions 
        bool hasDeleteFlag() const { return this->deleteFlag_ != nullptr;};
        void deleteDeleteFlag() { this->deleteFlag_ = nullptr;};
        inline bool getDeleteFlag() const { DARABONBA_PTR_GET_DEFAULT(deleteFlag_, false) };
        inline Data& setDeleteFlag(bool deleteFlag) { DARABONBA_PTR_SET_VALUE(deleteFlag_, deleteFlag) };


        // expireDate Field Functions 
        bool hasExpireDate() const { return this->expireDate_ != nullptr;};
        void deleteExpireDate() { this->expireDate_ = nullptr;};
        inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
        inline Data& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


        // flagStatus Field Functions 
        bool hasFlagStatus() const { return this->flagStatus_ != nullptr;};
        void deleteFlagStatus() { this->flagStatus_ = nullptr;};
        inline int32_t getFlagStatus() const { DARABONBA_PTR_GET_DEFAULT(flagStatus_, 0) };
        inline Data& setFlagStatus(int32_t flagStatus) { DARABONBA_PTR_SET_VALUE(flagStatus_, flagStatus) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // handleReason Field Functions 
        bool hasHandleReason() const { return this->handleReason_ != nullptr;};
        void deleteHandleReason() { this->handleReason_ = nullptr;};
        inline string getHandleReason() const { DARABONBA_PTR_GET_DEFAULT(handleReason_, "") };
        inline Data& setHandleReason(string handleReason) { DARABONBA_PTR_SET_VALUE(handleReason_, handleReason) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline Data& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // Applicant\\"s user ID, qbi user ID.
        shared_ptr<string> applicantId_ {};
        // Applicant\\"s nickname.
        shared_ptr<string> applicantName_ {};
        // Application ID.
        shared_ptr<string> applicationId_ {};
        // Application reason.
        shared_ptr<string> applyReason_ {};
        // Approver\\"s user ID, qbi user ID.
        shared_ptr<string> approverId_ {};
        // Approver\\"s nickname.
        shared_ptr<string> approverName_ {};
        // Whether the resource has been deleted:
        // - true: Deleted
        // - false: Not deleted
        shared_ptr<bool> deleteFlag_ {};
        // Permission expiration date, timestamp.
        shared_ptr<int64_t> expireDate_ {};
        // Permission approval status:
        // - 0: Under review, corresponding to 0 in the request parameters
        // - 1: Approved, corresponding to 1 in the request parameters
        // - 2: Rejected, corresponding to 1 in the request parameters
        shared_ptr<int32_t> flagStatus_ {};
        // Application creation time, timestamp.
        shared_ptr<int64_t> gmtCreate_ {};
        // Application modification time, timestamp.
        shared_ptr<int64_t> gmtModified_ {};
        // Handling reason.
        shared_ptr<string> handleReason_ {};
        // The ID of the resource for which permission is requested.
        shared_ptr<string> resourceId_ {};
        // The name of the resource for which permission is requested (e.g., report name, space name...).
        shared_ptr<string> resourceName_ {};
        // The type of the resource.
        shared_ptr<string> resourceType_ {};
        // The name of the workspace.
        shared_ptr<string> workspaceName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->start_ == nullptr && this->total_ == nullptr && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Result& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
      inline Result& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Result& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Array of approval flow information.
      shared_ptr<vector<Result::Data>> data_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The number of records requested per page.
      shared_ptr<int32_t> pageSize_ {};
      // The starting position of the current page.
      shared_ptr<int32_t> start_ {};
      // The total number of items.
      shared_ptr<int32_t> total_ {};
      // The total number of pages.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryApprovalInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryApprovalInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryApprovalInfoResponseBody::Result) };
    inline QueryApprovalInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryApprovalInfoResponseBody::Result) };
    inline QueryApprovalInfoResponseBody& setResult(const QueryApprovalInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryApprovalInfoResponseBody& setResult(QueryApprovalInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryApprovalInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return the result of the interface execution.
    shared_ptr<QueryApprovalInfoResponseBody::Result> result_ {};
    // Indicates whether the API call was successful. Possible values are:
    // - true: success
    // - false: failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
