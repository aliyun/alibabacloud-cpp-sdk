// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODYCALCULATIONJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODYCALCULATIONJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListCalculationJobsResponseBodyCalculationJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalculationJobsResponseBodyCalculationJobs& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricName, ABMetricName_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(CalculationJobId, calculationJobId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(GmtRanTime, gmtRanTime_);
      DARABONBA_PTR_TO_JSON(JobMessage, jobMessage_);
      DARABONBA_PTR_TO_JSON(JobSource, jobSource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalculationJobsResponseBodyCalculationJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricName, ABMetricName_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(CalculationJobId, calculationJobId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(GmtRanTime, gmtRanTime_);
      DARABONBA_PTR_FROM_JSON(JobMessage, jobMessage_);
      DARABONBA_PTR_FROM_JSON(JobSource, jobSource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCalculationJobsResponseBodyCalculationJobs() = default ;
    ListCalculationJobsResponseBodyCalculationJobs(const ListCalculationJobsResponseBodyCalculationJobs &) = default ;
    ListCalculationJobsResponseBodyCalculationJobs(ListCalculationJobsResponseBodyCalculationJobs &&) = default ;
    ListCalculationJobsResponseBodyCalculationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalculationJobsResponseBodyCalculationJobs() = default ;
    ListCalculationJobsResponseBodyCalculationJobs& operator=(const ListCalculationJobsResponseBodyCalculationJobs &) = default ;
    ListCalculationJobsResponseBodyCalculationJobs& operator=(ListCalculationJobsResponseBodyCalculationJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricName_ != nullptr
        && this->bizDate_ != nullptr && this->calculationJobId_ != nullptr && this->config_ != nullptr && this->gmtRanTime_ != nullptr && this->jobMessage_ != nullptr
        && this->jobSource_ != nullptr && this->status_ != nullptr; };
    // ABMetricName Field Functions 
    bool hasABMetricName() const { return this->ABMetricName_ != nullptr;};
    void deleteABMetricName() { this->ABMetricName_ = nullptr;};
    inline string ABMetricName() const { DARABONBA_PTR_GET_DEFAULT(ABMetricName_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setABMetricName(string ABMetricName) { DARABONBA_PTR_SET_VALUE(ABMetricName_, ABMetricName) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // calculationJobId Field Functions 
    bool hasCalculationJobId() const { return this->calculationJobId_ != nullptr;};
    void deleteCalculationJobId() { this->calculationJobId_ = nullptr;};
    inline string calculationJobId() const { DARABONBA_PTR_GET_DEFAULT(calculationJobId_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setCalculationJobId(string calculationJobId) { DARABONBA_PTR_SET_VALUE(calculationJobId_, calculationJobId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // gmtRanTime Field Functions 
    bool hasGmtRanTime() const { return this->gmtRanTime_ != nullptr;};
    void deleteGmtRanTime() { this->gmtRanTime_ = nullptr;};
    inline string gmtRanTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRanTime_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setGmtRanTime(string gmtRanTime) { DARABONBA_PTR_SET_VALUE(gmtRanTime_, gmtRanTime) };


    // jobMessage Field Functions 
    bool hasJobMessage() const { return this->jobMessage_ != nullptr;};
    void deleteJobMessage() { this->jobMessage_ = nullptr;};
    inline const vector<string> & jobMessage() const { DARABONBA_PTR_GET_CONST(jobMessage_, vector<string>) };
    inline vector<string> jobMessage() { DARABONBA_PTR_GET(jobMessage_, vector<string>) };
    inline ListCalculationJobsResponseBodyCalculationJobs& setJobMessage(const vector<string> & jobMessage) { DARABONBA_PTR_SET_VALUE(jobMessage_, jobMessage) };
    inline ListCalculationJobsResponseBodyCalculationJobs& setJobMessage(vector<string> && jobMessage) { DARABONBA_PTR_SET_RVALUE(jobMessage_, jobMessage) };


    // jobSource Field Functions 
    bool hasJobSource() const { return this->jobSource_ != nullptr;};
    void deleteJobSource() { this->jobSource_ = nullptr;};
    inline string jobSource() const { DARABONBA_PTR_GET_DEFAULT(jobSource_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setJobSource(string jobSource) { DARABONBA_PTR_SET_VALUE(jobSource_, jobSource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCalculationJobsResponseBodyCalculationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> ABMetricName_ = nullptr;
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> calculationJobId_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> gmtRanTime_ = nullptr;
    std::shared_ptr<vector<string>> jobMessage_ = nullptr;
    std::shared_ptr<string> jobSource_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
