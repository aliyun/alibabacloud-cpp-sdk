// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetApprovalTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetApprovalTaskDetailResponseBody() = default ;
    GetApprovalTaskDetailResponseBody(const GetApprovalTaskDetailResponseBody &) = default ;
    GetApprovalTaskDetailResponseBody(GetApprovalTaskDetailResponseBody &&) = default ;
    GetApprovalTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalTaskDetailResponseBody() = default ;
    GetApprovalTaskDetailResponseBody& operator=(const GetApprovalTaskDetailResponseBody &) = default ;
    GetApprovalTaskDetailResponseBody& operator=(GetApprovalTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetailInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicantId, applicantId_);
        DARABONBA_PTR_TO_JSON(ApplicantName, applicantName_);
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(ApproveProcessSteps, approveProcessSteps_);
        DARABONBA_PTR_TO_JSON(BizContent, bizContent_);
        DARABONBA_PTR_TO_JSON(FinishedAt, finishedAt_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(SourceSystem, sourceSystem_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmittedAt, submittedAt_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicantId, applicantId_);
        DARABONBA_PTR_FROM_JSON(ApplicantName, applicantName_);
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(ApproveProcessSteps, approveProcessSteps_);
        DARABONBA_PTR_FROM_JSON(BizContent, bizContent_);
        DARABONBA_PTR_FROM_JSON(FinishedAt, finishedAt_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(SourceSystem, sourceSystem_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmittedAt, submittedAt_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      DetailInfo() = default ;
      DetailInfo(const DetailInfo &) = default ;
      DetailInfo(DetailInfo &&) = default ;
      DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailInfo() = default ;
      DetailInfo& operator=(const DetailInfo &) = default ;
      DetailInfo& operator=(DetailInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApproveProcessSteps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApproveProcessSteps& obj) { 
          DARABONBA_PTR_TO_JSON(ApproveUserIds, approveUserIds_);
          DARABONBA_PTR_TO_JSON(ApproveUserNames, approveUserNames_);
          DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_TO_JSON(OperateUserId, operateUserId_);
          DARABONBA_PTR_TO_JSON(OperateUserName, operateUserName_);
          DARABONBA_PTR_TO_JSON(Operation, operation_);
          DARABONBA_PTR_TO_JSON(ProcessStepName, processStepName_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Result, result_);
        };
        friend void from_json(const Darabonba::Json& j, ApproveProcessSteps& obj) { 
          DARABONBA_PTR_FROM_JSON(ApproveUserIds, approveUserIds_);
          DARABONBA_PTR_FROM_JSON(ApproveUserNames, approveUserNames_);
          DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_FROM_JSON(OperateUserId, operateUserId_);
          DARABONBA_PTR_FROM_JSON(OperateUserName, operateUserName_);
          DARABONBA_PTR_FROM_JSON(Operation, operation_);
          DARABONBA_PTR_FROM_JSON(ProcessStepName, processStepName_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
        };
        ApproveProcessSteps() = default ;
        ApproveProcessSteps(const ApproveProcessSteps &) = default ;
        ApproveProcessSteps(ApproveProcessSteps &&) = default ;
        ApproveProcessSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApproveProcessSteps() = default ;
        ApproveProcessSteps& operator=(const ApproveProcessSteps &) = default ;
        ApproveProcessSteps& operator=(ApproveProcessSteps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->approveUserIds_ == nullptr
        && this->approveUserNames_ == nullptr && this->operateTime_ == nullptr && this->operateUserId_ == nullptr && this->operateUserName_ == nullptr && this->operation_ == nullptr
        && this->processStepName_ == nullptr && this->reason_ == nullptr && this->result_ == nullptr; };
        // approveUserIds Field Functions 
        bool hasApproveUserIds() const { return this->approveUserIds_ != nullptr;};
        void deleteApproveUserIds() { this->approveUserIds_ = nullptr;};
        inline string getApproveUserIds() const { DARABONBA_PTR_GET_DEFAULT(approveUserIds_, "") };
        inline ApproveProcessSteps& setApproveUserIds(string approveUserIds) { DARABONBA_PTR_SET_VALUE(approveUserIds_, approveUserIds) };


        // approveUserNames Field Functions 
        bool hasApproveUserNames() const { return this->approveUserNames_ != nullptr;};
        void deleteApproveUserNames() { this->approveUserNames_ = nullptr;};
        inline string getApproveUserNames() const { DARABONBA_PTR_GET_DEFAULT(approveUserNames_, "") };
        inline ApproveProcessSteps& setApproveUserNames(string approveUserNames) { DARABONBA_PTR_SET_VALUE(approveUserNames_, approveUserNames) };


        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
        inline ApproveProcessSteps& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // operateUserId Field Functions 
        bool hasOperateUserId() const { return this->operateUserId_ != nullptr;};
        void deleteOperateUserId() { this->operateUserId_ = nullptr;};
        inline string getOperateUserId() const { DARABONBA_PTR_GET_DEFAULT(operateUserId_, "") };
        inline ApproveProcessSteps& setOperateUserId(string operateUserId) { DARABONBA_PTR_SET_VALUE(operateUserId_, operateUserId) };


        // operateUserName Field Functions 
        bool hasOperateUserName() const { return this->operateUserName_ != nullptr;};
        void deleteOperateUserName() { this->operateUserName_ = nullptr;};
        inline string getOperateUserName() const { DARABONBA_PTR_GET_DEFAULT(operateUserName_, "") };
        inline ApproveProcessSteps& setOperateUserName(string operateUserName) { DARABONBA_PTR_SET_VALUE(operateUserName_, operateUserName) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline ApproveProcessSteps& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


        // processStepName Field Functions 
        bool hasProcessStepName() const { return this->processStepName_ != nullptr;};
        void deleteProcessStepName() { this->processStepName_ = nullptr;};
        inline string getProcessStepName() const { DARABONBA_PTR_GET_DEFAULT(processStepName_, "") };
        inline ApproveProcessSteps& setProcessStepName(string processStepName) { DARABONBA_PTR_SET_VALUE(processStepName_, processStepName) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline ApproveProcessSteps& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline ApproveProcessSteps& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      protected:
        // The list of candidate approver IDs.
        shared_ptr<string> approveUserIds_ {};
        // The list of candidate approver names.
        shared_ptr<string> approveUserNames_ {};
        // The operation time. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> operateTime_ {};
        // The ID of the operator.
        shared_ptr<string> operateUserId_ {};
        // The name of the operator.
        shared_ptr<string> operateUserName_ {};
        // The operation.
        shared_ptr<string> operation_ {};
        // The step name.
        shared_ptr<string> processStepName_ {};
        // The approval comment.
        shared_ptr<string> reason_ {};
        // The approval result.
        shared_ptr<string> result_ {};
      };

      virtual bool empty() const override { return this->applicantId_ == nullptr
        && this->applicantName_ == nullptr && this->approvalType_ == nullptr && this->approveProcessSteps_ == nullptr && this->bizContent_ == nullptr && this->finishedAt_ == nullptr
        && this->id_ == nullptr && this->sourceSystem_ == nullptr && this->status_ == nullptr && this->submittedAt_ == nullptr && this->title_ == nullptr; };
      // applicantId Field Functions 
      bool hasApplicantId() const { return this->applicantId_ != nullptr;};
      void deleteApplicantId() { this->applicantId_ = nullptr;};
      inline string getApplicantId() const { DARABONBA_PTR_GET_DEFAULT(applicantId_, "") };
      inline DetailInfo& setApplicantId(string applicantId) { DARABONBA_PTR_SET_VALUE(applicantId_, applicantId) };


      // applicantName Field Functions 
      bool hasApplicantName() const { return this->applicantName_ != nullptr;};
      void deleteApplicantName() { this->applicantName_ = nullptr;};
      inline string getApplicantName() const { DARABONBA_PTR_GET_DEFAULT(applicantName_, "") };
      inline DetailInfo& setApplicantName(string applicantName) { DARABONBA_PTR_SET_VALUE(applicantName_, applicantName) };


      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
      inline DetailInfo& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // approveProcessSteps Field Functions 
      bool hasApproveProcessSteps() const { return this->approveProcessSteps_ != nullptr;};
      void deleteApproveProcessSteps() { this->approveProcessSteps_ = nullptr;};
      inline const vector<DetailInfo::ApproveProcessSteps> & getApproveProcessSteps() const { DARABONBA_PTR_GET_CONST(approveProcessSteps_, vector<DetailInfo::ApproveProcessSteps>) };
      inline vector<DetailInfo::ApproveProcessSteps> getApproveProcessSteps() { DARABONBA_PTR_GET(approveProcessSteps_, vector<DetailInfo::ApproveProcessSteps>) };
      inline DetailInfo& setApproveProcessSteps(const vector<DetailInfo::ApproveProcessSteps> & approveProcessSteps) { DARABONBA_PTR_SET_VALUE(approveProcessSteps_, approveProcessSteps) };
      inline DetailInfo& setApproveProcessSteps(vector<DetailInfo::ApproveProcessSteps> && approveProcessSteps) { DARABONBA_PTR_SET_RVALUE(approveProcessSteps_, approveProcessSteps) };


      // bizContent Field Functions 
      bool hasBizContent() const { return this->bizContent_ != nullptr;};
      void deleteBizContent() { this->bizContent_ = nullptr;};
      inline string getBizContent() const { DARABONBA_PTR_GET_DEFAULT(bizContent_, "") };
      inline DetailInfo& setBizContent(string bizContent) { DARABONBA_PTR_SET_VALUE(bizContent_, bizContent) };


      // finishedAt Field Functions 
      bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
      void deleteFinishedAt() { this->finishedAt_ = nullptr;};
      inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
      inline DetailInfo& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DetailInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sourceSystem Field Functions 
      bool hasSourceSystem() const { return this->sourceSystem_ != nullptr;};
      void deleteSourceSystem() { this->sourceSystem_ = nullptr;};
      inline string getSourceSystem() const { DARABONBA_PTR_GET_DEFAULT(sourceSystem_, "") };
      inline DetailInfo& setSourceSystem(string sourceSystem) { DARABONBA_PTR_SET_VALUE(sourceSystem_, sourceSystem) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetailInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submittedAt Field Functions 
      bool hasSubmittedAt() const { return this->submittedAt_ != nullptr;};
      void deleteSubmittedAt() { this->submittedAt_ = nullptr;};
      inline string getSubmittedAt() const { DARABONBA_PTR_GET_DEFAULT(submittedAt_, "") };
      inline DetailInfo& setSubmittedAt(string submittedAt) { DARABONBA_PTR_SET_VALUE(submittedAt_, submittedAt) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline DetailInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The ID of the applicant.
      shared_ptr<string> applicantId_ {};
      // The name of the applicant.
      shared_ptr<string> applicantName_ {};
      // The approval type. Valid values:
      // - APPROVE: Permission approval.
      // - MANAGE: Management.
      // - OTHERS: Others.
      // - ATOMIC: Atomic metric approval.
      // - BIZ_OBJECT: Business object approval.
      // - BIZ_PROCESS: Business activity approval.
      // - PUBLISH_APPROVE: Publish approval.
      // - BASELINE_APPROVE: Baseline approval.
      // - CODE_REVIEW: Asset approval.
      // - OBJECT_CODE_REVIEW: Code review.
      // - STANDARD_APPROVAL: Standard online approval.
      // - BATCH_STANDARD_APPROVAL: Batch standard online approval.
      // - STANDARD_OFFLINE_APPROVAL: Standard offline approval.
      // - BATCH_STANDARD_OFFLINE_APPROVAL: Batch standard offline approval.
      // - PRIVILEGE_TRANSFER_APPROVAL: Privilege transfer approval.
      // - QD_FEATURE_ONLINE: Tag listing.
      // - QD_FEATURE_OFFLINE: Tag delisting.
      // - QD_CLUSTER_ONLINE: Group online.
      // - QD_CLUSTER_OFFLINE: Group offline.
      // - QD_MEMBER_ADD_APP: Member added to application.
      // - QD_FEATURE_ADD_APP: Tag added to application.
      // - QD_CLUSTER_ADD_APP: Group added to application.
      // - QD_FEATURE_ADD_PROJECT: Tag added to project.
      // - QD_CLUSTER_ADD_PROJECT: Group added to project.
      // - TASK_DATA_DOWNLOAD: Data download.
      // - CUSTOM_OPERATE: Custom operation.
      // - PRIVACY_COMPUTING: Privacy-preserving computation.
      // - MDC_TOPIC_DIR_PUBLISH: Asset topic directory publishing.
      // - ASSET_PUBLISH: Asset listing approval.
      // - ASSET_UN_PUBLISH: Asset delisting approval.
      // - APPLICATION_CREATE: Application creation approval.
      shared_ptr<string> approvalType_ {};
      // The list of approval process steps.
      shared_ptr<vector<DetailInfo::ApproveProcessSteps>> approveProcessSteps_ {};
      // The JSON string of the task details.
      shared_ptr<string> bizContent_ {};
      // The completion time. Format: yyyy-MM-dd HH:mm:ss. This field is empty if the task is not completed.
      shared_ptr<string> finishedAt_ {};
      // The approval flow ID.
      shared_ptr<int64_t> id_ {};
      // The source system.
      shared_ptr<string> sourceSystem_ {};
      // The approval status. Valid values:
      // - APPROVING: Approving.
      // - APPROVED: Approved.
      // - REJECTED: Rejected.
      // - REVOKED: Revoked.
      shared_ptr<string> status_ {};
      // The submission time. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> submittedAt_ {};
      // The task name.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->detailInfo_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApprovalTaskDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const GetApprovalTaskDetailResponseBody::DetailInfo & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, GetApprovalTaskDetailResponseBody::DetailInfo) };
    inline GetApprovalTaskDetailResponseBody::DetailInfo getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, GetApprovalTaskDetailResponseBody::DetailInfo) };
    inline GetApprovalTaskDetailResponseBody& setDetailInfo(const GetApprovalTaskDetailResponseBody::DetailInfo & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline GetApprovalTaskDetailResponseBody& setDetailInfo(GetApprovalTaskDetailResponseBody::DetailInfo && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetApprovalTaskDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApprovalTaskDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetApprovalTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The approval task details.
    shared_ptr<GetApprovalTaskDetailResponseBody::DetailInfo> detailInfo_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend response exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
