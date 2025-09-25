// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLSFUNCTION_HPP_
#define ALIBABACLOUD_MODELS_RUNCHATRESULTGENERATIONREQUESTTOOLSFUNCTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunChatResultGenerationRequestToolsFunctionParameters.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunChatResultGenerationRequestToolsFunction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunChatResultGenerationRequestToolsFunction& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(required, required_);
    };
    friend void from_json(const Darabonba::Json& j, RunChatResultGenerationRequestToolsFunction& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(required, required_);
    };
    RunChatResultGenerationRequestToolsFunction() = default ;
    RunChatResultGenerationRequestToolsFunction(const RunChatResultGenerationRequestToolsFunction &) = default ;
    RunChatResultGenerationRequestToolsFunction(RunChatResultGenerationRequestToolsFunction &&) = default ;
    RunChatResultGenerationRequestToolsFunction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunChatResultGenerationRequestToolsFunction() = default ;
    RunChatResultGenerationRequestToolsFunction& operator=(const RunChatResultGenerationRequestToolsFunction &) = default ;
    RunChatResultGenerationRequestToolsFunction& operator=(RunChatResultGenerationRequestToolsFunction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->parameters_ != nullptr && this->required_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunChatResultGenerationRequestToolsFunction& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunChatResultGenerationRequestToolsFunction& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::RunChatResultGenerationRequestToolsFunctionParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::RunChatResultGenerationRequestToolsFunctionParameters) };
    inline Models::RunChatResultGenerationRequestToolsFunctionParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::RunChatResultGenerationRequestToolsFunctionParameters) };
    inline RunChatResultGenerationRequestToolsFunction& setParameters(const Models::RunChatResultGenerationRequestToolsFunctionParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline RunChatResultGenerationRequestToolsFunction& setParameters(Models::RunChatResultGenerationRequestToolsFunctionParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline const vector<string> & required() const { DARABONBA_PTR_GET_CONST(required_, vector<string>) };
    inline vector<string> required() { DARABONBA_PTR_GET(required_, vector<string>) };
    inline RunChatResultGenerationRequestToolsFunction& setRequired(const vector<string> & required) { DARABONBA_PTR_SET_VALUE(required_, required) };
    inline RunChatResultGenerationRequestToolsFunction& setRequired(vector<string> && required) { DARABONBA_PTR_SET_RVALUE(required_, required) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::RunChatResultGenerationRequestToolsFunctionParameters> parameters_ = nullptr;
    std::shared_ptr<vector<string>> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
