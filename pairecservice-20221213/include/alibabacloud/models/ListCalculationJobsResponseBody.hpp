// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALCULATIONJOBSRESPONSEBODY_HPP_
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
  class ListCalculationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CalculationJobs, calculationJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalculationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CalculationJobs, calculationJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCalculationJobsResponseBody() = default ;
    ListCalculationJobsResponseBody(const ListCalculationJobsResponseBody &) = default ;
    ListCalculationJobsResponseBody(ListCalculationJobsResponseBody &&) = default ;
    ListCalculationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalculationJobsResponseBody() = default ;
    ListCalculationJobsResponseBody& operator=(const ListCalculationJobsResponseBody &) = default ;
    ListCalculationJobsResponseBody& operator=(ListCalculationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CalculationJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CalculationJobs& obj) { 
        DARABONBA_PTR_TO_JSON(ABMetricName, ABMetricName_);
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(CalculationJobId, calculationJobId_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(GmtRanTime, gmtRanTime_);
        DARABONBA_PTR_TO_JSON(JobMessage, jobMessage_);
        DARABONBA_PTR_TO_JSON(JobSource, jobSource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CalculationJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(ABMetricName, ABMetricName_);
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(CalculationJobId, calculationJobId_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(GmtRanTime, gmtRanTime_);
        DARABONBA_PTR_FROM_JSON(JobMessage, jobMessage_);
        DARABONBA_PTR_FROM_JSON(JobSource, jobSource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CalculationJobs() = default ;
      CalculationJobs(const CalculationJobs &) = default ;
      CalculationJobs(CalculationJobs &&) = default ;
      CalculationJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CalculationJobs() = default ;
      CalculationJobs& operator=(const CalculationJobs &) = default ;
      CalculationJobs& operator=(CalculationJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ABMetricName_ == nullptr
        && this->bizDate_ == nullptr && this->calculationJobId_ == nullptr && this->config_ == nullptr && this->gmtRanTime_ == nullptr && this->jobMessage_ == nullptr
        && this->jobSource_ == nullptr && this->status_ == nullptr; };
      // ABMetricName Field Functions 
      bool hasABMetricName() const { return this->ABMetricName_ != nullptr;};
      void deleteABMetricName() { this->ABMetricName_ = nullptr;};
      inline string getABMetricName() const { DARABONBA_PTR_GET_DEFAULT(ABMetricName_, "") };
      inline CalculationJobs& setABMetricName(string ABMetricName) { DARABONBA_PTR_SET_VALUE(ABMetricName_, ABMetricName) };


      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline CalculationJobs& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // calculationJobId Field Functions 
      bool hasCalculationJobId() const { return this->calculationJobId_ != nullptr;};
      void deleteCalculationJobId() { this->calculationJobId_ = nullptr;};
      inline string getCalculationJobId() const { DARABONBA_PTR_GET_DEFAULT(calculationJobId_, "") };
      inline CalculationJobs& setCalculationJobId(string calculationJobId) { DARABONBA_PTR_SET_VALUE(calculationJobId_, calculationJobId) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline CalculationJobs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // gmtRanTime Field Functions 
      bool hasGmtRanTime() const { return this->gmtRanTime_ != nullptr;};
      void deleteGmtRanTime() { this->gmtRanTime_ = nullptr;};
      inline string getGmtRanTime() const { DARABONBA_PTR_GET_DEFAULT(gmtRanTime_, "") };
      inline CalculationJobs& setGmtRanTime(string gmtRanTime) { DARABONBA_PTR_SET_VALUE(gmtRanTime_, gmtRanTime) };


      // jobMessage Field Functions 
      bool hasJobMessage() const { return this->jobMessage_ != nullptr;};
      void deleteJobMessage() { this->jobMessage_ = nullptr;};
      inline const vector<string> & getJobMessage() const { DARABONBA_PTR_GET_CONST(jobMessage_, vector<string>) };
      inline vector<string> getJobMessage() { DARABONBA_PTR_GET(jobMessage_, vector<string>) };
      inline CalculationJobs& setJobMessage(const vector<string> & jobMessage) { DARABONBA_PTR_SET_VALUE(jobMessage_, jobMessage) };
      inline CalculationJobs& setJobMessage(vector<string> && jobMessage) { DARABONBA_PTR_SET_RVALUE(jobMessage_, jobMessage) };


      // jobSource Field Functions 
      bool hasJobSource() const { return this->jobSource_ != nullptr;};
      void deleteJobSource() { this->jobSource_ = nullptr;};
      inline string getJobSource() const { DARABONBA_PTR_GET_DEFAULT(jobSource_, "") };
      inline CalculationJobs& setJobSource(string jobSource) { DARABONBA_PTR_SET_VALUE(jobSource_, jobSource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CalculationJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> ABMetricName_ {};
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> calculationJobId_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> gmtRanTime_ {};
      shared_ptr<vector<string>> jobMessage_ {};
      shared_ptr<string> jobSource_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->calculationJobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // calculationJobs Field Functions 
    bool hasCalculationJobs() const { return this->calculationJobs_ != nullptr;};
    void deleteCalculationJobs() { this->calculationJobs_ = nullptr;};
    inline const vector<ListCalculationJobsResponseBody::CalculationJobs> & getCalculationJobs() const { DARABONBA_PTR_GET_CONST(calculationJobs_, vector<ListCalculationJobsResponseBody::CalculationJobs>) };
    inline vector<ListCalculationJobsResponseBody::CalculationJobs> getCalculationJobs() { DARABONBA_PTR_GET(calculationJobs_, vector<ListCalculationJobsResponseBody::CalculationJobs>) };
    inline ListCalculationJobsResponseBody& setCalculationJobs(const vector<ListCalculationJobsResponseBody::CalculationJobs> & calculationJobs) { DARABONBA_PTR_SET_VALUE(calculationJobs_, calculationJobs) };
    inline ListCalculationJobsResponseBody& setCalculationJobs(vector<ListCalculationJobsResponseBody::CalculationJobs> && calculationJobs) { DARABONBA_PTR_SET_RVALUE(calculationJobs_, calculationJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalculationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCalculationJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCalculationJobsResponseBody::CalculationJobs>> calculationJobs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
