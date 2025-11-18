// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTBAGGAGEMAPPINGLISTPASSENGERBAGGAGEALLOWANCEMAPPINGVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONSEGMENTBAGGAGEMAPPINGLISTPASSENGERBAGGAGEALLOWANCEMAPPINGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_amount, baggageAmount_);
      DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_TO_JSON(baggage_weight_unit, baggageWeightUnit_);
      DARABONBA_PTR_TO_JSON(is_all_weight, isAllWeight_);
      DARABONBA_PTR_TO_JSON(carry_on_amount, carryOnAmount_);
      DARABONBA_PTR_TO_JSON(carry_on_weight, carryOnWeight_);
      DARABONBA_PTR_TO_JSON(carry_on_weight_unit, carryOnWeightUnit_);
      DARABONBA_PTR_TO_JSON(is_all_carry_on_weight, isAllCarryOnWeight_);
      DARABONBA_PTR_TO_JSON(carry_length, carryLength_);
      DARABONBA_PTR_TO_JSON(carry_width, carryWidth_);
      DARABONBA_PTR_TO_JSON(carry_height, carryHeight_);
      DARABONBA_PTR_TO_JSON(carry_sum_of_length_width_height, carrySumOfLengthWidthHeight_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(width, width_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(sum_of_length_width_height, sumOfLengthWidthHeight_);
    };
    friend void from_json(const Darabonba::Json& j, DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_amount, baggageAmount_);
      DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_FROM_JSON(baggage_weight_unit, baggageWeightUnit_);
      DARABONBA_PTR_FROM_JSON(is_all_weight, isAllWeight_);
      DARABONBA_PTR_FROM_JSON(carry_on_amount, carryOnAmount_);
      DARABONBA_PTR_FROM_JSON(carry_on_weight, carryOnWeight_);
      DARABONBA_PTR_FROM_JSON(carry_on_weight_unit, carryOnWeightUnit_);
      DARABONBA_PTR_FROM_JSON(is_all_carry_on_weight, isAllCarryOnWeight_);
      DARABONBA_PTR_FROM_JSON(carry_length, carryLength_);
      DARABONBA_PTR_FROM_JSON(carry_width, carryWidth_);
      DARABONBA_PTR_FROM_JSON(carry_height, carryHeight_);
      DARABONBA_PTR_FROM_JSON(carry_sum_of_length_width_height, carrySumOfLengthWidthHeight_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(width, width_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(sum_of_length_width_height, sumOfLengthWidthHeight_);
    };
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default ;
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &) = default ;
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &&) = default ;
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default ;
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& operator=(const DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &) = default ;
    DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& operator=(DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baggageAmount_ == nullptr
        && return this->baggageWeight_ == nullptr && return this->baggageWeightUnit_ == nullptr && return this->isAllWeight_ == nullptr && return this->carryOnAmount_ == nullptr && return this->carryOnWeight_ == nullptr
        && return this->carryOnWeightUnit_ == nullptr && return this->isAllCarryOnWeight_ == nullptr && return this->carryLength_ == nullptr && return this->carryWidth_ == nullptr && return this->carryHeight_ == nullptr
        && return this->carrySumOfLengthWidthHeight_ == nullptr && return this->length_ == nullptr && return this->width_ == nullptr && return this->height_ == nullptr && return this->sumOfLengthWidthHeight_ == nullptr; };
    // baggageAmount Field Functions 
    bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
    void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
    inline int32_t baggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int32_t baggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageWeightUnit Field Functions 
    bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
    void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
    inline string baggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


    // isAllWeight Field Functions 
    bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
    void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
    inline bool isAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


    // carryOnAmount Field Functions 
    bool hasCarryOnAmount() const { return this->carryOnAmount_ != nullptr;};
    void deleteCarryOnAmount() { this->carryOnAmount_ = nullptr;};
    inline int32_t carryOnAmount() const { DARABONBA_PTR_GET_DEFAULT(carryOnAmount_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnAmount(int32_t carryOnAmount) { DARABONBA_PTR_SET_VALUE(carryOnAmount_, carryOnAmount) };


    // carryOnWeight Field Functions 
    bool hasCarryOnWeight() const { return this->carryOnWeight_ != nullptr;};
    void deleteCarryOnWeight() { this->carryOnWeight_ = nullptr;};
    inline int32_t carryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeight_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeight(int32_t carryOnWeight) { DARABONBA_PTR_SET_VALUE(carryOnWeight_, carryOnWeight) };


    // carryOnWeightUnit Field Functions 
    bool hasCarryOnWeightUnit() const { return this->carryOnWeightUnit_ != nullptr;};
    void deleteCarryOnWeightUnit() { this->carryOnWeightUnit_ = nullptr;};
    inline string carryOnWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeightUnit_, "") };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeightUnit(string carryOnWeightUnit) { DARABONBA_PTR_SET_VALUE(carryOnWeightUnit_, carryOnWeightUnit) };


    // isAllCarryOnWeight Field Functions 
    bool hasIsAllCarryOnWeight() const { return this->isAllCarryOnWeight_ != nullptr;};
    void deleteIsAllCarryOnWeight() { this->isAllCarryOnWeight_ = nullptr;};
    inline bool isAllCarryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllCarryOnWeight_, false) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllCarryOnWeight(bool isAllCarryOnWeight) { DARABONBA_PTR_SET_VALUE(isAllCarryOnWeight_, isAllCarryOnWeight) };


    // carryLength Field Functions 
    bool hasCarryLength() const { return this->carryLength_ != nullptr;};
    void deleteCarryLength() { this->carryLength_ = nullptr;};
    inline int32_t carryLength() const { DARABONBA_PTR_GET_DEFAULT(carryLength_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryLength(int32_t carryLength) { DARABONBA_PTR_SET_VALUE(carryLength_, carryLength) };


    // carryWidth Field Functions 
    bool hasCarryWidth() const { return this->carryWidth_ != nullptr;};
    void deleteCarryWidth() { this->carryWidth_ = nullptr;};
    inline int32_t carryWidth() const { DARABONBA_PTR_GET_DEFAULT(carryWidth_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryWidth(int32_t carryWidth) { DARABONBA_PTR_SET_VALUE(carryWidth_, carryWidth) };


    // carryHeight Field Functions 
    bool hasCarryHeight() const { return this->carryHeight_ != nullptr;};
    void deleteCarryHeight() { this->carryHeight_ = nullptr;};
    inline int32_t carryHeight() const { DARABONBA_PTR_GET_DEFAULT(carryHeight_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryHeight(int32_t carryHeight) { DARABONBA_PTR_SET_VALUE(carryHeight_, carryHeight) };


    // carrySumOfLengthWidthHeight Field Functions 
    bool hasCarrySumOfLengthWidthHeight() const { return this->carrySumOfLengthWidthHeight_ != nullptr;};
    void deleteCarrySumOfLengthWidthHeight() { this->carrySumOfLengthWidthHeight_ = nullptr;};
    inline int32_t carrySumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(carrySumOfLengthWidthHeight_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarrySumOfLengthWidthHeight(int32_t carrySumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(carrySumOfLengthWidthHeight_, carrySumOfLengthWidthHeight) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // sumOfLengthWidthHeight Field Functions 
    bool hasSumOfLengthWidthHeight() const { return this->sumOfLengthWidthHeight_ != nullptr;};
    void deleteSumOfLengthWidthHeight() { this->sumOfLengthWidthHeight_ = nullptr;};
    inline int32_t sumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(sumOfLengthWidthHeight_, 0) };
    inline DataSolutionSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setSumOfLengthWidthHeight(int32_t sumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(sumOfLengthWidthHeight_, sumOfLengthWidthHeight) };


  protected:
    // checked baggage quantity
    std::shared_ptr<int32_t> baggageAmount_ = nullptr;
    // checked baggage weight
    std::shared_ptr<int32_t> baggageWeight_ = nullptr;
    // checked baggage weight unit
    std::shared_ptr<string> baggageWeightUnit_ = nullptr;
    // Whether the weight is for all baggages
    std::shared_ptr<bool> isAllWeight_ = nullptr;
    // carry-on baggage quantity
    std::shared_ptr<int32_t> carryOnAmount_ = nullptr;
    // carry-on baggage weight
    std::shared_ptr<int32_t> carryOnWeight_ = nullptr;
    // carry-on baggage weight unit
    std::shared_ptr<string> carryOnWeightUnit_ = nullptr;
    // Whether the weight is for all baggages
    std::shared_ptr<bool> isAllCarryOnWeight_ = nullptr;
    std::shared_ptr<int32_t> carryLength_ = nullptr;
    std::shared_ptr<int32_t> carryWidth_ = nullptr;
    std::shared_ptr<int32_t> carryHeight_ = nullptr;
    std::shared_ptr<int32_t> carrySumOfLengthWidthHeight_ = nullptr;
    std::shared_ptr<int32_t> length_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> sumOfLengthWidthHeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
