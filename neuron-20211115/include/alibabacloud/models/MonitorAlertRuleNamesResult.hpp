// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORALERTRULENAMESRESULT_HPP_
#define ALIBABACLOUD_MODELS_MONITORALERTRULENAMESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorAlertRuleNamesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorAlertRuleNamesResult& obj) { 
      DARABONBA_PTR_TO_JSON(ruleNames, ruleNames_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorAlertRuleNamesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleNames, ruleNames_);
    };
    MonitorAlertRuleNamesResult() = default ;
    MonitorAlertRuleNamesResult(const MonitorAlertRuleNamesResult &) = default ;
    MonitorAlertRuleNamesResult(MonitorAlertRuleNamesResult &&) = default ;
    MonitorAlertRuleNamesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorAlertRuleNamesResult() = default ;
    MonitorAlertRuleNamesResult& operator=(const MonitorAlertRuleNamesResult &) = default ;
    MonitorAlertRuleNamesResult& operator=(MonitorAlertRuleNamesResult &&) = default ;
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
    inline MonitorAlertRuleNamesResult& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline MonitorAlertRuleNamesResult& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


  protected:
    shared_ptr<vector<string>> ruleNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
