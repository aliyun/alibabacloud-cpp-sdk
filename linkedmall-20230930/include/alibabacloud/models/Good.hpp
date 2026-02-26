// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GOOD_HPP_
#define ALIBABACLOUD_MODELS_GOOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Good : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Good& obj) { 
      DARABONBA_PTR_TO_JSON(goodName, goodName_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuTitle, skuTitle_);
    };
    friend void from_json(const Darabonba::Json& j, Good& obj) { 
      DARABONBA_PTR_FROM_JSON(goodName, goodName_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuTitle, skuTitle_);
    };
    Good() = default ;
    Good(const Good &) = default ;
    Good(Good &&) = default ;
    Good(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Good() = default ;
    Good& operator=(const Good &) = default ;
    Good& operator=(Good &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->goodName_ == nullptr
        && this->productId_ == nullptr && this->quantity_ == nullptr && this->skuId_ == nullptr && this->skuTitle_ == nullptr; };
    // goodName Field Functions 
    bool hasGoodName() const { return this->goodName_ != nullptr;};
    void deleteGoodName() { this->goodName_ = nullptr;};
    inline string getGoodName() const { DARABONBA_PTR_GET_DEFAULT(goodName_, "") };
    inline Good& setGoodName(string goodName) { DARABONBA_PTR_SET_VALUE(goodName_, goodName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline Good& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline Good& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline Good& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuTitle Field Functions 
    bool hasSkuTitle() const { return this->skuTitle_ != nullptr;};
    void deleteSkuTitle() { this->skuTitle_ = nullptr;};
    inline string getSkuTitle() const { DARABONBA_PTR_GET_DEFAULT(skuTitle_, "") };
    inline Good& setSkuTitle(string skuTitle) { DARABONBA_PTR_SET_VALUE(skuTitle_, skuTitle) };


  protected:
    shared_ptr<string> goodName_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<int32_t> quantity_ {};
    shared_ptr<string> skuId_ {};
    shared_ptr<string> skuTitle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
