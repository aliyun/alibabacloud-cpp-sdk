// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESSUBCONDITION_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULESSUBCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition(const ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition(ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition &&) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition& operator=(const ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition& operator=(ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
