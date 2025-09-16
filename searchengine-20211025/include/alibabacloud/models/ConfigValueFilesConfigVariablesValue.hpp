// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGVALUEFILESCONFIGVARIABLESVALUE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGVALUEFILESCONFIGVARIABLESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ConfigValueFilesConfigVariablesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigValueFilesConfigVariablesValue& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disableModify, disableModify_);
      DARABONBA_PTR_TO_JSON(isModify, isModify_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigValueFilesConfigVariablesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disableModify, disableModify_);
      DARABONBA_PTR_FROM_JSON(isModify, isModify_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ConfigValueFilesConfigVariablesValue() = default ;
    ConfigValueFilesConfigVariablesValue(const ConfigValueFilesConfigVariablesValue &) = default ;
    ConfigValueFilesConfigVariablesValue(ConfigValueFilesConfigVariablesValue &&) = default ;
    ConfigValueFilesConfigVariablesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigValueFilesConfigVariablesValue() = default ;
    ConfigValueFilesConfigVariablesValue& operator=(const ConfigValueFilesConfigVariablesValue &) = default ;
    ConfigValueFilesConfigVariablesValue& operator=(ConfigValueFilesConfigVariablesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->disableModify_ != nullptr && this->isModify_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigValueFilesConfigVariablesValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableModify Field Functions 
    bool hasDisableModify() const { return this->disableModify_ != nullptr;};
    void deleteDisableModify() { this->disableModify_ = nullptr;};
    inline bool disableModify() const { DARABONBA_PTR_GET_DEFAULT(disableModify_, false) };
    inline ConfigValueFilesConfigVariablesValue& setDisableModify(bool disableModify) { DARABONBA_PTR_SET_VALUE(disableModify_, disableModify) };


    // isModify Field Functions 
    bool hasIsModify() const { return this->isModify_ != nullptr;};
    void deleteIsModify() { this->isModify_ = nullptr;};
    inline bool isModify() const { DARABONBA_PTR_GET_DEFAULT(isModify_, false) };
    inline ConfigValueFilesConfigVariablesValue& setIsModify(bool isModify) { DARABONBA_PTR_SET_VALUE(isModify_, isModify) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConfigValueFilesConfigVariablesValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ConfigValueFilesConfigVariablesValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the variable.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether the variable is not allowed to be modified.
    std::shared_ptr<bool> disableModify_ = nullptr;
    // Specifies whether the variable is modified.
    std::shared_ptr<bool> isModify_ = nullptr;
    // The variable type. Valid values: NORMAL: common variable. FUNCTION: function variable.
    std::shared_ptr<string> type_ = nullptr;
    // The variable value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
