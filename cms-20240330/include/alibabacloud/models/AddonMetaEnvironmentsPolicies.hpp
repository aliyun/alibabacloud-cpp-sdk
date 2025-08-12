// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddonMetaEnvironmentsPoliciesBindEntity.hpp>
#include <alibabacloud/models/AddonMetaEnvironmentsPoliciesMetricCheckRule.hpp>
#include <vector>
#include <alibabacloud/models/AddonMetaEnvironmentsPoliciesProtocols.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddonMetaEnvironmentsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(alertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_TO_JSON(bindDefaultPolicy, bindDefaultPolicy_);
      DARABONBA_PTR_TO_JSON(bindEntity, bindEntity_);
      DARABONBA_PTR_TO_JSON(defaultInstall, defaultInstall_);
      DARABONBA_PTR_TO_JSON(enableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_TO_JSON(metricCheckRule, metricCheckRule_);
      DARABONBA_PTR_TO_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(targetAddonName, targetAddonName_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironmentsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(alertDefaultStatus, alertDefaultStatus_);
      DARABONBA_PTR_FROM_JSON(bindDefaultPolicy, bindDefaultPolicy_);
      DARABONBA_PTR_FROM_JSON(bindEntity, bindEntity_);
      DARABONBA_PTR_FROM_JSON(defaultInstall, defaultInstall_);
      DARABONBA_PTR_FROM_JSON(enableServiceAccount, enableServiceAccount_);
      DARABONBA_PTR_FROM_JSON(metricCheckRule, metricCheckRule_);
      DARABONBA_PTR_FROM_JSON(needRestartAfterIntegration, needRestartAfterIntegration_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(targetAddonName, targetAddonName_);
    };
    AddonMetaEnvironmentsPolicies() = default ;
    AddonMetaEnvironmentsPolicies(const AddonMetaEnvironmentsPolicies &) = default ;
    AddonMetaEnvironmentsPolicies(AddonMetaEnvironmentsPolicies &&) = default ;
    AddonMetaEnvironmentsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironmentsPolicies() = default ;
    AddonMetaEnvironmentsPolicies& operator=(const AddonMetaEnvironmentsPolicies &) = default ;
    AddonMetaEnvironmentsPolicies& operator=(AddonMetaEnvironmentsPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertDefaultStatus_ != nullptr
        && this->bindDefaultPolicy_ != nullptr && this->bindEntity_ != nullptr && this->defaultInstall_ != nullptr && this->enableServiceAccount_ != nullptr && this->metricCheckRule_ != nullptr
        && this->needRestartAfterIntegration_ != nullptr && this->protocols_ != nullptr && this->targetAddonName_ != nullptr; };
    // alertDefaultStatus Field Functions 
    bool hasAlertDefaultStatus() const { return this->alertDefaultStatus_ != nullptr;};
    void deleteAlertDefaultStatus() { this->alertDefaultStatus_ = nullptr;};
    inline string alertDefaultStatus() const { DARABONBA_PTR_GET_DEFAULT(alertDefaultStatus_, "") };
    inline AddonMetaEnvironmentsPolicies& setAlertDefaultStatus(string alertDefaultStatus) { DARABONBA_PTR_SET_VALUE(alertDefaultStatus_, alertDefaultStatus) };


    // bindDefaultPolicy Field Functions 
    bool hasBindDefaultPolicy() const { return this->bindDefaultPolicy_ != nullptr;};
    void deleteBindDefaultPolicy() { this->bindDefaultPolicy_ = nullptr;};
    inline bool bindDefaultPolicy() const { DARABONBA_PTR_GET_DEFAULT(bindDefaultPolicy_, false) };
    inline AddonMetaEnvironmentsPolicies& setBindDefaultPolicy(bool bindDefaultPolicy) { DARABONBA_PTR_SET_VALUE(bindDefaultPolicy_, bindDefaultPolicy) };


    // bindEntity Field Functions 
    bool hasBindEntity() const { return this->bindEntity_ != nullptr;};
    void deleteBindEntity() { this->bindEntity_ = nullptr;};
    inline const Models::AddonMetaEnvironmentsPoliciesBindEntity & bindEntity() const { DARABONBA_PTR_GET_CONST(bindEntity_, Models::AddonMetaEnvironmentsPoliciesBindEntity) };
    inline Models::AddonMetaEnvironmentsPoliciesBindEntity bindEntity() { DARABONBA_PTR_GET(bindEntity_, Models::AddonMetaEnvironmentsPoliciesBindEntity) };
    inline AddonMetaEnvironmentsPolicies& setBindEntity(const Models::AddonMetaEnvironmentsPoliciesBindEntity & bindEntity) { DARABONBA_PTR_SET_VALUE(bindEntity_, bindEntity) };
    inline AddonMetaEnvironmentsPolicies& setBindEntity(Models::AddonMetaEnvironmentsPoliciesBindEntity && bindEntity) { DARABONBA_PTR_SET_RVALUE(bindEntity_, bindEntity) };


    // defaultInstall Field Functions 
    bool hasDefaultInstall() const { return this->defaultInstall_ != nullptr;};
    void deleteDefaultInstall() { this->defaultInstall_ = nullptr;};
    inline bool defaultInstall() const { DARABONBA_PTR_GET_DEFAULT(defaultInstall_, false) };
    inline AddonMetaEnvironmentsPolicies& setDefaultInstall(bool defaultInstall) { DARABONBA_PTR_SET_VALUE(defaultInstall_, defaultInstall) };


    // enableServiceAccount Field Functions 
    bool hasEnableServiceAccount() const { return this->enableServiceAccount_ != nullptr;};
    void deleteEnableServiceAccount() { this->enableServiceAccount_ = nullptr;};
    inline bool enableServiceAccount() const { DARABONBA_PTR_GET_DEFAULT(enableServiceAccount_, false) };
    inline AddonMetaEnvironmentsPolicies& setEnableServiceAccount(bool enableServiceAccount) { DARABONBA_PTR_SET_VALUE(enableServiceAccount_, enableServiceAccount) };


    // metricCheckRule Field Functions 
    bool hasMetricCheckRule() const { return this->metricCheckRule_ != nullptr;};
    void deleteMetricCheckRule() { this->metricCheckRule_ = nullptr;};
    inline const Models::AddonMetaEnvironmentsPoliciesMetricCheckRule & metricCheckRule() const { DARABONBA_PTR_GET_CONST(metricCheckRule_, Models::AddonMetaEnvironmentsPoliciesMetricCheckRule) };
    inline Models::AddonMetaEnvironmentsPoliciesMetricCheckRule metricCheckRule() { DARABONBA_PTR_GET(metricCheckRule_, Models::AddonMetaEnvironmentsPoliciesMetricCheckRule) };
    inline AddonMetaEnvironmentsPolicies& setMetricCheckRule(const Models::AddonMetaEnvironmentsPoliciesMetricCheckRule & metricCheckRule) { DARABONBA_PTR_SET_VALUE(metricCheckRule_, metricCheckRule) };
    inline AddonMetaEnvironmentsPolicies& setMetricCheckRule(Models::AddonMetaEnvironmentsPoliciesMetricCheckRule && metricCheckRule) { DARABONBA_PTR_SET_RVALUE(metricCheckRule_, metricCheckRule) };


    // needRestartAfterIntegration Field Functions 
    bool hasNeedRestartAfterIntegration() const { return this->needRestartAfterIntegration_ != nullptr;};
    void deleteNeedRestartAfterIntegration() { this->needRestartAfterIntegration_ = nullptr;};
    inline bool needRestartAfterIntegration() const { DARABONBA_PTR_GET_DEFAULT(needRestartAfterIntegration_, false) };
    inline AddonMetaEnvironmentsPolicies& setNeedRestartAfterIntegration(bool needRestartAfterIntegration) { DARABONBA_PTR_SET_VALUE(needRestartAfterIntegration_, needRestartAfterIntegration) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<Models::AddonMetaEnvironmentsPoliciesProtocols> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<Models::AddonMetaEnvironmentsPoliciesProtocols>) };
    inline vector<Models::AddonMetaEnvironmentsPoliciesProtocols> protocols() { DARABONBA_PTR_GET(protocols_, vector<Models::AddonMetaEnvironmentsPoliciesProtocols>) };
    inline AddonMetaEnvironmentsPolicies& setProtocols(const vector<Models::AddonMetaEnvironmentsPoliciesProtocols> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline AddonMetaEnvironmentsPolicies& setProtocols(vector<Models::AddonMetaEnvironmentsPoliciesProtocols> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // targetAddonName Field Functions 
    bool hasTargetAddonName() const { return this->targetAddonName_ != nullptr;};
    void deleteTargetAddonName() { this->targetAddonName_ = nullptr;};
    inline string targetAddonName() const { DARABONBA_PTR_GET_DEFAULT(targetAddonName_, "") };
    inline AddonMetaEnvironmentsPolicies& setTargetAddonName(string targetAddonName) { DARABONBA_PTR_SET_VALUE(targetAddonName_, targetAddonName) };


  protected:
    std::shared_ptr<string> alertDefaultStatus_ = nullptr;
    std::shared_ptr<bool> bindDefaultPolicy_ = nullptr;
    std::shared_ptr<Models::AddonMetaEnvironmentsPoliciesBindEntity> bindEntity_ = nullptr;
    std::shared_ptr<bool> defaultInstall_ = nullptr;
    std::shared_ptr<bool> enableServiceAccount_ = nullptr;
    std::shared_ptr<Models::AddonMetaEnvironmentsPoliciesMetricCheckRule> metricCheckRule_ = nullptr;
    std::shared_ptr<bool> needRestartAfterIntegration_ = nullptr;
    std::shared_ptr<vector<Models::AddonMetaEnvironmentsPoliciesProtocols>> protocols_ = nullptr;
    std::shared_ptr<string> targetAddonName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
