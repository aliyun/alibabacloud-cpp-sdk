// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList.hpp>
#include <alibabacloud/models/GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOrderBaseInfoResponseBodyOrderBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderBaseInfoResponseBodyOrderBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Committer, committer_);
      DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OriginAttachmentName, originAttachmentName_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_TO_JSON(RelatedUserNickList, relatedUserNickList_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderBaseInfoResponseBodyOrderBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentKey, attachmentKey_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Committer, committer_);
      DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OriginAttachmentName, originAttachmentName_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(RelatedUserList, relatedUserList_);
      DARABONBA_PTR_FROM_JSON(RelatedUserNickList, relatedUserNickList_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowStatusDesc, workflowStatusDesc_);
    };
    GetOrderBaseInfoResponseBodyOrderBaseInfo() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfo(const GetOrderBaseInfoResponseBodyOrderBaseInfo &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfo(GetOrderBaseInfoResponseBodyOrderBaseInfo &&) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfo() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfo& operator=(const GetOrderBaseInfoResponseBodyOrderBaseInfo &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfo& operator=(GetOrderBaseInfoResponseBodyOrderBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && return this->comment_ == nullptr && return this->committer_ == nullptr && return this->committerId_ == nullptr && return this->createTime_ == nullptr && return this->lastModifyTime_ == nullptr
        && return this->orderId_ == nullptr && return this->originAttachmentName_ == nullptr && return this->pluginType_ == nullptr && return this->relatedUserList_ == nullptr && return this->relatedUserNickList_ == nullptr
        && return this->statusCode_ == nullptr && return this->statusDesc_ == nullptr && return this->workflowInstanceId_ == nullptr && return this->workflowStatusDesc_ == nullptr; };
    // attachmentKey Field Functions 
    bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
    void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
    inline string attachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // committer Field Functions 
    bool hasCommitter() const { return this->committer_ != nullptr;};
    void deleteCommitter() { this->committer_ = nullptr;};
    inline string committer() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


    // committerId Field Functions 
    bool hasCommitterId() const { return this->committerId_ != nullptr;};
    void deleteCommitterId() { this->committerId_ = nullptr;};
    inline int64_t committerId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // originAttachmentName Field Functions 
    bool hasOriginAttachmentName() const { return this->originAttachmentName_ != nullptr;};
    void deleteOriginAttachmentName() { this->originAttachmentName_ = nullptr;};
    inline string originAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(originAttachmentName_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setOriginAttachmentName(string originAttachmentName) { DARABONBA_PTR_SET_VALUE(originAttachmentName_, originAttachmentName) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // relatedUserList Field Functions 
    bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
    void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
    inline const Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList & relatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList) };
    inline Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList relatedUserList() { DARABONBA_PTR_GET(relatedUserList_, Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setRelatedUserList(const Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setRelatedUserList(Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


    // relatedUserNickList Field Functions 
    bool hasRelatedUserNickList() const { return this->relatedUserNickList_ != nullptr;};
    void deleteRelatedUserNickList() { this->relatedUserNickList_ = nullptr;};
    inline const Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList & relatedUserNickList() const { DARABONBA_PTR_GET_CONST(relatedUserNickList_, Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList) };
    inline Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList relatedUserNickList() { DARABONBA_PTR_GET(relatedUserNickList_, Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setRelatedUserNickList(const Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList & relatedUserNickList) { DARABONBA_PTR_SET_VALUE(relatedUserNickList_, relatedUserNickList) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setRelatedUserNickList(Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList && relatedUserNickList) { DARABONBA_PTR_SET_RVALUE(relatedUserNickList_, relatedUserNickList) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowStatusDesc Field Functions 
    bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
    void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
    inline string workflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfo& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


  protected:
    // The Key of the ticket attachment. This information is returned only when an attachment is uploaded when a ticket is created.
    std::shared_ptr<string> attachmentKey_ = nullptr;
    // The remarks of the ticket.
    std::shared_ptr<string> comment_ = nullptr;
    // The applicant.
    std::shared_ptr<string> committer_ = nullptr;
    // The ID of the applicant. Note: The ID is different from the Alibaba Cloud account ID of the applicant.
    std::shared_ptr<int64_t> committerId_ = nullptr;
    // The time when the ticket was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the ticket was last modified.
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // The ID of the ticket.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The original file name of the ticket attachment. This information is returned only when an attachment is uploaded when a ticket is created.
    std::shared_ptr<string> originAttachmentName_ = nullptr;
    // The type of the ticket. For more information about the value of this parameter, see the request parameters of the [CreateOrder](https://help.aliyun.com/document_detail/465865.html) operation.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The IDs of the operators that are related to the ticket.
    std::shared_ptr<Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList> relatedUserList_ = nullptr;
    // The nicknames of the operators that are related to the ticket.
    std::shared_ptr<Models::GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList> relatedUserNickList_ = nullptr;
    // The status code of the ticket. Valid values:
    // 
    // *   **new**: The ticket is created.
    // *   **toaudit**: The ticket is being reviewed.
    // *   **Approved**: The ticket is approved.
    // *   **reject**: The ticket is rejected.
    // *   **processing**: The ticket is being executed.
    // *   **success**: The ticket is executed.
    // *   **closed**: The ticket is closed.
    std::shared_ptr<string> statusCode_ = nullptr;
    // The description of the status.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The ID of the approval process.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
    // The description of the approval process.
    std::shared_ptr<string> workflowStatusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
