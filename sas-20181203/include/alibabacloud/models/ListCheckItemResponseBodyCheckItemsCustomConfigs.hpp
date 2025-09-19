// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODYCHECKITEMSCUSTOMCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODYCHECKITEMSCUSTOMCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemResponseBodyCheckItemsCustomConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemResponseBodyCheckItemsCustomConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemResponseBodyCheckItemsCustomConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListCheckItemResponseBodyCheckItemsCustomConfigs() = default ;
    ListCheckItemResponseBodyCheckItemsCustomConfigs(const ListCheckItemResponseBodyCheckItemsCustomConfigs &) = default ;
    ListCheckItemResponseBodyCheckItemsCustomConfigs(ListCheckItemResponseBodyCheckItemsCustomConfigs &&) = default ;
    ListCheckItemResponseBodyCheckItemsCustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemResponseBodyCheckItemsCustomConfigs() = default ;
    ListCheckItemResponseBodyCheckItemsCustomConfigs& operator=(const ListCheckItemResponseBodyCheckItemsCustomConfigs &) = default ;
    ListCheckItemResponseBodyCheckItemsCustomConfigs& operator=(ListCheckItemResponseBodyCheckItemsCustomConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->name_ != nullptr && this->showName_ != nullptr && this->typeDefine_ != nullptr && this->value_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListCheckItemResponseBodyCheckItemsCustomConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCheckItemResponseBodyCheckItemsCustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListCheckItemResponseBodyCheckItemsCustomConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // typeDefine Field Functions 
    bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
    void deleteTypeDefine() { this->typeDefine_ = nullptr;};
    inline string typeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
    inline ListCheckItemResponseBodyCheckItemsCustomConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListCheckItemResponseBodyCheckItemsCustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The default value of the check item. The value is a string.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> name_ = nullptr;
    // The display name of the check item.
    std::shared_ptr<string> showName_ = nullptr;
    // The type of the check item. The value is a JSON string.
    std::shared_ptr<string> typeDefine_ = nullptr;
    // The specified value of the check item. The value is a string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
