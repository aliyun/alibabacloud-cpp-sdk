// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class TagResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TagResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceNames, resourceNamesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    TagResourcesShrinkRequest() = default ;
    TagResourcesShrinkRequest(const TagResourcesShrinkRequest &) = default ;
    TagResourcesShrinkRequest(TagResourcesShrinkRequest &&) = default ;
    TagResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagResourcesShrinkRequest() = default ;
    TagResourcesShrinkRequest& operator=(const TagResourcesShrinkRequest &) = default ;
    TagResourcesShrinkRequest& operator=(TagResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceNamesShrink_ == nullptr
        && this->resourceType_ == nullptr && this->tagShrink_ == nullptr; };
    // resourceNamesShrink Field Functions 
    bool hasResourceNamesShrink() const { return this->resourceNamesShrink_ != nullptr;};
    void deleteResourceNamesShrink() { this->resourceNamesShrink_ = nullptr;};
    inline string getResourceNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceNamesShrink_, "") };
    inline TagResourcesShrinkRequest& setResourceNamesShrink(string resourceNamesShrink) { DARABONBA_PTR_SET_VALUE(resourceNamesShrink_, resourceNamesShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline TagResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline TagResourcesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The names of the resources. You can specify up to 50 resource names.
    shared_ptr<string> resourceNamesShrink_ {};
    // The resource type.
    // 
    // Enumerated values:
    // 
    // *   role: RAM roles.
    // *   policy: policies.
    shared_ptr<string> resourceType_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
