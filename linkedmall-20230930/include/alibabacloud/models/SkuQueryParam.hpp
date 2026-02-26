// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKUQUERYPARAM_HPP_
#define ALIBABACLOUD_MODELS_SKUQUERYPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SkuQueryParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkuQueryParam& obj) { 
      DARABONBA_PTR_TO_JSON(buyAmount, buyAmount_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
    };
    friend void from_json(const Darabonba::Json& j, SkuQueryParam& obj) { 
      DARABONBA_PTR_FROM_JSON(buyAmount, buyAmount_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
    };
    SkuQueryParam() = default ;
    SkuQueryParam(const SkuQueryParam &) = default ;
    SkuQueryParam(SkuQueryParam &&) = default ;
    SkuQueryParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkuQueryParam() = default ;
    SkuQueryParam& operator=(const SkuQueryParam &) = default ;
    SkuQueryParam& operator=(SkuQueryParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyAmount_ == nullptr
        && this->productId_ == nullptr && this->skuId_ == nullptr; };
    // buyAmount Field Functions 
    bool hasBuyAmount() const { return this->buyAmount_ != nullptr;};
    void deleteBuyAmount() { this->buyAmount_ = nullptr;};
    inline int32_t getBuyAmount() const { DARABONBA_PTR_GET_DEFAULT(buyAmount_, 0) };
    inline SkuQueryParam& setBuyAmount(int32_t buyAmount) { DARABONBA_PTR_SET_VALUE(buyAmount_, buyAmount) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline SkuQueryParam& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline SkuQueryParam& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


  protected:
    shared_ptr<int32_t> buyAmount_ {};
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // skuid
    // 
    // This parameter is required.
    shared_ptr<string> skuId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
