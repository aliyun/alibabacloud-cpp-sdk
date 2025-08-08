// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESRESPONSEBODYDATAVARIABLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONVARIABLESRESPONSEBODYDATAVARIABLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationVariablesResponseBodyDataVariableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationVariablesResponseBodyDataVariableList& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Variable, variable_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationVariablesResponseBodyDataVariableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Variable, variable_);
    };
    GetApplicationVariablesResponseBodyDataVariableList() = default ;
    GetApplicationVariablesResponseBodyDataVariableList(const GetApplicationVariablesResponseBodyDataVariableList &) = default ;
    GetApplicationVariablesResponseBodyDataVariableList(GetApplicationVariablesResponseBodyDataVariableList &&) = default ;
    GetApplicationVariablesResponseBodyDataVariableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationVariablesResponseBodyDataVariableList() = default ;
    GetApplicationVariablesResponseBodyDataVariableList& operator=(const GetApplicationVariablesResponseBodyDataVariableList &) = default ;
    GetApplicationVariablesResponseBodyDataVariableList& operator=(GetApplicationVariablesResponseBodyDataVariableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr
        && this->variable_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetApplicationVariablesResponseBodyDataVariableList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // variable Field Functions 
    bool hasVariable() const { return this->variable_ != nullptr;};
    void deleteVariable() { this->variable_ = nullptr;};
    inline string variable() const { DARABONBA_PTR_GET_DEFAULT(variable_, "") };
    inline GetApplicationVariablesResponseBodyDataVariableList& setVariable(string variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> variable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
