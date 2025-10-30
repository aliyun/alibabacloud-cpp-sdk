// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODYCUSTOMSCRAPEJOBRULESSCRAPECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODYCUSTOMSCRAPEJOBRULESSCRAPECONFIGS_HPP_
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
  class ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(metricsPath, metricsPath_);
      DARABONBA_PTR_TO_JSON(scheme, scheme_);
      DARABONBA_PTR_TO_JSON(scrapeInterval, scrapeInterval_);
      DARABONBA_PTR_TO_JSON(scrapeTimeout, scrapeTimeout_);
      DARABONBA_PTR_TO_JSON(serviceDiscoveryConfigs, serviceDiscoveryConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(metricsPath, metricsPath_);
      DARABONBA_PTR_FROM_JSON(scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(scrapeInterval, scrapeInterval_);
      DARABONBA_PTR_FROM_JSON(scrapeTimeout, scrapeTimeout_);
      DARABONBA_PTR_FROM_JSON(serviceDiscoveryConfigs, serviceDiscoveryConfigs_);
    };
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs(const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs(ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs &&) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& operator=(const ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& operator=(ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobName_ == nullptr
        && return this->message_ == nullptr && return this->metricsPath_ == nullptr && return this->scheme_ == nullptr && return this->scrapeInterval_ == nullptr && return this->scrapeTimeout_ == nullptr
        && return this->serviceDiscoveryConfigs_ == nullptr; };
    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricsPath Field Functions 
    bool hasMetricsPath() const { return this->metricsPath_ != nullptr;};
    void deleteMetricsPath() { this->metricsPath_ = nullptr;};
    inline string metricsPath() const { DARABONBA_PTR_GET_DEFAULT(metricsPath_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setMetricsPath(string metricsPath) { DARABONBA_PTR_SET_VALUE(metricsPath_, metricsPath) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // scrapeInterval Field Functions 
    bool hasScrapeInterval() const { return this->scrapeInterval_ != nullptr;};
    void deleteScrapeInterval() { this->scrapeInterval_ = nullptr;};
    inline string scrapeInterval() const { DARABONBA_PTR_GET_DEFAULT(scrapeInterval_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setScrapeInterval(string scrapeInterval) { DARABONBA_PTR_SET_VALUE(scrapeInterval_, scrapeInterval) };


    // scrapeTimeout Field Functions 
    bool hasScrapeTimeout() const { return this->scrapeTimeout_ != nullptr;};
    void deleteScrapeTimeout() { this->scrapeTimeout_ = nullptr;};
    inline string scrapeTimeout() const { DARABONBA_PTR_GET_DEFAULT(scrapeTimeout_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setScrapeTimeout(string scrapeTimeout) { DARABONBA_PTR_SET_VALUE(scrapeTimeout_, scrapeTimeout) };


    // serviceDiscoveryConfigs Field Functions 
    bool hasServiceDiscoveryConfigs() const { return this->serviceDiscoveryConfigs_ != nullptr;};
    void deleteServiceDiscoveryConfigs() { this->serviceDiscoveryConfigs_ = nullptr;};
    inline const vector<string> & serviceDiscoveryConfigs() const { DARABONBA_PTR_GET_CONST(serviceDiscoveryConfigs_, vector<string>) };
    inline vector<string> serviceDiscoveryConfigs() { DARABONBA_PTR_GET(serviceDiscoveryConfigs_, vector<string>) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setServiceDiscoveryConfigs(const vector<string> & serviceDiscoveryConfigs) { DARABONBA_PTR_SET_VALUE(serviceDiscoveryConfigs_, serviceDiscoveryConfigs) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRulesScrapeConfigs& setServiceDiscoveryConfigs(vector<string> && serviceDiscoveryConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDiscoveryConfigs_, serviceDiscoveryConfigs) };


  protected:
    // Scraping job name
    std::shared_ptr<string> jobName_ = nullptr;
    // Detailed information.
    std::shared_ptr<string> message_ = nullptr;
    // Metrics path
    std::shared_ptr<string> metricsPath_ = nullptr;
    // Call method.
    std::shared_ptr<string> scheme_ = nullptr;
    // Scrape interval
    std::shared_ptr<string> scrapeInterval_ = nullptr;
    // Scrape timeout
    std::shared_ptr<string> scrapeTimeout_ = nullptr;
    // Service discovery configuration
    std::shared_ptr<vector<string>> serviceDiscoveryConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
