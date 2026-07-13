// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPRISKYRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeTopRiskyResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopRiskyResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopRiskyResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeTopRiskyResourcesShrinkRequest() = default ;
    DescribeTopRiskyResourcesShrinkRequest(const DescribeTopRiskyResourcesShrinkRequest &) = default ;
    DescribeTopRiskyResourcesShrinkRequest(DescribeTopRiskyResourcesShrinkRequest &&) = default ;
    DescribeTopRiskyResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopRiskyResourcesShrinkRequest() = default ;
    DescribeTopRiskyResourcesShrinkRequest& operator=(const DescribeTopRiskyResourcesShrinkRequest &) = default ;
    DescribeTopRiskyResourcesShrinkRequest& operator=(DescribeTopRiskyResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceCategoryId_ == nullptr
        && this->resourceOwnerIdsShrink_ == nullptr && this->resourceType_ == nullptr; };
    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeTopRiskyResourcesShrinkRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIdsShrink Field Functions 
    bool hasResourceOwnerIdsShrink() const { return this->resourceOwnerIdsShrink_ != nullptr;};
    void deleteResourceOwnerIdsShrink() { this->resourceOwnerIdsShrink_ = nullptr;};
    inline string getResourceOwnerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerIdsShrink_, "") };
    inline DescribeTopRiskyResourcesShrinkRequest& setResourceOwnerIdsShrink(string resourceOwnerIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceOwnerIdsShrink_, resourceOwnerIdsShrink) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeTopRiskyResourcesShrinkRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource category.
    shared_ptr<string> resourceCategoryId_ {};
    shared_ptr<string> resourceOwnerIdsShrink_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
