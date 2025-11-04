// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryIProductionJobResponseBodyInput.hpp>
#include <alibabacloud/models/QueryIProductionJobResponseBodyOutput.hpp>
#include <vector>
#include <alibabacloud/models/QueryIProductionJobResponseBodyScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIProductionJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(OutputFiles, outputFiles_);
      DARABONBA_PTR_TO_JSON(OutputMediaIds, outputMediaIds_);
      DARABONBA_PTR_TO_JSON(OutputUrls, outputUrls_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(OutputFiles, outputFiles_);
      DARABONBA_PTR_FROM_JSON(OutputMediaIds, outputMediaIds_);
      DARABONBA_PTR_FROM_JSON(OutputUrls, outputUrls_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryIProductionJobResponseBody() = default ;
    QueryIProductionJobResponseBody(const QueryIProductionJobResponseBody &) = default ;
    QueryIProductionJobResponseBody(QueryIProductionJobResponseBody &&) = default ;
    QueryIProductionJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobResponseBody() = default ;
    QueryIProductionJobResponseBody& operator=(const QueryIProductionJobResponseBody &) = default ;
    QueryIProductionJobResponseBody& operator=(QueryIProductionJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->finishTime_ == nullptr && return this->functionName_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->jobParams_ == nullptr
        && return this->name_ == nullptr && return this->output_ == nullptr && return this->outputFiles_ == nullptr && return this->outputMediaIds_ == nullptr && return this->outputUrls_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->scheduleConfig_ == nullptr && return this->status_ == nullptr && return this->templateId_ == nullptr
        && return this->userData_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryIProductionJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryIProductionJobResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline QueryIProductionJobResponseBody& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const QueryIProductionJobResponseBodyInput & input() const { DARABONBA_PTR_GET_CONST(input_, QueryIProductionJobResponseBodyInput) };
    inline QueryIProductionJobResponseBodyInput input() { DARABONBA_PTR_GET(input_, QueryIProductionJobResponseBodyInput) };
    inline QueryIProductionJobResponseBody& setInput(const QueryIProductionJobResponseBodyInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryIProductionJobResponseBody& setInput(QueryIProductionJobResponseBodyInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryIProductionJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string jobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline QueryIProductionJobResponseBody& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryIProductionJobResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const QueryIProductionJobResponseBodyOutput & output() const { DARABONBA_PTR_GET_CONST(output_, QueryIProductionJobResponseBodyOutput) };
    inline QueryIProductionJobResponseBodyOutput output() { DARABONBA_PTR_GET(output_, QueryIProductionJobResponseBodyOutput) };
    inline QueryIProductionJobResponseBody& setOutput(const QueryIProductionJobResponseBodyOutput & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryIProductionJobResponseBody& setOutput(QueryIProductionJobResponseBodyOutput && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // outputFiles Field Functions 
    bool hasOutputFiles() const { return this->outputFiles_ != nullptr;};
    void deleteOutputFiles() { this->outputFiles_ = nullptr;};
    inline const vector<string> & outputFiles() const { DARABONBA_PTR_GET_CONST(outputFiles_, vector<string>) };
    inline vector<string> outputFiles() { DARABONBA_PTR_GET(outputFiles_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputFiles(const vector<string> & outputFiles) { DARABONBA_PTR_SET_VALUE(outputFiles_, outputFiles) };
    inline QueryIProductionJobResponseBody& setOutputFiles(vector<string> && outputFiles) { DARABONBA_PTR_SET_RVALUE(outputFiles_, outputFiles) };


    // outputMediaIds Field Functions 
    bool hasOutputMediaIds() const { return this->outputMediaIds_ != nullptr;};
    void deleteOutputMediaIds() { this->outputMediaIds_ = nullptr;};
    inline const vector<string> & outputMediaIds() const { DARABONBA_PTR_GET_CONST(outputMediaIds_, vector<string>) };
    inline vector<string> outputMediaIds() { DARABONBA_PTR_GET(outputMediaIds_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputMediaIds(const vector<string> & outputMediaIds) { DARABONBA_PTR_SET_VALUE(outputMediaIds_, outputMediaIds) };
    inline QueryIProductionJobResponseBody& setOutputMediaIds(vector<string> && outputMediaIds) { DARABONBA_PTR_SET_RVALUE(outputMediaIds_, outputMediaIds) };


    // outputUrls Field Functions 
    bool hasOutputUrls() const { return this->outputUrls_ != nullptr;};
    void deleteOutputUrls() { this->outputUrls_ = nullptr;};
    inline const vector<string> & outputUrls() const { DARABONBA_PTR_GET_CONST(outputUrls_, vector<string>) };
    inline vector<string> outputUrls() { DARABONBA_PTR_GET(outputUrls_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputUrls(const vector<string> & outputUrls) { DARABONBA_PTR_SET_VALUE(outputUrls_, outputUrls) };
    inline QueryIProductionJobResponseBody& setOutputUrls(vector<string> && outputUrls) { DARABONBA_PTR_SET_RVALUE(outputUrls_, outputUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIProductionJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryIProductionJobResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const QueryIProductionJobResponseBodyScheduleConfig & scheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, QueryIProductionJobResponseBodyScheduleConfig) };
    inline QueryIProductionJobResponseBodyScheduleConfig scheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, QueryIProductionJobResponseBodyScheduleConfig) };
    inline QueryIProductionJobResponseBody& setScheduleConfig(const QueryIProductionJobResponseBodyScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline QueryIProductionJobResponseBody& setScheduleConfig(QueryIProductionJobResponseBodyScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryIProductionJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryIProductionJobResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryIProductionJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the job was complete.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The name of the algorithm that you want to use for the job. Valid values:
    // 
    // *   **Cover**: This algorithm intelligently generates a thumbnail image for a video.
    // *   **VideoClip**: This algorithm intelligently generates a summary for a video.
    // *   **VideoDelogo**: This algorithm removes logos from a video.
    // *   **VideoDetext**: This algorithm removes captions from a video.
    std::shared_ptr<string> functionName_ = nullptr;
    // The input file.
    std::shared_ptr<QueryIProductionJobResponseBodyInput> input_ = nullptr;
    // The ID of the intelligent production job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The algorithm-specific parameters. The parameters are specified as JSON objects and vary based on the algorithm.
    std::shared_ptr<string> jobParams_ = nullptr;
    // The name of the intelligent production job.
    std::shared_ptr<string> name_ = nullptr;
    // The output file.
    std::shared_ptr<QueryIProductionJobResponseBodyOutput> output_ = nullptr;
    // The output files.
    std::shared_ptr<vector<string>> outputFiles_ = nullptr;
    std::shared_ptr<vector<string>> outputMediaIds_ = nullptr;
    // The URLs of the output files.
    std::shared_ptr<vector<string>> outputUrls_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The output of the algorithm. The output is in JSON format and varies based on the algorithm. For more information, see the "Parameters of Result" section of this topic.
    std::shared_ptr<string> result_ = nullptr;
    // The scheduling configuration.
    std::shared_ptr<QueryIProductionJobResponseBodyScheduleConfig> scheduleConfig_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   Queuing: The job is waiting in the queue.
    // *   Analysing: The job is in progress.
    // *   Fail: The job failed.
    // *   Success: The job was successful.
    std::shared_ptr<string> status_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The user-defined data that is returned in the response.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
