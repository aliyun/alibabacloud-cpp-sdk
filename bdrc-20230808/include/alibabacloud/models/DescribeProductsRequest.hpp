// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DescribeProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIds_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
    };
    DescribeProductsRequest() = default ;
    DescribeProductsRequest(const DescribeProductsRequest &) = default ;
    DescribeProductsRequest(DescribeProductsRequest &&) = default ;
    DescribeProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsRequest() = default ;
    DescribeProductsRequest& operator=(const DescribeProductsRequest &) = default ;
    DescribeProductsRequest& operator=(DescribeProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceOwnerIds_ == nullptr && this->resourceRegionId_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeProductsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeProductsRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIds Field Functions 
    bool hasResourceOwnerIds() const { return this->resourceOwnerIds_ != nullptr;};
    void deleteResourceOwnerIds() { this->resourceOwnerIds_ = nullptr;};
    inline const vector<int64_t> & getResourceOwnerIds() const { DARABONBA_PTR_GET_CONST(resourceOwnerIds_, vector<int64_t>) };
    inline vector<int64_t> getResourceOwnerIds() { DARABONBA_PTR_GET(resourceOwnerIds_, vector<int64_t>) };
    inline DescribeProductsRequest& setResourceOwnerIds(const vector<int64_t> & resourceOwnerIds) { DARABONBA_PTR_SET_VALUE(resourceOwnerIds_, resourceOwnerIds) };
    inline DescribeProductsRequest& setResourceOwnerIds(vector<int64_t> && resourceOwnerIds) { DARABONBA_PTR_SET_RVALUE(resourceOwnerIds_, resourceOwnerIds) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeProductsRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


  protected:
    // The product type of the resource. If you omit this parameter, the API returns resources of all product types. For example, specify `oss` to query resources from Object Storage Service.
    shared_ptr<string> productType_ {};
    // The resource category ID.
    shared_ptr<string> resourceCategoryId_ {};
    // A list of resource owner IDs for cross-account resource queries. If you omit this parameter, the API returns resources from the current account.
    shared_ptr<vector<int64_t>> resourceOwnerIds_ {};
    // The ID of the resource\\"s region. If you omit this parameter, the API returns resources from all regions.
    shared_ptr<string> resourceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
