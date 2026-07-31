// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEMANTICJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSEMANTICJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RunSemanticJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSemanticJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RunSemanticJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RunSemanticJobResponseBody() = default ;
    RunSemanticJobResponseBody(const RunSemanticJobResponseBody &) = default ;
    RunSemanticJobResponseBody(RunSemanticJobResponseBody &&) = default ;
    RunSemanticJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSemanticJobResponseBody() = default ;
    RunSemanticJobResponseBody& operator=(const RunSemanticJobResponseBody &) = default ;
    RunSemanticJobResponseBody& operator=(RunSemanticJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentSqlIndex, currentSqlIndex_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ExecTypes, execTypes_);
        DARABONBA_PTR_TO_JSON(ExecutorJobId, executorJobId_);
        DARABONBA_PTR_TO_JSON(JobRunId, jobRunId_);
        DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentSqlIndex, currentSqlIndex_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ExecTypes, execTypes_);
        DARABONBA_PTR_FROM_JSON(ExecutorJobId, executorJobId_);
        DARABONBA_PTR_FROM_JSON(JobRunId, jobRunId_);
        DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentSqlIndex_ == nullptr
        && this->env_ == nullptr && this->execTypes_ == nullptr && this->executorJobId_ == nullptr && this->jobRunId_ == nullptr && this->statuses_ == nullptr; };
      // currentSqlIndex Field Functions 
      bool hasCurrentSqlIndex() const { return this->currentSqlIndex_ != nullptr;};
      void deleteCurrentSqlIndex() { this->currentSqlIndex_ = nullptr;};
      inline int32_t getCurrentSqlIndex() const { DARABONBA_PTR_GET_DEFAULT(currentSqlIndex_, 0) };
      inline Data& setCurrentSqlIndex(int32_t currentSqlIndex) { DARABONBA_PTR_SET_VALUE(currentSqlIndex_, currentSqlIndex) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Data& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // execTypes Field Functions 
      bool hasExecTypes() const { return this->execTypes_ != nullptr;};
      void deleteExecTypes() { this->execTypes_ = nullptr;};
      inline const vector<int32_t> & getExecTypes() const { DARABONBA_PTR_GET_CONST(execTypes_, vector<int32_t>) };
      inline vector<int32_t> getExecTypes() { DARABONBA_PTR_GET(execTypes_, vector<int32_t>) };
      inline Data& setExecTypes(const vector<int32_t> & execTypes) { DARABONBA_PTR_SET_VALUE(execTypes_, execTypes) };
      inline Data& setExecTypes(vector<int32_t> && execTypes) { DARABONBA_PTR_SET_RVALUE(execTypes_, execTypes) };


      // executorJobId Field Functions 
      bool hasExecutorJobId() const { return this->executorJobId_ != nullptr;};
      void deleteExecutorJobId() { this->executorJobId_ = nullptr;};
      inline string getExecutorJobId() const { DARABONBA_PTR_GET_DEFAULT(executorJobId_, "") };
      inline Data& setExecutorJobId(string executorJobId) { DARABONBA_PTR_SET_VALUE(executorJobId_, executorJobId) };


      // jobRunId Field Functions 
      bool hasJobRunId() const { return this->jobRunId_ != nullptr;};
      void deleteJobRunId() { this->jobRunId_ = nullptr;};
      inline string getJobRunId() const { DARABONBA_PTR_GET_DEFAULT(jobRunId_, "") };
      inline Data& setJobRunId(string jobRunId) { DARABONBA_PTR_SET_VALUE(jobRunId_, jobRunId) };


      // statuses Field Functions 
      bool hasStatuses() const { return this->statuses_ != nullptr;};
      void deleteStatuses() { this->statuses_ = nullptr;};
      inline const vector<int32_t> & getStatuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<int32_t>) };
      inline vector<int32_t> getStatuses() { DARABONBA_PTR_GET(statuses_, vector<int32_t>) };
      inline Data& setStatuses(const vector<int32_t> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
      inline Data& setStatuses(vector<int32_t> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    protected:
      // The current SQL fragment index returned by the executor in the submission response.
      shared_ptr<int32_t> currentSqlIndex_ {};
      // The runtime environment identifier returned by the executor in the submission response.
      shared_ptr<string> env_ {};
      // The list of execution type codes returned by the executor in the submission response.
      shared_ptr<vector<int32_t>> execTypes_ {};
      // The executor job identifier. Pass this value to the ExecutorJobId parameter of GetSemanticJobDetail, GetSemanticJobLog, or KillSemanticJob.
      shared_ptr<string> executorJobId_ {};
      // The unique identifier of this run. Pass this value to the JobRunId parameter of DownloadSemanticResults to obtain the output of this run.
      shared_ptr<string> jobRunId_ {};
      // The list of status codes returned by the executor in the submission response. The status at the submission stage does not indicate that the results are complete.
      shared_ptr<vector<int32_t>> statuses_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RunSemanticJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RunSemanticJobResponseBody::Data) };
    inline RunSemanticJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RunSemanticJobResponseBody::Data) };
    inline RunSemanticJobResponseBody& setData(const RunSemanticJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RunSemanticJobResponseBody& setData(RunSemanticJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunSemanticJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunSemanticJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The run information for this submission. A successful submission does not mean that the semantic model output has been generated. Use the detail operation to confirm the status before downloading results.
    shared_ptr<RunSemanticJobResponseBody::Data> data_ {};
    // The request ID. Used for locating logs and troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
