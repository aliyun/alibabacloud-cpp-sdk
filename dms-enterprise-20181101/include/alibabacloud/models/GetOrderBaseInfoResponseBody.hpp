// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOrderBaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OrderBaseInfo, orderBaseInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderBaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OrderBaseInfo, orderBaseInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOrderBaseInfoResponseBody() = default ;
    GetOrderBaseInfoResponseBody(const GetOrderBaseInfoResponseBody &) = default ;
    GetOrderBaseInfoResponseBody(GetOrderBaseInfoResponseBody &&) = default ;
    GetOrderBaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderBaseInfoResponseBody() = default ;
    GetOrderBaseInfoResponseBody& operator=(const GetOrderBaseInfoResponseBody &) = default ;
    GetOrderBaseInfoResponseBody& operator=(GetOrderBaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderBaseInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderBaseInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OrderBaseInfo& obj) { 
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
      OrderBaseInfo() = default ;
      OrderBaseInfo(const OrderBaseInfo &) = default ;
      OrderBaseInfo(OrderBaseInfo &&) = default ;
      OrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderBaseInfo() = default ;
      OrderBaseInfo& operator=(const OrderBaseInfo &) = default ;
      OrderBaseInfo& operator=(OrderBaseInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedUserNickList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedUserNickList& obj) { 
          DARABONBA_PTR_TO_JSON(UserNicks, userNicks_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedUserNickList& obj) { 
          DARABONBA_PTR_FROM_JSON(UserNicks, userNicks_);
        };
        RelatedUserNickList() = default ;
        RelatedUserNickList(const RelatedUserNickList &) = default ;
        RelatedUserNickList(RelatedUserNickList &&) = default ;
        RelatedUserNickList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedUserNickList() = default ;
        RelatedUserNickList& operator=(const RelatedUserNickList &) = default ;
        RelatedUserNickList& operator=(RelatedUserNickList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userNicks_ == nullptr; };
        // userNicks Field Functions 
        bool hasUserNicks() const { return this->userNicks_ != nullptr;};
        void deleteUserNicks() { this->userNicks_ = nullptr;};
        inline const vector<string> & getUserNicks() const { DARABONBA_PTR_GET_CONST(userNicks_, vector<string>) };
        inline vector<string> getUserNicks() { DARABONBA_PTR_GET(userNicks_, vector<string>) };
        inline RelatedUserNickList& setUserNicks(const vector<string> & userNicks) { DARABONBA_PTR_SET_VALUE(userNicks_, userNicks) };
        inline RelatedUserNickList& setUserNicks(vector<string> && userNicks) { DARABONBA_PTR_SET_RVALUE(userNicks_, userNicks) };


      protected:
        shared_ptr<vector<string>> userNicks_ {};
      };

      class RelatedUserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedUserList& obj) { 
          DARABONBA_PTR_TO_JSON(UserIds, userIds_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedUserList& obj) { 
          DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
        };
        RelatedUserList() = default ;
        RelatedUserList(const RelatedUserList &) = default ;
        RelatedUserList(RelatedUserList &&) = default ;
        RelatedUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedUserList() = default ;
        RelatedUserList& operator=(const RelatedUserList &) = default ;
        RelatedUserList& operator=(RelatedUserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userIds_ == nullptr; };
        // userIds Field Functions 
        bool hasUserIds() const { return this->userIds_ != nullptr;};
        void deleteUserIds() { this->userIds_ = nullptr;};
        inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
        inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
        inline RelatedUserList& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
        inline RelatedUserList& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


      protected:
        shared_ptr<vector<string>> userIds_ {};
      };

      virtual bool empty() const override { return this->attachmentKey_ == nullptr
        && this->comment_ == nullptr && this->committer_ == nullptr && this->committerId_ == nullptr && this->createTime_ == nullptr && this->lastModifyTime_ == nullptr
        && this->orderId_ == nullptr && this->originAttachmentName_ == nullptr && this->pluginType_ == nullptr && this->relatedUserList_ == nullptr && this->relatedUserNickList_ == nullptr
        && this->statusCode_ == nullptr && this->statusDesc_ == nullptr && this->workflowInstanceId_ == nullptr && this->workflowStatusDesc_ == nullptr; };
      // attachmentKey Field Functions 
      bool hasAttachmentKey() const { return this->attachmentKey_ != nullptr;};
      void deleteAttachmentKey() { this->attachmentKey_ = nullptr;};
      inline string getAttachmentKey() const { DARABONBA_PTR_GET_DEFAULT(attachmentKey_, "") };
      inline OrderBaseInfo& setAttachmentKey(string attachmentKey) { DARABONBA_PTR_SET_VALUE(attachmentKey_, attachmentKey) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline OrderBaseInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // committer Field Functions 
      bool hasCommitter() const { return this->committer_ != nullptr;};
      void deleteCommitter() { this->committer_ = nullptr;};
      inline string getCommitter() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
      inline OrderBaseInfo& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


      // committerId Field Functions 
      bool hasCommitterId() const { return this->committerId_ != nullptr;};
      void deleteCommitterId() { this->committerId_ = nullptr;};
      inline int64_t getCommitterId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
      inline OrderBaseInfo& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline OrderBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastModifyTime Field Functions 
      bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
      void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
      inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
      inline OrderBaseInfo& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline OrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // originAttachmentName Field Functions 
      bool hasOriginAttachmentName() const { return this->originAttachmentName_ != nullptr;};
      void deleteOriginAttachmentName() { this->originAttachmentName_ = nullptr;};
      inline string getOriginAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(originAttachmentName_, "") };
      inline OrderBaseInfo& setOriginAttachmentName(string originAttachmentName) { DARABONBA_PTR_SET_VALUE(originAttachmentName_, originAttachmentName) };


      // pluginType Field Functions 
      bool hasPluginType() const { return this->pluginType_ != nullptr;};
      void deletePluginType() { this->pluginType_ = nullptr;};
      inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
      inline OrderBaseInfo& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


      // relatedUserList Field Functions 
      bool hasRelatedUserList() const { return this->relatedUserList_ != nullptr;};
      void deleteRelatedUserList() { this->relatedUserList_ = nullptr;};
      inline const OrderBaseInfo::RelatedUserList & getRelatedUserList() const { DARABONBA_PTR_GET_CONST(relatedUserList_, OrderBaseInfo::RelatedUserList) };
      inline OrderBaseInfo::RelatedUserList getRelatedUserList() { DARABONBA_PTR_GET(relatedUserList_, OrderBaseInfo::RelatedUserList) };
      inline OrderBaseInfo& setRelatedUserList(const OrderBaseInfo::RelatedUserList & relatedUserList) { DARABONBA_PTR_SET_VALUE(relatedUserList_, relatedUserList) };
      inline OrderBaseInfo& setRelatedUserList(OrderBaseInfo::RelatedUserList && relatedUserList) { DARABONBA_PTR_SET_RVALUE(relatedUserList_, relatedUserList) };


      // relatedUserNickList Field Functions 
      bool hasRelatedUserNickList() const { return this->relatedUserNickList_ != nullptr;};
      void deleteRelatedUserNickList() { this->relatedUserNickList_ = nullptr;};
      inline const OrderBaseInfo::RelatedUserNickList & getRelatedUserNickList() const { DARABONBA_PTR_GET_CONST(relatedUserNickList_, OrderBaseInfo::RelatedUserNickList) };
      inline OrderBaseInfo::RelatedUserNickList getRelatedUserNickList() { DARABONBA_PTR_GET(relatedUserNickList_, OrderBaseInfo::RelatedUserNickList) };
      inline OrderBaseInfo& setRelatedUserNickList(const OrderBaseInfo::RelatedUserNickList & relatedUserNickList) { DARABONBA_PTR_SET_VALUE(relatedUserNickList_, relatedUserNickList) };
      inline OrderBaseInfo& setRelatedUserNickList(OrderBaseInfo::RelatedUserNickList && relatedUserNickList) { DARABONBA_PTR_SET_RVALUE(relatedUserNickList_, relatedUserNickList) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline OrderBaseInfo& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline OrderBaseInfo& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // workflowInstanceId Field Functions 
      bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
      void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
      inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
      inline OrderBaseInfo& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


      // workflowStatusDesc Field Functions 
      bool hasWorkflowStatusDesc() const { return this->workflowStatusDesc_ != nullptr;};
      void deleteWorkflowStatusDesc() { this->workflowStatusDesc_ = nullptr;};
      inline string getWorkflowStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(workflowStatusDesc_, "") };
      inline OrderBaseInfo& setWorkflowStatusDesc(string workflowStatusDesc) { DARABONBA_PTR_SET_VALUE(workflowStatusDesc_, workflowStatusDesc) };


    protected:
      // The Key of the ticket attachment. This information is returned only when an attachment is uploaded when a ticket is created.
      shared_ptr<string> attachmentKey_ {};
      // The remarks of the ticket.
      shared_ptr<string> comment_ {};
      // The applicant.
      shared_ptr<string> committer_ {};
      // The ID of the applicant. Note: The ID is different from the Alibaba Cloud account ID of the applicant.
      shared_ptr<int64_t> committerId_ {};
      // The time when the ticket was created.
      shared_ptr<string> createTime_ {};
      // The time when the ticket was last modified.
      shared_ptr<string> lastModifyTime_ {};
      // The ID of the ticket.
      shared_ptr<int64_t> orderId_ {};
      // The original file name of the ticket attachment. This information is returned only when an attachment is uploaded when a ticket is created.
      shared_ptr<string> originAttachmentName_ {};
      // The type of the ticket. For more information about the value of this parameter, see the request parameters of the [CreateOrder](https://help.aliyun.com/document_detail/465865.html) operation.
      shared_ptr<string> pluginType_ {};
      // The IDs of the operators that are related to the ticket.
      shared_ptr<OrderBaseInfo::RelatedUserList> relatedUserList_ {};
      // The nicknames of the operators that are related to the ticket.
      shared_ptr<OrderBaseInfo::RelatedUserNickList> relatedUserNickList_ {};
      // The status code of the ticket. Valid values:
      // 
      // *   **new**: The ticket is created.
      // *   **toaudit**: The ticket is being reviewed.
      // *   **Approved**: The ticket is approved.
      // *   **reject**: The ticket is rejected.
      // *   **processing**: The ticket is being executed.
      // *   **success**: The ticket is executed.
      // *   **closed**: The ticket is closed.
      shared_ptr<string> statusCode_ {};
      // The description of the status.
      shared_ptr<string> statusDesc_ {};
      // The ID of the approval process.
      shared_ptr<int64_t> workflowInstanceId_ {};
      // The description of the approval process.
      shared_ptr<string> workflowStatusDesc_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->orderBaseInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOrderBaseInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOrderBaseInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // orderBaseInfo Field Functions 
    bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
    void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
    inline const GetOrderBaseInfoResponseBody::OrderBaseInfo & getOrderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, GetOrderBaseInfoResponseBody::OrderBaseInfo) };
    inline GetOrderBaseInfoResponseBody::OrderBaseInfo getOrderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, GetOrderBaseInfoResponseBody::OrderBaseInfo) };
    inline GetOrderBaseInfoResponseBody& setOrderBaseInfo(const GetOrderBaseInfoResponseBody::OrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
    inline GetOrderBaseInfoResponseBody& setOrderBaseInfo(GetOrderBaseInfoResponseBody::OrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrderBaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOrderBaseInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The basic information about the ticket.
    shared_ptr<GetOrderBaseInfoResponseBody::OrderBaseInfo> orderBaseInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
