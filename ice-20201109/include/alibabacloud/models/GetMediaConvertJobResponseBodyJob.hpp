// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONVERTJOBRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaConvertJobResponseBodyJobConfig.hpp>
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
  class GetMediaConvertJobResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConvertJobResponseBodyJob& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetMediaConvertJobResponseBodyJob& obj) { 
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
    GetMediaConvertJobResponseBodyJob() = default ;
    GetMediaConvertJobResponseBodyJob(const GetMediaConvertJobResponseBodyJob &) = default ;
    GetMediaConvertJobResponseBodyJob(GetMediaConvertJobResponseBodyJob &&) = default ;
    GetMediaConvertJobResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConvertJobResponseBodyJob() = default ;
    GetMediaConvertJobResponseBodyJob& operator=(const GetMediaConvertJobResponseBodyJob &) = default ;
    GetMediaConvertJobResponseBodyJob& operator=(GetMediaConvertJobResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->code_ != nullptr && this->config_ != nullptr && this->createTime_ != nullptr && this->finishTime_ != nullptr && this->jobId_ != nullptr
        && this->message_ != nullptr && this->outputDetails_ != nullptr && this->outputGroupDetails_ != nullptr && this->percent_ != nullptr && this->pipelineId_ != nullptr
        && this->requestId_ != nullptr && this->state_ != nullptr && this->userData_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetMediaConvertJobResponseBodyJob& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMediaConvertJobResponseBodyJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::GetMediaConvertJobResponseBodyJobConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::GetMediaConvertJobResponseBodyJobConfig) };
    inline Models::GetMediaConvertJobResponseBodyJobConfig config() { DARABONBA_PTR_GET(config_, Models::GetMediaConvertJobResponseBodyJobConfig) };
    inline GetMediaConvertJobResponseBodyJob& setConfig(const Models::GetMediaConvertJobResponseBodyJobConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetMediaConvertJobResponseBodyJob& setConfig(Models::GetMediaConvertJobResponseBodyJobConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMediaConvertJobResponseBodyJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetMediaConvertJobResponseBodyJob& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetMediaConvertJobResponseBodyJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMediaConvertJobResponseBodyJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputDetails Field Functions 
    bool hasOutputDetails() const { return this->outputDetails_ != nullptr;};
    void deleteOutputDetails() { this->outputDetails_ = nullptr;};
    inline const vector<Models::MediaConvertOutputDetail> & outputDetails() const { DARABONBA_PTR_GET_CONST(outputDetails_, vector<Models::MediaConvertOutputDetail>) };
    inline vector<Models::MediaConvertOutputDetail> outputDetails() { DARABONBA_PTR_GET(outputDetails_, vector<Models::MediaConvertOutputDetail>) };
    inline GetMediaConvertJobResponseBodyJob& setOutputDetails(const vector<Models::MediaConvertOutputDetail> & outputDetails) { DARABONBA_PTR_SET_VALUE(outputDetails_, outputDetails) };
    inline GetMediaConvertJobResponseBodyJob& setOutputDetails(vector<Models::MediaConvertOutputDetail> && outputDetails) { DARABONBA_PTR_SET_RVALUE(outputDetails_, outputDetails) };


    // outputGroupDetails Field Functions 
    bool hasOutputGroupDetails() const { return this->outputGroupDetails_ != nullptr;};
    void deleteOutputGroupDetails() { this->outputGroupDetails_ = nullptr;};
    inline const vector<Models::MediaConvertOutputGroupDetail> & outputGroupDetails() const { DARABONBA_PTR_GET_CONST(outputGroupDetails_, vector<Models::MediaConvertOutputGroupDetail>) };
    inline vector<Models::MediaConvertOutputGroupDetail> outputGroupDetails() { DARABONBA_PTR_GET(outputGroupDetails_, vector<Models::MediaConvertOutputGroupDetail>) };
    inline GetMediaConvertJobResponseBodyJob& setOutputGroupDetails(const vector<Models::MediaConvertOutputGroupDetail> & outputGroupDetails) { DARABONBA_PTR_SET_VALUE(outputGroupDetails_, outputGroupDetails) };
    inline GetMediaConvertJobResponseBodyJob& setOutputGroupDetails(vector<Models::MediaConvertOutputGroupDetail> && outputGroupDetails) { DARABONBA_PTR_SET_RVALUE(outputGroupDetails_, outputGroupDetails) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline int32_t percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
    inline GetMediaConvertJobResponseBodyJob& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetMediaConvertJobResponseBodyJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaConvertJobResponseBodyJob& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetMediaConvertJobResponseBodyJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetMediaConvertJobResponseBodyJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The idempotency key of the request for creating the transcoding task.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The error code returned when the transcoding task failed.
    std::shared_ptr<string> code_ = nullptr;
    // The configurations of the transcoding task.
    std::shared_ptr<Models::GetMediaConvertJobResponseBodyJobConfig> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the transcoding task, which is a 32-bit string.
    std::shared_ptr<string> jobId_ = nullptr;
    // The error message returned when the transcoding task failed.
    std::shared_ptr<string> message_ = nullptr;
    // The details of the transcoded outputs, each corresponding to an output configuration.
    std::shared_ptr<vector<Models::MediaConvertOutputDetail>> outputDetails_ = nullptr;
    // The details of the output groups, each corresponding to an output group configuration.
    std::shared_ptr<vector<Models::MediaConvertOutputGroupDetail>> outputGroupDetails_ = nullptr;
    std::shared_ptr<int32_t> percent_ = nullptr;
    // The ID of the queue.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The ID of the request for creating the transcoding task.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the transcoding task. Valid values:
    // 
    // *   Inited: The task is initialized.
    // *   Running
    // *   Success
    // *   Failed
    // *   Cancelled
    std::shared_ptr<string> state_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
