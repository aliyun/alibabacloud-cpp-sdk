// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VARIABLESVALUEFUNCVALUE_HPP_
#define ALIBABACLOUD_MODELS_VARIABLESVALUEFUNCVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class VariablesValueFuncValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VariablesValueFuncValue& obj) { 
      DARABONBA_PTR_TO_JSON(funcClassName, funcClassName_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, VariablesValueFuncValue& obj) { 
      DARABONBA_PTR_FROM_JSON(funcClassName, funcClassName_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    VariablesValueFuncValue() = default ;
    VariablesValueFuncValue(const VariablesValueFuncValue &) = default ;
    VariablesValueFuncValue(VariablesValueFuncValue &&) = default ;
    VariablesValueFuncValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VariablesValueFuncValue() = default ;
    VariablesValueFuncValue& operator=(const VariablesValueFuncValue &) = default ;
    VariablesValueFuncValue& operator=(VariablesValueFuncValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->funcClassName_ != nullptr
        && this->template_ != nullptr; };
    // funcClassName Field Functions 
    bool hasFuncClassName() const { return this->funcClassName_ != nullptr;};
    void deleteFuncClassName() { this->funcClassName_ = nullptr;};
    inline string funcClassName() const { DARABONBA_PTR_GET_DEFAULT(funcClassName_, "") };
    inline VariablesValueFuncValue& setFuncClassName(string funcClassName) { DARABONBA_PTR_SET_VALUE(funcClassName_, funcClassName) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline VariablesValueFuncValue& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The class name of the function variable.
    std::shared_ptr<string> funcClassName_ = nullptr;
    // The template of the function variable.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
