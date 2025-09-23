// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODYRESOURCESHAREINVITATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREINVITATIONSRESPONSEBODYRESOURCESHAREINVITATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceShareInvitationsResponseBodyResourceShareInvitations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareInvitationsResponseBodyResourceShareInvitations& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InvitationFailedDetails, invitationFailedDetails_);
      DARABONBA_PTR_TO_JSON(ReceiverAccountId, receiverAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(SenderAccountId, senderAccountId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareInvitationsResponseBodyResourceShareInvitations& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InvitationFailedDetails, invitationFailedDetails_);
      DARABONBA_PTR_FROM_JSON(ReceiverAccountId, receiverAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(SenderAccountId, senderAccountId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListResourceShareInvitationsResponseBodyResourceShareInvitations() = default ;
    ListResourceShareInvitationsResponseBodyResourceShareInvitations(const ListResourceShareInvitationsResponseBodyResourceShareInvitations &) = default ;
    ListResourceShareInvitationsResponseBodyResourceShareInvitations(ListResourceShareInvitationsResponseBodyResourceShareInvitations &&) = default ;
    ListResourceShareInvitationsResponseBodyResourceShareInvitations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareInvitationsResponseBodyResourceShareInvitations() = default ;
    ListResourceShareInvitationsResponseBodyResourceShareInvitations& operator=(const ListResourceShareInvitationsResponseBodyResourceShareInvitations &) = default ;
    ListResourceShareInvitationsResponseBodyResourceShareInvitations& operator=(ListResourceShareInvitationsResponseBodyResourceShareInvitations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->invitationFailedDetails_ != nullptr && this->receiverAccountId_ != nullptr && this->resourceShareId_ != nullptr && this->resourceShareInvitationId_ != nullptr && this->resourceShareName_ != nullptr
        && this->senderAccountId_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // invitationFailedDetails Field Functions 
    bool hasInvitationFailedDetails() const { return this->invitationFailedDetails_ != nullptr;};
    void deleteInvitationFailedDetails() { this->invitationFailedDetails_ = nullptr;};
    inline const vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails> & invitationFailedDetails() const { DARABONBA_PTR_GET_CONST(invitationFailedDetails_, vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails>) };
    inline vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails> invitationFailedDetails() { DARABONBA_PTR_GET(invitationFailedDetails_, vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails>) };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setInvitationFailedDetails(const vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails> & invitationFailedDetails) { DARABONBA_PTR_SET_VALUE(invitationFailedDetails_, invitationFailedDetails) };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setInvitationFailedDetails(vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails> && invitationFailedDetails) { DARABONBA_PTR_SET_RVALUE(invitationFailedDetails_, invitationFailedDetails) };


    // receiverAccountId Field Functions 
    bool hasReceiverAccountId() const { return this->receiverAccountId_ != nullptr;};
    void deleteReceiverAccountId() { this->receiverAccountId_ = nullptr;};
    inline string receiverAccountId() const { DARABONBA_PTR_GET_DEFAULT(receiverAccountId_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setReceiverAccountId(string receiverAccountId) { DARABONBA_PTR_SET_VALUE(receiverAccountId_, receiverAccountId) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareInvitationId Field Functions 
    bool hasResourceShareInvitationId() const { return this->resourceShareInvitationId_ != nullptr;};
    void deleteResourceShareInvitationId() { this->resourceShareInvitationId_ = nullptr;};
    inline string resourceShareInvitationId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareInvitationId_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setResourceShareInvitationId(string resourceShareInvitationId) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationId_, resourceShareInvitationId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // senderAccountId Field Functions 
    bool hasSenderAccountId() const { return this->senderAccountId_ != nullptr;};
    void deleteSenderAccountId() { this->senderAccountId_ = nullptr;};
    inline string senderAccountId() const { DARABONBA_PTR_GET_DEFAULT(senderAccountId_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setSenderAccountId(string senderAccountId) { DARABONBA_PTR_SET_VALUE(senderAccountId_, senderAccountId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceShareInvitationsResponseBodyResourceShareInvitations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the invitation was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The information about the failure.
    std::shared_ptr<vector<Models::ListResourceShareInvitationsResponseBodyResourceShareInvitationsInvitationFailedDetails>> invitationFailedDetails_ = nullptr;
    // The Alibaba Cloud account ID of the invitee.
    std::shared_ptr<string> receiverAccountId_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The ID of the invitation.
    std::shared_ptr<string> resourceShareInvitationId_ = nullptr;
    // The name of the resource share.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The Alibaba Cloud account ID of the inviter.
    std::shared_ptr<string> senderAccountId_ = nullptr;
    // The status of the invitation. Valid values:
    // 
    // *   Pending
    // *   Accepted
    // *   Cancelled
    // *   Rejected
    // *   Expired
    // *   AcceptFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
