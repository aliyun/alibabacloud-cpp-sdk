// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTANSWERVALUESSCORINGRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTANSWERVALUESSCORINGRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules(const GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules(GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules &&) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules& operator=(const GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules& operator=(GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerListAnswerValuesScoringRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
