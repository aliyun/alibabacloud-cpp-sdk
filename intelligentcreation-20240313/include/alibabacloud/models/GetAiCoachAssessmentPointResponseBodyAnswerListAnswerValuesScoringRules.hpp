// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODYANSWERLISTANSWERVALUESSCORINGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODYANSWERLISTANSWERVALUESSCORINGRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules() = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules(const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules &) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules(GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules &&) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules() = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules& operator=(const GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules &) = default ;
    GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules& operator=(GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachAssessmentPointResponseBodyAnswerListAnswerValuesScoringRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
