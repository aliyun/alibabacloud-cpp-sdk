// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EPDINVENTORYCONSTITUTEITEM_HPP_
#define ALIBABACLOUD_MODELS_EPDINVENTORYCONSTITUTEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EpdInventoryConstituteItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class EpdInventoryConstituteItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EpdInventoryConstituteItem& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_TO_JSON(factor, factor_);
      DARABONBA_PTR_TO_JSON(factorDataset, factorDataset_);
      DARABONBA_PTR_TO_JSON(factorId, factorId_);
      DARABONBA_PTR_TO_JSON(factorType, factorType_);
      DARABONBA_PTR_TO_JSON(factorUnit, factorUnit_);
      DARABONBA_PTR_TO_JSON(inventoryId, inventoryId_);
      DARABONBA_PTR_TO_JSON(inventoryUnit, inventoryUnit_);
      DARABONBA_PTR_TO_JSON(inventoryValue, inventoryValue_);
      DARABONBA_PTR_TO_JSON(inventoryValuePerProduct, inventoryValuePerProduct_);
      DARABONBA_PTR_TO_JSON(inventoryValuePerProductUnit, inventoryValuePerProductUnit_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(num, num_);
      DARABONBA_PTR_TO_JSON(percent, percent_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, EpdInventoryConstituteItem& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_FROM_JSON(factor, factor_);
      DARABONBA_PTR_FROM_JSON(factorDataset, factorDataset_);
      DARABONBA_PTR_FROM_JSON(factorId, factorId_);
      DARABONBA_PTR_FROM_JSON(factorType, factorType_);
      DARABONBA_PTR_FROM_JSON(factorUnit, factorUnit_);
      DARABONBA_PTR_FROM_JSON(inventoryId, inventoryId_);
      DARABONBA_PTR_FROM_JSON(inventoryUnit, inventoryUnit_);
      DARABONBA_PTR_FROM_JSON(inventoryValue, inventoryValue_);
      DARABONBA_PTR_FROM_JSON(inventoryValuePerProduct, inventoryValuePerProduct_);
      DARABONBA_PTR_FROM_JSON(inventoryValuePerProductUnit, inventoryValuePerProductUnit_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(num, num_);
      DARABONBA_PTR_FROM_JSON(percent, percent_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    EpdInventoryConstituteItem() = default ;
    EpdInventoryConstituteItem(const EpdInventoryConstituteItem &) = default ;
    EpdInventoryConstituteItem(EpdInventoryConstituteItem &&) = default ;
    EpdInventoryConstituteItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EpdInventoryConstituteItem() = default ;
    EpdInventoryConstituteItem& operator=(const EpdInventoryConstituteItem &) = default ;
    EpdInventoryConstituteItem& operator=(EpdInventoryConstituteItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmission_ == nullptr
        && this->factor_ == nullptr && this->factorDataset_ == nullptr && this->factorId_ == nullptr && this->factorType_ == nullptr && this->factorUnit_ == nullptr
        && this->inventoryId_ == nullptr && this->inventoryUnit_ == nullptr && this->inventoryValue_ == nullptr && this->inventoryValuePerProduct_ == nullptr && this->inventoryValuePerProductUnit_ == nullptr
        && this->items_ == nullptr && this->name_ == nullptr && this->num_ == nullptr && this->percent_ == nullptr && this->quantity_ == nullptr
        && this->resourceType_ == nullptr && this->state_ == nullptr && this->unit_ == nullptr; };
    // carbonEmission Field Functions 
    bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
    void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
    inline double getCarbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
    inline EpdInventoryConstituteItem& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


    // factor Field Functions 
    bool hasFactor() const { return this->factor_ != nullptr;};
    void deleteFactor() { this->factor_ = nullptr;};
    inline string getFactor() const { DARABONBA_PTR_GET_DEFAULT(factor_, "") };
    inline EpdInventoryConstituteItem& setFactor(string factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


    // factorDataset Field Functions 
    bool hasFactorDataset() const { return this->factorDataset_ != nullptr;};
    void deleteFactorDataset() { this->factorDataset_ = nullptr;};
    inline string getFactorDataset() const { DARABONBA_PTR_GET_DEFAULT(factorDataset_, "") };
    inline EpdInventoryConstituteItem& setFactorDataset(string factorDataset) { DARABONBA_PTR_SET_VALUE(factorDataset_, factorDataset) };


    // factorId Field Functions 
    bool hasFactorId() const { return this->factorId_ != nullptr;};
    void deleteFactorId() { this->factorId_ = nullptr;};
    inline string getFactorId() const { DARABONBA_PTR_GET_DEFAULT(factorId_, "") };
    inline EpdInventoryConstituteItem& setFactorId(string factorId) { DARABONBA_PTR_SET_VALUE(factorId_, factorId) };


    // factorType Field Functions 
    bool hasFactorType() const { return this->factorType_ != nullptr;};
    void deleteFactorType() { this->factorType_ = nullptr;};
    inline int32_t getFactorType() const { DARABONBA_PTR_GET_DEFAULT(factorType_, 0) };
    inline EpdInventoryConstituteItem& setFactorType(int32_t factorType) { DARABONBA_PTR_SET_VALUE(factorType_, factorType) };


    // factorUnit Field Functions 
    bool hasFactorUnit() const { return this->factorUnit_ != nullptr;};
    void deleteFactorUnit() { this->factorUnit_ = nullptr;};
    inline string getFactorUnit() const { DARABONBA_PTR_GET_DEFAULT(factorUnit_, "") };
    inline EpdInventoryConstituteItem& setFactorUnit(string factorUnit) { DARABONBA_PTR_SET_VALUE(factorUnit_, factorUnit) };


    // inventoryId Field Functions 
    bool hasInventoryId() const { return this->inventoryId_ != nullptr;};
    void deleteInventoryId() { this->inventoryId_ = nullptr;};
    inline int64_t getInventoryId() const { DARABONBA_PTR_GET_DEFAULT(inventoryId_, 0L) };
    inline EpdInventoryConstituteItem& setInventoryId(int64_t inventoryId) { DARABONBA_PTR_SET_VALUE(inventoryId_, inventoryId) };


    // inventoryUnit Field Functions 
    bool hasInventoryUnit() const { return this->inventoryUnit_ != nullptr;};
    void deleteInventoryUnit() { this->inventoryUnit_ = nullptr;};
    inline string getInventoryUnit() const { DARABONBA_PTR_GET_DEFAULT(inventoryUnit_, "") };
    inline EpdInventoryConstituteItem& setInventoryUnit(string inventoryUnit) { DARABONBA_PTR_SET_VALUE(inventoryUnit_, inventoryUnit) };


    // inventoryValue Field Functions 
    bool hasInventoryValue() const { return this->inventoryValue_ != nullptr;};
    void deleteInventoryValue() { this->inventoryValue_ = nullptr;};
    inline double getInventoryValue() const { DARABONBA_PTR_GET_DEFAULT(inventoryValue_, 0.0) };
    inline EpdInventoryConstituteItem& setInventoryValue(double inventoryValue) { DARABONBA_PTR_SET_VALUE(inventoryValue_, inventoryValue) };


    // inventoryValuePerProduct Field Functions 
    bool hasInventoryValuePerProduct() const { return this->inventoryValuePerProduct_ != nullptr;};
    void deleteInventoryValuePerProduct() { this->inventoryValuePerProduct_ = nullptr;};
    inline double getInventoryValuePerProduct() const { DARABONBA_PTR_GET_DEFAULT(inventoryValuePerProduct_, 0.0) };
    inline EpdInventoryConstituteItem& setInventoryValuePerProduct(double inventoryValuePerProduct) { DARABONBA_PTR_SET_VALUE(inventoryValuePerProduct_, inventoryValuePerProduct) };


    // inventoryValuePerProductUnit Field Functions 
    bool hasInventoryValuePerProductUnit() const { return this->inventoryValuePerProductUnit_ != nullptr;};
    void deleteInventoryValuePerProductUnit() { this->inventoryValuePerProductUnit_ = nullptr;};
    inline string getInventoryValuePerProductUnit() const { DARABONBA_PTR_GET_DEFAULT(inventoryValuePerProductUnit_, "") };
    inline EpdInventoryConstituteItem& setInventoryValuePerProductUnit(string inventoryValuePerProductUnit) { DARABONBA_PTR_SET_VALUE(inventoryValuePerProductUnit_, inventoryValuePerProductUnit) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<EpdInventoryConstituteItem> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<EpdInventoryConstituteItem>) };
    inline vector<EpdInventoryConstituteItem> getItems() { DARABONBA_PTR_GET(items_, vector<EpdInventoryConstituteItem>) };
    inline EpdInventoryConstituteItem& setItems(const vector<EpdInventoryConstituteItem> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline EpdInventoryConstituteItem& setItems(vector<EpdInventoryConstituteItem> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EpdInventoryConstituteItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline EpdInventoryConstituteItem& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline double getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0.0) };
    inline EpdInventoryConstituteItem& setPercent(double percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline double getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
    inline EpdInventoryConstituteItem& setQuantity(double quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EpdInventoryConstituteItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline EpdInventoryConstituteItem& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline EpdInventoryConstituteItem& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    shared_ptr<double> carbonEmission_ {};
    shared_ptr<string> factor_ {};
    shared_ptr<string> factorDataset_ {};
    shared_ptr<string> factorId_ {};
    shared_ptr<int32_t> factorType_ {};
    shared_ptr<string> factorUnit_ {};
    shared_ptr<int64_t> inventoryId_ {};
    shared_ptr<string> inventoryUnit_ {};
    shared_ptr<double> inventoryValue_ {};
    shared_ptr<double> inventoryValuePerProduct_ {};
    shared_ptr<string> inventoryValuePerProductUnit_ {};
    shared_ptr<vector<EpdInventoryConstituteItem>> items_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> num_ {};
    shared_ptr<double> percent_ {};
    shared_ptr<double> quantity_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<int32_t> state_ {};
    shared_ptr<string> unit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
