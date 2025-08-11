// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryApprovalInfoResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApprovalInfoResponseBodyResultData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryApprovalInfoResponseBodyResultData& obj) { 
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
    QueryApprovalInfoResponseBodyResultData() = default ;
    QueryApprovalInfoResponseBodyResultData(const QueryApprovalInfoResponseBodyResultData &) = default ;
    QueryApprovalInfoResponseBodyResultData(QueryApprovalInfoResponseBodyResultData &&) = default ;
    QueryApprovalInfoResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApprovalInfoResponseBodyResultData() = default ;
    QueryApprovalInfoResponseBodyResultData& operator=(const QueryApprovalInfoResponseBodyResultData &) = default ;
    QueryApprovalInfoResponseBodyResultData& operator=(QueryApprovalInfoResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicantId_ != nullptr
        && this->applicantName_ != nullptr && this->applicationId_ != nullptr && this->applyReason_ != nullptr && this->approverId_ != nullptr && this->approverName_ != nullptr
        && this->deleteFlag_ != nullptr && this->expireDate_ != nullptr && this->flagStatus_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->handleReason_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->workspaceName_ != nullptr; };
    // applicantId Field Functions 
    bool hasApplicantId() const { return this->applicantId_ != nullptr;};
    void deleteApplicantId() { this->applicantId_ = nullptr;};
    inline string applicantId() const { DARABONBA_PTR_GET_DEFAULT(applicantId_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApplicantId(string applicantId) { DARABONBA_PTR_SET_VALUE(applicantId_, applicantId) };


    // applicantName Field Functions 
    bool hasApplicantName() const { return this->applicantName_ != nullptr;};
    void deleteApplicantName() { this->applicantName_ = nullptr;};
    inline string applicantName() const { DARABONBA_PTR_GET_DEFAULT(applicantName_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApplicantName(string applicantName) { DARABONBA_PTR_SET_VALUE(applicantName_, applicantName) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // approverId Field Functions 
    bool hasApproverId() const { return this->approverId_ != nullptr;};
    void deleteApproverId() { this->approverId_ = nullptr;};
    inline string approverId() const { DARABONBA_PTR_GET_DEFAULT(approverId_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApproverId(string approverId) { DARABONBA_PTR_SET_VALUE(approverId_, approverId) };


    // approverName Field Functions 
    bool hasApproverName() const { return this->approverName_ != nullptr;};
    void deleteApproverName() { this->approverName_ = nullptr;};
    inline string approverName() const { DARABONBA_PTR_GET_DEFAULT(approverName_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setApproverName(string approverName) { DARABONBA_PTR_SET_VALUE(approverName_, approverName) };


    // deleteFlag Field Functions 
    bool hasDeleteFlag() const { return this->deleteFlag_ != nullptr;};
    void deleteDeleteFlag() { this->deleteFlag_ = nullptr;};
    inline bool deleteFlag() const { DARABONBA_PTR_GET_DEFAULT(deleteFlag_, false) };
    inline QueryApprovalInfoResponseBodyResultData& setDeleteFlag(bool deleteFlag) { DARABONBA_PTR_SET_VALUE(deleteFlag_, deleteFlag) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline QueryApprovalInfoResponseBodyResultData& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // flagStatus Field Functions 
    bool hasFlagStatus() const { return this->flagStatus_ != nullptr;};
    void deleteFlagStatus() { this->flagStatus_ = nullptr;};
    inline int32_t flagStatus() const { DARABONBA_PTR_GET_DEFAULT(flagStatus_, 0) };
    inline QueryApprovalInfoResponseBodyResultData& setFlagStatus(int32_t flagStatus) { DARABONBA_PTR_SET_VALUE(flagStatus_, flagStatus) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryApprovalInfoResponseBodyResultData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryApprovalInfoResponseBodyResultData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // handleReason Field Functions 
    bool hasHandleReason() const { return this->handleReason_ != nullptr;};
    void deleteHandleReason() { this->handleReason_ = nullptr;};
    inline string handleReason() const { DARABONBA_PTR_GET_DEFAULT(handleReason_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setHandleReason(string handleReason) { DARABONBA_PTR_SET_VALUE(handleReason_, handleReason) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryApprovalInfoResponseBodyResultData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Applicant\\"s user ID, qbi user ID.
    std::shared_ptr<string> applicantId_ = nullptr;
    // Applicant\\"s nickname.
    std::shared_ptr<string> applicantName_ = nullptr;
    // Application ID.
    std::shared_ptr<string> applicationId_ = nullptr;
    // Application reason.
    std::shared_ptr<string> applyReason_ = nullptr;
    // Approver\\"s user ID, qbi user ID.
    std::shared_ptr<string> approverId_ = nullptr;
    // Approver\\"s nickname.
    std::shared_ptr<string> approverName_ = nullptr;
    // Whether the resource has been deleted:
    // - true: Deleted
    // - false: Not deleted
    std::shared_ptr<bool> deleteFlag_ = nullptr;
    // Permission expiration date, timestamp.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // Permission approval status:
    // - 0: Under review, corresponding to 0 in the request parameters
    // - 1: Approved, corresponding to 1 in the request parameters
    // - 2: Rejected, corresponding to 1 in the request parameters
    std::shared_ptr<int32_t> flagStatus_ = nullptr;
    // Application creation time, timestamp.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Application modification time, timestamp.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Handling reason.
    std::shared_ptr<string> handleReason_ = nullptr;
    // The ID of the resource for which permission is requested.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource for which permission is requested (e.g., report name, space name...).
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
