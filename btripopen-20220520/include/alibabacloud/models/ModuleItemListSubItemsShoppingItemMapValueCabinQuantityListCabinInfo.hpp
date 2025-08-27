// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYLISTCABININFO_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYLISTCABININFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
    };
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo &&) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& operator=(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& operator=(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr && this->quantity_ != nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityListCabinInfo& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<string> quantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
