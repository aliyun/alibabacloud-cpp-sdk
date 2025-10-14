// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESACTIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESACTIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& obj) { 
      DARABONBA_PTR_TO_JSON(assessPoint, assessPoint_);
      DARABONBA_PTR_TO_JSON(customContent, customContent_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(assessPoint, assessPoint_);
      DARABONBA_PTR_FROM_JSON(customContent, customContent_);
    };
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters(const ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters(ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters &&) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& operator=(const ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& operator=(ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assessPoint_ == nullptr
        && return this->customContent_ == nullptr; };
    // assessPoint Field Functions 
    bool hasAssessPoint() const { return this->assessPoint_ != nullptr;};
    void deleteAssessPoint() { this->assessPoint_ = nullptr;};
    inline string assessPoint() const { DARABONBA_PTR_GET_DEFAULT(assessPoint_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& setAssessPoint(string assessPoint) { DARABONBA_PTR_SET_VALUE(assessPoint_, assessPoint) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesActionParameters& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


  protected:
    std::shared_ptr<string> assessPoint_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
