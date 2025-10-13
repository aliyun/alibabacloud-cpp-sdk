// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODYCUSTOMSCRAPEJOBRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODYCUSTOMSCRAPEJOBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& obj) { 
      DARABONBA_PTR_TO_JSON(addonName, addonName_);
      DARABONBA_PTR_TO_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(configYaml, configYaml_);
      DARABONBA_PTR_TO_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_TO_JSON(matchedPodCount, matchedPodCount_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(scrapeConfigs, scrapeConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& obj) { 
      DARABONBA_PTR_FROM_JSON(addonName, addonName_);
      DARABONBA_PTR_FROM_JSON(addonReleaseName, addonReleaseName_);
      DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(configYaml, configYaml_);
      DARABONBA_PTR_FROM_JSON(enableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(encryptYaml, encryptYaml_);
      DARABONBA_PTR_FROM_JSON(matchedPodCount, matchedPodCount_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(scrapeConfigs, scrapeConfigs_);
    };
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules(const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules(ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules &&) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& operator=(const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& operator=(ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && return this->addonReleaseName_ == nullptr && return this->addonVersion_ == nullptr && return this->configYaml_ == nullptr && return this->enableStatus_ == nullptr && return this->encryptYaml_ == nullptr
        && return this->matchedPodCount_ == nullptr && return this->message_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->scrapeConfigs_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string addonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonReleaseName Field Functions 
    bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
    void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
    inline string addonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // configYaml Field Functions 
    bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
    void deleteConfigYaml() { this->configYaml_ = nullptr;};
    inline string configYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // encryptYaml Field Functions 
    bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
    void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
    inline bool encryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


    // matchedPodCount Field Functions 
    bool hasMatchedPodCount() const { return this->matchedPodCount_ != nullptr;};
    void deleteMatchedPodCount() { this->matchedPodCount_ = nullptr;};
    inline int64_t matchedPodCount() const { DARABONBA_PTR_GET_DEFAULT(matchedPodCount_, 0L) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setMatchedPodCount(int64_t matchedPodCount) { DARABONBA_PTR_SET_VALUE(matchedPodCount_, matchedPodCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // scrapeConfigs Field Functions 
    bool hasScrapeConfigs() const { return this->scrapeConfigs_ != nullptr;};
    void deleteScrapeConfigs() { this->scrapeConfigs_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs> & scrapeConfigs() const { DARABONBA_PTR_GET_CONST(scrapeConfigs_, vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs>) };
    inline vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs> scrapeConfigs() { DARABONBA_PTR_GET(scrapeConfigs_, vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs>) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setScrapeConfigs(const vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs> & scrapeConfigs) { DARABONBA_PTR_SET_VALUE(scrapeConfigs_, scrapeConfigs) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules& setScrapeConfigs(vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs> && scrapeConfigs) { DARABONBA_PTR_SET_RVALUE(scrapeConfigs_, scrapeConfigs) };


  protected:
    std::shared_ptr<string> addonName_ = nullptr;
    std::shared_ptr<string> addonReleaseName_ = nullptr;
    std::shared_ptr<string> addonVersion_ = nullptr;
    std::shared_ptr<string> configYaml_ = nullptr;
    std::shared_ptr<string> enableStatus_ = nullptr;
    std::shared_ptr<bool> encryptYaml_ = nullptr;
    std::shared_ptr<int64_t> matchedPodCount_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs>> scrapeConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
