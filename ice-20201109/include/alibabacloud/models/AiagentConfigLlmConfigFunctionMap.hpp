// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGLLMCONFIGFUNCTIONMAP_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGLLMCONFIGFUNCTIONMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigLlmConfigFunctionMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigLlmConfigFunctionMap& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(MatchFunction, matchFunction_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigLlmConfigFunctionMap& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(MatchFunction, matchFunction_);
    };
    AIAgentConfigLlmConfigFunctionMap() = default ;
    AIAgentConfigLlmConfigFunctionMap(const AIAgentConfigLlmConfigFunctionMap &) = default ;
    AIAgentConfigLlmConfigFunctionMap(AIAgentConfigLlmConfigFunctionMap &&) = default ;
    AIAgentConfigLlmConfigFunctionMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigLlmConfigFunctionMap() = default ;
    AIAgentConfigLlmConfigFunctionMap& operator=(const AIAgentConfigLlmConfigFunctionMap &) = default ;
    AIAgentConfigLlmConfigFunctionMap& operator=(AIAgentConfigLlmConfigFunctionMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->matchFunction_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline AIAgentConfigLlmConfigFunctionMap& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // matchFunction Field Functions 
    bool hasMatchFunction() const { return this->matchFunction_ != nullptr;};
    void deleteMatchFunction() { this->matchFunction_ = nullptr;};
    inline string matchFunction() const { DARABONBA_PTR_GET_DEFAULT(matchFunction_, "") };
    inline AIAgentConfigLlmConfigFunctionMap& setMatchFunction(string matchFunction) { DARABONBA_PTR_SET_VALUE(matchFunction_, matchFunction) };


  protected:
    std::shared_ptr<string> function_ = nullptr;
    std::shared_ptr<string> matchFunction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
