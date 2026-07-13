// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class CreateResourceCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCategoryName, resourceCategoryName_);
      DARABONBA_PTR_TO_JSON(ResourceMatcher, resourceMatcher_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCategoryName, resourceCategoryName_);
      DARABONBA_PTR_FROM_JSON(ResourceMatcher, resourceMatcher_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateResourceCategoryRequest() = default ;
    CreateResourceCategoryRequest(const CreateResourceCategoryRequest &) = default ;
    CreateResourceCategoryRequest(CreateResourceCategoryRequest &&) = default ;
    CreateResourceCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceCategoryRequest() = default ;
    CreateResourceCategoryRequest& operator=(const CreateResourceCategoryRequest &) = default ;
    CreateResourceCategoryRequest& operator=(CreateResourceCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCategoryName_ == nullptr
        && this->resourceMatcher_ == nullptr && this->resourceType_ == nullptr; };
    // resourceCategoryName Field Functions 
    bool hasResourceCategoryName() const { return this->resourceCategoryName_ != nullptr;};
    void deleteResourceCategoryName() { this->resourceCategoryName_ = nullptr;};
    inline string getResourceCategoryName() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryName_, "") };
    inline CreateResourceCategoryRequest& setResourceCategoryName(string resourceCategoryName) { DARABONBA_PTR_SET_VALUE(resourceCategoryName_, resourceCategoryName) };


    // resourceMatcher Field Functions 
    bool hasResourceMatcher() const { return this->resourceMatcher_ != nullptr;};
    void deleteResourceMatcher() { this->resourceMatcher_ = nullptr;};
    inline string getResourceMatcher() const { DARABONBA_PTR_GET_DEFAULT(resourceMatcher_, "") };
    inline CreateResourceCategoryRequest& setResourceMatcher(string resourceMatcher) { DARABONBA_PTR_SET_VALUE(resourceMatcher_, resourceMatcher) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceCategoryRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // Resource category name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceCategoryName_ {};
    // Resource matcher.
    // 
    // This parameter is required.
    shared_ptr<string> resourceMatcher_ {};
    // Resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
