// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEM3U8JOBLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEM3U8JOBLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTraceM3u8JobListResponseBodyDataOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryTraceM3u8JobListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceM3u8JobListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Trace, trace_);
      DARABONBA_PTR_TO_JSON(TraceMediaId, traceMediaId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceM3u8JobListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Trace, trace_);
      DARABONBA_PTR_FROM_JSON(TraceMediaId, traceMediaId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryTraceM3u8JobListResponseBodyData() = default ;
    QueryTraceM3u8JobListResponseBodyData(const QueryTraceM3u8JobListResponseBodyData &) = default ;
    QueryTraceM3u8JobListResponseBodyData(QueryTraceM3u8JobListResponseBodyData &&) = default ;
    QueryTraceM3u8JobListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceM3u8JobListResponseBodyData() = default ;
    QueryTraceM3u8JobListResponseBodyData& operator=(const QueryTraceM3u8JobListResponseBodyData &) = default ;
    QueryTraceM3u8JobListResponseBodyData& operator=(QueryTraceM3u8JobListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->jobId_ == nullptr && return this->output_ == nullptr && return this->status_ == nullptr && return this->trace_ == nullptr
        && return this->traceMediaId_ == nullptr && return this->userData_ == nullptr && return this->userId_ == nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryTraceM3u8JobListResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryTraceM3u8JobListResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryTraceM3u8JobListResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::QueryTraceM3u8JobListResponseBodyDataOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::QueryTraceM3u8JobListResponseBodyDataOutput) };
    inline Models::QueryTraceM3u8JobListResponseBodyDataOutput output() { DARABONBA_PTR_GET(output_, Models::QueryTraceM3u8JobListResponseBodyDataOutput) };
    inline QueryTraceM3u8JobListResponseBodyData& setOutput(const Models::QueryTraceM3u8JobListResponseBodyDataOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryTraceM3u8JobListResponseBodyData& setOutput(Models::QueryTraceM3u8JobListResponseBodyDataOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryTraceM3u8JobListResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trace Field Functions 
    bool hasTrace() const { return this->trace_ != nullptr;};
    void deleteTrace() { this->trace_ = nullptr;};
    inline string trace() const { DARABONBA_PTR_GET_DEFAULT(trace_, "") };
    inline QueryTraceM3u8JobListResponseBodyData& setTrace(string trace) { DARABONBA_PTR_SET_VALUE(trace_, trace) };


    // traceMediaId Field Functions 
    bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
    void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
    inline string traceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
    inline QueryTraceM3u8JobListResponseBodyData& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryTraceM3u8JobListResponseBodyData& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryTraceM3u8JobListResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The creation time of the job.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The last modification time of the job.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The output video.
    std::shared_ptr<Models::QueryTraceM3u8JobListResponseBodyDataOutput> output_ = nullptr;
    // The current status of the job.
    std::shared_ptr<string> status_ = nullptr;
    // The watermark information.
    std::shared_ptr<string> trace_ = nullptr;
    // The media ID for the trace watermark.
    std::shared_ptr<string> traceMediaId_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the user who initiated the job.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
