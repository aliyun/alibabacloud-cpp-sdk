// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REJECTRESOURCESHAREINVITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class RejectResourceShareInvitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    friend void from_json(const Darabonba::Json& j, RejectResourceShareInvitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitation, resourceShareInvitation_);
    };
    RejectResourceShareInvitationResponseBody() = default ;
    RejectResourceShareInvitationResponseBody(const RejectResourceShareInvitationResponseBody &) = default ;
    RejectResourceShareInvitationResponseBody(RejectResourceShareInvitationResponseBody &&) = default ;
    RejectResourceShareInvitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectResourceShareInvitationResponseBody() = default ;
    RejectResourceShareInvitationResponseBody& operator=(const RejectResourceShareInvitationResponseBody &) = default ;
    RejectResourceShareInvitationResponseBody& operator=(RejectResourceShareInvitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceShareInvitation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceShareInvitation& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ReceiverAccountId, receiverAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
        DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_TO_JSON(SenderAccountId, senderAccountId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceShareInvitation& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ReceiverAccountId, receiverAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_FROM_JSON(SenderAccountId, senderAccountId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceShareInvitation() = default ;
      ResourceShareInvitation(const ResourceShareInvitation &) = default ;
      ResourceShareInvitation(ResourceShareInvitation &&) = default ;
      ResourceShareInvitation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceShareInvitation() = default ;
      ResourceShareInvitation& operator=(const ResourceShareInvitation &) = default ;
      ResourceShareInvitation& operator=(ResourceShareInvitation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->receiverAccountId_ == nullptr && this->resourceShareId_ == nullptr && this->resourceShareInvitationId_ == nullptr && this->resourceShareName_ == nullptr && this->senderAccountId_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceShareInvitation& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // receiverAccountId Field Functions 
      bool hasReceiverAccountId() const { return this->receiverAccountId_ != nullptr;};
      void deleteReceiverAccountId() { this->receiverAccountId_ = nullptr;};
      inline string getReceiverAccountId() const { DARABONBA_PTR_GET_DEFAULT(receiverAccountId_, "") };
      inline ResourceShareInvitation& setReceiverAccountId(string receiverAccountId) { DARABONBA_PTR_SET_VALUE(receiverAccountId_, receiverAccountId) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline ResourceShareInvitation& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceShareInvitationId Field Functions 
      bool hasResourceShareInvitationId() const { return this->resourceShareInvitationId_ != nullptr;};
      void deleteResourceShareInvitationId() { this->resourceShareInvitationId_ = nullptr;};
      inline string getResourceShareInvitationId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareInvitationId_, "") };
      inline ResourceShareInvitation& setResourceShareInvitationId(string resourceShareInvitationId) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationId_, resourceShareInvitationId) };


      // resourceShareName Field Functions 
      bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
      void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
      inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
      inline ResourceShareInvitation& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


      // senderAccountId Field Functions 
      bool hasSenderAccountId() const { return this->senderAccountId_ != nullptr;};
      void deleteSenderAccountId() { this->senderAccountId_ = nullptr;};
      inline string getSenderAccountId() const { DARABONBA_PTR_GET_DEFAULT(senderAccountId_, "") };
      inline ResourceShareInvitation& setSenderAccountId(string senderAccountId) { DARABONBA_PTR_SET_VALUE(senderAccountId_, senderAccountId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceShareInvitation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the invitation was created. The time is displayed in UTC.
      // 
      // This parameter is required.
      shared_ptr<string> createTime_ {};
      // The Alibaba Cloud account ID of the invitee.
      // 
      // This parameter is required.
      shared_ptr<string> receiverAccountId_ {};
      // The ID of the resource share.
      // 
      // This parameter is required.
      shared_ptr<string> resourceShareId_ {};
      // The ID of the invitation.
      // 
      // This parameter is required.
      shared_ptr<string> resourceShareInvitationId_ {};
      // The name of the resource share.
      // 
      // This parameter is required.
      shared_ptr<string> resourceShareName_ {};
      // The Alibaba Cloud account ID of the inviter.
      // 
      // This parameter is required.
      shared_ptr<string> senderAccountId_ {};
      // The status of the invitation. Valid values:
      // 
      // *   Pending: The invitation is waiting for confirmation.
      // *   Accepted: The invitation is accepted.
      // *   Cancelled: The invitation is canceled.
      // *   Rejected: The invitation is rejected.
      // *   Expired: The invitation has expired.
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceShareInvitation_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RejectResourceShareInvitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareInvitation Field Functions 
    bool hasResourceShareInvitation() const { return this->resourceShareInvitation_ != nullptr;};
    void deleteResourceShareInvitation() { this->resourceShareInvitation_ = nullptr;};
    inline const RejectResourceShareInvitationResponseBody::ResourceShareInvitation & getResourceShareInvitation() const { DARABONBA_PTR_GET_CONST(resourceShareInvitation_, RejectResourceShareInvitationResponseBody::ResourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBody::ResourceShareInvitation getResourceShareInvitation() { DARABONBA_PTR_GET(resourceShareInvitation_, RejectResourceShareInvitationResponseBody::ResourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBody& setResourceShareInvitation(const RejectResourceShareInvitationResponseBody::ResourceShareInvitation & resourceShareInvitation) { DARABONBA_PTR_SET_VALUE(resourceShareInvitation_, resourceShareInvitation) };
    inline RejectResourceShareInvitationResponseBody& setResourceShareInvitation(RejectResourceShareInvitationResponseBody::ResourceShareInvitation && resourceShareInvitation) { DARABONBA_PTR_SET_RVALUE(resourceShareInvitation_, resourceShareInvitation) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the resource sharing invitation.
    shared_ptr<RejectResourceShareInvitationResponseBody::ResourceShareInvitation> resourceShareInvitation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
