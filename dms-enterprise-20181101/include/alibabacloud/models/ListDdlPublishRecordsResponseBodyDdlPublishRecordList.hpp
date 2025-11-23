// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDDLPUBLISHRECORDSRESPONSEBODYDDLPUBLISHRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDDLPublishRecordsResponseBodyDDLPublishRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDLPublishRecordsResponseBodyDDLPublishRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditExpireTime, auditExpireTime_);
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Finality, finality_);
      DARABONBA_PTR_TO_JSON(FinalityReason, finalityReason_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(PublishTaskInfoList, publishTaskInfoList_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDLPublishRecordsResponseBodyDDLPublishRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditExpireTime, auditExpireTime_);
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Finality, finality_);
      DARABONBA_PTR_FROM_JSON(FinalityReason, finalityReason_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(PublishTaskInfoList, publishTaskInfoList_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
    };
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList(const ListDDLPublishRecordsResponseBodyDDLPublishRecordList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList(ListDDLPublishRecordsResponseBodyDDLPublishRecordList &&) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordList() = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList& operator=(const ListDDLPublishRecordsResponseBodyDDLPublishRecordList &) = default ;
    ListDDLPublishRecordsResponseBodyDDLPublishRecordList& operator=(ListDDLPublishRecordsResponseBodyDDLPublishRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditExpireTime_ == nullptr
        && return this->auditStatus_ == nullptr && return this->comment_ == nullptr && return this->creatorId_ == nullptr && return this->finality_ == nullptr && return this->finalityReason_ == nullptr
        && return this->publishStatus_ == nullptr && return this->publishTaskInfoList_ == nullptr && return this->riskLevel_ == nullptr && return this->statusDesc_ == nullptr && return this->workflowInstanceId_ == nullptr; };
    // auditExpireTime Field Functions 
    bool hasAuditExpireTime() const { return this->auditExpireTime_ != nullptr;};
    void deleteAuditExpireTime() { this->auditExpireTime_ = nullptr;};
    inline string auditExpireTime() const { DARABONBA_PTR_GET_DEFAULT(auditExpireTime_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setAuditExpireTime(string auditExpireTime) { DARABONBA_PTR_SET_VALUE(auditExpireTime_, auditExpireTime) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // finality Field Functions 
    bool hasFinality() const { return this->finality_ != nullptr;};
    void deleteFinality() { this->finality_ = nullptr;};
    inline bool finality() const { DARABONBA_PTR_GET_DEFAULT(finality_, false) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setFinality(bool finality) { DARABONBA_PTR_SET_VALUE(finality_, finality) };


    // finalityReason Field Functions 
    bool hasFinalityReason() const { return this->finalityReason_ != nullptr;};
    void deleteFinalityReason() { this->finalityReason_ = nullptr;};
    inline string finalityReason() const { DARABONBA_PTR_GET_DEFAULT(finalityReason_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setFinalityReason(string finalityReason) { DARABONBA_PTR_SET_VALUE(finalityReason_, finalityReason) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // publishTaskInfoList Field Functions 
    bool hasPublishTaskInfoList() const { return this->publishTaskInfoList_ != nullptr;};
    void deletePublishTaskInfoList() { this->publishTaskInfoList_ = nullptr;};
    inline const vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList> & publishTaskInfoList() const { DARABONBA_PTR_GET_CONST(publishTaskInfoList_, vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList>) };
    inline vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList> publishTaskInfoList() { DARABONBA_PTR_GET(publishTaskInfoList_, vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList>) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setPublishTaskInfoList(const vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList> & publishTaskInfoList) { DARABONBA_PTR_SET_VALUE(publishTaskInfoList_, publishTaskInfoList) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setPublishTaskInfoList(vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList> && publishTaskInfoList) { DARABONBA_PTR_SET_RVALUE(publishTaskInfoList_, publishTaskInfoList) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline ListDDLPublishRecordsResponseBodyDDLPublishRecordList& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


  protected:
    // The time when the approval expires.
    std::shared_ptr<string> auditExpireTime_ = nullptr;
    // The approval state of the ticket. Valid values:
    // 
    // *   **EXEMPT_PASS**: The ticket passes without approval.
    // *   **TO_AUDIT**: The ticket is pending for approval.
    // *   **CANCEL**: The ticket is canceled.
    // *   **SUCCESS**: The ticket is approved.
    // *   **FAIL**: The ticket fails to pass the approval.
    std::shared_ptr<string> auditStatus_ = nullptr;
    // Release remarks.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the user who creates the ticket. You can obtain the user ID by calling the [GetUser](https://help.aliyun.com/document_detail/147098.html) operation and querying the value of the UserId parameter. The value is not the unique ID (UID) of the Alibaba Cloud account.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // Indicates whether the approval is terminated. Valid values:
    // 
    // *   **true**: The approval is terminated.
    // *   **false**: The approval is not terminated.
    // 
    // > Multiple reasons can terminate the approval. For example, you withdraw the application or your ticket is not approved before the specified time.
    std::shared_ptr<bool> finality_ = nullptr;
    // The reason for the termination.
    std::shared_ptr<string> finalityReason_ = nullptr;
    // The publishing state of the ticket. Valid values:
    // 
    // *   **START**: The ticket is created.
    // *   **ANALYZE**: The ticket is under analysis.
    // *   **AUDIT**: The ticket is under approval.
    // *   **DISPATCH**: A task is generated for the ticket.
    // *   **SUCCESS**: The task is successful.
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The list of publishing tasks.
    std::shared_ptr<vector<Models::ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList>> publishTaskInfoList_ = nullptr;
    // The risk level of the operation. Valid values:
    // 
    // *   **NONE_RISK**: The operation does not have risks.
    // *   **LOW_RISK**: The operation is at low risk.
    // *   **MIDDLE_RISK**: The operation is at medium risk.
    // *   **HIGH_RISK**: The operation is at high risk.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The description of the publishing state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The ID of the approval process.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
