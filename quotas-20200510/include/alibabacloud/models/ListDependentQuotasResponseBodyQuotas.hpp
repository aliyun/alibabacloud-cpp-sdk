// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODYQUOTAS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPENDENTQUOTASRESPONSEBODYQUOTAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDependentQuotasResponseBodyQuotasDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListDependentQuotasResponseBodyQuotas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDependentQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(Scale, scale_);
    };
    friend void from_json(const Darabonba::Json& j, ListDependentQuotasResponseBodyQuotas& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(Scale, scale_);
    };
    ListDependentQuotasResponseBodyQuotas() = default ;
    ListDependentQuotasResponseBodyQuotas(const ListDependentQuotasResponseBodyQuotas &) = default ;
    ListDependentQuotasResponseBodyQuotas(ListDependentQuotasResponseBodyQuotas &&) = default ;
    ListDependentQuotasResponseBodyQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDependentQuotasResponseBodyQuotas() = default ;
    ListDependentQuotasResponseBodyQuotas& operator=(const ListDependentQuotasResponseBodyQuotas &) = default ;
    ListDependentQuotasResponseBodyQuotas& operator=(ListDependentQuotasResponseBodyQuotas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->scale_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<Models::ListDependentQuotasResponseBodyQuotasDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<Models::ListDependentQuotasResponseBodyQuotasDimensions>) };
    inline vector<Models::ListDependentQuotasResponseBodyQuotasDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<Models::ListDependentQuotasResponseBodyQuotasDimensions>) };
    inline ListDependentQuotasResponseBodyQuotas& setDimensions(const vector<Models::ListDependentQuotasResponseBodyQuotasDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ListDependentQuotasResponseBodyQuotas& setDimensions(vector<Models::ListDependentQuotasResponseBodyQuotasDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDependentQuotasResponseBodyQuotas& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListDependentQuotasResponseBodyQuotas& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // scale Field Functions 
    bool hasScale() const { return this->scale_ != nullptr;};
    void deleteScale() { this->scale_ = nullptr;};
    inline float scale() const { DARABONBA_PTR_GET_DEFAULT(scale_, 0.0) };
    inline ListDependentQuotasResponseBodyQuotas& setScale(float scale) { DARABONBA_PTR_SET_VALUE(scale_, scale) };


  protected:
    // The dimensions of the quotas on which the specified quota depends.
    std::shared_ptr<vector<Models::ListDependentQuotasResponseBodyQuotasDimensions>> dimensions_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The relationship percentage between the specified quota and the quotas on which the specified quota depends.
    std::shared_ptr<float> scale_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
