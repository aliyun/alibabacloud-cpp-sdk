// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREASSOCIATIONSRESPONSEBODYRESOURCESHAREASSOCIATIONSASSOCIATIONFAILEDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREASSOCIATIONSRESPONSEBODYRESOURCESHAREASSOCIATIONSASSOCIATIONFAILEDDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateType, associateType_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(FailureDescription, failureDescription_);
      DARABONBA_PTR_TO_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateType, associateType_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(FailureDescription, failureDescription_);
      DARABONBA_PTR_FROM_JSON(FailureReason, failureReason_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails() = default ;
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails(const ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails &) = default ;
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails(ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails &&) = default ;
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails() = default ;
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& operator=(const ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails &) = default ;
    ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& operator=(ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateType_ != nullptr
        && this->entityId_ != nullptr && this->entityType_ != nullptr && this->failureDescription_ != nullptr && this->failureReason_ != nullptr && this->operationType_ != nullptr
        && this->resourceArn_ != nullptr && this->status_ != nullptr && this->statusMessage_ != nullptr; };
    // associateType Field Functions 
    bool hasAssociateType() const { return this->associateType_ != nullptr;};
    void deleteAssociateType() { this->associateType_ = nullptr;};
    inline string associateType() const { DARABONBA_PTR_GET_DEFAULT(associateType_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setAssociateType(string associateType) { DARABONBA_PTR_SET_VALUE(associateType_, associateType) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // failureDescription Field Functions 
    bool hasFailureDescription() const { return this->failureDescription_ != nullptr;};
    void deleteFailureDescription() { this->failureDescription_ = nullptr;};
    inline string failureDescription() const { DARABONBA_PTR_GET_DEFAULT(failureDescription_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setFailureDescription(string failureDescription) { DARABONBA_PTR_SET_VALUE(failureDescription_, failureDescription) };


    // failureReason Field Functions 
    bool hasFailureReason() const { return this->failureReason_ != nullptr;};
    void deleteFailureReason() { this->failureReason_ = nullptr;};
    inline string failureReason() const { DARABONBA_PTR_GET_DEFAULT(failureReason_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setFailureReason(string failureReason) { DARABONBA_PTR_SET_VALUE(failureReason_, failureReason) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline ListResourceShareAssociationsResponseBodyResourceShareAssociationsAssociationFailedDetails& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // This parameter is deprecated. The OperationType parameter is used instead.
    std::shared_ptr<string> associateType_ = nullptr;
    // The ID of the entity. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of AssociationType is Resource, the value of this parameter is the ID of the principal.
    // *   If the value of AssociationType is Target, the value of this parameter is the ID of the resource.
    std::shared_ptr<string> entityId_ = nullptr;
    // The type of the entity. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of AssociationType is Resource, the value of this parameter is the type of the resource. For information about the types of resources that can be shared, see Services that work with Resource Sharing.
    // *   If the value of AssociationType is Target, the value of this parameter is `ResourceDirectory`, `Folder`, `Account`, or `Service`.
    std::shared_ptr<string> entityType_ = nullptr;
    // The failure description.
    std::shared_ptr<string> failureDescription_ = nullptr;
    // The failure cause. Valid values:
    // 
    // *   Unavailable: The resource does not exist.
    // *   LimitExceeded: The number of principals for the resource exceeds the upper limit.
    // *   ZonalResourceInaccessible: The resource is unavailable in this region.
    // *   InternalError: An internal error occurred.
    // *   UnsupportedOperation: You cannot perform this operation.
    std::shared_ptr<string> failureReason_ = nullptr;
    // The operation type. Valid values:
    // 
    // *   Associate
    // *   Disassociate
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // This parameter is deprecated. The FailureReason parameter is used instead.
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is deprecated. The FailureDescription parameter is used instead.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
