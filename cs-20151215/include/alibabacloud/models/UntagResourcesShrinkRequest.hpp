// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UntagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all, all_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(resource_ids, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
      DARABONBA_PTR_TO_JSON(tag_keys, tagKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all, all_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(resource_ids, resourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
      DARABONBA_PTR_FROM_JSON(tag_keys, tagKeysShrink_);
    };
    UntagResourcesShrinkRequest() = default ;
    UntagResourcesShrinkRequest(const UntagResourcesShrinkRequest &) = default ;
    UntagResourcesShrinkRequest(UntagResourcesShrinkRequest &&) = default ;
    UntagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesShrinkRequest() = default ;
    UntagResourcesShrinkRequest& operator=(const UntagResourcesShrinkRequest &) = default ;
    UntagResourcesShrinkRequest& operator=(UntagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceIdsShrink_ == nullptr && return this->resourceType_ == nullptr && return this->tagKeysShrink_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UntagResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string resourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline UntagResourcesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeysShrink Field Functions 
    bool hasTagKeysShrink() const { return this->tagKeysShrink_ != nullptr;};
    void deleteTagKeysShrink() { this->tagKeysShrink_ = nullptr;};
    inline string tagKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeysShrink_, "") };
    inline UntagResourcesShrinkRequest& setTagKeysShrink(string tagKeysShrink) { DARABONBA_PTR_SET_VALUE(tagKeysShrink_, tagKeysShrink) };


  protected:
    // Specifies whether to remove all custom labels. This parameter takes effect only when `tag_keys` is left empty. Valid values:
    // 
    // *   `true`: Remove all custom labels.
    // *   `false`: Do not remove all custom labels.
    std::shared_ptr<bool> all_ = nullptr;
    // The region ID of the resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceIdsShrink_ = nullptr;
    // The type of resource. Set the value to `CLUSTER`.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The list of keys of the labels that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagKeysShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
