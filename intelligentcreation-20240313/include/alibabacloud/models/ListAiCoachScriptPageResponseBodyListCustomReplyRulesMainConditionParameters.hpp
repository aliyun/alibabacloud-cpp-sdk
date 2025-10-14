// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESMAINCONDITIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESMAINCONDITIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters& obj) { 
      DARABONBA_PTR_TO_JSON(assessPoint, assessPoint_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(assessPoint, assessPoint_);
    };
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters(const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters(ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters &&) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters& operator=(const ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters& operator=(ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessPoint_ == nullptr; };
    // assessPoint Field Functions 
    bool hasAssessPoint() const { return this->assessPoint_ != nullptr;};
    void deleteAssessPoint() { this->assessPoint_ = nullptr;};
    inline string assessPoint() const { DARABONBA_PTR_GET_DEFAULT(assessPoint_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesMainConditionParameters& setAssessPoint(string assessPoint) { DARABONBA_PTR_SET_VALUE(assessPoint_, assessPoint) };


  protected:
    std::shared_ptr<string> assessPoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
