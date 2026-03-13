// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSSHOPPINGITEMMAPVALUE_HPP_
#include <darabonba/Core.hpp>
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
    class SearchPrice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchPrice& obj) { 
        DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_TO_JSON(tax, tax_);
      };
      friend void from_json(const Darabonba::Json& j, SearchPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
        DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
        DARABONBA_PTR_FROM_JSON(tax, tax_);
      };
      SearchPrice() = default ;
      SearchPrice(const SearchPrice &) = default ;
      SearchPrice(SearchPrice &&) = default ;
      SearchPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchPrice() = default ;
      SearchPrice& operator=(const SearchPrice &) = default ;
      SearchPrice& operator=(SearchPrice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ticketPrice_ == nullptr
        && this->sellPrice_ == nullptr && this->tax_ == nullptr; };
      // ticketPrice Field Functions 
      bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
      void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
      inline int32_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0) };
      inline SearchPrice& setTicketPrice(int32_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


      // sellPrice Field Functions 
      bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
      void deleteSellPrice() { this->sellPrice_ = nullptr;};
      inline int32_t getSellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
      inline SearchPrice& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


      // tax Field Functions 
      bool hasTax() const { return this->tax_ != nullptr;};
      void deleteTax() { this->tax_ = nullptr;};
      inline int32_t getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0) };
      inline SearchPrice& setTax(int32_t tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    protected:
      shared_ptr<int32_t> ticketPrice_ {};
      shared_ptr<int32_t> sellPrice_ {};
      shared_ptr<int32_t> tax_ {};
    };

    virtual bool empty() const override { return this->searchPrice_ == nullptr; };
    // searchPrice Field Functions 
    bool hasSearchPrice() const { return this->searchPrice_ != nullptr;};
    void deleteSearchPrice() { this->searchPrice_ = nullptr;};
    inline const ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice & getSearchPrice() const { DARABONBA_PTR_GET_CONST(searchPrice_, ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice getSearchPrice() { DARABONBA_PTR_GET(searchPrice_, ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValue& setSearchPrice(const ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice & searchPrice) { DARABONBA_PTR_SET_VALUE(searchPrice_, searchPrice) };
    inline ModuleGroupItemSubItemsShoppingItemMapValue& setSearchPrice(ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice && searchPrice) { DARABONBA_PTR_SET_RVALUE(searchPrice_, searchPrice) };


  protected:
    shared_ptr<ModuleGroupItemSubItemsShoppingItemMapValue::SearchPrice> searchPrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
