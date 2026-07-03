// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPRODUCTCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPRODUCTCATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HiMarketIcon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketProductCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketProductCategory& obj) { 
      DARABONBA_PTR_TO_JSON(categoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(icon, icon_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketProductCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(icon, icon_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    HiMarketProductCategory() = default ;
    HiMarketProductCategory(const HiMarketProductCategory &) = default ;
    HiMarketProductCategory(HiMarketProductCategory &&) = default ;
    HiMarketProductCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketProductCategory() = default ;
    HiMarketProductCategory& operator=(const HiMarketProductCategory &) = default ;
    HiMarketProductCategory& operator=(HiMarketProductCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->description_ == nullptr && this->icon_ == nullptr && this->name_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline HiMarketProductCategory& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HiMarketProductCategory& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline const HiMarketIcon & getIcon() const { DARABONBA_PTR_GET_CONST(icon_, HiMarketIcon) };
    inline HiMarketIcon getIcon() { DARABONBA_PTR_GET(icon_, HiMarketIcon) };
    inline HiMarketProductCategory& setIcon(const HiMarketIcon & icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };
    inline HiMarketProductCategory& setIcon(HiMarketIcon && icon) { DARABONBA_PTR_SET_RVALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HiMarketProductCategory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The categorization ID.
    shared_ptr<string> categoryId_ {};
    // The categorization description.
    shared_ptr<string> description_ {};
    // The icon configuration.
    shared_ptr<HiMarketIcon> icon_ {};
    // The categorization name.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
