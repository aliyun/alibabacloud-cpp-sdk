// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UntagResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAll, deleteAll_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
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
        && return this->resourceIds_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr && return this->tagKeys_ == nullptr; };
    // deleteAll Field Functions 
    bool hasDeleteAll() const { return this->deleteAll_ != nullptr;};
    void deleteDeleteAll() { this->deleteAll_ = nullptr;};
    inline bool deleteAll() const { DARABONBA_PTR_GET_DEFAULT(deleteAll_, false) };
    inline UntagResourcesRequest& setDeleteAll(bool deleteAll) { DARABONBA_PTR_SET_VALUE(deleteAll_, deleteAll) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline UntagResourcesRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline UntagResourcesRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline string tagKeys() const { DARABONBA_PTR_GET_DEFAULT(tagKeys_, "") };
    inline UntagResourcesRequest& setTagKeys(string tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };


  protected:
    // Specifies whether to remove all existing tags from the specified resources. Default value: false. Valid values:
    // 
    // *   **true**: removes all existing tags from the specified resources.
    // *   **false**: does not remove all existing tags from the specified resources.
    // 
    // > All existing tags of a resource are removed only if the **tagKeys** parameter is left empty and the **DeleteAll** parameter is set to true.
    std::shared_ptr<bool> deleteAll_ = nullptr;
    // The IDs of the resources from which you want to remove tags. You can specify up to 20 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceIds_ = nullptr;
    // The region in which the resource resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   **application**: Enterprise Distributed Application Service (EDAS) application
    // *   **cluster**: EDAS cluster
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tags that you want to remove. You can specify up to 20 tags. Set this parameter to a JSON array.
    std::shared_ptr<string> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
