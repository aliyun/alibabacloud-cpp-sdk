// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLDETAILBYCALLIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLDETAILBYCALLIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallDetailByCallIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallDetailByCallIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallDetailByCallIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCallDetailByCallIdResponseBody() = default ;
    QueryCallDetailByCallIdResponseBody(const QueryCallDetailByCallIdResponseBody &) = default ;
    QueryCallDetailByCallIdResponseBody(QueryCallDetailByCallIdResponseBody &&) = default ;
    QueryCallDetailByCallIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallDetailByCallIdResponseBody() = default ;
    QueryCallDetailByCallIdResponseBody& operator=(const QueryCallDetailByCallIdResponseBody &) = default ;
    QueryCallDetailByCallIdResponseBody& operator=(QueryCallDetailByCallIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCallDetailByCallIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline QueryCallDetailByCallIdResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCallDetailByCallIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallDetailByCallIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    shared_ptr<string> code_ {};
    // The details of the call, in the JSON format.
    // 
    // *   **caller**: the calling number.
    // *   **startDate**: the time when the call was started.
    // *   **stateDesc**: the description of the call state.
    // *   **duration**: the call duration. Unit: seconds. The value **0** indicates that the user was not connected.
    // *   **callerShowNumber**: the calling number displayed to the called party.
    // *   **gmtCreate**: the time when the call request was received.
    // *   **state**: the call state. The call state is returned by the Internet service provider (ISP) in real time. For more information about call states, see [ISP-returned error codes](https://help.aliyun.com/document_detail/55085.html).
    // *   **endDate**: the time when the call was ended.
    // *   **calleeShowNumber**: the number displayed to the called party.
    // *   **callee**: the called number.
    // *   **aRingTime**: the time when Line A started to ring, in the yyyy-MM-dd HH:mm:ss format.
    // *   **aEndTime**: the time when ringing on Line A ended, in the yyyy-MM-dd HH:mm:ss format.
    // *   **bRingTime**: the time when Line B started to ring, in the yyyy-MM-dd HH:mm:ss format.
    // *   **bEndTime**: the time when ringing on Line B ended, in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
