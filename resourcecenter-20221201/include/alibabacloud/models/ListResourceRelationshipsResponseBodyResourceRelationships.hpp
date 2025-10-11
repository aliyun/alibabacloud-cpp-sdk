// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSRESPONSEBODYRESOURCERELATIONSHIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSRESPONSEBODYRESOURCERELATIONSHIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceRelationshipsResponseBodyResourceRelationships : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRelationshipsResponseBodyResourceRelationships& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceId, relatedResourceId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceType, relatedResourceType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRelationshipsResponseBodyResourceRelationships& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceId, relatedResourceId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceRegionId, relatedResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceType, relatedResourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourceRelationshipsResponseBodyResourceRelationships() = default ;
    ListResourceRelationshipsResponseBodyResourceRelationships(const ListResourceRelationshipsResponseBodyResourceRelationships &) = default ;
    ListResourceRelationshipsResponseBodyResourceRelationships(ListResourceRelationshipsResponseBodyResourceRelationships &&) = default ;
    ListResourceRelationshipsResponseBodyResourceRelationships(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRelationshipsResponseBodyResourceRelationships() = default ;
    ListResourceRelationshipsResponseBodyResourceRelationships& operator=(const ListResourceRelationshipsResponseBodyResourceRelationships &) = default ;
    ListResourceRelationshipsResponseBodyResourceRelationships& operator=(ListResourceRelationshipsResponseBodyResourceRelationships &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->relatedResourceId_ != nullptr && this->relatedResourceRegionId_ != nullptr && this->relatedResourceType_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceId Field Functions 
    bool hasRelatedResourceId() const { return this->relatedResourceId_ != nullptr;};
    void deleteRelatedResourceId() { this->relatedResourceId_ = nullptr;};
    inline string relatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceId_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceId(string relatedResourceId) { DARABONBA_PTR_SET_VALUE(relatedResourceId_, relatedResourceId) };


    // relatedResourceRegionId Field Functions 
    bool hasRelatedResourceRegionId() const { return this->relatedResourceRegionId_ != nullptr;};
    void deleteRelatedResourceRegionId() { this->relatedResourceRegionId_ = nullptr;};
    inline string relatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceRegionId_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceRegionId(string relatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(relatedResourceRegionId_, relatedResourceRegionId) };


    // relatedResourceType Field Functions 
    bool hasRelatedResourceType() const { return this->relatedResourceType_ != nullptr;};
    void deleteRelatedResourceType() { this->relatedResourceType_ = nullptr;};
    inline string relatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceType_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setRelatedResourceType(string relatedResourceType) { DARABONBA_PTR_SET_VALUE(relatedResourceType_, relatedResourceType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceRelationshipsResponseBodyResourceRelationships& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
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
