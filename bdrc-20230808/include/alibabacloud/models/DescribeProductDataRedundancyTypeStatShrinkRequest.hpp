// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeProductDataRedundancyTypeStatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductDataRedundancyTypeStatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductDataRedundancyTypeStatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIdsShrink_);
    };
    DescribeProductDataRedundancyTypeStatShrinkRequest() = default ;
    DescribeProductDataRedundancyTypeStatShrinkRequest(const DescribeProductDataRedundancyTypeStatShrinkRequest &) = default ;
    DescribeProductDataRedundancyTypeStatShrinkRequest(DescribeProductDataRedundancyTypeStatShrinkRequest &&) = default ;
    DescribeProductDataRedundancyTypeStatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductDataRedundancyTypeStatShrinkRequest() = default ;
    DescribeProductDataRedundancyTypeStatShrinkRequest& operator=(const DescribeProductDataRedundancyTypeStatShrinkRequest &) = default ;
    DescribeProductDataRedundancyTypeStatShrinkRequest& operator=(DescribeProductDataRedundancyTypeStatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceOwnerIdsShrink_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeProductDataRedundancyTypeStatShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeProductDataRedundancyTypeStatShrinkRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIdsShrink Field Functions 
    bool hasResourceOwnerIdsShrink() const { return this->resourceOwnerIdsShrink_ != nullptr;};
    void deleteResourceOwnerIdsShrink() { this->resourceOwnerIdsShrink_ = nullptr;};
    inline string getResourceOwnerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerIdsShrink_, "") };
    inline DescribeProductDataRedundancyTypeStatShrinkRequest& setResourceOwnerIdsShrink(string resourceOwnerIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceOwnerIdsShrink_, resourceOwnerIdsShrink) };


  protected:
    // The type of the cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The resource category ID.
    shared_ptr<string> resourceCategoryId_ {};
    shared_ptr<string> resourceOwnerIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
