// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYROBOTTASKCALLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryRobotTaskCallListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRobotTaskCallListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRobotTaskCallListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryRobotTaskCallListResponseBody() = default ;
    QueryRobotTaskCallListResponseBody(const QueryRobotTaskCallListResponseBody &) = default ;
    QueryRobotTaskCallListResponseBody(QueryRobotTaskCallListResponseBody &&) = default ;
    QueryRobotTaskCallListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRobotTaskCallListResponseBody() = default ;
    QueryRobotTaskCallListResponseBody& operator=(const QueryRobotTaskCallListResponseBody &) = default ;
    QueryRobotTaskCallListResponseBody& operator=(QueryRobotTaskCallListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRobotTaskCallListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryRobotTaskCallListResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRobotTaskCallListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRobotTaskCallListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The information about the robocall task, which is a JSON-formatted array.
    // 
    // *   **taskId**: the unique ID of the robocall task.
    // *   **caller**: the calling number.
    // *   **called**: the called number.
    // *   **duration**: the call duration. Unit: seconds.
    // *   **label**: the label of the called party.
    // *   **dialogCount**: the number of conversation rounds in the call.
    // *   **callResult**: the call result.
    // *   **hangupDirection**: the party who hung up. Valid values: **1** and **0**. The value 1 indicates the called party, and the value 0 indicates the robot.
    // *   **transferResult**: the result of transferring the call to an agent. Valid values: **1**, **0**, and **3**. The value 1 indicates that the call was transferred to an agent. The value 0 indicates that the call failed to be transferred to an agent. The value 3 indicates that the call was not transferred to an agent.
    // *   **transferNumber**: the phone number of the agent to whom the call was transferred.
    // *   **transferFailReason**: the reason why the call failed to be transferred to an agent.
    // *   **callId**: the unique receipt ID of the call.
    // *   **recallCurTimes**: the number of recalls.
    // *   **callStartTime**: the start time of the call.
    // *   **callEndTime**: the end time of the call.
    // *   **sureCount**: the number of times that the robocall task was acknowledged.
    // *   **denyCount**: the number of times that the robocall task was denied.
    // *   **rejectCount**: the number of times that the robocall task was rejected.
    // *   **customCount**: the number of times that the robocall task was customized.
    // *   **knowledgeCount**: the number of times that the knowledge base was queried.
    // *   **defaultCount**: the default number of calls.
    // *   **knowledgeBusinessCount**: the number of call failures caused by the business issues in the knowledge base.
    // *   **knowledgeCommonCount**: the number of call failures caused by the common issues in the knowledge base.
    // *   ****
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
