// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODYSERVICEMONITORS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSERVICEMONITORSRESPONSEBODYSERVICEMONITORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(configYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(matchedServiceCount, matchedServiceCount_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(configYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(matchedServiceCount, matchedServiceCount_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors(const ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors(ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors &&) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors() = default ;
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& operator=(const ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors &) = default ;
    ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& operator=(ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->addonReleaseName_ == nullptr && return this->addonVersion_ == nullptr && return this->configYaml_ == nullptr && return this->enableStatus_ == nullptr && return this->encryptYaml_ == nullptr
        && return this->endpoints_ == nullptr && return this->matchedServiceCount_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // encryptYaml Field Functions 
    bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
    void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
    inline bool encryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints>) };
    inline vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints>) };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setEndpoints(const vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setEndpoints(vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // matchedServiceCount Field Functions 
    bool hasMatchedServiceCount() const { return this->matchedServiceCount_ != nullptr;};
    void deleteMatchedServiceCount() { this->matchedServiceCount_ = nullptr;};
    inline int64_t matchedServiceCount() const { DARABONBA_PTR_GET_DEFAULT(matchedServiceCount_, 0L) };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setMatchedServiceCount(int64_t matchedServiceCount) { DARABONBA_PTR_SET_VALUE(matchedServiceCount_, matchedServiceCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitors& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    std::shared_ptr<string> addonVersion_ = nullptr;
    std::shared_ptr<string> configYaml_ = nullptr;
    std::shared_ptr<string> enableStatus_ = nullptr;
    std::shared_ptr<bool> encryptYaml_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyServiceMonitorsResponseBodyServiceMonitorsEndpoints>> endpoints_ = nullptr;
    std::shared_ptr<int64_t> matchedServiceCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
