// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCustomScrapeJobRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCustomScrapeJobRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(customScrapeJobRules, customScrapeJobRules_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCustomScrapeJobRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(customScrapeJobRules, customScrapeJobRules_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(const ListIntegrationPolicyCustomScrapeJobRulesResponseBody &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(ListIntegrationPolicyCustomScrapeJobRulesResponseBody &&) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCustomScrapeJobRulesResponseBody() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody& operator=(const ListIntegrationPolicyCustomScrapeJobRulesResponseBody &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody& operator=(ListIntegrationPolicyCustomScrapeJobRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomScrapeJobRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomScrapeJobRules& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CustomScrapeJobRules& obj) { 
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
      CustomScrapeJobRules() = default ;
      CustomScrapeJobRules(const CustomScrapeJobRules &) = default ;
      CustomScrapeJobRules(CustomScrapeJobRules &&) = default ;
      CustomScrapeJobRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomScrapeJobRules() = default ;
      CustomScrapeJobRules& operator=(const CustomScrapeJobRules &) = default ;
      CustomScrapeJobRules& operator=(CustomScrapeJobRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScrapeConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScrapeConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(jobName, jobName_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(metricsPath, metricsPath_);
          DARABONBA_PTR_TO_JSON(scheme, scheme_);
          DARABONBA_PTR_TO_JSON(scrapeInterval, scrapeInterval_);
          DARABONBA_PTR_TO_JSON(scrapeTimeout, scrapeTimeout_);
          DARABONBA_PTR_TO_JSON(serviceDiscoveryConfigs, serviceDiscoveryConfigs_);
        };
        friend void from_json(const Darabonba::Json& j, ScrapeConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(jobName, jobName_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(metricsPath, metricsPath_);
          DARABONBA_PTR_FROM_JSON(scheme, scheme_);
          DARABONBA_PTR_FROM_JSON(scrapeInterval, scrapeInterval_);
          DARABONBA_PTR_FROM_JSON(scrapeTimeout, scrapeTimeout_);
          DARABONBA_PTR_FROM_JSON(serviceDiscoveryConfigs, serviceDiscoveryConfigs_);
        };
        ScrapeConfigs() = default ;
        ScrapeConfigs(const ScrapeConfigs &) = default ;
        ScrapeConfigs(ScrapeConfigs &&) = default ;
        ScrapeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScrapeConfigs() = default ;
        ScrapeConfigs& operator=(const ScrapeConfigs &) = default ;
        ScrapeConfigs& operator=(ScrapeConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobName_ == nullptr
        && this->message_ == nullptr && this->metricsPath_ == nullptr && this->scheme_ == nullptr && this->scrapeInterval_ == nullptr && this->scrapeTimeout_ == nullptr
        && this->serviceDiscoveryConfigs_ == nullptr; };
        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline ScrapeConfigs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ScrapeConfigs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // metricsPath Field Functions 
        bool hasMetricsPath() const { return this->metricsPath_ != nullptr;};
        void deleteMetricsPath() { this->metricsPath_ = nullptr;};
        inline string getMetricsPath() const { DARABONBA_PTR_GET_DEFAULT(metricsPath_, "") };
        inline ScrapeConfigs& setMetricsPath(string metricsPath) { DARABONBA_PTR_SET_VALUE(metricsPath_, metricsPath) };


        // scheme Field Functions 
        bool hasScheme() const { return this->scheme_ != nullptr;};
        void deleteScheme() { this->scheme_ = nullptr;};
        inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
        inline ScrapeConfigs& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


        // scrapeInterval Field Functions 
        bool hasScrapeInterval() const { return this->scrapeInterval_ != nullptr;};
        void deleteScrapeInterval() { this->scrapeInterval_ = nullptr;};
        inline string getScrapeInterval() const { DARABONBA_PTR_GET_DEFAULT(scrapeInterval_, "") };
        inline ScrapeConfigs& setScrapeInterval(string scrapeInterval) { DARABONBA_PTR_SET_VALUE(scrapeInterval_, scrapeInterval) };


        // scrapeTimeout Field Functions 
        bool hasScrapeTimeout() const { return this->scrapeTimeout_ != nullptr;};
        void deleteScrapeTimeout() { this->scrapeTimeout_ = nullptr;};
        inline string getScrapeTimeout() const { DARABONBA_PTR_GET_DEFAULT(scrapeTimeout_, "") };
        inline ScrapeConfigs& setScrapeTimeout(string scrapeTimeout) { DARABONBA_PTR_SET_VALUE(scrapeTimeout_, scrapeTimeout) };


        // serviceDiscoveryConfigs Field Functions 
        bool hasServiceDiscoveryConfigs() const { return this->serviceDiscoveryConfigs_ != nullptr;};
        void deleteServiceDiscoveryConfigs() { this->serviceDiscoveryConfigs_ = nullptr;};
        inline const vector<string> & getServiceDiscoveryConfigs() const { DARABONBA_PTR_GET_CONST(serviceDiscoveryConfigs_, vector<string>) };
        inline vector<string> getServiceDiscoveryConfigs() { DARABONBA_PTR_GET(serviceDiscoveryConfigs_, vector<string>) };
        inline ScrapeConfigs& setServiceDiscoveryConfigs(const vector<string> & serviceDiscoveryConfigs) { DARABONBA_PTR_SET_VALUE(serviceDiscoveryConfigs_, serviceDiscoveryConfigs) };
        inline ScrapeConfigs& setServiceDiscoveryConfigs(vector<string> && serviceDiscoveryConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDiscoveryConfigs_, serviceDiscoveryConfigs) };


      protected:
        // Scraping job name
        shared_ptr<string> jobName_ {};
        // Detailed information.
        shared_ptr<string> message_ {};
        // Metrics path
        shared_ptr<string> metricsPath_ {};
        // Call method.
        shared_ptr<string> scheme_ {};
        // Scrape interval
        shared_ptr<string> scrapeInterval_ {};
        // Scrape timeout
        shared_ptr<string> scrapeTimeout_ {};
        // Service discovery configuration
        shared_ptr<vector<string>> serviceDiscoveryConfigs_ {};
      };

      virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonReleaseName_ == nullptr && this->addonVersion_ == nullptr && this->configYaml_ == nullptr && this->enableStatus_ == nullptr && this->encryptYaml_ == nullptr
        && this->matchedPodCount_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->scrapeConfigs_ == nullptr; };
      // addonName Field Functions 
      bool hasAddonName() const { return this->addonName_ != nullptr;};
      void deleteAddonName() { this->addonName_ = nullptr;};
      inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
      inline CustomScrapeJobRules& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


      // addonReleaseName Field Functions 
      bool hasAddonReleaseName() const { return this->addonReleaseName_ != nullptr;};
      void deleteAddonReleaseName() { this->addonReleaseName_ = nullptr;};
      inline string getAddonReleaseName() const { DARABONBA_PTR_GET_DEFAULT(addonReleaseName_, "") };
      inline CustomScrapeJobRules& setAddonReleaseName(string addonReleaseName) { DARABONBA_PTR_SET_VALUE(addonReleaseName_, addonReleaseName) };


      // addonVersion Field Functions 
      bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
      void deleteAddonVersion() { this->addonVersion_ = nullptr;};
      inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
      inline CustomScrapeJobRules& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


      // configYaml Field Functions 
      bool hasConfigYaml() const { return this->configYaml_ != nullptr;};
      void deleteConfigYaml() { this->configYaml_ = nullptr;};
      inline string getConfigYaml() const { DARABONBA_PTR_GET_DEFAULT(configYaml_, "") };
      inline CustomScrapeJobRules& setConfigYaml(string configYaml) { DARABONBA_PTR_SET_VALUE(configYaml_, configYaml) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline CustomScrapeJobRules& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // encryptYaml Field Functions 
      bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
      void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
      inline bool getEncryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
      inline CustomScrapeJobRules& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


      // matchedPodCount Field Functions 
      bool hasMatchedPodCount() const { return this->matchedPodCount_ != nullptr;};
      void deleteMatchedPodCount() { this->matchedPodCount_ = nullptr;};
      inline int64_t getMatchedPodCount() const { DARABONBA_PTR_GET_DEFAULT(matchedPodCount_, 0L) };
      inline CustomScrapeJobRules& setMatchedPodCount(int64_t matchedPodCount) { DARABONBA_PTR_SET_VALUE(matchedPodCount_, matchedPodCount) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline CustomScrapeJobRules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomScrapeJobRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline CustomScrapeJobRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // scrapeConfigs Field Functions 
      bool hasScrapeConfigs() const { return this->scrapeConfigs_ != nullptr;};
      void deleteScrapeConfigs() { this->scrapeConfigs_ = nullptr;};
      inline const vector<CustomScrapeJobRules::ScrapeConfigs> & getScrapeConfigs() const { DARABONBA_PTR_GET_CONST(scrapeConfigs_, vector<CustomScrapeJobRules::ScrapeConfigs>) };
      inline vector<CustomScrapeJobRules::ScrapeConfigs> getScrapeConfigs() { DARABONBA_PTR_GET(scrapeConfigs_, vector<CustomScrapeJobRules::ScrapeConfigs>) };
      inline CustomScrapeJobRules& setScrapeConfigs(const vector<CustomScrapeJobRules::ScrapeConfigs> & scrapeConfigs) { DARABONBA_PTR_SET_VALUE(scrapeConfigs_, scrapeConfigs) };
      inline CustomScrapeJobRules& setScrapeConfigs(vector<CustomScrapeJobRules::ScrapeConfigs> && scrapeConfigs) { DARABONBA_PTR_SET_RVALUE(scrapeConfigs_, scrapeConfigs) };


    protected:
      // Addon name.
      shared_ptr<string> addonName_ {};
      // Addon Release name
      shared_ptr<string> addonReleaseName_ {};
      // Addon version
      shared_ptr<string> addonVersion_ {};
      // Configuration yaml
      shared_ptr<string> configYaml_ {};
      // Enable status
      shared_ptr<string> enableStatus_ {};
      // Encrypt yaml
      shared_ptr<bool> encryptYaml_ {};
      // Matched pod count
      shared_ptr<int64_t> matchedPodCount_ {};
      // Detailed information.
      shared_ptr<string> message_ {};
      // Service name.
      shared_ptr<string> name_ {};
      // Namespace
      shared_ptr<string> namespace_ {};
      // Custom configurations
      shared_ptr<vector<CustomScrapeJobRules::ScrapeConfigs>> scrapeConfigs_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->customScrapeJobRules_ == nullptr && this->policyId_ == nullptr && this->requestId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // customScrapeJobRules Field Functions 
    bool hasCustomScrapeJobRules() const { return this->customScrapeJobRules_ != nullptr;};
    void deleteCustomScrapeJobRules() { this->customScrapeJobRules_ = nullptr;};
    inline const vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules> & getCustomScrapeJobRules() const { DARABONBA_PTR_GET_CONST(customScrapeJobRules_, vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules>) };
    inline vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules> getCustomScrapeJobRules() { DARABONBA_PTR_GET(customScrapeJobRules_, vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules>) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setCustomScrapeJobRules(const vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules> & customScrapeJobRules) { DARABONBA_PTR_SET_VALUE(customScrapeJobRules_, customScrapeJobRules) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setCustomScrapeJobRules(vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules> && customScrapeJobRules) { DARABONBA_PTR_SET_RVALUE(customScrapeJobRules_, customScrapeJobRules) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Cluster ID.
    shared_ptr<string> clusterId_ {};
    // Custom scraping job rules
    shared_ptr<vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBody::CustomScrapeJobRules>> customScrapeJobRules_ {};
    // Policy ID.
    shared_ptr<string> policyId_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
