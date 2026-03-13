// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSYSTEMTAGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSYSTEMTAGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class UntagResourcesSystemTagsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesSystemTagsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKeyShrink_);
      DARABONBA_PTR_TO_JSON(TagOwnerUid, tagOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesSystemTagsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKeyShrink_);
      DARABONBA_PTR_FROM_JSON(TagOwnerUid, tagOwnerUid_);
    };
    UntagResourcesSystemTagsShrinkRequest() = default ;
    UntagResourcesSystemTagsShrinkRequest(const UntagResourcesSystemTagsShrinkRequest &) = default ;
    UntagResourcesSystemTagsShrinkRequest(UntagResourcesSystemTagsShrinkRequest &&) = default ;
    UntagResourcesSystemTagsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesSystemTagsShrinkRequest() = default ;
    UntagResourcesSystemTagsShrinkRequest& operator=(const UntagResourcesSystemTagsShrinkRequest &) = default ;
    UntagResourcesSystemTagsShrinkRequest& operator=(UntagResourcesSystemTagsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->all_ == nullptr
        && this->regionId_ == nullptr && this->resourceIdShrink_ == nullptr && this->resourceType_ == nullptr && this->tagKeyShrink_ == nullptr && this->tagOwnerUid_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesSystemTagsShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UntagResourcesSystemTagsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceIdShrink Field Functions 
    bool hasResourceIdShrink() const { return this->resourceIdShrink_ != nullptr;};
    void deleteResourceIdShrink() { this->resourceIdShrink_ = nullptr;};
    inline string getResourceIdShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdShrink_, "") };
    inline UntagResourcesSystemTagsShrinkRequest& setResourceIdShrink(string resourceIdShrink) { DARABONBA_PTR_SET_VALUE(resourceIdShrink_, resourceIdShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesSystemTagsShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeyShrink Field Functions 
    bool hasTagKeyShrink() const { return this->tagKeyShrink_ != nullptr;};
    void deleteTagKeyShrink() { this->tagKeyShrink_ = nullptr;};
    inline string getTagKeyShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeyShrink_, "") };
    inline UntagResourcesSystemTagsShrinkRequest& setTagKeyShrink(string tagKeyShrink) { DARABONBA_PTR_SET_VALUE(tagKeyShrink_, tagKeyShrink) };


    // tagOwnerUid Field Functions 
    bool hasTagOwnerUid() const { return this->tagOwnerUid_ != nullptr;};
    void deleteTagOwnerUid() { this->tagOwnerUid_ = nullptr;};
    inline int64_t getTagOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(tagOwnerUid_, 0L) };
    inline UntagResourcesSystemTagsShrinkRequest& setTagOwnerUid(int64_t tagOwnerUid) { DARABONBA_PTR_SET_VALUE(tagOwnerUid_, tagOwnerUid) };


  protected:
    shared_ptr<bool> all_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> resourceIdShrink_ {};
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> tagKeyShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> tagOwnerUid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
