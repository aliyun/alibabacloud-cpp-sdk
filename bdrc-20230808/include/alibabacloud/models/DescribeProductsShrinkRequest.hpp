// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeProductsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
    };
    DescribeProductsShrinkRequest() = default ;
    DescribeProductsShrinkRequest(const DescribeProductsShrinkRequest &) = default ;
    DescribeProductsShrinkRequest(DescribeProductsShrinkRequest &&) = default ;
    DescribeProductsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsShrinkRequest() = default ;
    DescribeProductsShrinkRequest& operator=(const DescribeProductsShrinkRequest &) = default ;
    DescribeProductsShrinkRequest& operator=(DescribeProductsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceOwnerIdsShrink_ == nullptr && this->resourceRegionId_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeProductsShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeProductsShrinkRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIdsShrink Field Functions 
    bool hasResourceOwnerIdsShrink() const { return this->resourceOwnerIdsShrink_ != nullptr;};
    void deleteResourceOwnerIdsShrink() { this->resourceOwnerIdsShrink_ = nullptr;};
    inline string getResourceOwnerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerIdsShrink_, "") };
    inline DescribeProductsShrinkRequest& setResourceOwnerIdsShrink(string resourceOwnerIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceOwnerIdsShrink_, resourceOwnerIdsShrink) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeProductsShrinkRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


  protected:
    // The product type of the resource. If you omit this parameter, the API returns resources of all product types. For example, specify `oss` to query resources from Object Storage Service.
    shared_ptr<string> productType_ {};
    // The resource category ID.
    shared_ptr<string> resourceCategoryId_ {};
    // A list of resource owner IDs for cross-account resource queries. If you omit this parameter, the API returns resources from the current account.
    shared_ptr<string> resourceOwnerIdsShrink_ {};
    // The ID of the resource\\"s region. If you omit this parameter, the API returns resources from all regions.
    shared_ptr<string> resourceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
