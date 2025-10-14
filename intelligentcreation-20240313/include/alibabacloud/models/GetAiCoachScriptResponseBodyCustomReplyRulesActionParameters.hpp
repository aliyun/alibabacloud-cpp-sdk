// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESACTIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULESACTIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCustomReplyRulesActionParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& obj) { 
      DARABONBA_PTR_TO_JSON(assessPointId, assessPointId_);
      DARABONBA_PTR_TO_JSON(customContent, customContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(assessPointId, assessPointId_);
      DARABONBA_PTR_FROM_JSON(customContent, customContent_);
    };
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters(const GetAICoachScriptResponseBodyCustomReplyRulesActionParameters &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters(GetAICoachScriptResponseBodyCustomReplyRulesActionParameters &&) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCustomReplyRulesActionParameters() = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& operator=(const GetAICoachScriptResponseBodyCustomReplyRulesActionParameters &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& operator=(GetAICoachScriptResponseBodyCustomReplyRulesActionParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessPointId_ == nullptr
        && return this->customContent_ == nullptr; };
    // assessPointId Field Functions 
    bool hasAssessPointId() const { return this->assessPointId_ != nullptr;};
    void deleteAssessPointId() { this->assessPointId_ = nullptr;};
    inline string assessPointId() const { DARABONBA_PTR_GET_DEFAULT(assessPointId_, "") };
    inline GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& setAssessPointId(string assessPointId) { DARABONBA_PTR_SET_VALUE(assessPointId_, assessPointId) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline GetAICoachScriptResponseBodyCustomReplyRulesActionParameters& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


  protected:
    std::shared_ptr<string> assessPointId_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
