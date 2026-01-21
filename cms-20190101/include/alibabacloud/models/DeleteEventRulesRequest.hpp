// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteEventRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
    };
    DeleteEventRulesRequest() = default ;
    DeleteEventRulesRequest(const DeleteEventRulesRequest &) = default ;
    DeleteEventRulesRequest(DeleteEventRulesRequest &&) = default ;
    DeleteEventRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventRulesRequest() = default ;
    DeleteEventRulesRequest& operator=(const DeleteEventRulesRequest &) = default ;
    DeleteEventRulesRequest& operator=(DeleteEventRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleNames_ == nullptr; };
    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & getRuleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> getRuleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline DeleteEventRulesRequest& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline DeleteEventRulesRequest& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


  protected:
    // The name of the alert rule. Valid values of N: 1 to 20.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ruleNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
