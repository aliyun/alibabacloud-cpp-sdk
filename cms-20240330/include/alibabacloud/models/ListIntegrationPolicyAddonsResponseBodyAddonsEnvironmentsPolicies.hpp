// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYADDONSRESPONSEBODYADDONSENVIRONMENTSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(alertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_TO_JSON(defaultInstall, defaultInstall_);
      DARABONBA_PTR_TO_JSON(enableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_TO_JSON(metricCheckRule, metricCheckRule_);
      DARABONBA_PTR_TO_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(targetAddonName, targetAddonName_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(alertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_FROM_JSON(defaultInstall, defaultInstall_);
      DARABONBA_PTR_FROM_JSON(enableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_FROM_JSON(metricCheckRule, metricCheckRule_);
      DARABONBA_PTR_FROM_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(targetAddonName, targetAddonName_);
    };
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies &&) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies() = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& operator=(const ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies &) = default ;
    ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& operator=(ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertDefaultStatus_ == nullptr
        && return this->defaultInstall_ == nullptr && return this->enableServiceAccount_ == nullptr && return this->metricCheckRule_ == nullptr && return this->needRestartAfterIntegration_ == nullptr && return this->protocols_ == nullptr
        && return this->targetAddonName_ == nullptr; };
    // alertDefaultStatus Field Functions 
    bool hasAlertDefaultStatus() const { return this->alertDefaultStatus_ != nullptr;};
    void deleteAlertDefaultStatus() { this->alertDefaultStatus_ = nullptr;};
    inline string alertDefaultStatus() const { DARABONBA_PTR_GET_DEFAULT(alertDefaultStatus_, "") };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setAlertDefaultStatus(string alertDefaultStatus) { DARABONBA_PTR_SET_VALUE(alertDefaultStatus_, alertDefaultStatus) };


    // defaultInstall Field Functions 
    bool hasDefaultInstall() const { return this->defaultInstall_ != nullptr;};
    void deleteDefaultInstall() { this->defaultInstall_ = nullptr;};
    inline bool defaultInstall() const { DARABONBA_PTR_GET_DEFAULT(defaultInstall_, false) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setDefaultInstall(bool defaultInstall) { DARABONBA_PTR_SET_VALUE(defaultInstall_, defaultInstall) };


    // enableServiceAccount Field Functions 
    bool hasEnableServiceAccount() const { return this->enableServiceAccount_ != nullptr;};
    void deleteEnableServiceAccount() { this->enableServiceAccount_ = nullptr;};
    inline bool enableServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(enableServiceAccount_, false) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setEnableServiceAccount(bool enableServiceAccount) { DARABONBA_PTR_SET_VALUE(enableServiceAccount_, enableServiceAccount) };


    // metricCheckRule Field Functions 
    bool hasMetricCheckRule() const { return this->metricCheckRule_ != nullptr;};
    void deleteMetricCheckRule() { this->metricCheckRule_ = nullptr;};
    inline const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule & metricCheckRule() const { DARABONBA_PTR_GET_CONST(metricCheckRule_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule) };
    inline Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule metricCheckRule() { DARABONBA_PTR_GET(metricCheckRule_, Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setMetricCheckRule(const Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule & metricCheckRule) { DARABONBA_PTR_SET_VALUE(metricCheckRule_, metricCheckRule) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setMetricCheckRule(Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule && metricCheckRule) { DARABONBA_PTR_SET_RVALUE(metricCheckRule_, metricCheckRule) };


    // needRestartAfterIntegration Field Functions 
    bool hasNeedRestartAfterIntegration() const { return this->needRestartAfterIntegration_ != nullptr;};
    void deleteNeedRestartAfterIntegration() { this->needRestartAfterIntegration_ = nullptr;};
    inline bool needRestartAfterIntegration() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterIntegration_, false) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setNeedRestartAfterIntegration(bool needRestartAfterIntegration) { DARABONBA_PTR_SET_VALUE(needRestartAfterIntegration_, needRestartAfterIntegration) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols>) };
    inline vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols> protocols() { DARABONBA_PTR_GET(protocols_, vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols>) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setProtocols(const vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setProtocols(vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // targetAddonName Field Functions 
    bool hasTargetAddonName() const { return this->targetAddonName_ != nullptr;};
    void deleteTargetAddonName() { this->targetAddonName_ = nullptr;};
    inline string targetAddonName() const { DARABONBA_PTR_GET_DEFAULT(targetAddonName_, "") };
    inline ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPolicies& setTargetAddonName(string targetAddonName) { DARABONBA_PTR_SET_VALUE(targetAddonName_, targetAddonName) };


  protected:
    std::shared_ptr<string> alertDefaultStatus_ = nullptr;
    std::shared_ptr<bool> defaultInstall_ = nullptr;
    std::shared_ptr<bool> enableServiceAccount_ = nullptr;
    std::shared_ptr<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesMetricCheckRule> metricCheckRule_ = nullptr;
    std::shared_ptr<bool> needRestartAfterIntegration_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyAddonsResponseBodyAddonsEnvironmentsPoliciesProtocols>> protocols_ = nullptr;
    std::shared_ptr<string> targetAddonName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
