// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UntagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeysShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeysShrink_);
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
        && this->resourceNamesShrink_ == nullptr && this->resourceType_ == nullptr && this->tagKeysShrink_ == nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline UntagResourcesShrinkRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // resourceNamesShrink Field Functions 
    bool hasResourceNamesShrink() const { return this->resourceNamesShrink_ != nullptr;};
    void deleteResourceNamesShrink() { this->resourceNamesShrink_ = nullptr;};
    inline string getResourceNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceNamesShrink_, "") };
    inline UntagResourcesShrinkRequest& setResourceNamesShrink(string resourceNamesShrink) { DARABONBA_PTR_SET_VALUE(resourceNamesShrink_, resourceNamesShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UntagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKeysShrink Field Functions 
    bool hasTagKeysShrink() const { return this->tagKeysShrink_ != nullptr;};
    void deleteTagKeysShrink() { this->tagKeysShrink_ = nullptr;};
    inline string getTagKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeysShrink_, "") };
    inline UntagResourcesShrinkRequest& setTagKeysShrink(string tagKeysShrink) { DARABONBA_PTR_SET_VALUE(tagKeysShrink_, tagKeysShrink) };


  protected:
    // Specifies whether to remove all tags from the resources.
    // 
    // Enumerated values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> all_ {};
    // The names of the resources. You can specify up to 50 resource names.
    shared_ptr<string> resourceNamesShrink_ {};
    // The resource type.
    // 
    // Enumerated values:
    // 
    // *   role: RAM roles.
    // *   policy: policies.
    shared_ptr<string> resourceType_ {};
    // The keys of the tags. You can specify up to 20 tag keys.
    shared_ptr<string> tagKeysShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
