// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYSERVERLESSPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYSERVERLESSPRICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyServerlessPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyServerlessPrice& obj) { 
      DARABONBA_PTR_TO_JSON(RCUDiscountMaxAmount, RCUDiscountMaxAmount_);
      DARABONBA_PTR_TO_JSON(RCUDiscountMinAmount, RCUDiscountMinAmount_);
      DARABONBA_PTR_TO_JSON(RCUOriginalMaxAmount, RCUOriginalMaxAmount_);
      DARABONBA_PTR_TO_JSON(RCUOriginalMinAmount, RCUOriginalMinAmount_);
      DARABONBA_PTR_TO_JSON(StorageOriginalAmount, storageOriginalAmount_);
      DARABONBA_PTR_TO_JSON(TotalOriginalMaxAmount, totalOriginalMaxAmount_);
      DARABONBA_PTR_TO_JSON(TotalOriginalMinAmount, totalOriginalMinAmount_);
      DARABONBA_PTR_TO_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_TO_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
      DARABONBA_PTR_TO_JSON(storageDiscountAmount, storageDiscountAmount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyServerlessPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(RCUDiscountMaxAmount, RCUDiscountMaxAmount_);
      DARABONBA_PTR_FROM_JSON(RCUDiscountMinAmount, RCUDiscountMinAmount_);
      DARABONBA_PTR_FROM_JSON(RCUOriginalMaxAmount, RCUOriginalMaxAmount_);
      DARABONBA_PTR_FROM_JSON(RCUOriginalMinAmount, RCUOriginalMinAmount_);
      DARABONBA_PTR_FROM_JSON(StorageOriginalAmount, storageOriginalAmount_);
      DARABONBA_PTR_FROM_JSON(TotalOriginalMaxAmount, totalOriginalMaxAmount_);
      DARABONBA_PTR_FROM_JSON(TotalOriginalMinAmount, totalOriginalMinAmount_);
      DARABONBA_PTR_FROM_JSON(TradeMaxRCUAmount, tradeMaxRCUAmount_);
      DARABONBA_PTR_FROM_JSON(TradeMinRCUAmount, tradeMinRCUAmount_);
      DARABONBA_PTR_FROM_JSON(storageDiscountAmount, storageDiscountAmount_);
    };
    DescribePriceResponseBodyServerlessPrice() = default ;
    DescribePriceResponseBodyServerlessPrice(const DescribePriceResponseBodyServerlessPrice &) = default ;
    DescribePriceResponseBodyServerlessPrice(DescribePriceResponseBodyServerlessPrice &&) = default ;
    DescribePriceResponseBodyServerlessPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyServerlessPrice() = default ;
    DescribePriceResponseBodyServerlessPrice& operator=(const DescribePriceResponseBodyServerlessPrice &) = default ;
    DescribePriceResponseBodyServerlessPrice& operator=(DescribePriceResponseBodyServerlessPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RCUDiscountMaxAmount_ == nullptr
        && return this->RCUDiscountMinAmount_ == nullptr && return this->RCUOriginalMaxAmount_ == nullptr && return this->RCUOriginalMinAmount_ == nullptr && return this->storageOriginalAmount_ == nullptr && return this->totalOriginalMaxAmount_ == nullptr
        && return this->totalOriginalMinAmount_ == nullptr && return this->tradeMaxRCUAmount_ == nullptr && return this->tradeMinRCUAmount_ == nullptr && return this->storageDiscountAmount_ == nullptr; };
    // RCUDiscountMaxAmount Field Functions 
    bool hasRCUDiscountMaxAmount() const { return this->RCUDiscountMaxAmount_ != nullptr;};
    void deleteRCUDiscountMaxAmount() { this->RCUDiscountMaxAmount_ = nullptr;};
    inline float RCUDiscountMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(RCUDiscountMaxAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setRCUDiscountMaxAmount(float RCUDiscountMaxAmount) { DARABONBA_PTR_SET_VALUE(RCUDiscountMaxAmount_, RCUDiscountMaxAmount) };


    // RCUDiscountMinAmount Field Functions 
    bool hasRCUDiscountMinAmount() const { return this->RCUDiscountMinAmount_ != nullptr;};
    void deleteRCUDiscountMinAmount() { this->RCUDiscountMinAmount_ = nullptr;};
    inline float RCUDiscountMinAmount() const { DARABONBA_PTR_GET_DEFAULT(RCUDiscountMinAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setRCUDiscountMinAmount(float RCUDiscountMinAmount) { DARABONBA_PTR_SET_VALUE(RCUDiscountMinAmount_, RCUDiscountMinAmount) };


    // RCUOriginalMaxAmount Field Functions 
    bool hasRCUOriginalMaxAmount() const { return this->RCUOriginalMaxAmount_ != nullptr;};
    void deleteRCUOriginalMaxAmount() { this->RCUOriginalMaxAmount_ = nullptr;};
    inline float RCUOriginalMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(RCUOriginalMaxAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setRCUOriginalMaxAmount(float RCUOriginalMaxAmount) { DARABONBA_PTR_SET_VALUE(RCUOriginalMaxAmount_, RCUOriginalMaxAmount) };


    // RCUOriginalMinAmount Field Functions 
    bool hasRCUOriginalMinAmount() const { return this->RCUOriginalMinAmount_ != nullptr;};
    void deleteRCUOriginalMinAmount() { this->RCUOriginalMinAmount_ = nullptr;};
    inline float RCUOriginalMinAmount() const { DARABONBA_PTR_GET_DEFAULT(RCUOriginalMinAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setRCUOriginalMinAmount(float RCUOriginalMinAmount) { DARABONBA_PTR_SET_VALUE(RCUOriginalMinAmount_, RCUOriginalMinAmount) };


    // storageOriginalAmount Field Functions 
    bool hasStorageOriginalAmount() const { return this->storageOriginalAmount_ != nullptr;};
    void deleteStorageOriginalAmount() { this->storageOriginalAmount_ = nullptr;};
    inline float storageOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(storageOriginalAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setStorageOriginalAmount(float storageOriginalAmount) { DARABONBA_PTR_SET_VALUE(storageOriginalAmount_, storageOriginalAmount) };


    // totalOriginalMaxAmount Field Functions 
    bool hasTotalOriginalMaxAmount() const { return this->totalOriginalMaxAmount_ != nullptr;};
    void deleteTotalOriginalMaxAmount() { this->totalOriginalMaxAmount_ = nullptr;};
    inline float totalOriginalMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(totalOriginalMaxAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setTotalOriginalMaxAmount(float totalOriginalMaxAmount) { DARABONBA_PTR_SET_VALUE(totalOriginalMaxAmount_, totalOriginalMaxAmount) };


    // totalOriginalMinAmount Field Functions 
    bool hasTotalOriginalMinAmount() const { return this->totalOriginalMinAmount_ != nullptr;};
    void deleteTotalOriginalMinAmount() { this->totalOriginalMinAmount_ = nullptr;};
    inline float totalOriginalMinAmount() const { DARABONBA_PTR_GET_DEFAULT(totalOriginalMinAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setTotalOriginalMinAmount(float totalOriginalMinAmount) { DARABONBA_PTR_SET_VALUE(totalOriginalMinAmount_, totalOriginalMinAmount) };


    // tradeMaxRCUAmount Field Functions 
    bool hasTradeMaxRCUAmount() const { return this->tradeMaxRCUAmount_ != nullptr;};
    void deleteTradeMaxRCUAmount() { this->tradeMaxRCUAmount_ = nullptr;};
    inline float tradeMaxRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMaxRCUAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setTradeMaxRCUAmount(float tradeMaxRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMaxRCUAmount_, tradeMaxRCUAmount) };


    // tradeMinRCUAmount Field Functions 
    bool hasTradeMinRCUAmount() const { return this->tradeMinRCUAmount_ != nullptr;};
    void deleteTradeMinRCUAmount() { this->tradeMinRCUAmount_ = nullptr;};
    inline float tradeMinRCUAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeMinRCUAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setTradeMinRCUAmount(float tradeMinRCUAmount) { DARABONBA_PTR_SET_VALUE(tradeMinRCUAmount_, tradeMinRCUAmount) };


    // storageDiscountAmount Field Functions 
    bool hasStorageDiscountAmount() const { return this->storageDiscountAmount_ != nullptr;};
    void deleteStorageDiscountAmount() { this->storageDiscountAmount_ = nullptr;};
    inline float storageDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(storageDiscountAmount_, 0.0) };
    inline DescribePriceResponseBodyServerlessPrice& setStorageDiscountAmount(float storageDiscountAmount) { DARABONBA_PTR_SET_VALUE(storageDiscountAmount_, storageDiscountAmount) };


  protected:
    // The discount amount of the maximum number of RCUs.
    std::shared_ptr<float> RCUDiscountMaxAmount_ = nullptr;
    // The discount amount of the minimum number of RCUs.
    std::shared_ptr<float> RCUDiscountMinAmount_ = nullptr;
    // The price of the maximum number of RCUs.
    std::shared_ptr<float> RCUOriginalMaxAmount_ = nullptr;
    // The price of the minimum number of RCUs.
    std::shared_ptr<float> RCUOriginalMinAmount_ = nullptr;
    // The original price of the disk capacity.
    std::shared_ptr<float> storageOriginalAmount_ = nullptr;
    // The maximum total price before the discount.
    std::shared_ptr<float> totalOriginalMaxAmount_ = nullptr;
    // The minimum total price before the discount.
    std::shared_ptr<float> totalOriginalMinAmount_ = nullptr;
    // The transaction price of the maximum number of RCUs.
    std::shared_ptr<float> tradeMaxRCUAmount_ = nullptr;
    // The transaction price of the minimum number of RCUs.
    std::shared_ptr<float> tradeMinRCUAmount_ = nullptr;
    // The discounted price of the disk capacity.
    std::shared_ptr<float> storageDiscountAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
