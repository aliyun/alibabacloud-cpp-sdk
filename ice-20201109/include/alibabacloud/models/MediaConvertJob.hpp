// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOB_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertJobConfig.hpp>
#include <vector>
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
  class MediaConvertJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, MediaConvertJob& obj) { 
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
    MediaConvertJob() = default ;
    MediaConvertJob(const MediaConvertJob &) = default ;
    MediaConvertJob(MediaConvertJob &&) = default ;
    MediaConvertJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJob() = default ;
    MediaConvertJob& operator=(const MediaConvertJob &) = default ;
    MediaConvertJob& operator=(MediaConvertJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->code_ == nullptr && return this->config_ == nullptr && return this->createTime_ == nullptr && return this->finishTime_ == nullptr && return this->jobId_ == nullptr
        && return this->message_ == nullptr && return this->outputDetails_ == nullptr && return this->outputGroupDetails_ == nullptr && return this->percent_ == nullptr && return this->pipelineId_ == nullptr
        && return this->requestId_ == nullptr && return this->state_ == nullptr && return this->userData_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline MediaConvertJob& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MediaConvertJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const MediaConvertJobConfig & config() const { DARABONBA_PTR_GET_CONST(config_, MediaConvertJobConfig) };
    inline MediaConvertJobConfig config() { DARABONBA_PTR_GET(config_, MediaConvertJobConfig) };
    inline MediaConvertJob& setConfig(const MediaConvertJobConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline MediaConvertJob& setConfig(MediaConvertJobConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MediaConvertJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline MediaConvertJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline MediaConvertJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MediaConvertJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputDetails Field Functions 
    bool hasOutputDetails() const { return this->outputDetails_ != nullptr;};
    void deleteOutputDetails() { this->outputDetails_ = nullptr;};
    inline const vector<MediaConvertOutputDetail> & outputDetails() const { DARABONBA_PTR_GET_CONST(outputDetails_, vector<MediaConvertOutputDetail>) };
    inline vector<MediaConvertOutputDetail> outputDetails() { DARABONBA_PTR_GET(outputDetails_, vector<MediaConvertOutputDetail>) };
    inline MediaConvertJob& setOutputDetails(const vector<MediaConvertOutputDetail> & outputDetails) { DARABONBA_PTR_SET_VALUE(outputDetails_, outputDetails) };
    inline MediaConvertJob& setOutputDetails(vector<MediaConvertOutputDetail> && outputDetails) { DARABONBA_PTR_SET_RVALUE(outputDetails_, outputDetails) };


    // outputGroupDetails Field Functions 
    bool hasOutputGroupDetails() const { return this->outputGroupDetails_ != nullptr;};
    void deleteOutputGroupDetails() { this->outputGroupDetails_ = nullptr;};
    inline const vector<MediaConvertOutputGroupDetail> & outputGroupDetails() const { DARABONBA_PTR_GET_CONST(outputGroupDetails_, vector<MediaConvertOutputGroupDetail>) };
    inline vector<MediaConvertOutputGroupDetail> outputGroupDetails() { DARABONBA_PTR_GET(outputGroupDetails_, vector<MediaConvertOutputGroupDetail>) };
    inline MediaConvertJob& setOutputGroupDetails(const vector<MediaConvertOutputGroupDetail> & outputGroupDetails) { DARABONBA_PTR_SET_VALUE(outputGroupDetails_, outputGroupDetails) };
    inline MediaConvertJob& setOutputGroupDetails(vector<MediaConvertOutputGroupDetail> && outputGroupDetails) { DARABONBA_PTR_SET_RVALUE(outputGroupDetails_, outputGroupDetails) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline MediaConvertJob& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline MediaConvertJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MediaConvertJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline MediaConvertJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline MediaConvertJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<MediaConvertJobConfig> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<MediaConvertOutputDetail>> outputDetails_ = nullptr;
    std::shared_ptr<vector<MediaConvertOutputGroupDetail>> outputGroupDetails_ = nullptr;
    std::shared_ptr<int32_t> percent_ = nullptr;
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
