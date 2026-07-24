// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTBAGGAGEMAPPINGLISTPASSENGERBAGGAGEALLOWANCEMAPPINGVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASOLUTIONLISTSEGMENTBAGGAGEMAPPINGLISTPASSENGERBAGGAGEALLOWANCEMAPPINGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& obj) { 
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
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default ;
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &) = default ;
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &&) = default ;
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue() = default ;
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& operator=(const DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &) = default ;
    DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& operator=(DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baggageAmount_ == nullptr
        && this->baggageWeight_ == nullptr && this->baggageWeightUnit_ == nullptr && this->isAllWeight_ == nullptr && this->carryOnAmount_ == nullptr && this->carryOnWeight_ == nullptr
        && this->carryOnWeightUnit_ == nullptr && this->isAllCarryOnWeight_ == nullptr && this->carryLength_ == nullptr && this->carryWidth_ == nullptr && this->carryHeight_ == nullptr
        && this->carrySumOfLengthWidthHeight_ == nullptr && this->length_ == nullptr && this->width_ == nullptr && this->height_ == nullptr && this->sumOfLengthWidthHeight_ == nullptr; };
    // baggageAmount Field Functions 
    bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
    void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
    inline int32_t getBaggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int32_t getBaggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageWeightUnit Field Functions 
    bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
    void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
    inline string getBaggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


    // isAllWeight Field Functions 
    bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
    void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
    inline bool getIsAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


    // carryOnAmount Field Functions 
    bool hasCarryOnAmount() const { return this->carryOnAmount_ != nullptr;};
    void deleteCarryOnAmount() { this->carryOnAmount_ = nullptr;};
    inline int32_t getCarryOnAmount() const { DARABONBA_PTR_GET_DEFAULT(carryOnAmount_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnAmount(int32_t carryOnAmount) { DARABONBA_PTR_SET_VALUE(carryOnAmount_, carryOnAmount) };


    // carryOnWeight Field Functions 
    bool hasCarryOnWeight() const { return this->carryOnWeight_ != nullptr;};
    void deleteCarryOnWeight() { this->carryOnWeight_ = nullptr;};
    inline int32_t getCarryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeight(int32_t carryOnWeight) { DARABONBA_PTR_SET_VALUE(carryOnWeight_, carryOnWeight) };


    // carryOnWeightUnit Field Functions 
    bool hasCarryOnWeightUnit() const { return this->carryOnWeightUnit_ != nullptr;};
    void deleteCarryOnWeightUnit() { this->carryOnWeightUnit_ = nullptr;};
    inline string getCarryOnWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeightUnit_, "") };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeightUnit(string carryOnWeightUnit) { DARABONBA_PTR_SET_VALUE(carryOnWeightUnit_, carryOnWeightUnit) };


    // isAllCarryOnWeight Field Functions 
    bool hasIsAllCarryOnWeight() const { return this->isAllCarryOnWeight_ != nullptr;};
    void deleteIsAllCarryOnWeight() { this->isAllCarryOnWeight_ = nullptr;};
    inline bool getIsAllCarryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllCarryOnWeight_, false) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllCarryOnWeight(bool isAllCarryOnWeight) { DARABONBA_PTR_SET_VALUE(isAllCarryOnWeight_, isAllCarryOnWeight) };


    // carryLength Field Functions 
    bool hasCarryLength() const { return this->carryLength_ != nullptr;};
    void deleteCarryLength() { this->carryLength_ = nullptr;};
    inline int32_t getCarryLength() const { DARABONBA_PTR_GET_DEFAULT(carryLength_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryLength(int32_t carryLength) { DARABONBA_PTR_SET_VALUE(carryLength_, carryLength) };


    // carryWidth Field Functions 
    bool hasCarryWidth() const { return this->carryWidth_ != nullptr;};
    void deleteCarryWidth() { this->carryWidth_ = nullptr;};
    inline int32_t getCarryWidth() const { DARABONBA_PTR_GET_DEFAULT(carryWidth_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryWidth(int32_t carryWidth) { DARABONBA_PTR_SET_VALUE(carryWidth_, carryWidth) };


    // carryHeight Field Functions 
    bool hasCarryHeight() const { return this->carryHeight_ != nullptr;};
    void deleteCarryHeight() { this->carryHeight_ = nullptr;};
    inline int32_t getCarryHeight() const { DARABONBA_PTR_GET_DEFAULT(carryHeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryHeight(int32_t carryHeight) { DARABONBA_PTR_SET_VALUE(carryHeight_, carryHeight) };


    // carrySumOfLengthWidthHeight Field Functions 
    bool hasCarrySumOfLengthWidthHeight() const { return this->carrySumOfLengthWidthHeight_ != nullptr;};
    void deleteCarrySumOfLengthWidthHeight() { this->carrySumOfLengthWidthHeight_ = nullptr;};
    inline int32_t getCarrySumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(carrySumOfLengthWidthHeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarrySumOfLengthWidthHeight(int32_t carrySumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(carrySumOfLengthWidthHeight_, carrySumOfLengthWidthHeight) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // sumOfLengthWidthHeight Field Functions 
    bool hasSumOfLengthWidthHeight() const { return this->sumOfLengthWidthHeight_ != nullptr;};
    void deleteSumOfLengthWidthHeight() { this->sumOfLengthWidthHeight_ = nullptr;};
    inline int32_t getSumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(sumOfLengthWidthHeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setSumOfLengthWidthHeight(int32_t sumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(sumOfLengthWidthHeight_, sumOfLengthWidthHeight) };


  protected:
    // Number of checked baggage pieces
    shared_ptr<int32_t> baggageAmount_ {};
    // Checked baggage weight
    shared_ptr<int32_t> baggageWeight_ {};
    // Checked baggage weight unit KG
    shared_ptr<string> baggageWeightUnit_ {};
    // Whether it is total checked baggage weight
    shared_ptr<bool> isAllWeight_ {};
    // Number of carry-on baggage pieces
    shared_ptr<int32_t> carryOnAmount_ {};
    // Carry-on baggage weight
    shared_ptr<int32_t> carryOnWeight_ {};
    // Carry-on baggage weight unit KG
    shared_ptr<string> carryOnWeightUnit_ {};
    // Whether it is total carry-on baggage weight
    shared_ptr<bool> isAllCarryOnWeight_ {};
    shared_ptr<int32_t> carryLength_ {};
    shared_ptr<int32_t> carryWidth_ {};
    shared_ptr<int32_t> carryHeight_ {};
    shared_ptr<int32_t> carrySumOfLengthWidthHeight_ {};
    shared_ptr<int32_t> length_ {};
    shared_ptr<int32_t> width_ {};
    shared_ptr<int32_t> height_ {};
    shared_ptr<int32_t> sumOfLengthWidthHeight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
