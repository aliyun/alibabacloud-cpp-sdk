// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODYRESOURCERELATIONSHIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCERELATIONSHIPSRESPONSEBODYRESOURCERELATIONSHIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceId, relatedResourceId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceType, relatedResourceType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceId, relatedResourceId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceType, relatedResourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships() = default ;
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships(const ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships &) = default ;
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships(ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships &&) = default ;
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships() = default ;
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& operator=(const ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships &) = default ;
    ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& operator=(ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->regionId_ == nullptr && return this->relatedResourceId_ == nullptr && return this->relatedResourceRegionId_ == nullptr && return this->relatedResourceType_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceId Field Functions 
    bool hasRelatedResourceId() const { return this->relatedResourceId_ != nullptr;};
    void deleteRelatedResourceId() { this->relatedResourceId_ = nullptr;};
    inline string relatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceId(string relatedResourceId) { DARABONBA_PTR_SET_VALUE(relatedResourceId_, relatedResourceId) };


    // relatedResourceRegionId Field Functions 
    bool hasRelatedResourceRegionId() const { return this->relatedResourceRegionId_ != nullptr;};
    void deleteRelatedResourceRegionId() { this->relatedResourceRegionId_ = nullptr;};
    inline string relatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceRegionId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceRegionId(string relatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(relatedResourceRegionId_, relatedResourceRegionId) };


    // relatedResourceType Field Functions 
    bool hasRelatedResourceType() const { return this->relatedResourceType_ != nullptr;};
    void deleteRelatedResourceType() { this->relatedResourceType_ = nullptr;};
    inline string relatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceType_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceType(string relatedResourceType) { DARABONBA_PTR_SET_VALUE(relatedResourceType_, relatedResourceType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListMultiAccountResourceRelationshipsResponseBodyResourceRelationships& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the management account or member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The region ID of the resource.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the associated resource.
    std::shared_ptr<string> relatedResourceId_ = nullptr;
    // The region ID of the associated resource.
    std::shared_ptr<string> relatedResourceRegionId_ = nullptr;
    // The type of the associated resource.
    std::shared_ptr<string> relatedResourceType_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
