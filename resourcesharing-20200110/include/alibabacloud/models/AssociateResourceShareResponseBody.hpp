// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHARERESPONSEBODY_HPP_
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
  class AssociateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    AssociateResourceShareResponseBody() = default ;
    AssociateResourceShareResponseBody(const AssociateResourceShareResponseBody &) = default ;
    AssociateResourceShareResponseBody(AssociateResourceShareResponseBody &&) = default ;
    AssociateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourceShareResponseBody() = default ;
    AssociateResourceShareResponseBody& operator=(const AssociateResourceShareResponseBody &) = default ;
    AssociateResourceShareResponseBody& operator=(AssociateResourceShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceShareAssociations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceShareAssociations& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationStatus, associationStatus_);
        DARABONBA_PTR_TO_JSON(AssociationStatusMessage, associationStatusMessage_);
        DARABONBA_PTR_TO_JSON(AssociationType, associationType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_TO_JSON(ResourceProperty, resourceProperty_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_TO_JSON(TargetProperty, targetProperty_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceShareAssociations& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationStatus, associationStatus_);
        DARABONBA_PTR_FROM_JSON(AssociationStatusMessage, associationStatusMessage_);
        DARABONBA_PTR_FROM_JSON(AssociationType, associationType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
        DARABONBA_PTR_FROM_JSON(ResourceProperty, resourceProperty_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
        DARABONBA_PTR_FROM_JSON(TargetProperty, targetProperty_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ResourceShareAssociations() = default ;
      ResourceShareAssociations(const ResourceShareAssociations &) = default ;
      ResourceShareAssociations(ResourceShareAssociations &&) = default ;
      ResourceShareAssociations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceShareAssociations() = default ;
      ResourceShareAssociations& operator=(const ResourceShareAssociations &) = default ;
      ResourceShareAssociations& operator=(ResourceShareAssociations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associationStatus_ == nullptr
        && this->associationStatusMessage_ == nullptr && this->associationType_ == nullptr && this->createTime_ == nullptr && this->entityId_ == nullptr && this->entityType_ == nullptr
        && this->resourceArn_ == nullptr && this->resourceProperty_ == nullptr && this->resourceShareId_ == nullptr && this->resourceShareName_ == nullptr && this->targetProperty_ == nullptr
        && this->updateTime_ == nullptr; };
      // associationStatus Field Functions 
      bool hasAssociationStatus() const { return this->associationStatus_ != nullptr;};
      void deleteAssociationStatus() { this->associationStatus_ = nullptr;};
      inline string getAssociationStatus() const { DARABONBA_PTR_GET_DEFAULT(associationStatus_, "") };
      inline ResourceShareAssociations& setAssociationStatus(string associationStatus) { DARABONBA_PTR_SET_VALUE(associationStatus_, associationStatus) };


      // associationStatusMessage Field Functions 
      bool hasAssociationStatusMessage() const { return this->associationStatusMessage_ != nullptr;};
      void deleteAssociationStatusMessage() { this->associationStatusMessage_ = nullptr;};
      inline string getAssociationStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(associationStatusMessage_, "") };
      inline ResourceShareAssociations& setAssociationStatusMessage(string associationStatusMessage) { DARABONBA_PTR_SET_VALUE(associationStatusMessage_, associationStatusMessage) };


      // associationType Field Functions 
      bool hasAssociationType() const { return this->associationType_ != nullptr;};
      void deleteAssociationType() { this->associationType_ = nullptr;};
      inline string getAssociationType() const { DARABONBA_PTR_GET_DEFAULT(associationType_, "") };
      inline ResourceShareAssociations& setAssociationType(string associationType) { DARABONBA_PTR_SET_VALUE(associationType_, associationType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceShareAssociations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline ResourceShareAssociations& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline ResourceShareAssociations& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline ResourceShareAssociations& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


      // resourceProperty Field Functions 
      bool hasResourceProperty() const { return this->resourceProperty_ != nullptr;};
      void deleteResourceProperty() { this->resourceProperty_ = nullptr;};
      inline string getResourceProperty() const { DARABONBA_PTR_GET_DEFAULT(resourceProperty_, "") };
      inline ResourceShareAssociations& setResourceProperty(string resourceProperty) { DARABONBA_PTR_SET_VALUE(resourceProperty_, resourceProperty) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline ResourceShareAssociations& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // resourceShareName Field Functions 
      bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
      void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
      inline string getResourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
      inline ResourceShareAssociations& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


      // targetProperty Field Functions 
      bool hasTargetProperty() const { return this->targetProperty_ != nullptr;};
      void deleteTargetProperty() { this->targetProperty_ = nullptr;};
      inline string getTargetProperty() const { DARABONBA_PTR_GET_DEFAULT(targetProperty_, "") };
      inline ResourceShareAssociations& setTargetProperty(string targetProperty) { DARABONBA_PTR_SET_VALUE(targetProperty_, targetProperty) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResourceShareAssociations& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


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
      shared_ptr<string> associationStatus_ {};
      // The cause of the association failure.
      shared_ptr<string> associationStatusMessage_ {};
      // The association type. Valid values:
      // 
      // *   Resource
      // *   Target
      shared_ptr<string> associationType_ {};
      // The time when the association of the entity was created. The value of this parameter depends on the value of the AssociationType parameter:
      // 
      // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the time when the shared resource was associated with the resource share.
      // *   If the value of `AssociationType` is `Target`, the value of this parameter is the time when the principal was associated with the resource share.
      shared_ptr<string> createTime_ {};
      // The ID of the entity. The value of this parameter depends on the value of the AssociationType parameter:
      // 
      // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the ID of the shared resource.
      // *   If the value of `AssociationType` is `Target`, the value of this parameter is the ID of the principal.
      shared_ptr<string> entityId_ {};
      // The type of the entity. The value of this parameter depends on the value of the AssociationType parameter:
      // 
      // *   If the value of AssociationType is Resource, the value of this parameter is the type of the shared resource. For information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
      // *   If the value of AssociationType is Target, the value of this parameter is `Account`.
      shared_ptr<string> entityType_ {};
      shared_ptr<string> resourceArn_ {};
      shared_ptr<string> resourceProperty_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The name of the resource share.
      shared_ptr<string> resourceShareName_ {};
      // The properties of the principal, such as the time range within which the resource is shared.
      // 
      // >  This parameter is returned only if the principal is an Alibaba Cloud service.
      shared_ptr<string> targetProperty_ {};
      // The time when the association of the entity was updated. The value of this parameter depends on the value of the AssociationType parameter:
      // 
      // *   If the value of `AssociationType` is `Resource`, the value of this parameter is the time when the association of the shared resource was updated.
      // *   If the value of `AssociationType` is `Target`, the value of this parameter is the time when the association of the principal was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceShareAssociations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareAssociations Field Functions 
    bool hasResourceShareAssociations() const { return this->resourceShareAssociations_ != nullptr;};
    void deleteResourceShareAssociations() { this->resourceShareAssociations_ = nullptr;};
    inline const vector<AssociateResourceShareResponseBody::ResourceShareAssociations> & getResourceShareAssociations() const { DARABONBA_PTR_GET_CONST(resourceShareAssociations_, vector<AssociateResourceShareResponseBody::ResourceShareAssociations>) };
    inline vector<AssociateResourceShareResponseBody::ResourceShareAssociations> getResourceShareAssociations() { DARABONBA_PTR_GET(resourceShareAssociations_, vector<AssociateResourceShareResponseBody::ResourceShareAssociations>) };
    inline AssociateResourceShareResponseBody& setResourceShareAssociations(const vector<AssociateResourceShareResponseBody::ResourceShareAssociations> & resourceShareAssociations) { DARABONBA_PTR_SET_VALUE(resourceShareAssociations_, resourceShareAssociations) };
    inline AssociateResourceShareResponseBody& setResourceShareAssociations(vector<AssociateResourceShareResponseBody::ResourceShareAssociations> && resourceShareAssociations) { DARABONBA_PTR_SET_RVALUE(resourceShareAssociations_, resourceShareAssociations) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the entities that are associated with the resource share.
    shared_ptr<vector<AssociateResourceShareResponseBody::ResourceShareAssociations>> resourceShareAssociations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
