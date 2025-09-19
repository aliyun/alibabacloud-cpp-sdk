// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUESTCUSTOMCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKCUSTOMCONFIGSHRINKREQUESTCUSTOMCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckCustomConfigShrinkRequestCustomConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckCustomConfigShrinkRequestCustomConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckCustomConfigShrinkRequestCustomConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    VerifyCheckCustomConfigShrinkRequestCustomConfigs() = default ;
    VerifyCheckCustomConfigShrinkRequestCustomConfigs(const VerifyCheckCustomConfigShrinkRequestCustomConfigs &) = default ;
    VerifyCheckCustomConfigShrinkRequestCustomConfigs(VerifyCheckCustomConfigShrinkRequestCustomConfigs &&) = default ;
    VerifyCheckCustomConfigShrinkRequestCustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckCustomConfigShrinkRequestCustomConfigs() = default ;
    VerifyCheckCustomConfigShrinkRequestCustomConfigs& operator=(const VerifyCheckCustomConfigShrinkRequestCustomConfigs &) = default ;
    VerifyCheckCustomConfigShrinkRequestCustomConfigs& operator=(VerifyCheckCustomConfigShrinkRequestCustomConfigs &&) = default ;
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
    inline VerifyCheckCustomConfigShrinkRequestCustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline VerifyCheckCustomConfigShrinkRequestCustomConfigs& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline VerifyCheckCustomConfigShrinkRequestCustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Name of the custom configuration item for the check item, unique within the same check item.
    std::shared_ptr<string> name_ = nullptr;
    // Operation type for the custom configuration item of the check item. Only pass DELETE when deleting; no need to pass for creation or update.
    std::shared_ptr<string> operation_ = nullptr;
    // User-configured value string for the custom configuration item of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
