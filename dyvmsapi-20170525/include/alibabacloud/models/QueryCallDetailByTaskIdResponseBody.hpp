// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLDETAILBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLDETAILBYTASKIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallDetailByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallDetailByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallDetailByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCallDetailByTaskIdResponseBody() = default ;
    QueryCallDetailByTaskIdResponseBody(const QueryCallDetailByTaskIdResponseBody &) = default ;
    QueryCallDetailByTaskIdResponseBody(QueryCallDetailByTaskIdResponseBody &&) = default ;
    QueryCallDetailByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallDetailByTaskIdResponseBody() = default ;
    QueryCallDetailByTaskIdResponseBody& operator=(const QueryCallDetailByTaskIdResponseBody &) = default ;
    QueryCallDetailByTaskIdResponseBody& operator=(QueryCallDetailByTaskIdResponseBody &&) = default ;
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
    inline QueryCallDetailByTaskIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryCallDetailByTaskIdResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCallDetailByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallDetailByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    std::shared_ptr<string> code_ = nullptr;
    // The call details of the outbound robocall task, in the JSON format.
    // 
    // *   **startDate**: the time when the call was answered.
    // 
    // *   **stateDesc**: the reason why the call was hung up. If the status code of early media was returned, this parameter indicates the reason why the status code of early media was used.
    // 
    // *   **statusCode**: the status code.
    // 
    // *   **EndDate**: the time when the call was ended.
    // 
    // *   **calleeShowNumber**: the calling number displayed to the called party.
    // 
    // *   **callee**: the called number.
    // 
    // *   **duration**: the billing duration.
    // 
    // *   **gmtCreate**: the time when the outbound robocall task was created.
    // 
    // *   **hangupDirection**: the party who hung up.
    // 
    // *   **tags**: the call tags.
    // 
    // *   **dialogCount**: the number of conversation rounds in the call.
    // 
    // *   **sureCount**: the number of times that the robocall task was acknowledged.
    // 
    // *   **denyCount**: the number of times that the robocall task was denied.
    // 
    // *   **rejectCount**: the number of times that the robocall task was rejected.
    // 
    // *   **customCount**: the number of times that the robocall task was customized.
    // 
    // *   **knowledgeCount**: the number of times that the knowledge base was queried.
    // 
    // *   **recordFile**: the download URL of the recording file. The URL is valid only for 48 hours. The recording file must be downloaded in time.
    // 
    // *   **callId**: the call ID.
    // 
    // *   **recordStatus**: indicates whether a recording file was available. Valid values:
    // 
    //     *   1: A recording file was available.
    //     *   2: No recording file was available.
    // 
    // *   **knowledgeCommonCount**: the number of call failures caused by the common issues in the knowledge base.
    // 
    // *   **knowledgeBusinessCount**: the number of call failures caused by the business issues in the knowledge base.
    // 
    // *   **callee**: the called number.
    // 
    // *   **dialogDetail**: the conversation details. The value is a JSON array that contains the following parameters:
    // 
    //     *   **role**: the role who spoke.
    //     *   **content**: the content of the speech.
    //     *   **time**: the start time of the speech.
    // 
    // > The preceding parameters are for reference only. The actually returned parameters prevail.
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
