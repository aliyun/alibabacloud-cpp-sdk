// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODYDATASCRAPECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSRESPONSEBODYDATASCRAPECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvCustomJobsResponseBodyDataScrapeConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvCustomJobsResponseBodyDataScrapeConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(MetricsPath, metricsPath_);
      DARABONBA_PTR_TO_JSON(ScrapeDiscoverys, scrapeDiscoverys_);
      DARABONBA_PTR_TO_JSON(ScrapeInterval, scrapeInterval_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvCustomJobsResponseBodyDataScrapeConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(MetricsPath, metricsPath_);
      DARABONBA_PTR_FROM_JSON(ScrapeDiscoverys, scrapeDiscoverys_);
      DARABONBA_PTR_FROM_JSON(ScrapeInterval, scrapeInterval_);
    };
    ListEnvCustomJobsResponseBodyDataScrapeConfigs() = default ;
    ListEnvCustomJobsResponseBodyDataScrapeConfigs(const ListEnvCustomJobsResponseBodyDataScrapeConfigs &) = default ;
    ListEnvCustomJobsResponseBodyDataScrapeConfigs(ListEnvCustomJobsResponseBodyDataScrapeConfigs &&) = default ;
    ListEnvCustomJobsResponseBodyDataScrapeConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvCustomJobsResponseBodyDataScrapeConfigs() = default ;
    ListEnvCustomJobsResponseBodyDataScrapeConfigs& operator=(const ListEnvCustomJobsResponseBodyDataScrapeConfigs &) = default ;
    ListEnvCustomJobsResponseBodyDataScrapeConfigs& operator=(ListEnvCustomJobsResponseBodyDataScrapeConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobName_ != nullptr
        && this->metricsPath_ != nullptr && this->scrapeDiscoverys_ != nullptr && this->scrapeInterval_ != nullptr; };
    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListEnvCustomJobsResponseBodyDataScrapeConfigs& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // metricsPath Field Functions 
    bool hasMetricsPath() const { return this->metricsPath_ != nullptr;};
    void deleteMetricsPath() { this->metricsPath_ = nullptr;};
    inline string metricsPath() const { DARABONBA_PTR_GET_DEFAULT(metricsPath_, "") };
    inline ListEnvCustomJobsResponseBodyDataScrapeConfigs& setMetricsPath(string metricsPath) { DARABONBA_PTR_SET_VALUE(metricsPath_, metricsPath) };


    // scrapeDiscoverys Field Functions 
    bool hasScrapeDiscoverys() const { return this->scrapeDiscoverys_ != nullptr;};
    void deleteScrapeDiscoverys() { this->scrapeDiscoverys_ = nullptr;};
    inline const vector<string> & scrapeDiscoverys() const { DARABONBA_PTR_GET_CONST(scrapeDiscoverys_, vector<string>) };
    inline vector<string> scrapeDiscoverys() { DARABONBA_PTR_GET(scrapeDiscoverys_, vector<string>) };
    inline ListEnvCustomJobsResponseBodyDataScrapeConfigs& setScrapeDiscoverys(const vector<string> & scrapeDiscoverys) { DARABONBA_PTR_SET_VALUE(scrapeDiscoverys_, scrapeDiscoverys) };
    inline ListEnvCustomJobsResponseBodyDataScrapeConfigs& setScrapeDiscoverys(vector<string> && scrapeDiscoverys) { DARABONBA_PTR_SET_RVALUE(scrapeDiscoverys_, scrapeDiscoverys) };


    // scrapeInterval Field Functions 
    bool hasScrapeInterval() const { return this->scrapeInterval_ != nullptr;};
    void deleteScrapeInterval() { this->scrapeInterval_ = nullptr;};
    inline string scrapeInterval() const { DARABONBA_PTR_GET_DEFAULT(scrapeInterval_, "") };
    inline ListEnvCustomJobsResponseBodyDataScrapeConfigs& setScrapeInterval(string scrapeInterval) { DARABONBA_PTR_SET_VALUE(scrapeInterval_, scrapeInterval) };


  protected:
    // The name of the job.
    std::shared_ptr<string> jobName_ = nullptr;
    // The path of the metric.
    std::shared_ptr<string> metricsPath_ = nullptr;
    // The service discovery methods.
    std::shared_ptr<vector<string>> scrapeDiscoverys_ = nullptr;
    // The capture interval.
    std::shared_ptr<string> scrapeInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
