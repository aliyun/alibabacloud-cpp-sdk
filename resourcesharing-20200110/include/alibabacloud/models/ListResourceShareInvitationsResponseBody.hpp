// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceShareInvitationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareInvitationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitations, resourceShareInvitations_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareInvitationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitations, resourceShareInvitations_);
    };
    ListResourceShareInvitationsResponseBody() = default ;
    ListResourceShareInvitationsResponseBody(const ListResourceShareInvitationsResponseBody &) = default ;
    ListResourceShareInvitationsResponseBody(ListResourceShareInvitationsResponseBody &&) = default ;
    ListResourceShareInvitationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareInvitationsResponseBody() = default ;
    ListResourceShareInvitationsResponseBody& operator=(const ListResourceShareInvitationsResponseBody &) = default ;
    ListResourceShareInvitationsResponseBody& operator=(ListResourceShareInvitationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceShareInvitations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceShareInvitations& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InvitationFailedDetails, invitationFailedDetails_);
        DARABONBA_PTR_TO_JSON(ReceiverAccountId, receiverAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
        DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_TO_JSON(SenderAccountId, senderAccountId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceShareInvitations& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InvitationFailedDetails, invitationFailedDetails_);
        DARABONBA_PTR_FROM_JSON(ReceiverAccountId, receiverAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_FROM_JSON(SenderAccountId, senderAccountId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceShareInvitations() = default ;
      ResourceShareInvitations(const ResourceShareInvitations &) = default ;
      ResourceShareInvitations(ResourceShareInvitations &&) = default ;
      ResourceShareInvitations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceShareInvitations() = default ;
      ResourceShareInvitations& operator=(const ResourceShareInvitations &) = default ;
      ResourceShareInvitations& operator=(ResourceShareInvitations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InvitationFailedDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvitationFailedDetails& obj) { 
          DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
          DARABONBA_PTR_TO_JSON(FailureDescription, failureDescription_);
          DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        };
        friend void from_json(const Darabonba::Json& j, InvitationFailedDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
          DARABONBA_PTR_FROM_JSON(FailureDescription, failureDescription_);
          DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        };
        InvitationFailedDetails() = default ;
        InvitationFailedDetails(const InvitationFailedDetails &) = default ;
        InvitationFailedDetails(InvitationFailedDetails &&) = default ;
        InvitationFailedDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvitationFailedDetails() = default ;
        InvitationFailedDetails& operator=(const InvitationFailedDetails &) = default ;
        InvitationFailedDetails& operator=(InvitationFailedDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->associateType_ == nullptr
        && this->failureDescription_ == nullptr && this->failureReason_ == nullptr && this->operationType_ == nullptr && this->resourceArn_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr; };
        // associateType Field Functions 
        bool hasAssociateType() const { return this->associateType_ != nullptr;};
        void deleteAssociateType() { this->associateType_ = nullptr;};
        inline string getAssociateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
        inline InvitationFailedDetails& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


        // failureDescription Field Functions 
        bool hasFailureDescription() const { return this->failureDescription_ != nullptr;};
        void deleteFailureDescription() { this->failureDescription_ = nullptr;};
        inline string getFailureDescription() const { DARABONBA_PTR_GET_DEFAULT(failureDescription_, "") };
        inline InvitationFailedDetails& setFailureDescription(string failureDescription) { DARABONBA_PTR_SET_VALUE(failureDescription_, failureDescription) };


        // failureReason Field Functions 
        bool hasFailureReason() const { return this->failureReason_ != nullptr;};
        void deleteFailureReason() { this->failureReason_ = nullptr;};
        inline string getFailureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
        inline InvitationFailedDetails& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline InvitationFailedDetails& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // resourceArn Field Functions 
        bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
        void deleteResourceArn() { this->resourceArn_ = nullptr;};
        inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
        inline InvitationFailedDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline InvitationFailedDetails& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline InvitationFailedDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline InvitationFailedDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusMessage Field Functions 
        bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
        void deleteStatusMessage() { this->statusMessage_ = nullptr;};
        inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
        inline InvitationFailedDetails& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      protected:
        // This parameter is deprecated. The OperationType parameter is used instead.
        shared_ptr<string> associateType_ {};
        // The failure description.
        shared_ptr<string> failureDescription_ {};
        // The failure cause. Valid values:
        // 
        // *   Unavailable: The resource cannot be shared.
        // *   LimitExceeded: The number of shared resources within the Alibaba Cloud account exceeds the upper limit.
        // *   ZonalResourceInaccessible: The resource is unavailable in this region.
        // *   InternalError: An internal error occurred during the check.
        // *   UnsupportedOperation: You cannot perform this operation.
        shared_ptr<string> failureReason_ {};
        // The operation type. Valid values:
        // 
        // *   Associate
        // *   Disassociate
        shared_ptr<string> operationType_ {};
        shared_ptr<string> resourceArn_ {};
        // The ID of the shared resource.
        shared_ptr<string> resourceId_ {};
        // The type of the shared resource.
        // 
        // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
        shared_ptr<string> resourceType_ {};
        // This parameter is deprecated. The FailureReason parameter is used instead.
        shared_ptr<string> status_ {};
        // This parameter is deprecated. The FailureDescription parameter is used instead.
        shared_ptr<string> statusMessage_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->invitationFailedDetails_ == nullptr && this->receiverAccountId_ == nullptr && this->resourceShareId_ == nullptr && this->resourceShareInvitationId_ == nullptr && this->resourceShareName_ == nullptr
        && this->senderAccountId_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceShareInvitations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // invitationFailedDetails Field Functions 
      bool hasInvitationFailedDetails() const { return this->invitationFailedDetails_ != nullptr;};
      void deleteInvitationFailedDetails() { this->invitationFailedDetails_ = nullptr;};
      inline const vector<ResourceShareInvitations::InvitationFailedDetails> & getInvitationFailedDetails() const { DARABONBA_PTR_GET_CONST(invitationFailedDetails_, vector<ResourceShareInvitations::InvitationFailedDetails>) };
      inline vector<ResourceShareInvitations::InvitationFailedDetails> getInvitationFailedDetails() { DARABONBA_PTR_GET(invitationFailedDetails_, vector<ResourceShareInvitations::InvitationFailedDetails>) };
      inline ResourceShareInvitations& setInvitationFailedDetails(const vector<ResourceShareInvitations::InvitationFailedDetails> & invitationFailedDetails) { DARABONBA_PTR_SET_VALUE(invitationFailedDetails_, invitationFailedDetails) };
      inline ResourceShareInvitations& setInvitationFailedDetails(vector<ResourceShareInvitations::InvitationFailedDetails> && invitationFailedDetails) { DARABONBA_PTR_SET_RVALUE(invitationFailedDetails_, invitationFailedDetails) };


      // receiverAccountId Field Functions 
      bool hasReceiverAccountId() const { return this->receiverAccountId_ != nullptr;};
      void deleteReceiverAccountId() { this->receiverAccountId_ = nullptr;};
      inline string getReceiverAccountId() const { DARABONBA_PTR_GET_DEFAULT(receiverAccountId_, "") };
      inline ResourceShareInvitations& setReceiverAccountId(string receiverAccountId) { DARABONBA_PTR_SET_VALUE(receiverAccountId_, receiverAccountId) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline ResourceShareInvitations& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceShareInvitationId Field Functions 
      bool hasResourceShareInvitationId() const { return this->resourceShareInvitationId_ != nullptr;};
      void deleteResourceShareInvitationId() { this->resourceShareInvitationId_ = nullptr;};
      inline string getResourceShareInvitationId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareInvitationId_, "") };
      inline ResourceShareInvitations& setResourceShareInvitationId(string resourceShareInvitationId) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationId_, resourceShareInvitationId) };


      // resourceShareName Field Functions 
      bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
      void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
      inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
      inline ResourceShareInvitations& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


      // senderAccountId Field Functions 
      bool hasSenderAccountId() const { return this->senderAccountId_ != nullptr;};
      void deleteSenderAccountId() { this->senderAccountId_ = nullptr;};
      inline string getSenderAccountId() const { DARABONBA_PTR_GET_DEFAULT(senderAccountId_, "") };
      inline ResourceShareInvitations& setSenderAccountId(string senderAccountId) { DARABONBA_PTR_SET_VALUE(senderAccountId_, senderAccountId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceShareInvitations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the invitation was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The information about the failure.
      shared_ptr<vector<ResourceShareInvitations::InvitationFailedDetails>> invitationFailedDetails_ {};
      // The Alibaba Cloud account ID of the invitee.
      shared_ptr<string> receiverAccountId_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The ID of the invitation.
      shared_ptr<string> resourceShareInvitationId_ {};
      // The name of the resource share.
      shared_ptr<string> resourceShareName_ {};
      // The Alibaba Cloud account ID of the inviter.
      shared_ptr<string> senderAccountId_ {};
      // The status of the invitation. Valid values:
      // 
      // *   Pending
      // *   Accepted
      // *   Cancelled
      // *   Rejected
      // *   Expired
      // *   AcceptFailed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resourceShareInvitations_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceShareInvitationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceShareInvitationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareInvitations Field Functions 
    bool hasResourceShareInvitations() const { return this->resourceShareInvitations_ != nullptr;};
    void deleteResourceShareInvitations() { this->resourceShareInvitations_ = nullptr;};
    inline const vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations> & getResourceShareInvitations() const { DARABONBA_PTR_GET_CONST(resourceShareInvitations_, vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations>) };
    inline vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations> getResourceShareInvitations() { DARABONBA_PTR_GET(resourceShareInvitations_, vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations>) };
    inline ListResourceShareInvitationsResponseBody& setResourceShareInvitations(const vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations> & resourceShareInvitations) { DARABONBA_PTR_SET_VALUE(resourceShareInvitations_, resourceShareInvitations) };
    inline ListResourceShareInvitationsResponseBody& setResourceShareInvitations(vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations> && resourceShareInvitations) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitations_, resourceShareInvitations) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the resource sharing invitations.
    shared_ptr<vector<ListResourceShareInvitationsResponseBody::ResourceShareInvitations>> resourceShareInvitations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
