// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMENU_HPP_
#define ALIBABACLOUD_MODELS_SUBMENU_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmenuItems.hpp>
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
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->submenuDesc_ == nullptr && return this->submenuType_ == nullptr && return this->submenus_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<SubmenuItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<SubmenuItems>) };
    inline vector<SubmenuItems> items() { DARABONBA_PTR_GET(items_, vector<SubmenuItems>) };
    inline Submenu& setItems(const vector<SubmenuItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline Submenu& setItems(vector<SubmenuItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // submenuDesc Field Functions 
    bool hasSubmenuDesc() const { return this->submenuDesc_ != nullptr;};
    void deleteSubmenuDesc() { this->submenuDesc_ = nullptr;};
    inline string submenuDesc() const { DARABONBA_PTR_GET_DEFAULT(submenuDesc_, "") };
    inline Submenu& setSubmenuDesc(string submenuDesc) { DARABONBA_PTR_SET_VALUE(submenuDesc_, submenuDesc) };


    // submenuType Field Functions 
    bool hasSubmenuType() const { return this->submenuType_ != nullptr;};
    void deleteSubmenuType() { this->submenuType_ = nullptr;};
    inline string submenuType() const { DARABONBA_PTR_GET_DEFAULT(submenuType_, "") };
    inline Submenu& setSubmenuType(string submenuType) { DARABONBA_PTR_SET_VALUE(submenuType_, submenuType) };


    // submenus Field Functions 
    bool hasSubmenus() const { return this->submenus_ != nullptr;};
    void deleteSubmenus() { this->submenus_ = nullptr;};
    inline const vector<Submenu> & submenus() const { DARABONBA_PTR_GET_CONST(submenus_, vector<Submenu>) };
    inline vector<Submenu> submenus() { DARABONBA_PTR_GET(submenus_, vector<Submenu>) };
    inline Submenu& setSubmenus(const vector<Submenu> & submenus) { DARABONBA_PTR_SET_VALUE(submenus_, submenus) };
    inline Submenu& setSubmenus(vector<Submenu> && submenus) { DARABONBA_PTR_SET_RVALUE(submenus_, submenus) };


  protected:
    std::shared_ptr<vector<SubmenuItems>> items_ = nullptr;
    std::shared_ptr<string> submenuDesc_ = nullptr;
    std::shared_ptr<string> submenuType_ = nullptr;
    std::shared_ptr<vector<Submenu>> submenus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
