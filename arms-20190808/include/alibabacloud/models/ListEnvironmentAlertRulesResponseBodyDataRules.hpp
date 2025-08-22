// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAlertRulesResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAlertRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAlertRulesResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListEnvironmentAlertRulesResponseBodyDataRules() = default ;
    ListEnvironmentAlertRulesResponseBodyDataRules(const ListEnvironmentAlertRulesResponseBodyDataRules &) = default ;
    ListEnvironmentAlertRulesResponseBodyDataRules(ListEnvironmentAlertRulesResponseBodyDataRules &&) = default ;
    ListEnvironmentAlertRulesResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAlertRulesResponseBodyDataRules() = default ;
    ListEnvironmentAlertRulesResponseBodyDataRules& operator=(const ListEnvironmentAlertRulesResponseBodyDataRules &) = default ;
    ListEnvironmentAlertRulesResponseBodyDataRules& operator=(ListEnvironmentAlertRulesResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->name_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline ListEnvironmentAlertRulesResponseBodyDataRules& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentAlertRulesResponseBodyDataRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the alert rule.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
