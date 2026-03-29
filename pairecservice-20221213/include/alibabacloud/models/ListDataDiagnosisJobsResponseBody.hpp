// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADIAGNOSISJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADIAGNOSISJOBSRESPONSEBODY_HPP_
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
  class ListDataDiagnosisJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDiagnosisJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiagnosisJobs, dataDiagnosisJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDiagnosisJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiagnosisJobs, dataDiagnosisJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataDiagnosisJobsResponseBody() = default ;
    ListDataDiagnosisJobsResponseBody(const ListDataDiagnosisJobsResponseBody &) = default ;
    ListDataDiagnosisJobsResponseBody(ListDataDiagnosisJobsResponseBody &&) = default ;
    ListDataDiagnosisJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDiagnosisJobsResponseBody() = default ;
    ListDataDiagnosisJobsResponseBody& operator=(const ListDataDiagnosisJobsResponseBody &) = default ;
    ListDataDiagnosisJobsResponseBody& operator=(ListDataDiagnosisJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataDiagnosisJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDiagnosisJobs& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(DataDiagnosisConfigId, dataDiagnosisConfigId_);
        DARABONBA_PTR_TO_JSON(DataDiagnosisConfigName, dataDiagnosisConfigName_);
        DARABONBA_PTR_TO_JSON(DataDiagnosisJobId, dataDiagnosisJobId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_TO_JSON(JobSource, jobSource_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DataDiagnosisJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(DataDiagnosisConfigId, dataDiagnosisConfigId_);
        DARABONBA_PTR_FROM_JSON(DataDiagnosisConfigName, dataDiagnosisConfigName_);
        DARABONBA_PTR_FROM_JSON(DataDiagnosisJobId, dataDiagnosisJobId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
        DARABONBA_PTR_FROM_JSON(JobSource, jobSource_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DataDiagnosisJobs() = default ;
      DataDiagnosisJobs(const DataDiagnosisJobs &) = default ;
      DataDiagnosisJobs(DataDiagnosisJobs &&) = default ;
      DataDiagnosisJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDiagnosisJobs() = default ;
      DataDiagnosisJobs& operator=(const DataDiagnosisJobs &) = default ;
      DataDiagnosisJobs& operator=(DataDiagnosisJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->config_ == nullptr && this->dataDiagnosisConfigId_ == nullptr && this->dataDiagnosisConfigName_ == nullptr && this->dataDiagnosisJobId_ == nullptr && this->gmtCreateTime_ == nullptr
        && this->gmtStartTime_ == nullptr && this->jobSource_ == nullptr && this->logs_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline DataDiagnosisJobs& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline DataDiagnosisJobs& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // dataDiagnosisConfigId Field Functions 
      bool hasDataDiagnosisConfigId() const { return this->dataDiagnosisConfigId_ != nullptr;};
      void deleteDataDiagnosisConfigId() { this->dataDiagnosisConfigId_ = nullptr;};
      inline string getDataDiagnosisConfigId() const { DARABONBA_PTR_GET_DEFAULT(dataDiagnosisConfigId_, "") };
      inline DataDiagnosisJobs& setDataDiagnosisConfigId(string dataDiagnosisConfigId) { DARABONBA_PTR_SET_VALUE(dataDiagnosisConfigId_, dataDiagnosisConfigId) };


      // dataDiagnosisConfigName Field Functions 
      bool hasDataDiagnosisConfigName() const { return this->dataDiagnosisConfigName_ != nullptr;};
      void deleteDataDiagnosisConfigName() { this->dataDiagnosisConfigName_ = nullptr;};
      inline string getDataDiagnosisConfigName() const { DARABONBA_PTR_GET_DEFAULT(dataDiagnosisConfigName_, "") };
      inline DataDiagnosisJobs& setDataDiagnosisConfigName(string dataDiagnosisConfigName) { DARABONBA_PTR_SET_VALUE(dataDiagnosisConfigName_, dataDiagnosisConfigName) };


      // dataDiagnosisJobId Field Functions 
      bool hasDataDiagnosisJobId() const { return this->dataDiagnosisJobId_ != nullptr;};
      void deleteDataDiagnosisJobId() { this->dataDiagnosisJobId_ = nullptr;};
      inline string getDataDiagnosisJobId() const { DARABONBA_PTR_GET_DEFAULT(dataDiagnosisJobId_, "") };
      inline DataDiagnosisJobs& setDataDiagnosisJobId(string dataDiagnosisJobId) { DARABONBA_PTR_SET_VALUE(dataDiagnosisJobId_, dataDiagnosisJobId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline DataDiagnosisJobs& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtStartTime Field Functions 
      bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
      void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
      inline string getGmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
      inline DataDiagnosisJobs& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


      // jobSource Field Functions 
      bool hasJobSource() const { return this->jobSource_ != nullptr;};
      void deleteJobSource() { this->jobSource_ = nullptr;};
      inline string getJobSource() const { DARABONBA_PTR_GET_DEFAULT(jobSource_, "") };
      inline DataDiagnosisJobs& setJobSource(string jobSource) { DARABONBA_PTR_SET_VALUE(jobSource_, jobSource) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<string> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
      inline vector<string> getLogs() { DARABONBA_PTR_GET(logs_, vector<string>) };
      inline DataDiagnosisJobs& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline DataDiagnosisJobs& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataDiagnosisJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataDiagnosisJobs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> dataDiagnosisConfigId_ {};
      shared_ptr<string> dataDiagnosisConfigName_ {};
      shared_ptr<string> dataDiagnosisJobId_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtStartTime_ {};
      shared_ptr<string> jobSource_ {};
      shared_ptr<vector<string>> logs_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dataDiagnosisJobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataDiagnosisJobs Field Functions 
    bool hasDataDiagnosisJobs() const { return this->dataDiagnosisJobs_ != nullptr;};
    void deleteDataDiagnosisJobs() { this->dataDiagnosisJobs_ = nullptr;};
    inline const vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs> & getDataDiagnosisJobs() const { DARABONBA_PTR_GET_CONST(dataDiagnosisJobs_, vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs>) };
    inline vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs> getDataDiagnosisJobs() { DARABONBA_PTR_GET(dataDiagnosisJobs_, vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs>) };
    inline ListDataDiagnosisJobsResponseBody& setDataDiagnosisJobs(const vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs> & dataDiagnosisJobs) { DARABONBA_PTR_SET_VALUE(dataDiagnosisJobs_, dataDiagnosisJobs) };
    inline ListDataDiagnosisJobsResponseBody& setDataDiagnosisJobs(vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs> && dataDiagnosisJobs) { DARABONBA_PTR_SET_RVALUE(dataDiagnosisJobs_, dataDiagnosisJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataDiagnosisJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataDiagnosisJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDataDiagnosisJobsResponseBody::DataDiagnosisJobs>> dataDiagnosisJobs_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
