// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASTEPPRICEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASTEPPRICEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DataStepPriceMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataStepPriceMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(RightClose, rightClose_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(LeftClose, leftClose_);
      DARABONBA_PTR_TO_JSON(StepPriceValue, stepPriceValue_);
      DARABONBA_PTR_TO_JSON(PriceValueType, priceValueType_);
      DARABONBA_PTR_TO_JSON(PriceValue, priceValue_);
      DARABONBA_PTR_TO_JSON(DeductCycleType, deductCycleType_);
    };
    friend void from_json(const Darabonba::Json& j, DataStepPriceMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RightClose, rightClose_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(LeftClose, leftClose_);
      DARABONBA_PTR_FROM_JSON(StepPriceValue, stepPriceValue_);
      DARABONBA_PTR_FROM_JSON(PriceValueType, priceValueType_);
      DARABONBA_PTR_FROM_JSON(PriceValue, priceValue_);
      DARABONBA_PTR_FROM_JSON(DeductCycleType, deductCycleType_);
    };
    DataStepPriceMapValue() = default ;
    DataStepPriceMapValue(const DataStepPriceMapValue &) = default ;
    DataStepPriceMapValue(DataStepPriceMapValue &&) = default ;
    DataStepPriceMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataStepPriceMapValue() = default ;
    DataStepPriceMapValue& operator=(const DataStepPriceMapValue &) = default ;
    DataStepPriceMapValue& operator=(DataStepPriceMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rightClose_ == nullptr
        && this->min_ == nullptr && this->max_ == nullptr && this->currency_ == nullptr && this->leftClose_ == nullptr && this->stepPriceValue_ == nullptr
        && this->priceValueType_ == nullptr && this->priceValue_ == nullptr && this->deductCycleType_ == nullptr; };
    // rightClose Field Functions 
    bool hasRightClose() const { return this->rightClose_ != nullptr;};
    void deleteRightClose() { this->rightClose_ = nullptr;};
    inline bool getRightClose() const { DARABONBA_PTR_GET_DEFAULT(rightClose_, false) };
    inline DataStepPriceMapValue& setRightClose(bool rightClose) { DARABONBA_PTR_SET_VALUE(rightClose_, rightClose) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline DataStepPriceMapValue& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline DataStepPriceMapValue& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DataStepPriceMapValue& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // leftClose Field Functions 
    bool hasLeftClose() const { return this->leftClose_ != nullptr;};
    void deleteLeftClose() { this->leftClose_ = nullptr;};
    inline bool getLeftClose() const { DARABONBA_PTR_GET_DEFAULT(leftClose_, false) };
    inline DataStepPriceMapValue& setLeftClose(bool leftClose) { DARABONBA_PTR_SET_VALUE(leftClose_, leftClose) };


    // stepPriceValue Field Functions 
    bool hasStepPriceValue() const { return this->stepPriceValue_ != nullptr;};
    void deleteStepPriceValue() { this->stepPriceValue_ = nullptr;};
    inline string getStepPriceValue() const { DARABONBA_PTR_GET_DEFAULT(stepPriceValue_, "") };
    inline DataStepPriceMapValue& setStepPriceValue(string stepPriceValue) { DARABONBA_PTR_SET_VALUE(stepPriceValue_, stepPriceValue) };


    // priceValueType Field Functions 
    bool hasPriceValueType() const { return this->priceValueType_ != nullptr;};
    void deletePriceValueType() { this->priceValueType_ = nullptr;};
    inline string getPriceValueType() const { DARABONBA_PTR_GET_DEFAULT(priceValueType_, "") };
    inline DataStepPriceMapValue& setPriceValueType(string priceValueType) { DARABONBA_PTR_SET_VALUE(priceValueType_, priceValueType) };


    // priceValue Field Functions 
    bool hasPriceValue() const { return this->priceValue_ != nullptr;};
    void deletePriceValue() { this->priceValue_ = nullptr;};
    inline string getPriceValue() const { DARABONBA_PTR_GET_DEFAULT(priceValue_, "") };
    inline DataStepPriceMapValue& setPriceValue(string priceValue) { DARABONBA_PTR_SET_VALUE(priceValue_, priceValue) };


    // deductCycleType Field Functions 
    bool hasDeductCycleType() const { return this->deductCycleType_ != nullptr;};
    void deleteDeductCycleType() { this->deductCycleType_ = nullptr;};
    inline string getDeductCycleType() const { DARABONBA_PTR_GET_DEFAULT(deductCycleType_, "") };
    inline DataStepPriceMapValue& setDeductCycleType(string deductCycleType) { DARABONBA_PTR_SET_VALUE(deductCycleType_, deductCycleType) };


  protected:
    shared_ptr<bool> rightClose_ {};
    shared_ptr<string> min_ {};
    shared_ptr<string> max_ {};
    shared_ptr<string> currency_ {};
    shared_ptr<bool> leftClose_ {};
    shared_ptr<string> stepPriceValue_ {};
    shared_ptr<string> priceValueType_ {};
    shared_ptr<string> priceValue_ {};
    shared_ptr<string> deductCycleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
