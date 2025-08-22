// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule.hpp>
#include <vector>
#include <alibabacloud/models/ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AlertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_TO_JSON(DefaultInstall, defaultInstall_);
      DARABONBA_PTR_TO_JSON(EnableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_TO_JSON(MetricCheckRule, metricCheckRule_);
      DARABONBA_PTR_TO_JSON(NeedRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(TargetAddonName, targetAddonName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultInstall, defaultInstall_);
      DARABONBA_PTR_FROM_JSON(EnableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_FROM_JSON(MetricCheckRule, metricCheckRule_);
      DARABONBA_PTR_FROM_JSON(NeedRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(TargetAddonName, targetAddonName_);
    };
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& operator=(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& operator=(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertDefaultStatus_ != nullptr
        && this->defaultInstall_ != nullptr && this->enableServiceAccount_ != nullptr && this->metricCheckRule_ != nullptr && this->needRestartAfterIntegration_ != nullptr && this->protocols_ != nullptr
        && this->targetAddonName_ != nullptr; };
    // alertDefaultStatus Field Functions 
    bool hasAlertDefaultStatus() const { return this->alertDefaultStatus_ != nullptr;};
    void deleteAlertDefaultStatus() { this->alertDefaultStatus_ = nullptr;};
    inline string alertDefaultStatus() const { DARABONBA_PTR_GET_DEFAULT(alertDefaultStatus_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setAlertDefaultStatus(string alertDefaultStatus) { DARABONBA_PTR_SET_VALUE(alertDefaultStatus_, alertDefaultStatus) };


    // defaultInstall Field Functions 
    bool hasDefaultInstall() const { return this->defaultInstall_ != nullptr;};
    void deleteDefaultInstall() { this->defaultInstall_ = nullptr;};
    inline bool defaultInstall() const { DARABONBA_PTR_GET_DEFAULT(defaultInstall_, false) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setDefaultInstall(bool defaultInstall) { DARABONBA_PTR_SET_VALUE(defaultInstall_, defaultInstall) };


    // enableServiceAccount Field Functions 
    bool hasEnableServiceAccount() const { return this->enableServiceAccount_ != nullptr;};
    void deleteEnableServiceAccount() { this->enableServiceAccount_ = nullptr;};
    inline bool enableServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(enableServiceAccount_, false) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setEnableServiceAccount(bool enableServiceAccount) { DARABONBA_PTR_SET_VALUE(enableServiceAccount_, enableServiceAccount) };


    // metricCheckRule Field Functions 
    bool hasMetricCheckRule() const { return this->metricCheckRule_ != nullptr;};
    void deleteMetricCheckRule() { this->metricCheckRule_ = nullptr;};
    inline const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule & metricCheckRule() const { DARABONBA_PTR_GET_CONST(metricCheckRule_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule) };
    inline Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule metricCheckRule() { DARABONBA_PTR_GET(metricCheckRule_, Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setMetricCheckRule(const Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule & metricCheckRule) { DARABONBA_PTR_SET_VALUE(metricCheckRule_, metricCheckRule) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setMetricCheckRule(Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule && metricCheckRule) { DARABONBA_PTR_SET_RVALUE(metricCheckRule_, metricCheckRule) };


    // needRestartAfterIntegration Field Functions 
    bool hasNeedRestartAfterIntegration() const { return this->needRestartAfterIntegration_ != nullptr;};
    void deleteNeedRestartAfterIntegration() { this->needRestartAfterIntegration_ = nullptr;};
    inline bool needRestartAfterIntegration() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterIntegration_, false) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setNeedRestartAfterIntegration(bool needRestartAfterIntegration) { DARABONBA_PTR_SET_VALUE(needRestartAfterIntegration_, needRestartAfterIntegration) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols>) };
    inline vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols> protocols() { DARABONBA_PTR_GET(protocols_, vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols>) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setProtocols(const vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setProtocols(vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // targetAddonName Field Functions 
    bool hasTargetAddonName() const { return this->targetAddonName_ != nullptr;};
    void deleteTargetAddonName() { this->targetAddonName_ = nullptr;};
    inline string targetAddonName() const { DARABONBA_PTR_GET_DEFAULT(targetAddonName_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPolicies& setTargetAddonName(string targetAddonName) { DARABONBA_PTR_SET_VALUE(targetAddonName_, targetAddonName) };


  protected:
    // The default alert status.
    std::shared_ptr<string> alertDefaultStatus_ = nullptr;
    // The default installation status.
    std::shared_ptr<bool> defaultInstall_ = nullptr;
    // Indicates whether a service account is enabled.
    std::shared_ptr<bool> enableServiceAccount_ = nullptr;
    // The metric check rule.
    std::shared_ptr<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesMetricCheckRule> metricCheckRule_ = nullptr;
    // Indicates whether a restart is required after the installation.
    std::shared_ptr<bool> needRestartAfterIntegration_ = nullptr;
    // The supported protocols.
    std::shared_ptr<vector<Models::ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols>> protocols_ = nullptr;
    // The target name of the add-on.
    std::shared_ptr<string> targetAddonName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
