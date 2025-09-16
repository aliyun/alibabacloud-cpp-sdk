// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VARIABLESVALUE_HPP_
#define ALIBABACLOUD_MODELS_VARIABLESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VariablesValueFuncValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class VariablesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VariablesValue& obj) { 
      DARABONBA_PTR_TO_JSON(disableModify, disableModify_);
      DARABONBA_PTR_TO_JSON(isModify, isModify_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(templateValue, templateValue_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(funcValue, funcValue_);
    };
    friend void from_json(const Darabonba::Json& j, VariablesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(disableModify, disableModify_);
      DARABONBA_PTR_FROM_JSON(isModify, isModify_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(templateValue, templateValue_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(funcValue, funcValue_);
    };
    VariablesValue() = default ;
    VariablesValue(const VariablesValue &) = default ;
    VariablesValue(VariablesValue &&) = default ;
    VariablesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VariablesValue() = default ;
    VariablesValue& operator=(const VariablesValue &) = default ;
    VariablesValue& operator=(VariablesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableModify_ != nullptr
        && this->isModify_ != nullptr && this->value_ != nullptr && this->description_ != nullptr && this->templateValue_ != nullptr && this->type_ != nullptr
        && this->funcValue_ != nullptr; };
    // disableModify Field Functions 
    bool hasDisableModify() const { return this->disableModify_ != nullptr;};
    void deleteDisableModify() { this->disableModify_ = nullptr;};
    inline bool disableModify() const { DARABONBA_PTR_GET_DEFAULT(disableModify_, false) };
    inline VariablesValue& setDisableModify(bool disableModify) { DARABONBA_PTR_SET_VALUE(disableModify_, disableModify) };


    // isModify Field Functions 
    bool hasIsModify() const { return this->isModify_ != nullptr;};
    void deleteIsModify() { this->isModify_ = nullptr;};
    inline bool isModify() const { DARABONBA_PTR_GET_DEFAULT(isModify_, false) };
    inline VariablesValue& setIsModify(bool isModify) { DARABONBA_PTR_SET_VALUE(isModify_, isModify) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline VariablesValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline VariablesValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // templateValue Field Functions 
    bool hasTemplateValue() const { return this->templateValue_ != nullptr;};
    void deleteTemplateValue() { this->templateValue_ = nullptr;};
    inline string templateValue() const { DARABONBA_PTR_GET_DEFAULT(templateValue_, "") };
    inline VariablesValue& setTemplateValue(string templateValue) { DARABONBA_PTR_SET_VALUE(templateValue_, templateValue) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline VariablesValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // funcValue Field Functions 
    bool hasFuncValue() const { return this->funcValue_ != nullptr;};
    void deleteFuncValue() { this->funcValue_ = nullptr;};
    inline const VariablesValueFuncValue & funcValue() const { DARABONBA_PTR_GET_CONST(funcValue_, VariablesValueFuncValue) };
    inline VariablesValueFuncValue funcValue() { DARABONBA_PTR_GET(funcValue_, VariablesValueFuncValue) };
    inline VariablesValue& setFuncValue(const VariablesValueFuncValue & funcValue) { DARABONBA_PTR_SET_VALUE(funcValue_, funcValue) };
    inline VariablesValue& setFuncValue(VariablesValueFuncValue && funcValue) { DARABONBA_PTR_SET_RVALUE(funcValue_, funcValue) };


  protected:
    // Specifies whether the variable is not allowed to be modified.
    std::shared_ptr<bool> disableModify_ = nullptr;
    // Specifies whether the variable is modified.
    std::shared_ptr<bool> isModify_ = nullptr;
    // The variable value.
    std::shared_ptr<string> value_ = nullptr;
    // The description of the variable.
    std::shared_ptr<string> description_ = nullptr;
    // The template value of the variable.
    std::shared_ptr<string> templateValue_ = nullptr;
    // The variable type. Valid values:
    // 
    // *   NORMAL: common variable
    // *   FUNCTION: function variable
    std::shared_ptr<string> type_ = nullptr;
    // The function variables.
    std::shared_ptr<VariablesValueFuncValue> funcValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
