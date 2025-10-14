// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESMAINCONDITIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESMAINCONDITIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters& obj) { 
      DARABONBA_PTR_TO_JSON(assessPointId, assessPointId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(assessPointId, assessPointId_);
    };
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters(const GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters(GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters &&) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters& operator=(const GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters& operator=(GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessPointId_ == nullptr; };
    // assessPointId Field Functions 
    bool hasAssessPointId() const { return this->assessPointId_ != nullptr;};
    void deleteAssessPointId() { this->assessPointId_ = nullptr;};
    inline string assessPointId() const { DARABONBA_PTR_GET_DEFAULT(assessPointId_, "") };
    inline GetAICoachScriptResponseBodyCustomReplyRulesMainConditionParameters& setAssessPointId(string assessPointId) { DARABONBA_PTR_SET_VALUE(assessPointId_, assessPointId) };


  protected:
    std::shared_ptr<string> assessPointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
