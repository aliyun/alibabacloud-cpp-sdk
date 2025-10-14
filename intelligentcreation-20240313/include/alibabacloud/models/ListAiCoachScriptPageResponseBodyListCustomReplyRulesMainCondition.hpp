// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESMAINCONDITION_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESMAINCONDITION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& obj) { 
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition(const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition(ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition &&) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& operator=(const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& operator=(ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameters_ == nullptr
        && return this->type_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters) };
    inline Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& setParameters(const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& setParameters(Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters> parameters_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
