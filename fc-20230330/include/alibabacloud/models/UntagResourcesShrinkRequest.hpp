// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UntagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKeyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceIdShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKeyShrink_);
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
        && this->resourceIdShrink_ == nullptr && this->resourceType_ == nullptr && this->tagKeyShrink_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // resourceIdShrink Field Functions 
    bool hasResourceIdShrink() const { return this->resourceIdShrink_ != nullptr;};
    void deleteResourceIdShrink() { this->resourceIdShrink_ = nullptr;};
    inline string getResourceIdShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdShrink_, "") };
    inline UntagResourcesShrinkRequest& setResourceIdShrink(string resourceIdShrink) { DARABONBA_PTR_SET_VALUE(resourceIdShrink_, resourceIdShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeyShrink Field Functions 
    bool hasTagKeyShrink() const { return this->tagKeyShrink_ != nullptr;};
    void deleteTagKeyShrink() { this->tagKeyShrink_ = nullptr;};
    inline string getTagKeyShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeyShrink_, "") };
    inline UntagResourcesShrinkRequest& setTagKeyShrink(string tagKeyShrink) { DARABONBA_PTR_SET_VALUE(tagKeyShrink_, tagKeyShrink) };


  protected:
    // Specifies whether to delete all tags.
    shared_ptr<bool> all_ {};
    // The resource identifiers.
    // 
    // This parameter is required.
    shared_ptr<string> resourceIdShrink_ {};
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tag to remove. You can specify a maximum of 50 tags.
    shared_ptr<string> tagKeyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
