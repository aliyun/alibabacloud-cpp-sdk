// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALTASKSBYUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALTASKSBYUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApprovalTasksByUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalTasksByUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalTasksByUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListApprovalTasksByUserRequest() = default ;
    ListApprovalTasksByUserRequest(const ListApprovalTasksByUserRequest &) = default ;
    ListApprovalTasksByUserRequest(ListApprovalTasksByUserRequest &&) = default ;
    ListApprovalTasksByUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalTasksByUserRequest() = default ;
    ListApprovalTasksByUserRequest& operator=(const ListApprovalTasksByUserRequest &) = default ;
    ListApprovalTasksByUserRequest& operator=(ListApprovalTasksByUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmittedFrom, submittedFrom_);
        DARABONBA_PTR_TO_JSON(SubmittedTo, submittedTo_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmittedFrom, submittedFrom_);
        DARABONBA_PTR_FROM_JSON(SubmittedTo, submittedTo_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->approvalType_ == nullptr
        && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->relationType_ == nullptr && this->status_ == nullptr
        && this->submittedFrom_ == nullptr && this->submittedTo_ == nullptr; };
      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline string getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, "") };
      inline ListQuery& setApprovalType(string approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline ListQuery& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ListQuery& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submittedFrom Field Functions 
      bool hasSubmittedFrom() const { return this->submittedFrom_ != nullptr;};
      void deleteSubmittedFrom() { this->submittedFrom_ = nullptr;};
      inline string getSubmittedFrom() const { DARABONBA_PTR_GET_DEFAULT(submittedFrom_, "") };
      inline ListQuery& setSubmittedFrom(string submittedFrom) { DARABONBA_PTR_SET_VALUE(submittedFrom_, submittedFrom) };


      // submittedTo Field Functions 
      bool hasSubmittedTo() const { return this->submittedTo_ != nullptr;};
      void deleteSubmittedTo() { this->submittedTo_ = nullptr;};
      inline string getSubmittedTo() const { DARABONBA_PTR_GET_DEFAULT(submittedTo_, "") };
      inline ListQuery& setSubmittedTo(string submittedTo) { DARABONBA_PTR_SET_VALUE(submittedTo_, submittedTo) };


    protected:
      // The approval task type. Valid values:
      // - APPROVE: Permission approval.
      // - MANAGE: Management.
      // - OTHERS: Others.
      // - ATOMIC: Atomic metric approval.
      // - BIZ_OBJECT: Business object approval.
      // - BIZ_PROCESS: Business process approval.
      // - PUBLISH_APPROVE: Publish approval.
      // - BASELINE_APPROVE: Baseline approval.
      // - CODE_REVIEW: Asset approval.
      // - OBJECT_CODE_REVIEW: Code review.
      // - STANDARD_APPROVAL: Standard online approval.
      // - BATCH_STANDARD_APPROVAL: Batch standard online approval.
      // - STANDARD_OFFLINE_APPROVAL: Standard offline approval.
      // - BATCH_STANDARD_OFFLINE_APPROVAL: Batch standard offline approval.
      // - PRIVILEGE_TRANSFER_APPROVAL: Permission transfer approval.
      // - QD_FEATURE_ONLINE: Label listing.
      // - QD_FEATURE_OFFLINE: Label delisting.
      // - QD_CLUSTER_ONLINE: Group online.
      // - QD_CLUSTER_OFFLINE: Group offline.
      // - QD_MEMBER_ADD_APP: Add member to application.
      // - QD_FEATURE_ADD_APP: Add label to application.
      // - QD_CLUSTER_ADD_APP: Add group to application.
      // - QD_FEATURE_ADD_PROJECT: Add label to project.
      // - QD_CLUSTER_ADD_PROJECT: Add group to project.
      // - TASK_DATA_DOWNLOAD: Data download.
      // - CUSTOM_OPERATE: Custom operation.
      // - PRIVACY_COMPUTING: Privacy-preserving computation.
      // - MDC_TOPIC_DIR_PUBLISH: Asset topic directory publish.
      // - ASSET_PUBLISH: Asset listing approval.
      // - ASSET_UN_PUBLISH: Asset delisting approval.
      // - APPLICATION_CREATE: Application creation approval.
      shared_ptr<string> approvalType_ {};
      // The keyword for fuzzy match on the task name.
      shared_ptr<string> keyword_ {};
      // The page number, starting from 1. Default value: 1.
      shared_ptr<int32_t> page_ {};
      // The number of records per page. Default value: 20. Maximum value: 100. Values greater than 100 are automatically adjusted to 100.
      shared_ptr<int32_t> pageSize_ {};
      // The relationship type between the current user and the approval task. This parameter is required. Valid values:
      // - SUBMITTED: Submitted by me.
      // - PENDING_APPROVAL: Pending my approval.
      // - PROCESSED: Processed by me.
      // 
      // This parameter is required.
      shared_ptr<string> relationType_ {};
      // The approval status filter. Status filtering is not supported in the pending scenario. Valid values:
      // - APPROVING: Approving.
      // - APPROVED: Approved.
      // - REJECTED: Rejected.
      // - REVOKED: Revoked.
      shared_ptr<string> status_ {};
      // The start of the submission time range, in the format yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> submittedFrom_ {};
      // The end of the submission time range, in the format yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> submittedTo_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListApprovalTasksByUserRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListApprovalTasksByUserRequest::ListQuery) };
    inline ListApprovalTasksByUserRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListApprovalTasksByUserRequest::ListQuery) };
    inline ListApprovalTasksByUserRequest& setListQuery(const ListApprovalTasksByUserRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListApprovalTasksByUserRequest& setListQuery(ListApprovalTasksByUserRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListApprovalTasksByUserRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListApprovalTasksByUserRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The query conditions.
    // 
    // This parameter is required.
    shared_ptr<ListApprovalTasksByUserRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
