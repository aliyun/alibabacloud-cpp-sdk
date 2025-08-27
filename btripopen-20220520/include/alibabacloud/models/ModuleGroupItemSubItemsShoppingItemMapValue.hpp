// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemSubItemsShoppingItemMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(search_price, searchPrice_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemSubItemsShoppingItemMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(search_price, searchPrice_);
    };
    ModuleGroupItemSubItemsShoppingItemMapValue() = default ;
    ModuleGroupItemSubItemsShoppingItemMapValue(const ModuleGroupItemSubItemsShoppingItemMapValue &) = default ;
    ModuleGroupItemSubItemsShoppingItemMapValue(ModuleGroupItemSubItemsShoppingItemMapValue &&) = default ;
    ModuleGroupItemSubItemsShoppingItemMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemSubItemsShoppingItemMapValue() = default ;
    ModuleGroupItemSubItemsShoppingItemMapValue& operator=(const ModuleGroupItemSubItemsShoppingItemMapValue &) = default ;
    ModuleGroupItemSubItemsShoppingItemMapValue& operator=(ModuleGroupItemSubItemsShoppingItemMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->searchPrice_ != nullptr; };
    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice & searchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice searchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValue& setSearchPrice(const ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValue& setSearchPrice(ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    std::shared_ptr<ModuleGroupItemSubItemsShoppingItemMapValueSearchPrice> searchPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
