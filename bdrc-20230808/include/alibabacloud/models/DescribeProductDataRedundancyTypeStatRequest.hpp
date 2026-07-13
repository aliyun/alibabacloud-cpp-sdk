// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTDATAREDUNDANCYTYPESTATREQUEST_HPP_
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
  class DescribeProductDataRedundancyTypeStatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductDataRedundancyTypeStatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerIds, resourceOwnerIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductDataRedundancyTypeStatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerIds, resourceOwnerIds_);
    };
    DescribeProductDataRedundancyTypeStatRequest() = default ;
    DescribeProductDataRedundancyTypeStatRequest(const DescribeProductDataRedundancyTypeStatRequest &) = default ;
    DescribeProductDataRedundancyTypeStatRequest(DescribeProductDataRedundancyTypeStatRequest &&) = default ;
    DescribeProductDataRedundancyTypeStatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductDataRedundancyTypeStatRequest() = default ;
    DescribeProductDataRedundancyTypeStatRequest& operator=(const DescribeProductDataRedundancyTypeStatRequest &) = default ;
    DescribeProductDataRedundancyTypeStatRequest& operator=(DescribeProductDataRedundancyTypeStatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceOwnerIds_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeProductDataRedundancyTypeStatRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline DescribeProductDataRedundancyTypeStatRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


    // resourceOwnerIds Field Functions 
    bool hasResourceOwnerIds() const { return this->resourceOwnerIds_ != nullptr;};
    void deleteResourceOwnerIds() { this->resourceOwnerIds_ = nullptr;};
    inline const vector<int64_t> & getResourceOwnerIds() const { DARABONBA_PTR_GET_CONST(resourceOwnerIds_, vector<int64_t>) };
    inline vector<int64_t> getResourceOwnerIds() { DARABONBA_PTR_GET(resourceOwnerIds_, vector<int64_t>) };
    inline DescribeProductDataRedundancyTypeStatRequest& setResourceOwnerIds(const vector<int64_t> & resourceOwnerIds) { DARABONBA_PTR_SET_VALUE(resourceOwnerIds_, resourceOwnerIds) };
    inline DescribeProductDataRedundancyTypeStatRequest& setResourceOwnerIds(vector<int64_t> && resourceOwnerIds) { DARABONBA_PTR_SET_RVALUE(resourceOwnerIds_, resourceOwnerIds) };


  protected:
    // The type of the cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The resource category ID.
    shared_ptr<string> resourceCategoryId_ {};
    shared_ptr<vector<int64_t>> resourceOwnerIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
