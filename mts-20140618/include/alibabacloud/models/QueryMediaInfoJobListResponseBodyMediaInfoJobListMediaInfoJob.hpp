// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOB_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& obj) { 
      DARABONBA_PTR_TO_JSON(Async, async_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Async, async_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob &&) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& operator=(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& operator=(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->async_ == nullptr
        && return this->code_ == nullptr && return this->creationTime_ == nullptr && return this->input_ == nullptr && return this->jobId_ == nullptr && return this->MNSMessageResult_ == nullptr
        && return this->message_ == nullptr && return this->pipelineId_ == nullptr && return this->properties_ == nullptr && return this->state_ == nullptr && return this->userData_ == nullptr; };
    // async Field Functions 
    bool hasAsync() const { return this->async_ != nullptr;};
    void deleteAsync() { this->async_ = nullptr;};
    inline bool async() const { DARABONBA_PTR_GET_DEFAULT(async_, false) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setAsync(bool async) { DARABONBA_PTR_SET_VALUE(async_, async) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput) };
    inline Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput input() { DARABONBA_PTR_GET(input_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setInput(const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setInput(Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // MNSMessageResult Field Functions 
    bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
    void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
    inline const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult & MNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult) };
    inline Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult MNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setMNSMessageResult(const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult & MNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, MNSMessageResult) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setMNSMessageResult(Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult && MNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, MNSMessageResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties) };
    inline Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties properties() { DARABONBA_PTR_GET(properties_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setProperties(const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setProperties(Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Indicates whether the job is in asynchronous mode.
    std::shared_ptr<bool> async_ = nullptr;
    // The error code returned if the job fails.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about the job input.
    std::shared_ptr<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobInput> input_ = nullptr;
    // The ID of the job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The message sent by MNS to notify you of the job result.
    std::shared_ptr<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobMNSMessageResult> MNSMessageResult_ = nullptr;
    // The error message returned if the job fails.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the MPS queue.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The information about the input file. For more information, see [AliyunProperties](https://help.aliyun.com/document_detail/29251.html).
    std::shared_ptr<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties> properties_ = nullptr;
    // The status of the job.
    // 
    // *   **Analyzing**: The job is being run.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> state_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
