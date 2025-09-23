// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHARERESPONSEBODYRESOURCESHAREASSOCIATIONS_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHARERESPONSEBODYRESOURCESHAREASSOCIATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class DisassociateResourceShareResponseBodyResourceShareAssociations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateResourceShareResponseBodyResourceShareAssociations& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationStatus, associationStatus_);
      DARABONBA_PTR_TO_JSON(AssociationStatusMessage, associationStatusMessage_);
      DARABONBA_PTR_TO_JSON(AssociationType, associationType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(TargetProperty, targetProperty_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateResourceShareResponseBodyResourceShareAssociations& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationStatus, associationStatus_);
      DARABONBA_PTR_FROM_JSON(AssociationStatusMessage, associationStatusMessage_);
      DARABONBA_PTR_FROM_JSON(AssociationType, associationType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(TargetProperty, targetProperty_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DisassociateResourceShareResponseBodyResourceShareAssociations() = default ;
    DisassociateResourceShareResponseBodyResourceShareAssociations(const DisassociateResourceShareResponseBodyResourceShareAssociations &) = default ;
    DisassociateResourceShareResponseBodyResourceShareAssociations(DisassociateResourceShareResponseBodyResourceShareAssociations &&) = default ;
    DisassociateResourceShareResponseBodyResourceShareAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateResourceShareResponseBodyResourceShareAssociations() = default ;
    DisassociateResourceShareResponseBodyResourceShareAssociations& operator=(const DisassociateResourceShareResponseBodyResourceShareAssociations &) = default ;
    DisassociateResourceShareResponseBodyResourceShareAssociations& operator=(DisassociateResourceShareResponseBodyResourceShareAssociations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associationStatus_ != nullptr
        && this->associationStatusMessage_ != nullptr && this->associationType_ != nullptr && this->createTime_ != nullptr && this->entityId_ != nullptr && this->entityType_ != nullptr
        && this->resourceArn_ != nullptr && this->resourceShareId_ != nullptr && this->resourceShareName_ != nullptr && this->targetProperty_ != nullptr && this->updateTime_ != nullptr; };
    // associationStatus Field Functions 
    bool hasAssociationStatus() const { return this->associationStatus_ != nullptr;};
    void deleteAssociationStatus() { this->associationStatus_ = nullptr;};
    inline string associationStatus() const { DARABONBA_PTR_GET_DEFAULT(associationStatus_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setAssociationStatus(string associationStatus) { DARABONBA_PTR_SET_VALUE(associationStatus_, associationStatus) };


    // associationStatusMessage Field Functions 
    bool hasAssociationStatusMessage() const { return this->associationStatusMessage_ != nullptr;};
    void deleteAssociationStatusMessage() { this->associationStatusMessage_ = nullptr;};
    inline string associationStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(associationStatusMessage_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setAssociationStatusMessage(string associationStatusMessage) { DARABONBA_PTR_SET_VALUE(associationStatusMessage_, associationStatusMessage) };


    // associationType Field Functions 
    bool hasAssociationType() const { return this->associationType_ != nullptr;};
    void deleteAssociationType() { this->associationType_ = nullptr;};
    inline string associationType() const { DARABONBA_PTR_GET_DEFAULT(associationType_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setAssociationType(string associationType) { DARABONBA_PTR_SET_VALUE(associationType_, associationType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // targetProperty Field Functions 
    bool hasTargetProperty() const { return this->targetProperty_ != nullptr;};
    void deleteTargetProperty() { this->targetProperty_ = nullptr;};
    inline string targetProperty() const { DARABONBA_PTR_GET_DEFAULT(targetProperty_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setTargetProperty(string targetProperty) { DARABONBA_PTR_SET_VALUE(targetProperty_, targetProperty) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DisassociateResourceShareResponseBodyResourceShareAssociations& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The association status. Valid values:
    // 
    // *   Associating: The entity is being associated.
    // *   Associated: The entity is associated.
    // *   Failed: The entity fails to be associated.
    // *   Disassociating: The entity is being disassociated.
    // *   Disassociated: The entity is disassociated.
    // 
    // >  The system deletes the records of entities in the `Failed` or `Disassociated` state within 48 hours to 96 hours.
    std::shared_ptr<string> associationStatus_ = nullptr;
    // The cause of the disassociation failure.
    std::shared_ptr<string> associationStatusMessage_ = nullptr;
    // The association type. Valid values:
    // 
    // *   Resource
    // *   Target
    std::shared_ptr<string> associationType_ = nullptr;
    // The time when the disassociation of the entity was performed. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the time when the resource was disassociated from the resource share.
    // *   If the value of `AssociationType` is `Target`, the value of this parameter is the time when the principal was disassociated from the resource share.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the entity. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the ID of the resource.
    // *   If the value of `AssociationType` is `Target`, the value of this parameter is the ID of the resource directory, folder, member, or Alibaba Cloud service.
    std::shared_ptr<string> entityId_ = nullptr;
    // The type of the entity. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of AssociationType is Resource, the value of this parameter is the type of the resource. For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    // *   If the value of AssociationType is Target, the value of this parameter is Account.
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The ID of the resource share.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The name of the resource share.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The properties of the principal, such as the time range within which the resource is shared.
    // 
    // >  This parameter is returned only if the principal is an Alibaba Cloud service.
    std::shared_ptr<string> targetProperty_ = nullptr;
    // The time when the disassociation of the entity was updated. The value of this parameter depends on the value of the AssociationType parameter:
    // 
    // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the time when the disassociation of the resource was updated.
    // *   If the value of `AssociationType` is `Target`, the value of this parameter is the time when the disassociation of the principal was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
