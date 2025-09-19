// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUESTCUSTOMCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CHANGECHECKCUSTOMCONFIGREQUESTCUSTOMCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ChangeCheckCustomConfigRequestCustomConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCheckCustomConfigRequestCustomConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCheckCustomConfigRequestCustomConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ChangeCheckCustomConfigRequestCustomConfigs() = default ;
    ChangeCheckCustomConfigRequestCustomConfigs(const ChangeCheckCustomConfigRequestCustomConfigs &) = default ;
    ChangeCheckCustomConfigRequestCustomConfigs(ChangeCheckCustomConfigRequestCustomConfigs &&) = default ;
    ChangeCheckCustomConfigRequestCustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCheckCustomConfigRequestCustomConfigs() = default ;
    ChangeCheckCustomConfigRequestCustomConfigs& operator=(const ChangeCheckCustomConfigRequestCustomConfigs &) = default ;
    ChangeCheckCustomConfigRequestCustomConfigs& operator=(ChangeCheckCustomConfigRequestCustomConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->operation_ != nullptr && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ChangeCheckCustomConfigRequestCustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ChangeCheckCustomConfigRequestCustomConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ChangeCheckCustomConfigRequestCustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the custom configuration item. The name of a custom configuration item is unique in a check item.
    std::shared_ptr<string> name_ = nullptr;
    // The operation that you want to perform on the custom configuration item. This parameter is required only if you want to delete the custom configuration item. To delete the custom configuration item, set the value to DELETE.
    std::shared_ptr<string> operation_ = nullptr;
    // The value of the custom configuration item. The value is a string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
