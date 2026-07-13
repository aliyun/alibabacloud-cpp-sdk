// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCECATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCECATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class UpdateResourceCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryName, resourceCategoryName_);
      DARABONBA_PTR_TO_JSON(ResourceMatcher, resourceMatcher_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryName, resourceCategoryName_);
      DARABONBA_PTR_FROM_JSON(ResourceMatcher, resourceMatcher_);
    };
    UpdateResourceCategoryRequest() = default ;
    UpdateResourceCategoryRequest(const UpdateResourceCategoryRequest &) = default ;
    UpdateResourceCategoryRequest(UpdateResourceCategoryRequest &&) = default ;
    UpdateResourceCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceCategoryRequest() = default ;
    UpdateResourceCategoryRequest& operator=(const UpdateResourceCategoryRequest &) = default ;
    UpdateResourceCategoryRequest& operator=(UpdateResourceCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCategoryId_ == nullptr
        && this->resourceCategoryName_ == nullptr && this->resourceMatcher_ == nullptr; };
    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline UpdateResourceCategoryRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceCategoryName Field Functions 
    bool hasResourceCategoryName() const { return this->resourceCategoryName_ != nullptr;};
    void deleteResourceCategoryName() { this->resourceCategoryName_ = nullptr;};
    inline string getResourceCategoryName() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryName_, "") };
    inline UpdateResourceCategoryRequest& setResourceCategoryName(string resourceCategoryName) { DARABONBA_PTR_SET_VALUE(resourceCategoryName_, resourceCategoryName) };


    // resourceMatcher Field Functions 
    bool hasResourceMatcher() const { return this->resourceMatcher_ != nullptr;};
    void deleteResourceMatcher() { this->resourceMatcher_ = nullptr;};
    inline string getResourceMatcher() const { DARABONBA_PTR_GET_DEFAULT(resourceMatcher_, "") };
    inline UpdateResourceCategoryRequest& setResourceMatcher(string resourceMatcher) { DARABONBA_PTR_SET_VALUE(resourceMatcher_, resourceMatcher) };


  protected:
    // Resource category ID.
    // 
    // This parameter is required.
    shared_ptr<string> resourceCategoryId_ {};
    // Resource category name.
    shared_ptr<string> resourceCategoryName_ {};
    // Resource matcher.
    shared_ptr<string> resourceMatcher_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
