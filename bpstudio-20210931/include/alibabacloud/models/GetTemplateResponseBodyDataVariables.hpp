// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATAVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODYDATAVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetTemplateResponseBodyDataVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBodyDataVariables& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Variable, variable_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBodyDataVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Variable, variable_);
    };
    GetTemplateResponseBodyDataVariables() = default ;
    GetTemplateResponseBodyDataVariables(const GetTemplateResponseBodyDataVariables &) = default ;
    GetTemplateResponseBodyDataVariables(GetTemplateResponseBodyDataVariables &&) = default ;
    GetTemplateResponseBodyDataVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBodyDataVariables() = default ;
    GetTemplateResponseBodyDataVariables& operator=(const GetTemplateResponseBodyDataVariables &) = default ;
    GetTemplateResponseBodyDataVariables& operator=(GetTemplateResponseBodyDataVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attribute_ == nullptr
        && return this->dataType_ == nullptr && return this->defaultValue_ == nullptr && return this->options_ == nullptr && return this->variable_ == nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline GetTemplateResponseBodyDataVariables& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetTemplateResponseBodyDataVariables& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetTemplateResponseBodyDataVariables& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetTemplateResponseBodyDataVariables& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // variable Field Functions 
    bool hasVariable() const { return this->variable_ != nullptr;};
    void deleteVariable() { this->variable_ = nullptr;};
    inline string variable() const { DARABONBA_PTR_GET_DEFAULT(variable_, "") };
    inline GetTemplateResponseBodyDataVariables& setVariable(string variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };


  protected:
    // The name of the variable.
    std::shared_ptr<string> attribute_ = nullptr;
    // The type of the variable.
    std::shared_ptr<string> dataType_ = nullptr;
    // The default value of the variable.
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    // The value of the variable.
    std::shared_ptr<string> variable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
