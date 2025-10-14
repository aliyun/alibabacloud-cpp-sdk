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
        && return this->baggageWeight_ == nullptr && return this->baggageWeightUnit_ == nullptr && return this->isAllWeight_ == nullptr && return this->carryOnAmount_ == nullptr && return this->carryOnWeight_ == nullptr
        && return this->carryOnWeightUnit_ == nullptr && return this->isAllCarryOnWeight_ == nullptr; };
    // baggageAmount Field Functions 
    bool hasBaggageAmount() const { return this->baggageAmount_ != nullptr;};
    void deleteBaggageAmount() { this->baggageAmount_ = nullptr;};
    inline int32_t baggageAmount() const { DARABONBA_PTR_GET_DEFAULT(baggageAmount_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageAmount(int32_t baggageAmount) { DARABONBA_PTR_SET_VALUE(baggageAmount_, baggageAmount) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int32_t baggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeight(int32_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageWeightUnit Field Functions 
    bool hasBaggageWeightUnit() const { return this->baggageWeightUnit_ != nullptr;};
    void deleteBaggageWeightUnit() { this->baggageWeightUnit_ = nullptr;};
    inline string baggageWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageWeightUnit_, "") };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setBaggageWeightUnit(string baggageWeightUnit) { DARABONBA_PTR_SET_VALUE(baggageWeightUnit_, baggageWeightUnit) };


    // isAllWeight Field Functions 
    bool hasIsAllWeight() const { return this->isAllWeight_ != nullptr;};
    void deleteIsAllWeight() { this->isAllWeight_ = nullptr;};
    inline bool isAllWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllWeight_, false) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllWeight(bool isAllWeight) { DARABONBA_PTR_SET_VALUE(isAllWeight_, isAllWeight) };


    // carryOnAmount Field Functions 
    bool hasCarryOnAmount() const { return this->carryOnAmount_ != nullptr;};
    void deleteCarryOnAmount() { this->carryOnAmount_ = nullptr;};
    inline int32_t carryOnAmount() const { DARABONBA_PTR_GET_DEFAULT(carryOnAmount_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnAmount(int32_t carryOnAmount) { DARABONBA_PTR_SET_VALUE(carryOnAmount_, carryOnAmount) };


    // carryOnWeight Field Functions 
    bool hasCarryOnWeight() const { return this->carryOnWeight_ != nullptr;};
    void deleteCarryOnWeight() { this->carryOnWeight_ = nullptr;};
    inline int32_t carryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeight_, 0) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeight(int32_t carryOnWeight) { DARABONBA_PTR_SET_VALUE(carryOnWeight_, carryOnWeight) };


    // carryOnWeightUnit Field Functions 
    bool hasCarryOnWeightUnit() const { return this->carryOnWeightUnit_ != nullptr;};
    void deleteCarryOnWeightUnit() { this->carryOnWeightUnit_ = nullptr;};
    inline string carryOnWeightUnit() const { DARABONBA_PTR_GET_DEFAULT(carryOnWeightUnit_, "") };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setCarryOnWeightUnit(string carryOnWeightUnit) { DARABONBA_PTR_SET_VALUE(carryOnWeightUnit_, carryOnWeightUnit) };


    // isAllCarryOnWeight Field Functions 
    bool hasIsAllCarryOnWeight() const { return this->isAllCarryOnWeight_ != nullptr;};
    void deleteIsAllCarryOnWeight() { this->isAllCarryOnWeight_ = nullptr;};
    inline bool isAllCarryOnWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllCarryOnWeight_, false) };
    inline DataSolutionListSegmentBaggageMappingListPassengerBaggageAllowanceMappingValue& setIsAllCarryOnWeight(bool isAllCarryOnWeight) { DARABONBA_PTR_SET_VALUE(isAllCarryOnWeight_, isAllCarryOnWeight) };


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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
