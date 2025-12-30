// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBWITHOUTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBWITHOUTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertInput.hpp>
#include <alibabacloud/models/MediaConvertOutputGroup.hpp>
#include <alibabacloud/models/MediaConvertOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobWithoutDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobWithoutDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobWithoutDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    MediaConvertJobWithoutDetail() = default ;
    MediaConvertJobWithoutDetail(const MediaConvertJobWithoutDetail &) = default ;
    MediaConvertJobWithoutDetail(MediaConvertJobWithoutDetail &&) = default ;
    MediaConvertJobWithoutDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobWithoutDetail() = default ;
    MediaConvertJobWithoutDetail& operator=(const MediaConvertJobWithoutDetail &) = default ;
    MediaConvertJobWithoutDetail& operator=(MediaConvertJobWithoutDetail &&) = default ;
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
      shared_ptr<vector<MediaConvertInput>> inputs_ {};
      shared_ptr<string> jobName_ {};
      shared_ptr<vector<MediaConvertOutputGroup>> outputGroups_ {};
      shared_ptr<vector<MediaConvertOutput>> outputs_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->finishTime_ == nullptr && this->jobId_ == nullptr
        && this->message_ == nullptr && this->pipelineId_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr && this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline MediaConvertJobWithoutDetail& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MediaConvertJobWithoutDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const MediaConvertJobWithoutDetail::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, MediaConvertJobWithoutDetail::Config) };
    inline MediaConvertJobWithoutDetail::Config getConfig() { DARABONBA_PTR_GET(config_, MediaConvertJobWithoutDetail::Config) };
    inline MediaConvertJobWithoutDetail& setConfig(const MediaConvertJobWithoutDetail::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline MediaConvertJobWithoutDetail& setConfig(MediaConvertJobWithoutDetail::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MediaConvertJobWithoutDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline MediaConvertJobWithoutDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline MediaConvertJobWithoutDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MediaConvertJobWithoutDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline MediaConvertJobWithoutDetail& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MediaConvertJobWithoutDetail& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline MediaConvertJobWithoutDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline MediaConvertJobWithoutDetail& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> code_ {};
    shared_ptr<MediaConvertJobWithoutDetail::Config> config_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> finishTime_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
