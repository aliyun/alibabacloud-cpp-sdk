// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMENU_HPP_
#define ALIBABACLOUD_MODELS_SUBMENU_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Submenu.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class Submenu : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Submenu& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(SubmenuDesc, submenuDesc_);
      DARABONBA_PTR_TO_JSON(SubmenuType, submenuType_);
      DARABONBA_PTR_TO_JSON(Submenus, submenus_);
    };
    friend void from_json(const Darabonba::Json& j, Submenu& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(SubmenuDesc, submenuDesc_);
      DARABONBA_PTR_FROM_JSON(SubmenuType, submenuType_);
      DARABONBA_PTR_FROM_JSON(Submenus, submenus_);
    };
    Submenu() = default ;
    Submenu(const Submenu &) = default ;
    Submenu(Submenu &&) = default ;
    Submenu(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Submenu() = default ;
    Submenu& operator=(const Submenu &) = default ;
    Submenu& operator=(Submenu &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
        DARABONBA_PTR_TO_JSON(ItemDesc, itemDesc_);
        DARABONBA_PTR_TO_JSON(ItemType, itemType_);
        DARABONBA_PTR_TO_JSON(RelatingItems, relatingItems_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
        DARABONBA_PTR_FROM_JSON(ItemDesc, itemDesc_);
        DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
        DARABONBA_PTR_FROM_JSON(RelatingItems, relatingItems_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultSelected_ == nullptr
        && this->itemDesc_ == nullptr && this->itemType_ == nullptr && this->relatingItems_ == nullptr; };
      // defaultSelected Field Functions 
      bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
      void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
      inline bool getDefaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
      inline Items& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


      // itemDesc Field Functions 
      bool hasItemDesc() const { return this->itemDesc_ != nullptr;};
      void deleteItemDesc() { this->itemDesc_ = nullptr;};
      inline string getItemDesc() const { DARABONBA_PTR_GET_DEFAULT(itemDesc_, "") };
      inline Items& setItemDesc(string itemDesc) { DARABONBA_PTR_SET_VALUE(itemDesc_, itemDesc) };


      // itemType Field Functions 
      bool hasItemType() const { return this->itemType_ != nullptr;};
      void deleteItemType() { this->itemType_ = nullptr;};
      inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
      inline Items& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      // relatingItems Field Functions 
      bool hasRelatingItems() const { return this->relatingItems_ != nullptr;};
      void deleteRelatingItems() { this->relatingItems_ = nullptr;};
      inline const vector<string> & getRelatingItems() const { DARABONBA_PTR_GET_CONST(relatingItems_, vector<string>) };
      inline vector<string> getRelatingItems() { DARABONBA_PTR_GET(relatingItems_, vector<string>) };
      inline Items& setRelatingItems(const vector<string> & relatingItems) { DARABONBA_PTR_SET_VALUE(relatingItems_, relatingItems) };
      inline Items& setRelatingItems(vector<string> && relatingItems) { DARABONBA_PTR_SET_RVALUE(relatingItems_, relatingItems) };


    protected:
      shared_ptr<bool> defaultSelected_ {};
      shared_ptr<string> itemDesc_ {};
      shared_ptr<string> itemType_ {};
      shared_ptr<vector<string>> relatingItems_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->submenuDesc_ == nullptr && this->submenuType_ == nullptr && this->submenus_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Submenu::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Submenu::Items>) };
    inline vector<Submenu::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Submenu::Items>) };
    inline Submenu& setItems(const vector<Submenu::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline Submenu& setItems(vector<Submenu::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // submenuDesc Field Functions 
    bool hasSubmenuDesc() const { return this->submenuDesc_ != nullptr;};
    void deleteSubmenuDesc() { this->submenuDesc_ = nullptr;};
    inline string getSubmenuDesc() const { DARABONBA_PTR_GET_DEFAULT(submenuDesc_, "") };
    inline Submenu& setSubmenuDesc(string submenuDesc) { DARABONBA_PTR_SET_VALUE(submenuDesc_, submenuDesc) };


    // submenuType Field Functions 
    bool hasSubmenuType() const { return this->submenuType_ != nullptr;};
    void deleteSubmenuType() { this->submenuType_ = nullptr;};
    inline string getSubmenuType() const { DARABONBA_PTR_GET_DEFAULT(submenuType_, "") };
    inline Submenu& setSubmenuType(string submenuType) { DARABONBA_PTR_SET_VALUE(submenuType_, submenuType) };


    // submenus Field Functions 
    bool hasSubmenus() const { return this->submenus_ != nullptr;};
    void deleteSubmenus() { this->submenus_ = nullptr;};
    inline const vector<Submenu> & getSubmenus() const { DARABONBA_PTR_GET_CONST(submenus_, vector<Submenu>) };
    inline vector<Submenu> getSubmenus() { DARABONBA_PTR_GET(submenus_, vector<Submenu>) };
    inline Submenu& setSubmenus(const vector<Submenu> & submenus) { DARABONBA_PTR_SET_VALUE(submenus_, submenus) };
    inline Submenu& setSubmenus(vector<Submenu> && submenus) { DARABONBA_PTR_SET_RVALUE(submenus_, submenus) };


  protected:
    shared_ptr<vector<Submenu::Items>> items_ {};
    shared_ptr<string> submenuDesc_ {};
    shared_ptr<string> submenuType_ {};
    shared_ptr<vector<Submenu>> submenus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
