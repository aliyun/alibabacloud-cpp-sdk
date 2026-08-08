// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKRESOURCECOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKRESOURCECOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class PrecheckResourceCountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckResourceCountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagResourceMatchers, tagResourceMatchersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckResourceCountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagResourceMatchers, tagResourceMatchersShrink_);
    };
    PrecheckResourceCountShrinkRequest() = default ;
    PrecheckResourceCountShrinkRequest(const PrecheckResourceCountShrinkRequest &) = default ;
    PrecheckResourceCountShrinkRequest(PrecheckResourceCountShrinkRequest &&) = default ;
    PrecheckResourceCountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckResourceCountShrinkRequest() = default ;
    PrecheckResourceCountShrinkRequest& operator=(const PrecheckResourceCountShrinkRequest &) = default ;
    PrecheckResourceCountShrinkRequest& operator=(PrecheckResourceCountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->tagResourceMatchersShrink_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PrecheckResourceCountShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagResourceMatchersShrink Field Functions 
    bool hasTagResourceMatchersShrink() const { return this->tagResourceMatchersShrink_ != nullptr;};
    void deleteTagResourceMatchersShrink() { this->tagResourceMatchersShrink_ = nullptr;};
    inline string getTagResourceMatchersShrink() const { DARABONBA_PTR_GET_DEFAULT(tagResourceMatchersShrink_, "") };
    inline PrecheckResourceCountShrinkRequest& setTagResourceMatchersShrink(string tagResourceMatchersShrink) { DARABONBA_PTR_SET_VALUE(tagResourceMatchersShrink_, tagResourceMatchersShrink) };


  protected:
    shared_ptr<string> resourceType_ {};
    // This parameter is required.
    shared_ptr<string> tagResourceMatchersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
