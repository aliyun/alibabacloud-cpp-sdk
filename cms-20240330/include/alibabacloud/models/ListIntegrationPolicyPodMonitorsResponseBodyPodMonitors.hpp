// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODYPODMONITORS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODYPODMONITORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(configYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(matchedPodCount, matchedPodCount_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(configYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(matchedPodCount, matchedPodCount_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
    };
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors() = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors(const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors(ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors &&) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors() = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& operator=(const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& operator=(ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addonName_ != nullptr
        && this->addonReleaseName_ != nullptr && this->addonVersion_ != nullptr && this->configYaml_ != nullptr && this->enableStatus_ != nullptr && this->encryptYaml_ != nullptr
        && this->endpoints_ != nullptr && this->matchedPodCount_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // encryptYaml Field Functions 
    bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
    void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
    inline bool encryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints>) };
    inline vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints>) };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setEndpoints(const vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setEndpoints(vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // matchedPodCount Field Functions 
    bool hasMatchedPodCount() const { return this->matchedPodCount_ != nullptr;};
    void deleteMatchedPodCount() { this->matchedPodCount_ = nullptr;};
    inline int64_t matchedPodCount() const { DARABONBA_PTR_GET_DEFAULT(matchedPodCount_, 0L) };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setMatchedPodCount(int64_t matchedPodCount) { DARABONBA_PTR_SET_VALUE(matchedPodCount_, matchedPodCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitors& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    std::shared_ptr<string> addonVersion_ = nullptr;
    std::shared_ptr<string> configYaml_ = nullptr;
    std::shared_ptr<string> enableStatus_ = nullptr;
    std::shared_ptr<bool> encryptYaml_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints>> endpoints_ = nullptr;
    std::shared_ptr<int64_t> matchedPodCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
