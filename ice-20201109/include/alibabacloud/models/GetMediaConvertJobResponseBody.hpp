// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertInput.hpp>
#include <alibabacloud/models/MediaConvertOutputGroup.hpp>
#include <alibabacloud/models/MediaConvertOutput.hpp>
#include <alibabacloud/models/MediaConvertOutputDetail.hpp>
#include <alibabacloud/models/MediaConvertOutputGroupDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConvertJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConvertJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConvertJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaConvertJobResponseBody() = default ;
    GetMediaConvertJobResponseBody(const GetMediaConvertJobResponseBody &) = default ;
    GetMediaConvertJobResponseBody(GetMediaConvertJobResponseBody &&) = default ;
    GetMediaConvertJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConvertJobResponseBody() = default ;
    GetMediaConvertJobResponseBody& operator=(const GetMediaConvertJobResponseBody &) = default ;
    GetMediaConvertJobResponseBody& operator=(GetMediaConvertJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Job : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Job& obj) { 
        DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(OutputDetails, outputDetails_);
        DARABONBA_PTR_TO_JSON(OutputGroupDetails, outputGroupDetails_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, Job& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(OutputDetails, outputDetails_);
        DARABONBA_PTR_FROM_JSON(OutputGroupDetails, outputGroupDetails_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      Job() = default ;
      Job(const Job &) = default ;
      Job(Job &&) = default ;
      Job(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Job() = default ;
      Job& operator=(const Job &) = default ;
      Job& operator=(Job &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(Inputs, inputs_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
          DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
          DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputs_ == nullptr
        && this->jobName_ == nullptr && this->outputGroups_ == nullptr && this->outputs_ == nullptr; };
        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline const vector<MediaConvertInput> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<MediaConvertInput>) };
        inline vector<MediaConvertInput> getInputs() { DARABONBA_PTR_GET(inputs_, vector<MediaConvertInput>) };
        inline Config& setInputs(const vector<MediaConvertInput> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
        inline Config& setInputs(vector<MediaConvertInput> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Config& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // outputGroups Field Functions 
        bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
        void deleteOutputGroups() { this->outputGroups_ = nullptr;};
        inline const vector<MediaConvertOutputGroup> & getOutputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<MediaConvertOutputGroup>) };
        inline vector<MediaConvertOutputGroup> getOutputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<MediaConvertOutputGroup>) };
        inline Config& setOutputGroups(const vector<MediaConvertOutputGroup> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
        inline Config& setOutputGroups(vector<MediaConvertOutputGroup> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


        // outputs Field Functions 
        bool hasOutputs() const { return this->outputs_ != nullptr;};
        void deleteOutputs() { this->outputs_ = nullptr;};
        inline const vector<MediaConvertOutput> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<MediaConvertOutput>) };
        inline vector<MediaConvertOutput> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<MediaConvertOutput>) };
        inline Config& setOutputs(const vector<MediaConvertOutput> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
        inline Config& setOutputs(vector<MediaConvertOutput> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


      protected:
        // The inputs of the transcoding task.
        shared_ptr<vector<MediaConvertInput>> inputs_ {};
        shared_ptr<string> jobName_ {};
        // The output group configurations.
        shared_ptr<vector<MediaConvertOutputGroup>> outputGroups_ {};
        // The output configurations.
        shared_ptr<vector<MediaConvertOutput>> outputs_ {};
      };

      virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->jobId_ == nullptr
        && this->message_ == nullptr && this->outputDetails_ == nullptr && this->outputGroupDetails_ == nullptr && this->percent_ == nullptr && this->pipelineId_ == nullptr
        && this->requestId_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
      // clientToken Field Functions 
      bool hasClientToken() const { return this->clientToken_ != nullptr;};
      void deleteClientToken() { this->clientToken_ = nullptr;};
      inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
      inline Job& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Job& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Job::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Job::Config) };
      inline Job::Config getConfig() { DARABONBA_PTR_GET(config_, Job::Config) };
      inline Job& setConfig(const Job::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Job& setConfig(Job::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Job& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Job& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Job& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // outputDetails Field Functions 
      bool hasOutputDetails() const { return this->outputDetails_ != nullptr;};
      void deleteOutputDetails() { this->outputDetails_ = nullptr;};
      inline const vector<MediaConvertOutputDetail> & getOutputDetails() const { DARABONBA_PTR_GET_CONST(outputDetails_, vector<MediaConvertOutputDetail>) };
      inline vector<MediaConvertOutputDetail> getOutputDetails() { DARABONBA_PTR_GET(outputDetails_, vector<MediaConvertOutputDetail>) };
      inline Job& setOutputDetails(const vector<MediaConvertOutputDetail> & outputDetails) { DARABONBA_PTR_SET_VALUE(outputDetails_, outputDetails) };
      inline Job& setOutputDetails(vector<MediaConvertOutputDetail> && outputDetails) { DARABONBA_PTR_SET_RVALUE(outputDetails_, outputDetails) };


      // outputGroupDetails Field Functions 
      bool hasOutputGroupDetails() const { return this->outputGroupDetails_ != nullptr;};
      void deleteOutputGroupDetails() { this->outputGroupDetails_ = nullptr;};
      inline const vector<MediaConvertOutputGroupDetail> & getOutputGroupDetails() const { DARABONBA_PTR_GET_CONST(outputGroupDetails_, vector<MediaConvertOutputGroupDetail>) };
      inline vector<MediaConvertOutputGroupDetail> getOutputGroupDetails() { DARABONBA_PTR_GET(outputGroupDetails_, vector<MediaConvertOutputGroupDetail>) };
      inline Job& setOutputGroupDetails(const vector<MediaConvertOutputGroupDetail> & outputGroupDetails) { DARABONBA_PTR_SET_VALUE(outputGroupDetails_, outputGroupDetails) };
      inline Job& setOutputGroupDetails(vector<MediaConvertOutputGroupDetail> && outputGroupDetails) { DARABONBA_PTR_SET_RVALUE(outputGroupDetails_, outputGroupDetails) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline Job& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline Job& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Job& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Job& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline Job& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The idempotency key of the request for creating the transcoding task.
      shared_ptr<string> clientToken_ {};
      // The error code returned when the transcoding task failed.
      shared_ptr<string> code_ {};
      // The configurations of the transcoding task.
      shared_ptr<Job::Config> config_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> finishTime_ {};
      // The ID of the transcoding task, which is a 32-bit string.
      shared_ptr<string> jobId_ {};
      // The error message returned when the transcoding task failed.
      shared_ptr<string> message_ {};
      // The details of the transcoded outputs, each corresponding to an output configuration.
      shared_ptr<vector<MediaConvertOutputDetail>> outputDetails_ {};
      // The details of the output groups, each corresponding to an output group configuration.
      shared_ptr<vector<MediaConvertOutputGroupDetail>> outputGroupDetails_ {};
      shared_ptr<int32_t> percent_ {};
      // The ID of the queue.
      shared_ptr<string> pipelineId_ {};
      // The ID of the request for creating the transcoding task.
      shared_ptr<string> requestId_ {};
      // The status of the transcoding task. Valid values:
      // 
      // *   Inited: The task is initialized.
      // *   Running
      // *   Success
      // *   Failed
      // *   Cancelled
      shared_ptr<string> state_ {};
      // The user data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->job_ == nullptr
        && this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetMediaConvertJobResponseBody::Job & getJob() const { DARABONBA_PTR_GET_CONST(job_, GetMediaConvertJobResponseBody::Job) };
    inline GetMediaConvertJobResponseBody::Job getJob() { DARABONBA_PTR_GET(job_, GetMediaConvertJobResponseBody::Job) };
    inline GetMediaConvertJobResponseBody& setJob(const GetMediaConvertJobResponseBody::Job & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetMediaConvertJobResponseBody& setJob(GetMediaConvertJobResponseBody::Job && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConvertJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The transcoding task.
    shared_ptr<GetMediaConvertJobResponseBody::Job> job_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
