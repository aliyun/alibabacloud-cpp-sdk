// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMENUITEMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMENUITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SubmenuItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmenuItems& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_TO_JSON(ItemDesc, itemDesc_);
      DARABONBA_PTR_TO_JSON(ItemType, itemType_);
      DARABONBA_PTR_TO_JSON(RelatingItems, relatingItems_);
    };
    friend void from_json(const Darabonba::Json& j, SubmenuItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultSelected, defaultSelected_);
      DARABONBA_PTR_FROM_JSON(ItemDesc, itemDesc_);
      DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
      DARABONBA_PTR_FROM_JSON(RelatingItems, relatingItems_);
    };
    SubmenuItems() = default ;
    SubmenuItems(const SubmenuItems &) = default ;
    SubmenuItems(SubmenuItems &&) = default ;
    SubmenuItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmenuItems() = default ;
    SubmenuItems& operator=(const SubmenuItems &) = default ;
    SubmenuItems& operator=(SubmenuItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultSelected_ == nullptr
        && return this->itemDesc_ == nullptr && return this->itemType_ == nullptr && return this->relatingItems_ == nullptr; };
    // defaultSelected Field Functions 
    bool hasDefaultSelected() const { return this->defaultSelected_ != nullptr;};
    void deleteDefaultSelected() { this->defaultSelected_ = nullptr;};
    inline bool defaultSelected() const { DARABONBA_PTR_GET_DEFAULT(defaultSelected_, false) };
    inline SubmenuItems& setDefaultSelected(bool defaultSelected) { DARABONBA_PTR_SET_VALUE(defaultSelected_, defaultSelected) };


    // itemDesc Field Functions 
    bool hasItemDesc() const { return this->itemDesc_ != nullptr;};
    void deleteItemDesc() { this->itemDesc_ = nullptr;};
    inline string itemDesc() const { DARABONBA_PTR_GET_DEFAULT(itemDesc_, "") };
    inline SubmenuItems& setItemDesc(string itemDesc) { DARABONBA_PTR_SET_VALUE(itemDesc_, itemDesc) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string itemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline SubmenuItems& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // relatingItems Field Functions 
    bool hasRelatingItems() const { return this->relatingItems_ != nullptr;};
    void deleteRelatingItems() { this->relatingItems_ = nullptr;};
    inline const vector<string> & relatingItems() const { DARABONBA_PTR_GET_CONST(relatingItems_, vector<string>) };
    inline vector<string> relatingItems() { DARABONBA_PTR_GET(relatingItems_, vector<string>) };
    inline SubmenuItems& setRelatingItems(const vector<string> & relatingItems) { DARABONBA_PTR_SET_VALUE(relatingItems_, relatingItems) };
    inline SubmenuItems& setRelatingItems(vector<string> && relatingItems) { DARABONBA_PTR_SET_RVALUE(relatingItems_, relatingItems) };


  protected:
    std::shared_ptr<bool> defaultSelected_ = nullptr;
    std::shared_ptr<string> itemDesc_ = nullptr;
    std::shared_ptr<string> itemType_ = nullptr;
    std::shared_ptr<vector<string>> relatingItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
