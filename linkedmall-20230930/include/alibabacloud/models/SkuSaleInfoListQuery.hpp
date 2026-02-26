// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKUSALEINFOLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_SKUSALEINFOLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SkuQueryParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SkuSaleInfoListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkuSaleInfoListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(skuQueryParams, skuQueryParams_);
    };
    friend void from_json(const Darabonba::Json& j, SkuSaleInfoListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(skuQueryParams, skuQueryParams_);
    };
    SkuSaleInfoListQuery() = default ;
    SkuSaleInfoListQuery(const SkuSaleInfoListQuery &) = default ;
    SkuSaleInfoListQuery(SkuSaleInfoListQuery &&) = default ;
    SkuSaleInfoListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkuSaleInfoListQuery() = default ;
    SkuSaleInfoListQuery& operator=(const SkuSaleInfoListQuery &) = default ;
    SkuSaleInfoListQuery& operator=(SkuSaleInfoListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->divisionCode_ == nullptr
        && this->purchaserId_ == nullptr && this->skuQueryParams_ == nullptr; };
    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline SkuSaleInfoListQuery& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline SkuSaleInfoListQuery& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // skuQueryParams Field Functions 
    bool hasSkuQueryParams() const { return this->skuQueryParams_ != nullptr;};
    void deleteSkuQueryParams() { this->skuQueryParams_ = nullptr;};
    inline const vector<SkuQueryParam> & getSkuQueryParams() const { DARABONBA_PTR_GET_CONST(skuQueryParams_, vector<SkuQueryParam>) };
    inline vector<SkuQueryParam> getSkuQueryParams() { DARABONBA_PTR_GET(skuQueryParams_, vector<SkuQueryParam>) };
    inline SkuSaleInfoListQuery& setSkuQueryParams(const vector<SkuQueryParam> & skuQueryParams) { DARABONBA_PTR_SET_VALUE(skuQueryParams_, skuQueryParams) };
    inline SkuSaleInfoListQuery& setSkuQueryParams(vector<SkuQueryParam> && skuQueryParams) { DARABONBA_PTR_SET_RVALUE(skuQueryParams_, skuQueryParams) };


  protected:
    shared_ptr<string> divisionCode_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
    // This parameter is required.
    shared_ptr<vector<SkuQueryParam>> skuQueryParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
