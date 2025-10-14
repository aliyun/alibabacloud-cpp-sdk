// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESACTION_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESACTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCustomReplyRulesActionParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCustomReplyRulesAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCustomReplyRulesAction& obj) { 
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCustomReplyRulesAction& obj) { 
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAICoachScriptResponseBodyCustomReplyRulesAction() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesAction(const GetAICoachScriptResponseBodyCustomReplyRulesAction &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesAction(GetAICoachScriptResponseBodyCustomReplyRulesAction &&) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCustomReplyRulesAction() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesAction& operator=(const GetAICoachScriptResponseBodyCustomReplyRulesAction &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesAction& operator=(GetAICoachScriptResponseBodyCustomReplyRulesAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameters_ == nullptr
        && return this->type_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters) };
    inline Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters) };
    inline GetAICoachScriptResponseBodyCustomReplyRulesAction& setParameters(const Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetAICoachScriptResponseBodyCustomReplyRulesAction& setParameters(Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAICoachScriptResponseBodyCustomReplyRulesAction& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetAICoachScriptResponseBodyCustomReplyRulesActionParameters> parameters_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
