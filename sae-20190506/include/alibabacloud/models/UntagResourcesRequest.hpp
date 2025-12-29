// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    UntagResourcesRequest() = default ;
    UntagResourcesRequest(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest(UntagResourcesRequest &&) = default ;
    UntagResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesRequest() = default ;
    UntagResourcesRequest& operator=(const UntagResourcesRequest &) = default ;
    UntagResourcesRequest& operator=(UntagResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteAll_ == nullptr
        && this->regionId_ == nullptr && this->resourceIds_ == nullptr && this->resourceType_ == nullptr && this->tagKeys_ == nullptr; };
    // deleteAll Field Functions 
    bool hasDeleteAll() const { return this->deleteAll_ != nullptr;};
    void deleteDeleteAll() { this->deleteAll_ = nullptr;};
    inline bool getDeleteAll() const { DARABONBA_PTR_GET_DEFAULT(deleteAll_, false) };
    inline UntagResourcesRequest& setDeleteAll(bool deleteAll) { DARABONBA_PTR_SET_VALUE(deleteAll_, deleteAll) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UntagResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string getResourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline UntagResourcesRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline string getTagKeys() const { DARABONBA_PTR_GET_DEFAULT(tagKeys_, "") };
    inline UntagResourcesRequest& setTagKeys(string tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };


  protected:
    // Specifies whether to remove all the specified tags. This parameter takes effect only if the TagKeys parameter is specified. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> deleteAll_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of resources. Separate multiple resource IDs with comma (,).
    // 
    // This parameter is required.
    shared_ptr<string> resourceIds_ {};
    // The type of the resource. Set the value to `application`.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tag keys. Separate multiple tag keys with commas (,).
    shared_ptr<string> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
