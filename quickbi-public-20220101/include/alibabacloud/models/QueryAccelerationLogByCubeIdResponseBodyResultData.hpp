// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDRESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCELERATIONLOGBYCUBEIDRESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAccelerationLogByCubeIdResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccelerationLogByCubeIdResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(JonStartDate, jonStartDate_);
      DARABONBA_PTR_TO_JSON(Log, log_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccelerationLogByCubeIdResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(JonStartDate, jonStartDate_);
      DARABONBA_PTR_FROM_JSON(Log, log_);
    };
    QueryAccelerationLogByCubeIdResponseBodyResultData() = default ;
    QueryAccelerationLogByCubeIdResponseBodyResultData(const QueryAccelerationLogByCubeIdResponseBodyResultData &) = default ;
    QueryAccelerationLogByCubeIdResponseBodyResultData(QueryAccelerationLogByCubeIdResponseBodyResultData &&) = default ;
    QueryAccelerationLogByCubeIdResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccelerationLogByCubeIdResponseBodyResultData() = default ;
    QueryAccelerationLogByCubeIdResponseBodyResultData& operator=(const QueryAccelerationLogByCubeIdResponseBodyResultData &) = default ;
    QueryAccelerationLogByCubeIdResponseBodyResultData& operator=(QueryAccelerationLogByCubeIdResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->jobHistoryId_ == nullptr && return this->jobId_ == nullptr && return this->jobStatus_ == nullptr && return this->jonStartDate_ == nullptr && return this->log_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // jobHistoryId Field Functions 
    bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
    void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
    inline string jobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // jonStartDate Field Functions 
    bool hasJonStartDate() const { return this->jonStartDate_ != nullptr;};
    void deleteJonStartDate() { this->jonStartDate_ = nullptr;};
    inline string jonStartDate() const { DARABONBA_PTR_GET_DEFAULT(jonStartDate_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setJonStartDate(string jonStartDate) { DARABONBA_PTR_SET_VALUE(jonStartDate_, jonStartDate) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline QueryAccelerationLogByCubeIdResponseBodyResultData& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> jobHistoryId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobStatus_ = nullptr;
    std::shared_ptr<string> jonStartDate_ = nullptr;
    std::shared_ptr<string> log_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
