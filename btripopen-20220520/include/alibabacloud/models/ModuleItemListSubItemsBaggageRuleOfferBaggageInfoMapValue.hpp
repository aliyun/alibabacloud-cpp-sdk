// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSBAGGAGERULEOFFERBAGGAGEINFOMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSBAGGAGERULEOFFERBAGGAGEINFOMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(start_city_code, startCityCode_);
      DARABONBA_PTR_TO_JSON(end_city_code, endCityCode_);
      DARABONBA_PTR_TO_JSON(carry_free_pc, carryFreePc_);
      DARABONBA_PTR_TO_JSON(carry_bag_weight, carryBagWeight_);
      DARABONBA_PTR_TO_JSON(carry_bag_size, carryBagSize_);
      DARABONBA_PTR_TO_JSON(is_all_carry_bag_weight, isAllCarryBagWeight_);
      DARABONBA_PTR_TO_JSON(total_pcs, totalPcs_);
      DARABONBA_PTR_TO_JSON(total_weight, totalWeight_);
      DARABONBA_PTR_TO_JSON(carry_unknown, carryUnknown_);
      DARABONBA_PTR_TO_JSON(carry_length, carryLength_);
      DARABONBA_PTR_TO_JSON(carry_width, carryWidth_);
      DARABONBA_PTR_TO_JSON(carry_height, carryHeight_);
      DARABONBA_PTR_TO_JSON(carry_sum_of_length_width_height, carrySumOfLengthWidthHeight_);
      DARABONBA_PTR_TO_JSON(free_pcs, freePcs_);
      DARABONBA_PTR_TO_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_TO_JSON(baggage_unit, baggageUnit_);
      DARABONBA_PTR_TO_JSON(baggage_size, baggageSize_);
      DARABONBA_PTR_TO_JSON(all_weight, allWeight_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(width, width_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(sum_of_length_width_height, sumOfLengthWidthHeight_);
      DARABONBA_PTR_TO_JSON(unknown, unknown_);
      DARABONBA_PTR_TO_JSON(cn_desc, cnDesc_);
      DARABONBA_PTR_TO_JSON(en_desc, enDesc_);
      DARABONBA_PTR_TO_JSON(attribute, attribute_);
      DARABONBA_PTR_TO_JSON(baggage_price, baggagePrice_);
      DARABONBA_PTR_TO_JSON(carry_on_baggage_tips, carryOnBaggageTips_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(start_city_code, startCityCode_);
      DARABONBA_PTR_FROM_JSON(end_city_code, endCityCode_);
      DARABONBA_PTR_FROM_JSON(carry_free_pc, carryFreePc_);
      DARABONBA_PTR_FROM_JSON(carry_bag_weight, carryBagWeight_);
      DARABONBA_PTR_FROM_JSON(carry_bag_size, carryBagSize_);
      DARABONBA_PTR_FROM_JSON(is_all_carry_bag_weight, isAllCarryBagWeight_);
      DARABONBA_PTR_FROM_JSON(total_pcs, totalPcs_);
      DARABONBA_PTR_FROM_JSON(total_weight, totalWeight_);
      DARABONBA_PTR_FROM_JSON(carry_unknown, carryUnknown_);
      DARABONBA_PTR_FROM_JSON(carry_length, carryLength_);
      DARABONBA_PTR_FROM_JSON(carry_width, carryWidth_);
      DARABONBA_PTR_FROM_JSON(carry_height, carryHeight_);
      DARABONBA_PTR_FROM_JSON(carry_sum_of_length_width_height, carrySumOfLengthWidthHeight_);
      DARABONBA_PTR_FROM_JSON(free_pcs, freePcs_);
      DARABONBA_PTR_FROM_JSON(baggage_weight, baggageWeight_);
      DARABONBA_PTR_FROM_JSON(baggage_unit, baggageUnit_);
      DARABONBA_PTR_FROM_JSON(baggage_size, baggageSize_);
      DARABONBA_PTR_FROM_JSON(all_weight, allWeight_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(width, width_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(sum_of_length_width_height, sumOfLengthWidthHeight_);
      DARABONBA_PTR_FROM_JSON(unknown, unknown_);
      DARABONBA_PTR_FROM_JSON(cn_desc, cnDesc_);
      DARABONBA_PTR_FROM_JSON(en_desc, enDesc_);
      DARABONBA_PTR_FROM_JSON(attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(baggage_price, baggagePrice_);
      DARABONBA_PTR_FROM_JSON(carry_on_baggage_tips, carryOnBaggageTips_);
    };
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue() = default ;
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue(const ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue &) = default ;
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue(ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue &&) = default ;
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue() = default ;
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& operator=(const ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue &) = default ;
    ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& operator=(ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->startCityCode_ != nullptr
        && this->endCityCode_ != nullptr && this->carryFreePc_ != nullptr && this->carryBagWeight_ != nullptr && this->carryBagSize_ != nullptr && this->isAllCarryBagWeight_ != nullptr
        && this->totalPcs_ != nullptr && this->totalWeight_ != nullptr && this->carryUnknown_ != nullptr && this->carryLength_ != nullptr && this->carryWidth_ != nullptr
        && this->carryHeight_ != nullptr && this->carrySumOfLengthWidthHeight_ != nullptr && this->freePcs_ != nullptr && this->baggageWeight_ != nullptr && this->baggageUnit_ != nullptr
        && this->baggageSize_ != nullptr && this->allWeight_ != nullptr && this->length_ != nullptr && this->width_ != nullptr && this->height_ != nullptr
        && this->sumOfLengthWidthHeight_ != nullptr && this->unknown_ != nullptr && this->cnDesc_ != nullptr && this->enDesc_ != nullptr && this->attribute_ != nullptr
        && this->baggagePrice_ != nullptr && this->carryOnBaggageTips_ != nullptr; };
    // startCityCode Field Functions 
    bool hasStartCityCode() const { return this->startCityCode_ != nullptr;};
    void deleteStartCityCode() { this->startCityCode_ = nullptr;};
    inline string startCityCode() const { DARABONBA_PTR_GET_DEFAULT(startCityCode_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setStartCityCode(string startCityCode) { DARABONBA_PTR_SET_VALUE(startCityCode_, startCityCode) };


    // endCityCode Field Functions 
    bool hasEndCityCode() const { return this->endCityCode_ != nullptr;};
    void deleteEndCityCode() { this->endCityCode_ = nullptr;};
    inline string endCityCode() const { DARABONBA_PTR_GET_DEFAULT(endCityCode_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setEndCityCode(string endCityCode) { DARABONBA_PTR_SET_VALUE(endCityCode_, endCityCode) };


    // carryFreePc Field Functions 
    bool hasCarryFreePc() const { return this->carryFreePc_ != nullptr;};
    void deleteCarryFreePc() { this->carryFreePc_ = nullptr;};
    inline int32_t carryFreePc() const { DARABONBA_PTR_GET_DEFAULT(carryFreePc_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryFreePc(int32_t carryFreePc) { DARABONBA_PTR_SET_VALUE(carryFreePc_, carryFreePc) };


    // carryBagWeight Field Functions 
    bool hasCarryBagWeight() const { return this->carryBagWeight_ != nullptr;};
    void deleteCarryBagWeight() { this->carryBagWeight_ = nullptr;};
    inline int32_t carryBagWeight() const { DARABONBA_PTR_GET_DEFAULT(carryBagWeight_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryBagWeight(int32_t carryBagWeight) { DARABONBA_PTR_SET_VALUE(carryBagWeight_, carryBagWeight) };


    // carryBagSize Field Functions 
    bool hasCarryBagSize() const { return this->carryBagSize_ != nullptr;};
    void deleteCarryBagSize() { this->carryBagSize_ = nullptr;};
    inline string carryBagSize() const { DARABONBA_PTR_GET_DEFAULT(carryBagSize_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryBagSize(string carryBagSize) { DARABONBA_PTR_SET_VALUE(carryBagSize_, carryBagSize) };


    // isAllCarryBagWeight Field Functions 
    bool hasIsAllCarryBagWeight() const { return this->isAllCarryBagWeight_ != nullptr;};
    void deleteIsAllCarryBagWeight() { this->isAllCarryBagWeight_ = nullptr;};
    inline bool isAllCarryBagWeight() const { DARABONBA_PTR_GET_DEFAULT(isAllCarryBagWeight_, false) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setIsAllCarryBagWeight(bool isAllCarryBagWeight) { DARABONBA_PTR_SET_VALUE(isAllCarryBagWeight_, isAllCarryBagWeight) };


    // totalPcs Field Functions 
    bool hasTotalPcs() const { return this->totalPcs_ != nullptr;};
    void deleteTotalPcs() { this->totalPcs_ = nullptr;};
    inline int64_t totalPcs() const { DARABONBA_PTR_GET_DEFAULT(totalPcs_, 0L) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setTotalPcs(int64_t totalPcs) { DARABONBA_PTR_SET_VALUE(totalPcs_, totalPcs) };


    // totalWeight Field Functions 
    bool hasTotalWeight() const { return this->totalWeight_ != nullptr;};
    void deleteTotalWeight() { this->totalWeight_ = nullptr;};
    inline int64_t totalWeight() const { DARABONBA_PTR_GET_DEFAULT(totalWeight_, 0L) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setTotalWeight(int64_t totalWeight) { DARABONBA_PTR_SET_VALUE(totalWeight_, totalWeight) };


    // carryUnknown Field Functions 
    bool hasCarryUnknown() const { return this->carryUnknown_ != nullptr;};
    void deleteCarryUnknown() { this->carryUnknown_ = nullptr;};
    inline bool carryUnknown() const { DARABONBA_PTR_GET_DEFAULT(carryUnknown_, false) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryUnknown(bool carryUnknown) { DARABONBA_PTR_SET_VALUE(carryUnknown_, carryUnknown) };


    // carryLength Field Functions 
    bool hasCarryLength() const { return this->carryLength_ != nullptr;};
    void deleteCarryLength() { this->carryLength_ = nullptr;};
    inline int32_t carryLength() const { DARABONBA_PTR_GET_DEFAULT(carryLength_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryLength(int32_t carryLength) { DARABONBA_PTR_SET_VALUE(carryLength_, carryLength) };


    // carryWidth Field Functions 
    bool hasCarryWidth() const { return this->carryWidth_ != nullptr;};
    void deleteCarryWidth() { this->carryWidth_ = nullptr;};
    inline int32_t carryWidth() const { DARABONBA_PTR_GET_DEFAULT(carryWidth_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryWidth(int32_t carryWidth) { DARABONBA_PTR_SET_VALUE(carryWidth_, carryWidth) };


    // carryHeight Field Functions 
    bool hasCarryHeight() const { return this->carryHeight_ != nullptr;};
    void deleteCarryHeight() { this->carryHeight_ = nullptr;};
    inline int32_t carryHeight() const { DARABONBA_PTR_GET_DEFAULT(carryHeight_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryHeight(int32_t carryHeight) { DARABONBA_PTR_SET_VALUE(carryHeight_, carryHeight) };


    // carrySumOfLengthWidthHeight Field Functions 
    bool hasCarrySumOfLengthWidthHeight() const { return this->carrySumOfLengthWidthHeight_ != nullptr;};
    void deleteCarrySumOfLengthWidthHeight() { this->carrySumOfLengthWidthHeight_ = nullptr;};
    inline int32_t carrySumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(carrySumOfLengthWidthHeight_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarrySumOfLengthWidthHeight(int32_t carrySumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(carrySumOfLengthWidthHeight_, carrySumOfLengthWidthHeight) };


    // freePcs Field Functions 
    bool hasFreePcs() const { return this->freePcs_ != nullptr;};
    void deleteFreePcs() { this->freePcs_ = nullptr;};
    inline int64_t freePcs() const { DARABONBA_PTR_GET_DEFAULT(freePcs_, 0L) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setFreePcs(int64_t freePcs) { DARABONBA_PTR_SET_VALUE(freePcs_, freePcs) };


    // baggageWeight Field Functions 
    bool hasBaggageWeight() const { return this->baggageWeight_ != nullptr;};
    void deleteBaggageWeight() { this->baggageWeight_ = nullptr;};
    inline int64_t baggageWeight() const { DARABONBA_PTR_GET_DEFAULT(baggageWeight_, 0L) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setBaggageWeight(int64_t baggageWeight) { DARABONBA_PTR_SET_VALUE(baggageWeight_, baggageWeight) };


    // baggageUnit Field Functions 
    bool hasBaggageUnit() const { return this->baggageUnit_ != nullptr;};
    void deleteBaggageUnit() { this->baggageUnit_ = nullptr;};
    inline string baggageUnit() const { DARABONBA_PTR_GET_DEFAULT(baggageUnit_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setBaggageUnit(string baggageUnit) { DARABONBA_PTR_SET_VALUE(baggageUnit_, baggageUnit) };


    // baggageSize Field Functions 
    bool hasBaggageSize() const { return this->baggageSize_ != nullptr;};
    void deleteBaggageSize() { this->baggageSize_ = nullptr;};
    inline string baggageSize() const { DARABONBA_PTR_GET_DEFAULT(baggageSize_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setBaggageSize(string baggageSize) { DARABONBA_PTR_SET_VALUE(baggageSize_, baggageSize) };


    // allWeight Field Functions 
    bool hasAllWeight() const { return this->allWeight_ != nullptr;};
    void deleteAllWeight() { this->allWeight_ = nullptr;};
    inline bool allWeight() const { DARABONBA_PTR_GET_DEFAULT(allWeight_, false) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setAllWeight(bool allWeight) { DARABONBA_PTR_SET_VALUE(allWeight_, allWeight) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // sumOfLengthWidthHeight Field Functions 
    bool hasSumOfLengthWidthHeight() const { return this->sumOfLengthWidthHeight_ != nullptr;};
    void deleteSumOfLengthWidthHeight() { this->sumOfLengthWidthHeight_ = nullptr;};
    inline int32_t sumOfLengthWidthHeight() const { DARABONBA_PTR_GET_DEFAULT(sumOfLengthWidthHeight_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setSumOfLengthWidthHeight(int32_t sumOfLengthWidthHeight) { DARABONBA_PTR_SET_VALUE(sumOfLengthWidthHeight_, sumOfLengthWidthHeight) };


    // unknown Field Functions 
    bool hasUnknown() const { return this->unknown_ != nullptr;};
    void deleteUnknown() { this->unknown_ = nullptr;};
    inline bool unknown() const { DARABONBA_PTR_GET_DEFAULT(unknown_, false) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setUnknown(bool unknown) { DARABONBA_PTR_SET_VALUE(unknown_, unknown) };


    // cnDesc Field Functions 
    bool hasCnDesc() const { return this->cnDesc_ != nullptr;};
    void deleteCnDesc() { this->cnDesc_ = nullptr;};
    inline string cnDesc() const { DARABONBA_PTR_GET_DEFAULT(cnDesc_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCnDesc(string cnDesc) { DARABONBA_PTR_SET_VALUE(cnDesc_, cnDesc) };


    // enDesc Field Functions 
    bool hasEnDesc() const { return this->enDesc_ != nullptr;};
    void deleteEnDesc() { this->enDesc_ = nullptr;};
    inline string enDesc() const { DARABONBA_PTR_GET_DEFAULT(enDesc_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setEnDesc(string enDesc) { DARABONBA_PTR_SET_VALUE(enDesc_, enDesc) };


    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // baggagePrice Field Functions 
    bool hasBaggagePrice() const { return this->baggagePrice_ != nullptr;};
    void deleteBaggagePrice() { this->baggagePrice_ = nullptr;};
    inline int32_t baggagePrice() const { DARABONBA_PTR_GET_DEFAULT(baggagePrice_, 0) };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setBaggagePrice(int32_t baggagePrice) { DARABONBA_PTR_SET_VALUE(baggagePrice_, baggagePrice) };


    // carryOnBaggageTips Field Functions 
    bool hasCarryOnBaggageTips() const { return this->carryOnBaggageTips_ != nullptr;};
    void deleteCarryOnBaggageTips() { this->carryOnBaggageTips_ = nullptr;};
    inline string carryOnBaggageTips() const { DARABONBA_PTR_GET_DEFAULT(carryOnBaggageTips_, "") };
    inline ModuleItemListSubItemsBaggageRuleOfferBaggageInfoMapValue& setCarryOnBaggageTips(string carryOnBaggageTips) { DARABONBA_PTR_SET_VALUE(carryOnBaggageTips_, carryOnBaggageTips) };


  protected:
    std::shared_ptr<string> startCityCode_ = nullptr;
    std::shared_ptr<string> endCityCode_ = nullptr;
    std::shared_ptr<int32_t> carryFreePc_ = nullptr;
    std::shared_ptr<int32_t> carryBagWeight_ = nullptr;
    std::shared_ptr<string> carryBagSize_ = nullptr;
    std::shared_ptr<bool> isAllCarryBagWeight_ = nullptr;
    std::shared_ptr<int64_t> totalPcs_ = nullptr;
    std::shared_ptr<int64_t> totalWeight_ = nullptr;
    std::shared_ptr<bool> carryUnknown_ = nullptr;
    std::shared_ptr<int32_t> carryLength_ = nullptr;
    std::shared_ptr<int32_t> carryWidth_ = nullptr;
    std::shared_ptr<int32_t> carryHeight_ = nullptr;
    std::shared_ptr<int32_t> carrySumOfLengthWidthHeight_ = nullptr;
    std::shared_ptr<int64_t> freePcs_ = nullptr;
    std::shared_ptr<int64_t> baggageWeight_ = nullptr;
    std::shared_ptr<string> baggageUnit_ = nullptr;
    std::shared_ptr<string> baggageSize_ = nullptr;
    std::shared_ptr<bool> allWeight_ = nullptr;
    std::shared_ptr<int32_t> length_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> sumOfLengthWidthHeight_ = nullptr;
    std::shared_ptr<bool> unknown_ = nullptr;
    std::shared_ptr<string> cnDesc_ = nullptr;
    std::shared_ptr<string> enDesc_ = nullptr;
    std::shared_ptr<string> attribute_ = nullptr;
    std::shared_ptr<int32_t> baggagePrice_ = nullptr;
    std::shared_ptr<string> carryOnBaggageTips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
