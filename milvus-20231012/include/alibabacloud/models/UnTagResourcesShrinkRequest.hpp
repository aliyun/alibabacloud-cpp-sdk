// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class UnTagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKeyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UnTagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKeyShrink_);
    };
    UnTagResourcesShrinkRequest() = default ;
    UnTagResourcesShrinkRequest(const UnTagResourcesShrinkRequest &) = default ;
    UnTagResourcesShrinkRequest(UnTagResourcesShrinkRequest &&) = default ;
    UnTagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnTagResourcesShrinkRequest() = default ;
    UnTagResourcesShrinkRequest& operator=(const UnTagResourcesShrinkRequest &) = default ;
    UnTagResourcesShrinkRequest& operator=(UnTagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceIdShrink_ == nullptr && return this->resourceType_ == nullptr && return this->tagKeyShrink_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UnTagResourcesShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnTagResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdShrink Field Functions 
    bool hasResourceIdShrink() const { return this->resourceIdShrink_ != nullptr;};
    void deleteResourceIdShrink() { this->resourceIdShrink_ = nullptr;};
    inline string resourceIdShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdShrink_, "") };
    inline UnTagResourcesShrinkRequest& setResourceIdShrink(string resourceIdShrink) { DARABONBA_PTR_SET_VALUE(resourceIdShrink_, resourceIdShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UnTagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeyShrink Field Functions 
    bool hasTagKeyShrink() const { return this->tagKeyShrink_ != nullptr;};
    void deleteTagKeyShrink() { this->tagKeyShrink_ = nullptr;};
    inline string tagKeyShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeyShrink_, "") };
    inline UnTagResourcesShrinkRequest& setTagKeyShrink(string tagKeyShrink) { DARABONBA_PTR_SET_VALUE(tagKeyShrink_, tagKeyShrink) };


  protected:
    std::shared_ptr<bool> all_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceIdShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> tagKeyShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
