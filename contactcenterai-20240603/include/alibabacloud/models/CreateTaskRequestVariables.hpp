// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class CreateTaskRequestVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestVariables& obj) { 
      DARABONBA_PTR_TO_JSON(variableCode, variableCode_);
      DARABONBA_PTR_TO_JSON(variableValue, variableValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(variableCode, variableCode_);
      DARABONBA_PTR_FROM_JSON(variableValue, variableValue_);
    };
    CreateTaskRequestVariables() = default ;
    CreateTaskRequestVariables(const CreateTaskRequestVariables &) = default ;
    CreateTaskRequestVariables(CreateTaskRequestVariables &&) = default ;
    CreateTaskRequestVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestVariables() = default ;
    CreateTaskRequestVariables& operator=(const CreateTaskRequestVariables &) = default ;
    CreateTaskRequestVariables& operator=(CreateTaskRequestVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->variableCode_ != nullptr
        && this->variableValue_ != nullptr; };
    // variableCode Field Functions 
    bool hasVariableCode() const { return this->variableCode_ != nullptr;};
    void deleteVariableCode() { this->variableCode_ = nullptr;};
    inline string variableCode() const { DARABONBA_PTR_GET_DEFAULT(variableCode_, "") };
    inline CreateTaskRequestVariables& setVariableCode(string variableCode) { DARABONBA_PTR_SET_VALUE(variableCode_, variableCode) };


    // variableValue Field Functions 
    bool hasVariableValue() const { return this->variableValue_ != nullptr;};
    void deleteVariableValue() { this->variableValue_ = nullptr;};
    inline string variableValue() const { DARABONBA_PTR_GET_DEFAULT(variableValue_, "") };
    inline CreateTaskRequestVariables& setVariableValue(string variableValue) { DARABONBA_PTR_SET_VALUE(variableValue_, variableValue) };


  protected:
    std::shared_ptr<string> variableCode_ = nullptr;
    std::shared_ptr<string> variableValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
