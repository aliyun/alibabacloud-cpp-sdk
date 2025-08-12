// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEACTION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEACTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAction& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAction& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
    };
    AlertRuleAction() = default ;
    AlertRuleAction(const AlertRuleAction &) = default ;
    AlertRuleAction(AlertRuleAction &&) = default ;
    AlertRuleAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAction() = default ;
    AlertRuleAction& operator=(const AlertRuleAction &) = default ;
    AlertRuleAction& operator=(AlertRuleAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<string> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
    inline vector<string> actions() { DARABONBA_PTR_GET(actions_, vector<string>) };
    inline AlertRuleAction& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline AlertRuleAction& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


  protected:
    std::shared_ptr<vector<string>> actions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
