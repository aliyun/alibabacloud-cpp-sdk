// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRACEABJOBLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTraceAbJobListResponseBodyDataInput.hpp>
#include <alibabacloud/models/QueryTraceAbJobListResponseBodyDataOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryTraceAbJobListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTraceAbJobListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TraceMediaId, traceMediaId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTraceAbJobListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TraceMediaId, traceMediaId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryTraceAbJobListResponseBodyData() = default ;
    QueryTraceAbJobListResponseBodyData(const QueryTraceAbJobListResponseBodyData &) = default ;
    QueryTraceAbJobListResponseBodyData(QueryTraceAbJobListResponseBodyData &&) = default ;
    QueryTraceAbJobListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTraceAbJobListResponseBodyData() = default ;
    QueryTraceAbJobListResponseBodyData& operator=(const QueryTraceAbJobListResponseBodyData &) = default ;
    QueryTraceAbJobListResponseBodyData& operator=(QueryTraceAbJobListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->input_ != nullptr && this->jobId_ != nullptr && this->level_ != nullptr && this->output_ != nullptr
        && this->result_ != nullptr && this->status_ != nullptr && this->traceMediaId_ != nullptr && this->userData_ != nullptr && this->userId_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryTraceAbJobListResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline QueryTraceAbJobListResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryTraceAbJobListResponseBodyDataInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryTraceAbJobListResponseBodyDataInput) };
    inline Models::QueryTraceAbJobListResponseBodyDataInput input() { DARABONBA_PTR_GET(input_, Models::QueryTraceAbJobListResponseBodyDataInput) };
    inline QueryTraceAbJobListResponseBodyData& setInput(const Models::QueryTraceAbJobListResponseBodyDataInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryTraceAbJobListResponseBodyData& setInput(Models::QueryTraceAbJobListResponseBodyDataInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryTraceAbJobListResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline QueryTraceAbJobListResponseBodyData& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const Models::QueryTraceAbJobListResponseBodyDataOutput & output() const { DARABONBA_PTR_GET_CONST(output_, Models::QueryTraceAbJobListResponseBodyDataOutput) };
    inline Models::QueryTraceAbJobListResponseBodyDataOutput output() { DARABONBA_PTR_GET(output_, Models::QueryTraceAbJobListResponseBodyDataOutput) };
    inline QueryTraceAbJobListResponseBodyData& setOutput(const Models::QueryTraceAbJobListResponseBodyDataOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryTraceAbJobListResponseBodyData& setOutput(Models::QueryTraceAbJobListResponseBodyDataOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryTraceAbJobListResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryTraceAbJobListResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // traceMediaId Field Functions 
    bool hasTraceMediaId() const { return this->traceMediaId_ != nullptr;};
    void deleteTraceMediaId() { this->traceMediaId_ = nullptr;};
    inline string traceMediaId() const { DARABONBA_PTR_GET_DEFAULT(traceMediaId_, "") };
    inline QueryTraceAbJobListResponseBodyData& setTraceMediaId(string traceMediaId) { DARABONBA_PTR_SET_VALUE(traceMediaId_, traceMediaId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryTraceAbJobListResponseBodyData& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryTraceAbJobListResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<Models::QueryTraceAbJobListResponseBodyDataInput> input_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> level_ = nullptr;
    std::shared_ptr<Models::QueryTraceAbJobListResponseBodyDataOutput> output_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> traceMediaId_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
