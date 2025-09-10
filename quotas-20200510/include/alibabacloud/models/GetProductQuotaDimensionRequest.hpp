// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTQUOTADIMENSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProductQuotaDimensionRequestDependentDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetProductQuotaDimensionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductQuotaDimensionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_TO_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductQuotaDimensionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependentDimensions, dependentDimensions_);
      DARABONBA_PTR_FROM_JSON(DimensionKey, dimensionKey_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    GetProductQuotaDimensionRequest() = default ;
    GetProductQuotaDimensionRequest(const GetProductQuotaDimensionRequest &) = default ;
    GetProductQuotaDimensionRequest(GetProductQuotaDimensionRequest &&) = default ;
    GetProductQuotaDimensionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductQuotaDimensionRequest() = default ;
    GetProductQuotaDimensionRequest& operator=(const GetProductQuotaDimensionRequest &) = default ;
    GetProductQuotaDimensionRequest& operator=(GetProductQuotaDimensionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dependentDimensions_ != nullptr
        && this->dimensionKey_ != nullptr && this->productCode_ != nullptr; };
    // dependentDimensions Field Functions 
    bool hasDependentDimensions() const { return this->dependentDimensions_ != nullptr;};
    void deleteDependentDimensions() { this->dependentDimensions_ = nullptr;};
    inline const vector<GetProductQuotaDimensionRequestDependentDimensions> & dependentDimensions() const { DARABONBA_PTR_GET_CONST(dependentDimensions_, vector<GetProductQuotaDimensionRequestDependentDimensions>) };
    inline vector<GetProductQuotaDimensionRequestDependentDimensions> dependentDimensions() { DARABONBA_PTR_GET(dependentDimensions_, vector<GetProductQuotaDimensionRequestDependentDimensions>) };
    inline GetProductQuotaDimensionRequest& setDependentDimensions(const vector<GetProductQuotaDimensionRequestDependentDimensions> & dependentDimensions) { DARABONBA_PTR_SET_VALUE(dependentDimensions_, dependentDimensions) };
    inline GetProductQuotaDimensionRequest& setDependentDimensions(vector<GetProductQuotaDimensionRequestDependentDimensions> && dependentDimensions) { DARABONBA_PTR_SET_RVALUE(dependentDimensions_, dependentDimensions) };


    // dimensionKey Field Functions 
    bool hasDimensionKey() const { return this->dimensionKey_ != nullptr;};
    void deleteDimensionKey() { this->dimensionKey_ = nullptr;};
    inline string dimensionKey() const { DARABONBA_PTR_GET_DEFAULT(dimensionKey_, "") };
    inline GetProductQuotaDimensionRequest& setDimensionKey(string dimensionKey) { DARABONBA_PTR_SET_VALUE(dimensionKey_, dimensionKey) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetProductQuotaDimensionRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The information about quota dimensions.
    std::shared_ptr<vector<GetProductQuotaDimensionRequestDependentDimensions>> dependentDimensions_ = nullptr;
    // The key of the quota dimension.
    std::shared_ptr<string> dimensionKey_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // > For more information, see [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
