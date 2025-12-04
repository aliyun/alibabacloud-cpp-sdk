// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryRobotTaskCallDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotTaskCallDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotTaskCallDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryRobotTaskCallDetailResponseBody() = default ;
    QueryRobotTaskCallDetailResponseBody(const QueryRobotTaskCallDetailResponseBody &) = default ;
    QueryRobotTaskCallDetailResponseBody(QueryRobotTaskCallDetailResponseBody &&) = default ;
    QueryRobotTaskCallDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotTaskCallDetailResponseBody() = default ;
    QueryRobotTaskCallDetailResponseBody& operator=(const QueryRobotTaskCallDetailResponseBody &) = default ;
    QueryRobotTaskCallDetailResponseBody& operator=(QueryRobotTaskCallDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRobotTaskCallDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryRobotTaskCallDetailResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRobotTaskCallDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRobotTaskCallDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The call details of a robocall task, in the JSON format.
    // 
    // *   **taskId**: the unique ID of the robocall task.
    // *   **caller**: the calling number.
    // *   **called**: the called number.
    // *   **duration**: the call duration. Unit: seconds.
    // *   **label**: the label of the called party.
    // *   **dialogCount**: the number of conversation rounds in the call.
    // *   **callResult**: the call result.
    // *   **hangupDirection**: the party who hung up. Valid values: **0**: the robot. **1**: the called party.
    // *   **transferResult**: the result of transferring the call to an agent. Valid values: **1**, **0**, and **3**. The value 1 indicates that the call was transferred to the agent. The value 0 indicates that the call failed to be transferred to the agent. The value 3 indicates that the call was not transferred to the agent.
    // *   **transferNumber**: the phone number of the agent to whom the call was transferred.
    // *   **transferFailReason**: the reason why the call failed to be transferred to the agent.
    // *   **callId**: the unique receipt ID of the call, in the `taskId^bizId` format.
    // *   **recallCurTimes**: the number of recalls.
    // *   **callStartTime**: the start time of the call.
    // *   **callEndTime**: the end time of the call.
    // *   **sureCount**: the number of times that the robocall task was affirmed.
    // *   **denyCount**: the number of times that the robocall task was denied.
    // *   **rejectCount**: the number of times that the robocall task was rejected.
    // *   **customCount**: the number of times that the robocall task was customized.
    // *   **knowledgeCount**: the number of times that the knowledge base was queried.
    // *   **defaultCount**: the default number of calls.
    // *   **knowledgeBusinessCount**: the number of call failures caused by the business issues in the knowledge base.
    // *   **knowledgeCommonCount**: the number of call failures caused by the common issues in the knowledge base.
    // *   **recordStatus**: Indicates whether the call has a recording file. Valid values: **1**: The call has a recording file. **2**: The call does not have a recording file.
    // *   **recordFile**: the download URL of the recording file.
    // *   **dialogDetail**: the dialog details, in a JSON-formatted array. **role**: the object of the speech. **content**: the content of the speech. **speakTime**: the time of the speech.
    std::shared_ptr<string> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
