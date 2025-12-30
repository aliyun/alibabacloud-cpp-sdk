// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineId_ == nullptr
        && this->priority_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ScheduleConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    protected:
      // The ID of the ApsaraVideo Media Processing (MPS) queue.
      shared_ptr<string> pipelineId_ {};
      // The priority of the job in the MPS queue to which the job is added.
      // 
      // *   A value of 10 indicates the highest priority.
      // *   Default value: **6**.
      shared_ptr<int32_t> priority_ {};
    };

    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Biz, biz_);
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Biz, biz_);
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->biz_ == nullptr
        && this->media_ == nullptr && this->outputUrl_ == nullptr && this->type_ == nullptr; };
      // biz Field Functions 
      bool hasBiz() const { return this->biz_ != nullptr;};
      void deleteBiz() { this->biz_ = nullptr;};
      inline string getBiz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
      inline Output& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // outputUrl Field Functions 
      bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
      void deleteOutputUrl() { this->outputUrl_ = nullptr;};
      inline string getOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
      inline Output& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> biz_ {};
      // The output file. If Type is set to OSS, set this parameter to the path of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. You can specify the path of an OSS object in one of the following formats:
      // 
      // 1.  oss://bucket/object
      // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object bucket in the path specifies an OSS bucket that resides in the same region as the intelligent production job. object in the path specifies the object path in OSS.
      shared_ptr<string> media_ {};
      shared_ptr<string> outputUrl_ {};
      // The media type. Valid values:
      // 
      // *   OSS: OSS object
      // *   Media: media asset
      shared_ptr<string> type_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Input() = default ;
      Input(const Input &) = default ;
      Input(Input &&) = default ;
      Input(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Input() = default ;
      Input& operator=(const Input &) = default ;
      Input& operator=(Input &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input file. If Type is set to OSS, set this parameter to the path of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. You can specify the path of an OSS object in one of the following formats:
      // 
      // 1.  oss://bucket/object
      // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object bucket in the path specifies an OSS bucket that resides in the same region as the intelligent production job. object in the path specifies the object path in OSS.
      shared_ptr<string> media_ {};
      // The media type. Valid values:
      // 
      // 1.  OSS: Object Storage Service (OSS) object
      // 2.  Media: media asset
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->functionName_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->jobParams_ == nullptr
        && this->name_ == nullptr && this->output_ == nullptr && this->outputFiles_ == nullptr && this->outputMediaIds_ == nullptr && this->outputUrls_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->scheduleConfig_ == nullptr && this->status_ == nullptr && this->templateId_ == nullptr
        && this->userData_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryIProductionJobResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline QueryIProductionJobResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline QueryIProductionJobResponseBody& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const QueryIProductionJobResponseBody::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, QueryIProductionJobResponseBody::Input) };
    inline QueryIProductionJobResponseBody::Input getInput() { DARABONBA_PTR_GET(input_, QueryIProductionJobResponseBody::Input) };
    inline QueryIProductionJobResponseBody& setInput(const QueryIProductionJobResponseBody::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryIProductionJobResponseBody& setInput(QueryIProductionJobResponseBody::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryIProductionJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline QueryIProductionJobResponseBody& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryIProductionJobResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const QueryIProductionJobResponseBody::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, QueryIProductionJobResponseBody::Output) };
    inline QueryIProductionJobResponseBody::Output getOutput() { DARABONBA_PTR_GET(output_, QueryIProductionJobResponseBody::Output) };
    inline QueryIProductionJobResponseBody& setOutput(const QueryIProductionJobResponseBody::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline QueryIProductionJobResponseBody& setOutput(QueryIProductionJobResponseBody::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // outputFiles Field Functions 
    bool hasOutputFiles() const { return this->outputFiles_ != nullptr;};
    void deleteOutputFiles() { this->outputFiles_ = nullptr;};
    inline const vector<string> & getOutputFiles() const { DARABONBA_PTR_GET_CONST(outputFiles_, vector<string>) };
    inline vector<string> getOutputFiles() { DARABONBA_PTR_GET(outputFiles_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputFiles(const vector<string> & outputFiles) { DARABONBA_PTR_SET_VALUE(outputFiles_, outputFiles) };
    inline QueryIProductionJobResponseBody& setOutputFiles(vector<string> && outputFiles) { DARABONBA_PTR_SET_RVALUE(outputFiles_, outputFiles) };


    // outputMediaIds Field Functions 
    bool hasOutputMediaIds() const { return this->outputMediaIds_ != nullptr;};
    void deleteOutputMediaIds() { this->outputMediaIds_ = nullptr;};
    inline const vector<string> & getOutputMediaIds() const { DARABONBA_PTR_GET_CONST(outputMediaIds_, vector<string>) };
    inline vector<string> getOutputMediaIds() { DARABONBA_PTR_GET(outputMediaIds_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputMediaIds(const vector<string> & outputMediaIds) { DARABONBA_PTR_SET_VALUE(outputMediaIds_, outputMediaIds) };
    inline QueryIProductionJobResponseBody& setOutputMediaIds(vector<string> && outputMediaIds) { DARABONBA_PTR_SET_RVALUE(outputMediaIds_, outputMediaIds) };


    // outputUrls Field Functions 
    bool hasOutputUrls() const { return this->outputUrls_ != nullptr;};
    void deleteOutputUrls() { this->outputUrls_ = nullptr;};
    inline const vector<string> & getOutputUrls() const { DARABONBA_PTR_GET_CONST(outputUrls_, vector<string>) };
    inline vector<string> getOutputUrls() { DARABONBA_PTR_GET(outputUrls_, vector<string>) };
    inline QueryIProductionJobResponseBody& setOutputUrls(const vector<string> & outputUrls) { DARABONBA_PTR_SET_VALUE(outputUrls_, outputUrls) };
    inline QueryIProductionJobResponseBody& setOutputUrls(vector<string> && outputUrls) { DARABONBA_PTR_SET_RVALUE(outputUrls_, outputUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIProductionJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline QueryIProductionJobResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const QueryIProductionJobResponseBody::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, QueryIProductionJobResponseBody::ScheduleConfig) };
    inline QueryIProductionJobResponseBody::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, QueryIProductionJobResponseBody::ScheduleConfig) };
    inline QueryIProductionJobResponseBody& setScheduleConfig(const QueryIProductionJobResponseBody::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline QueryIProductionJobResponseBody& setScheduleConfig(QueryIProductionJobResponseBody::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryIProductionJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryIProductionJobResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryIProductionJobResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The time when the job was created.
    shared_ptr<string> createTime_ {};
    // The time when the job was complete.
    shared_ptr<string> finishTime_ {};
    // The name of the algorithm that you want to use for the job. Valid values:
    // 
    // *   **Cover**: This algorithm intelligently generates a thumbnail image for a video.
    // *   **VideoClip**: This algorithm intelligently generates a summary for a video.
    // *   **VideoDelogo**: This algorithm removes logos from a video.
    // *   **VideoDetext**: This algorithm removes captions from a video.
    shared_ptr<string> functionName_ {};
    // The input file.
    shared_ptr<QueryIProductionJobResponseBody::Input> input_ {};
    // The ID of the intelligent production job.
    shared_ptr<string> jobId_ {};
    // The algorithm-specific parameters. The parameters are specified as JSON objects and vary based on the algorithm.
    shared_ptr<string> jobParams_ {};
    // The name of the intelligent production job.
    shared_ptr<string> name_ {};
    // The output file.
    shared_ptr<QueryIProductionJobResponseBody::Output> output_ {};
    // The output files.
    shared_ptr<vector<string>> outputFiles_ {};
    shared_ptr<vector<string>> outputMediaIds_ {};
    // The URLs of the output files.
    shared_ptr<vector<string>> outputUrls_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The output of the algorithm. The output is in JSON format and varies based on the algorithm. For more information, see the "Parameters of Result" section of this topic.
    shared_ptr<string> result_ {};
    // The scheduling configuration.
    shared_ptr<QueryIProductionJobResponseBody::ScheduleConfig> scheduleConfig_ {};
    // The status of the job. Valid values:
    // 
    // *   Queuing: The job is waiting in the queue.
    // *   Analysing: The job is in progress.
    // *   Fail: The job failed.
    // *   Success: The job was successful.
    shared_ptr<string> status_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The user-defined data that is returned in the response.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
