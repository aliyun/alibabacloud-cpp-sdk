// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSBAGGAGERULEBAGGAGEINFOMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSBAGGAGERULEBAGGAGEINFOMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(carry_freepc, carryFreepc_);
      DARABONBA_PTR_TO_JSON(carry_bag_weight, carryBagWeight_);
      DARABONBA_PTR_TO_JSON(carry_bag_size, carryBagSize_);
      DARABONBA_PTR_TO_JSON(is_all_carry_bag_weight, isAllCarryBagWeight_);
      DARABONBA_PTR_TO_JSON(airline, airline_);
      DARABONBA_PTR_TO_JSON(start_airport, startAirport_);
      DARABONBA_PTR_TO_JSON(end_airport, endAirport_);
      DARABONBA_PTR_TO_JSON(start_city_code, startCityCode_);
      DARABONBA_PTR_TO_JSON(end_city_code, endCityCode_);
      DARABONBA_PTR_TO_JSON(free_pcs, freePcs_);
      DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_TO_JSON(baggage_unit, baggageUnit_);
      DARABONBA_PTR_TO_JSON(baggage_size, baggageSize_);
      DARABONBA_PTR_TO_JSON(all_weight, allWeight_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(carry_freepc, carryFreepc_);
      DARABONBA_PTR_FROM_JSON(carry_bag_weight, carryBagWeight_);
      DARABONBA_PTR_FROM_JSON(carry_bag_size, carryBagSize_);
      DARABONBA_PTR_FROM_JSON(is_all_carry_bag_weight, isAllCarryBagWeight_);
      DARABONBA_PTR_FROM_JSON(airline, airline_);
      DARABONBA_PTR_FROM_JSON(start_airport, startAirport_);
      DARABONBA_PTR_FROM_JSON(end_airport, endAirport_);
      DARABONBA_PTR_FROM_JSON(start_city_code, startCityCode_);
      DARABONBA_PTR_FROM_JSON(end_city_code, endCityCode_);
      DARABONBA_PTR_FROM_JSON(free_pcs, freePcs_);
      DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_FROM_JSON(baggage_unit, baggageUnit_);
      DARABONBA_PTR_FROM_JSON(baggage_size, baggageSize_);
      DARABONBA_PTR_FROM_JSON(all_weight, allWeight_);
    };
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue() = default ;
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue(const ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue &) = default ;
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue(ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue &&) = default ;
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue() = default ;
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& operator=(const ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue &) = default ;
    ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& operator=(ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carryFreepc_ != nullptr
        && this->carryBagWeight_ != nullptr && this->carryBagSize_ != nullptr && this->isAllCarryBagWeight_ != nullptr && this->airline_ != nullptr && this->startAirport_ != nullptr
        && this->endAirport_ != nullptr && this->startCityCode_ != nullptr && this->endCityCode_ != nullptr && this->freePcs_ != nullptr && this->baggageWeight_ != nullptr
        && this->baggageUnit_ != nullptr && this->baggageSize_ != nullptr && this->allWeight_ != nullptr; };
    // carryFreepc Field Functions 
    bool hasCarryFreepc() const { return this->carryFreepc_ != nullptr;};
    void deleteCarryFreepc() { this->carryFreepc_ = nullptr;};
    inline int32_t carryFreepc() const { DARABONBA_PTR_GET_DEFAULT(carryFreepc_, 0) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setCarryFreepc(int32_t carryFreepc) { DARABONBA_PTR_SET_VALUE(carryFreepc_, carryFreepc) };


    // carryBagWeight Field Functions 
    bool hasCarryBagWeight() const { return this->carryBagWeight_ != nullptr;};
    void deleteCarryBagWeight() { this->carryBagWeight_ = nullptr;};
    inline int32_t carryBagWeight() const { DARABONBA_PTR_GET_DEFAULT(carryBagWeight_, 0) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setCarryBagWeight(int32_t carryBagWeight) { DARABONBA_PTR_SET_VALUE(carryBagWeight_, carryBagWeight) };


    // carryBagSize Field Functions 
    bool hasCarryBagSize() const { return this->carryBagSize_ != nullptr;};
    void deleteCarryBagSize() { this->carryBagSize_ = nullptr;};
    inline string carryBagSize() const { DARABONBA_PTR_GET_DEFAULT(carryBagSize_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setCarryBagSize(string carryBagSize) { DARABONBA_PTR_SET_VALUE(carryBagSize_, carryBagSize) };


    // isAllCarryBagWeight Field Functions 
    bool hasIsAllCarryBagWeight() const { return this->isAllCarryBagWeight_ != nullptr;};
    void deleteIsAllCarryBagWeight() { this->isAllCarryBagWeight_ = nullptr;};
    inline bool isAllCarryBagWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllCarryBagWeight_, false) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setIsAllCarryBagWeight(bool isAllCarryBagWeight) { DARABONBA_PTR_SET_VALUE(isAllCarryBagWeight_, isAllCarryBagWeight) };


    // airline Field Functions 
    bool hasAirline() const { return this->airline_ != nullptr;};
    void deleteAirline() { this->airline_ = nullptr;};
    inline string airline() const { DARABONBA_PTR_GET_DEFAULT(airline_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setAirline(string airline) { DARABONBA_PTR_SET_VALUE(airline_, airline) };


    // startAirport Field Functions 
    bool hasStartAirport() const { return this->startAirport_ != nullptr;};
    void deleteStartAirport() { this->startAirport_ = nullptr;};
    inline string startAirport() const { DARABONBA_PTR_GET_DEFAULT(startAirport_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setStartAirport(string startAirport) { DARABONBA_PTR_SET_VALUE(startAirport_, startAirport) };


    // endAirport Field Functions 
    bool hasEndAirport() const { return this->endAirport_ != nullptr;};
    void deleteEndAirport() { this->endAirport_ = nullptr;};
    inline string endAirport() const { DARABONBA_PTR_GET_DEFAULT(endAirport_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setEndAirport(string endAirport) { DARABONBA_PTR_SET_VALUE(endAirport_, endAirport) };


    // startCityCode Field Functions 
    bool hasStartCityCode() const { return this->startCityCode_ != nullptr;};
    void deleteStartCityCode() { this->startCityCode_ = nullptr;};
    inline string startCityCode() const { DARABONBA_PTR_GET_DEFAULT(startCityCode_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setStartCityCode(string startCityCode) { DARABONBA_PTR_SET_VALUE(startCityCode_, startCityCode) };


    // endCityCode Field Functions 
    bool hasEndCityCode() const { return this->endCityCode_ != nullptr;};
    void deleteEndCityCode() { this->endCityCode_ = nullptr;};
    inline string endCityCode() const { DARABONBA_PTR_GET_DEFAULT(endCityCode_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setEndCityCode(string endCityCode) { DARABONBA_PTR_SET_VALUE(endCityCode_, endCityCode) };


    // freePcs Field Functions 
    bool hasFreePcs() const { return this->freePcs_ != nullptr;};
    void deleteFreePcs() { this->freePcs_ = nullptr;};
    inline int64_t freePcs() const { DARABONBA_PTR_GET_DEFAULT(freePcs_, 0L) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setFreePcs(int64_t freePcs) { DARABONBA_PTR_SET_VALUE(freePcs_, freePcs) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int64_t baggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0L) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setBaggageWeight(int64_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageUnit Field Functions 
    bool hasBaggageUnit() const { return this->baggageUnit_ != nullptr;};
    void deleteBaggageUnit() { this->baggageUnit_ = nullptr;};
    inline string baggageUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageUnit_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setBaggageUnit(string baggageUnit) { DARABONBA_PTR_SET_VALUE(baggageUnit_, baggageUnit) };


    // baggageSize Field Functions 
    bool hasBaggageSize() const { return this->baggageSize_ != nullptr;};
    void deleteBaggageSize() { this->baggageSize_ = nullptr;};
    inline string baggageSize() const { DARABONBA_PTR_GET_DEFAULT(baggageSize_, "") };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setBaggageSize(string baggageSize) { DARABONBA_PTR_SET_VALUE(baggageSize_, baggageSize) };


    // allWeight Field Functions 
    bool hasAllWeight() const { return this->allWeight_ != nullptr;};
    void deleteAllWeight() { this->allWeight_ = nullptr;};
    inline bool allWeight() const { DARABONBA_PTR_GET_DEFAULT(allWeight_, false) };
    inline ModuleGroupItemSubItemsBaggageRuleBaggageInfoMapValue& setAllWeight(bool allWeight) { DARABONBA_PTR_SET_VALUE(allWeight_, allWeight) };


  protected:
    std::shared_ptr<int32_t> carryFreepc_ = nullptr;
    std::shared_ptr<int32_t> carryBagWeight_ = nullptr;
    std::shared_ptr<string> carryBagSize_ = nullptr;
    std::shared_ptr<bool> isAllCarryBagWeight_ = nullptr;
    std::shared_ptr<string> airline_ = nullptr;
    std::shared_ptr<string> startAirport_ = nullptr;
    std::shared_ptr<string> endAirport_ = nullptr;
    std::shared_ptr<string> startCityCode_ = nullptr;
    std::shared_ptr<string> endCityCode_ = nullptr;
    std::shared_ptr<int64_t> freePcs_ = nullptr;
    std::shared_ptr<int64_t> baggageWeight_ = nullptr;
    std::shared_ptr<string> baggageUnit_ = nullptr;
    std::shared_ptr<string> baggageSize_ = nullptr;
    std::shared_ptr<bool> allWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
