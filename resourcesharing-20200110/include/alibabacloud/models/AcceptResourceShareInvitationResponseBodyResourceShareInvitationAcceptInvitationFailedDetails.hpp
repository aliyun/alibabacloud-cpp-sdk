// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODYRESOURCESHAREINVITATIONACCEPTINVITATIONFAILEDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTRESOURCESHAREINVITATIONRESPONSEBODYRESOURCESHAREINVITATIONACCEPTINVITATIONFAILEDDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& obj) { 
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
    friend void from_json(const Darabonba::Json& j, AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& obj) { 
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
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails() = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails(const AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails &) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails(AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails &&) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails() = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& operator=(const AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails &) = default ;
    AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& operator=(AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateType_ != nullptr
        && this->failureDescription_ != nullptr && this->failureReason_ != nullptr && this->operationType_ != nullptr && this->resourceArn_ != nullptr && this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->status_ != nullptr && this->statusMessage_ != nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string associateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // failureDescription Field Functions 
    bool hasFailureDescription() const { return this->failureDescription_ != nullptr;};
    void deleteFailureDescription() { this->failureDescription_ = nullptr;};
    inline string failureDescription() const { DARABONBA_PTR_GET_DEFAULT(failureDescription_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setFailureDescription(string failureDescription) { DARABONBA_PTR_SET_VALUE(failureDescription_, failureDescription) };


    // failureReason Field Functions 
    bool hasFailureReason() const { return this->failureReason_ != nullptr;};
    void deleteFailureReason() { this->failureReason_ = nullptr;};
    inline string failureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline AcceptResourceShareInvitationResponseBodyResourceShareInvitationAcceptInvitationFailedDetails& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // This parameter is deprecated. The OperationType parameter is used instead.
    std::shared_ptr<string> associateType_ = nullptr;
    // The failure description.
    std::shared_ptr<string> failureDescription_ = nullptr;
    // The failure cause. Valid values:
    // 
    // *   Unavailable: The resource cannot be shared.
    // *   LimitExceeded: The number of shared resources within the Alibaba Cloud account exceeds the upper limit.
    // *   ZonalResourceInaccessible: The resource is unavailable in this region.
    // *   InternalError: An internal error occurred during the check.
    std::shared_ptr<string> failureReason_ = nullptr;
    // The operation type. Valid values:
    // 
    // *   Associate
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The ID of the shared resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the shared resource.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // This parameter is deprecated. The FailureReason parameter is used instead.
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is deprecated. The FailureDescription parameter is used instead.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
