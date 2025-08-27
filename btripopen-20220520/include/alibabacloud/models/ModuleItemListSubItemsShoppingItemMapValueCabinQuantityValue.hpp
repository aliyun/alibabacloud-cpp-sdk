// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEITEMLISTSUBITEMSSHOPPINGITEMMAPVALUECABINQUANTITYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& obj) { 
      DARABONBA_PTR_TO_JSON(cabin, cabin_);
      DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_TO_JSON(cabin_class_memo, cabinClassMemo_);
      DARABONBA_PTR_TO_JSON(specification, specification_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(link_cabins, linkCabins_);
      DARABONBA_PTR_TO_JSON(reshop_change_cabin, reshopChangeCabin_);
      DARABONBA_PTR_TO_JSON(child_cabin_type, childCabinType_);
      DARABONBA_PTR_TO_JSON(infant_basic_cabin, infantBasicCabin_);
      DARABONBA_PTR_TO_JSON(inner_cabin_class, innerCabinClass_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& obj) { 
      DARABONBA_PTR_FROM_JSON(cabin, cabin_);
      DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
      DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
      DARABONBA_PTR_FROM_JSON(cabin_class_memo, cabinClassMemo_);
      DARABONBA_PTR_FROM_JSON(specification, specification_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(link_cabins, linkCabins_);
      DARABONBA_PTR_FROM_JSON(reshop_change_cabin, reshopChangeCabin_);
      DARABONBA_PTR_FROM_JSON(child_cabin_type, childCabinType_);
      DARABONBA_PTR_FROM_JSON(infant_basic_cabin, infantBasicCabin_);
      DARABONBA_PTR_FROM_JSON(inner_cabin_class, innerCabinClass_);
    };
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue &&) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue() = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& operator=(const ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue &) = default ;
    ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& operator=(ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cabin_ != nullptr
        && this->cabinClass_ != nullptr && this->cabinClassName_ != nullptr && this->cabinClassMemo_ != nullptr && this->specification_ != nullptr && this->quantity_ != nullptr
        && this->linkCabins_ != nullptr && this->reshopChangeCabin_ != nullptr && this->childCabinType_ != nullptr && this->infantBasicCabin_ != nullptr && this->innerCabinClass_ != nullptr; };
    // cabin Field Functions 
    bool hasCabin() const { return this->cabin_ != nullptr;};
    void deleteCabin() { this->cabin_ = nullptr;};
    inline string cabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


    // cabinClass Field Functions 
    bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
    void deleteCabinClass() { this->cabinClass_ = nullptr;};
    inline string cabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


    // cabinClassName Field Functions 
    bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
    void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
    inline string cabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


    // cabinClassMemo Field Functions 
    bool hasCabinClassMemo() const { return this->cabinClassMemo_ != nullptr;};
    void deleteCabinClassMemo() { this->cabinClassMemo_ = nullptr;};
    inline string cabinClassMemo() const { DARABONBA_PTR_GET_DEFAULT(cabinClassMemo_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setCabinClassMemo(string cabinClassMemo) { DARABONBA_PTR_SET_VALUE(cabinClassMemo_, cabinClassMemo) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // linkCabins Field Functions 
    bool hasLinkCabins() const { return this->linkCabins_ != nullptr;};
    void deleteLinkCabins() { this->linkCabins_ = nullptr;};
    inline const vector<string> & linkCabins() const { DARABONBA_PTR_GET_CONST(linkCabins_, vector<string>) };
    inline vector<string> linkCabins() { DARABONBA_PTR_GET(linkCabins_, vector<string>) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setLinkCabins(const vector<string> & linkCabins) { DARABONBA_PTR_SET_VALUE(linkCabins_, linkCabins) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setLinkCabins(vector<string> && linkCabins) { DARABONBA_PTR_SET_RVALUE(linkCabins_, linkCabins) };


    // reshopChangeCabin Field Functions 
    bool hasReshopChangeCabin() const { return this->reshopChangeCabin_ != nullptr;};
    void deleteReshopChangeCabin() { this->reshopChangeCabin_ = nullptr;};
    inline bool reshopChangeCabin() const { DARABONBA_PTR_GET_DEFAULT(reshopChangeCabin_, false) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setReshopChangeCabin(bool reshopChangeCabin) { DARABONBA_PTR_SET_VALUE(reshopChangeCabin_, reshopChangeCabin) };


    // childCabinType Field Functions 
    bool hasChildCabinType() const { return this->childCabinType_ != nullptr;};
    void deleteChildCabinType() { this->childCabinType_ = nullptr;};
    inline int32_t childCabinType() const { DARABONBA_PTR_GET_DEFAULT(childCabinType_, 0) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setChildCabinType(int32_t childCabinType) { DARABONBA_PTR_SET_VALUE(childCabinType_, childCabinType) };


    // infantBasicCabin Field Functions 
    bool hasInfantBasicCabin() const { return this->infantBasicCabin_ != nullptr;};
    void deleteInfantBasicCabin() { this->infantBasicCabin_ = nullptr;};
    inline string infantBasicCabin() const { DARABONBA_PTR_GET_DEFAULT(infantBasicCabin_, "") };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setInfantBasicCabin(string infantBasicCabin) { DARABONBA_PTR_SET_VALUE(infantBasicCabin_, infantBasicCabin) };


    // innerCabinClass Field Functions 
    bool hasInnerCabinClass() const { return this->innerCabinClass_ != nullptr;};
    void deleteInnerCabinClass() { this->innerCabinClass_ = nullptr;};
    inline int32_t innerCabinClass() const { DARABONBA_PTR_GET_DEFAULT(innerCabinClass_, 0) };
    inline ModuleItemListSubItemsShoppingItemMapValueCabinQuantityValue& setInnerCabinClass(int32_t innerCabinClass) { DARABONBA_PTR_SET_VALUE(innerCabinClass_, innerCabinClass) };


  protected:
    std::shared_ptr<string> cabin_ = nullptr;
    std::shared_ptr<string> cabinClass_ = nullptr;
    std::shared_ptr<string> cabinClassName_ = nullptr;
    std::shared_ptr<string> cabinClassMemo_ = nullptr;
    std::shared_ptr<string> specification_ = nullptr;
    std::shared_ptr<string> quantity_ = nullptr;
    std::shared_ptr<vector<string>> linkCabins_ = nullptr;
    std::shared_ptr<bool> reshopChangeCabin_ = nullptr;
    std::shared_ptr<int32_t> childCabinType_ = nullptr;
    std::shared_ptr<string> infantBasicCabin_ = nullptr;
    std::shared_ptr<int32_t> innerCabinClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
