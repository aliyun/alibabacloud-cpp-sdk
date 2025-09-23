// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODYRESOURCESHAREINVITATION_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODYRESOURCESHAREINVITATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AcceptResourceShareInvitationResponseBodyResourceShareInvitation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptResourceShareInvitationResponseBodyResourceShareInvitation& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptInvitationFailedDetails, acceptInvitationFailedDetails_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ReceiverAccountId, receiverAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(SenderAccountId, senderAccountId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptResourceShareInvitationResponseBodyResourceShareInvitation& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptInvitationFailedDetails, acceptInvitationFailedDetails_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ReceiverAccountId, receiverAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareInvitationId, resourceShareInvitationId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(SenderAccountId, senderAccountId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation() = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation(const AcceptResourceShareInvitationResponseBodyResourceShareInvitation &) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation(AcceptResourceShareInvitationResponseBodyResourceShareInvitation &&) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptResourceShareInvitationResponseBodyResourceShareInvitation() = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation& operator=(const AcceptResourceShareInvitationResponseBodyResourceShareInvitation &) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitation& operator=(AcceptResourceShareInvitationResponseBodyResourceShareInvitation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptInvitationFailedDetails_ != nullptr
        && this->createTime_ != nullptr && this->receiverAccountId_ != nullptr && this->resourceShareId_ != nullptr && this->resourceShareInvitationId_ != nullptr && this->resourceShareName_ != nullptr
        && this->senderAccountId_ != nullptr && this->status_ != nullptr; };
    // acceptInvitationFailedDetails Field Functions 
    bool hasAcceptInvitationFailedDetails() const { return this->acceptInvitationFailedDetails_ != nullptr;};
    void deleteAcceptInvitationFailedDetails() { this->acceptInvitationFailedDetails_ = nullptr;};
    inline const vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails> & acceptInvitationFailedDetails() const { DARABONBA_PTR_GET_CONST(acceptInvitationFailedDetails_, vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails>) };
    inline vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails> acceptInvitationFailedDetails() { DARABONBA_PTR_GET(acceptInvitationFailedDetails_, vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails>) };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setAcceptInvitationFailedDetails(const vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails> & acceptInvitationFailedDetails) { DARABONBA_PTR_SET_VALUE(acceptInvitationFailedDetails_, acceptInvitationFailedDetails) };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setAcceptInvitationFailedDetails(vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails> && acceptInvitationFailedDetails) { DARABONBA_PTR_SET_RVALUE(acceptInvitationFailedDetails_, acceptInvitationFailedDetails) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // receiverAccountId Field Functions 
    bool hasReceiverAccountId() const { return this->receiverAccountId_ != nullptr;};
    void deleteReceiverAccountId() { this->receiverAccountId_ = nullptr;};
    inline string receiverAccountId() const { DARABONBA_PTR_GET_DEFAULT(receiverAccountId_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setReceiverAccountId(string receiverAccountId) { DARABONBA_PTR_SET_VALUE(receiverAccountId_, receiverAccountId) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareInvitationId Field Functions 
    bool hasResourceShareInvitationId() const { return this->resourceShareInvitationId_ != nullptr;};
    void deleteResourceShareInvitationId() { this->resourceShareInvitationId_ = nullptr;};
    inline string resourceShareInvitationId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareInvitationId_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setResourceShareInvitationId(string resourceShareInvitationId) { DARABONBA_PTR_SET_VALUE(resourceShareInvitationId_, resourceShareInvitationId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // senderAccountId Field Functions 
    bool hasSenderAccountId() const { return this->senderAccountId_ != nullptr;};
    void deleteSenderAccountId() { this->senderAccountId_ = nullptr;};
    inline string senderAccountId() const { DARABONBA_PTR_GET_DEFAULT(senderAccountId_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setSenderAccountId(string senderAccountId) { DARABONBA_PTR_SET_VALUE(senderAccountId_, senderAccountId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about the failure.
    std::shared_ptr<vector<Models::AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails>> acceptInvitationFailedDetails_ = nullptr;
    // The time when the invitation was created. The time is displayed in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> createTime_ = nullptr;
    // The Alibaba Cloud account ID of the invitee.
    // 
    // This parameter is required.
    std::shared_ptr<string> receiverAccountId_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The ID of the resource sharing invitation.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareInvitationId_ = nullptr;
    // The name of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The Alibaba Cloud account ID of the inviter.
    // 
    // This parameter is required.
    std::shared_ptr<string> senderAccountId_ = nullptr;
    // The status of the invitation. Valid values:
    // 
    // *   Pending
    // *   Accepted
    // *   Cancelled
    // *   Rejected
    // *   Expired
    // *   AcceptFailed
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
