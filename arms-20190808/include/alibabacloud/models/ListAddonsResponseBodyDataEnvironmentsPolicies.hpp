// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYDATAENVIRONMENTSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONSRESPONSEBODYDATAENVIRONMENTSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule.hpp>
#include <vector>
#include <alibabacloud/models/ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAddonsResponseBodyDataEnvironmentsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonsResponseBodyDataEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AlertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_TO_JSON(DefaultInstall, defaultInstall_);
      DARABONBA_PTR_TO_JSON(EnableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_TO_JSON(MetricCheckRule, metricCheckRule_);
      DARABONBA_PTR_TO_JSON(NeedRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_TO_JSON(Protocols, protocols_);
      DARABONBA_PTR_TO_JSON(TargetAddonName, targetAddonName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonsResponseBodyDataEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultInstall, defaultInstall_);
      DARABONBA_PTR_FROM_JSON(EnableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_FROM_JSON(MetricCheckRule, metricCheckRule_);
      DARABONBA_PTR_FROM_JSON(NeedRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_FROM_JSON(Protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(TargetAddonName, targetAddonName_);
    };
    ListAddonsResponseBodyDataEnvironmentsPolicies() = default ;
    ListAddonsResponseBodyDataEnvironmentsPolicies(const ListAddonsResponseBodyDataEnvironmentsPolicies &) = default ;
    ListAddonsResponseBodyDataEnvironmentsPolicies(ListAddonsResponseBodyDataEnvironmentsPolicies &&) = default ;
    ListAddonsResponseBodyDataEnvironmentsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonsResponseBodyDataEnvironmentsPolicies() = default ;
    ListAddonsResponseBodyDataEnvironmentsPolicies& operator=(const ListAddonsResponseBodyDataEnvironmentsPolicies &) = default ;
    ListAddonsResponseBodyDataEnvironmentsPolicies& operator=(ListAddonsResponseBodyDataEnvironmentsPolicies &&) = default ;
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
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setAlertDefaultStatus(string alertDefaultStatus) { DARABONBA_PTR_SET_VALUE(alertDefaultStatus_, alertDefaultStatus) };


    // defaultInstall Field Functions 
    bool hasDefaultInstall() const { return this->defaultInstall_ != nullptr;};
    void deleteDefaultInstall() { this->defaultInstall_ = nullptr;};
    inline bool defaultInstall() const { DARABONBA_PTR_GET_DEFAULT(defaultInstall_, false) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setDefaultInstall(bool defaultInstall) { DARABONBA_PTR_SET_VALUE(defaultInstall_, defaultInstall) };


    // enableServiceAccount Field Functions 
    bool hasEnableServiceAccount() const { return this->enableServiceAccount_ != nullptr;};
    void deleteEnableServiceAccount() { this->enableServiceAccount_ = nullptr;};
    inline bool enableServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(enableServiceAccount_, false) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setEnableServiceAccount(bool enableServiceAccount) { DARABONBA_PTR_SET_VALUE(enableServiceAccount_, enableServiceAccount) };


    // metricCheckRule Field Functions 
    bool hasMetricCheckRule() const { return this->metricCheckRule_ != nullptr;};
    void deleteMetricCheckRule() { this->metricCheckRule_ = nullptr;};
    inline const Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule & metricCheckRule() const { DARABONBA_PTR_GET_CONST(metricCheckRule_, Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule) };
    inline Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule metricCheckRule() { DARABONBA_PTR_GET(metricCheckRule_, Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setMetricCheckRule(const Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule & metricCheckRule) { DARABONBA_PTR_SET_VALUE(metricCheckRule_, metricCheckRule) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setMetricCheckRule(Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule && metricCheckRule) { DARABONBA_PTR_SET_RVALUE(metricCheckRule_, metricCheckRule) };


    // needRestartAfterIntegration Field Functions 
    bool hasNeedRestartAfterIntegration() const { return this->needRestartAfterIntegration_ != nullptr;};
    void deleteNeedRestartAfterIntegration() { this->needRestartAfterIntegration_ = nullptr;};
    inline bool needRestartAfterIntegration() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterIntegration_, false) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setNeedRestartAfterIntegration(bool needRestartAfterIntegration) { DARABONBA_PTR_SET_VALUE(needRestartAfterIntegration_, needRestartAfterIntegration) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols>) };
    inline vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols> protocols() { DARABONBA_PTR_GET(protocols_, vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols>) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setProtocols(const vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setProtocols(vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // targetAddonName Field Functions 
    bool hasTargetAddonName() const { return this->targetAddonName_ != nullptr;};
    void deleteTargetAddonName() { this->targetAddonName_ = nullptr;};
    inline string targetAddonName() const { DARABONBA_PTR_GET_DEFAULT(targetAddonName_, "") };
    inline ListAddonsResponseBodyDataEnvironmentsPolicies& setTargetAddonName(string targetAddonName) { DARABONBA_PTR_SET_VALUE(targetAddonName_, targetAddonName) };


  protected:
    // The default alert status.
    std::shared_ptr<string> alertDefaultStatus_ = nullptr;
    // The default installation status.
    std::shared_ptr<bool> defaultInstall_ = nullptr;
    // Indicates whether a service account is enabled.
    std::shared_ptr<bool> enableServiceAccount_ = nullptr;
    // The metric check rule.
    std::shared_ptr<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesMetricCheckRule> metricCheckRule_ = nullptr;
    // Indicates whether a restart is required after the installation.
    std::shared_ptr<bool> needRestartAfterIntegration_ = nullptr;
    // The supported protocols.
    std::shared_ptr<vector<Models::ListAddonsResponseBodyDataEnvironmentsPoliciesProtocols>> protocols_ = nullptr;
    // The target name of the add-on.
    std::shared_ptr<string> targetAddonName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
