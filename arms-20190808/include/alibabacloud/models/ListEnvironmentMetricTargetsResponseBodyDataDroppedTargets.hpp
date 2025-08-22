// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODYDATADROPPEDTARGETS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODYDATADROPPEDTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& obj) { 
      DARABONBA_PTR_TO_JSON(DiscoveredLabels, discoveredLabels_);
      DARABONBA_PTR_TO_JSON(GlobalUrl, globalUrl_);
      DARABONBA_PTR_TO_JSON(Health, health_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LastError, lastError_);
      DARABONBA_PTR_TO_JSON(LastScrape, lastScrape_);
      DARABONBA_PTR_TO_JSON(LastScrapeDuration, lastScrapeDuration_);
      DARABONBA_PTR_TO_JSON(LastScrapeSeries, lastScrapeSeries_);
      DARABONBA_PTR_TO_JSON(ScrapePool, scrapePool_);
      DARABONBA_PTR_TO_JSON(ScrapeUrl, scrapeUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscoveredLabels, discoveredLabels_);
      DARABONBA_PTR_FROM_JSON(GlobalUrl, globalUrl_);
      DARABONBA_PTR_FROM_JSON(Health, health_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LastError, lastError_);
      DARABONBA_PTR_FROM_JSON(LastScrape, lastScrape_);
      DARABONBA_PTR_FROM_JSON(LastScrapeDuration, lastScrapeDuration_);
      DARABONBA_PTR_FROM_JSON(LastScrapeSeries, lastScrapeSeries_);
      DARABONBA_PTR_FROM_JSON(ScrapePool, scrapePool_);
      DARABONBA_PTR_FROM_JSON(ScrapeUrl, scrapeUrl_);
    };
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets() = default ;
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets(const ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets &) = default ;
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets(ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets &&) = default ;
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets() = default ;
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& operator=(const ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets &) = default ;
    ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& operator=(ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->discoveredLabels_ != nullptr
        && this->globalUrl_ != nullptr && this->health_ != nullptr && this->labels_ != nullptr && this->lastError_ != nullptr && this->lastScrape_ != nullptr
        && this->lastScrapeDuration_ != nullptr && this->lastScrapeSeries_ != nullptr && this->scrapePool_ != nullptr && this->scrapeUrl_ != nullptr; };
    // discoveredLabels Field Functions 
    bool hasDiscoveredLabels() const { return this->discoveredLabels_ != nullptr;};
    void deleteDiscoveredLabels() { this->discoveredLabels_ = nullptr;};
    inline const map<string, string> & discoveredLabels() const { DARABONBA_PTR_GET_CONST(discoveredLabels_, map<string, string>) };
    inline map<string, string> discoveredLabels() { DARABONBA_PTR_GET(discoveredLabels_, map<string, string>) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setDiscoveredLabels(const map<string, string> & discoveredLabels) { DARABONBA_PTR_SET_VALUE(discoveredLabels_, discoveredLabels) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setDiscoveredLabels(map<string, string> && discoveredLabels) { DARABONBA_PTR_SET_RVALUE(discoveredLabels_, discoveredLabels) };


    // globalUrl Field Functions 
    bool hasGlobalUrl() const { return this->globalUrl_ != nullptr;};
    void deleteGlobalUrl() { this->globalUrl_ = nullptr;};
    inline string globalUrl() const { DARABONBA_PTR_GET_DEFAULT(globalUrl_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setGlobalUrl(string globalUrl) { DARABONBA_PTR_SET_VALUE(globalUrl_, globalUrl) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // lastError Field Functions 
    bool hasLastError() const { return this->lastError_ != nullptr;};
    void deleteLastError() { this->lastError_ = nullptr;};
    inline string lastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


    // lastScrape Field Functions 
    bool hasLastScrape() const { return this->lastScrape_ != nullptr;};
    void deleteLastScrape() { this->lastScrape_ = nullptr;};
    inline string lastScrape() const { DARABONBA_PTR_GET_DEFAULT(lastScrape_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLastScrape(string lastScrape) { DARABONBA_PTR_SET_VALUE(lastScrape_, lastScrape) };


    // lastScrapeDuration Field Functions 
    bool hasLastScrapeDuration() const { return this->lastScrapeDuration_ != nullptr;};
    void deleteLastScrapeDuration() { this->lastScrapeDuration_ = nullptr;};
    inline double lastScrapeDuration() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeDuration_, 0.0) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLastScrapeDuration(double lastScrapeDuration) { DARABONBA_PTR_SET_VALUE(lastScrapeDuration_, lastScrapeDuration) };


    // lastScrapeSeries Field Functions 
    bool hasLastScrapeSeries() const { return this->lastScrapeSeries_ != nullptr;};
    void deleteLastScrapeSeries() { this->lastScrapeSeries_ = nullptr;};
    inline int64_t lastScrapeSeries() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeSeries_, 0L) };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setLastScrapeSeries(int64_t lastScrapeSeries) { DARABONBA_PTR_SET_VALUE(lastScrapeSeries_, lastScrapeSeries) };


    // scrapePool Field Functions 
    bool hasScrapePool() const { return this->scrapePool_ != nullptr;};
    void deleteScrapePool() { this->scrapePool_ = nullptr;};
    inline string scrapePool() const { DARABONBA_PTR_GET_DEFAULT(scrapePool_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setScrapePool(string scrapePool) { DARABONBA_PTR_SET_VALUE(scrapePool_, scrapePool) };


    // scrapeUrl Field Functions 
    bool hasScrapeUrl() const { return this->scrapeUrl_ != nullptr;};
    void deleteScrapeUrl() { this->scrapeUrl_ = nullptr;};
    inline string scrapeUrl() const { DARABONBA_PTR_GET_DEFAULT(scrapeUrl_, "") };
    inline ListEnvironmentMetricTargetsResponseBodyDataDroppedTargets& setScrapeUrl(string scrapeUrl) { DARABONBA_PTR_SET_VALUE(scrapeUrl_, scrapeUrl) };


  protected:
    // The tags used for service discovery.
    std::shared_ptr<map<string, string>> discoveredLabels_ = nullptr;
    // The URL of the target.
    std::shared_ptr<string> globalUrl_ = nullptr;
    // The health status.
    std::shared_ptr<string> health_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // The last error message.
    std::shared_ptr<string> lastError_ = nullptr;
    // The last collection time.
    std::shared_ptr<string> lastScrape_ = nullptr;
    // The duration of the last collection.
    std::shared_ptr<double> lastScrapeDuration_ = nullptr;
    // The amount of metrics in the last collection.
    std::shared_ptr<int64_t> lastScrapeSeries_ = nullptr;
    // The name of the collection.
    std::shared_ptr<string> scrapePool_ = nullptr;
    // The URL of the collection.
    std::shared_ptr<string> scrapeUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
