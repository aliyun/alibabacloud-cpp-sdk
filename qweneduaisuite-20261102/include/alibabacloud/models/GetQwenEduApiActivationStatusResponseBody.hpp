// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQWENEDUAPIACTIVATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQWENEDUAPIACTIVATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class GetQwenEduApiActivationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQwenEduApiActivationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQwenEduApiActivationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetQwenEduApiActivationStatusResponseBody() = default ;
    GetQwenEduApiActivationStatusResponseBody(const GetQwenEduApiActivationStatusResponseBody &) = default ;
    GetQwenEduApiActivationStatusResponseBody(GetQwenEduApiActivationStatusResponseBody &&) = default ;
    GetQwenEduApiActivationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQwenEduApiActivationStatusResponseBody() = default ;
    GetQwenEduApiActivationStatusResponseBody& operator=(const GetQwenEduApiActivationStatusResponseBody &) = default ;
    GetQwenEduApiActivationStatusResponseBody& operator=(GetQwenEduApiActivationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(failCode, failCode_);
        DARABONBA_PTR_TO_JSON(failMessage, failMessage_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(failCode, failCode_);
        DARABONBA_PTR_FROM_JSON(failMessage, failMessage_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->failCode_ == nullptr
        && this->failMessage_ == nullptr && this->status_ == nullptr; };
      // failCode Field Functions 
      bool hasFailCode() const { return this->failCode_ != nullptr;};
      void deleteFailCode() { this->failCode_ = nullptr;};
      inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
      inline Data& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


      // failMessage Field Functions 
      bool hasFailMessage() const { return this->failMessage_ != nullptr;};
      void deleteFailMessage() { this->failMessage_ = nullptr;};
      inline string getFailMessage() const { DARABONBA_PTR_GET_DEFAULT(failMessage_, "") };
      inline Data& setFailMessage(string failMessage) { DARABONBA_PTR_SET_VALUE(failMessage_, failMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The **failure code**. For more information, see 3.4.
      shared_ptr<string> failCode_ {};
      // The **failure description**.
      shared_ptr<string> failMessage_ {};
      // The activation status. Valid values:
      // - ACTIVE: Activated.
      // - ACTIVATING: Activating.
      // - FAILED: Activation failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQwenEduApiActivationStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQwenEduApiActivationStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQwenEduApiActivationStatusResponseBody::Data) };
    inline GetQwenEduApiActivationStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQwenEduApiActivationStatusResponseBody::Data) };
    inline GetQwenEduApiActivationStatusResponseBody& setData(const GetQwenEduApiActivationStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQwenEduApiActivationStatusResponseBody& setData(GetQwenEduApiActivationStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQwenEduApiActivationStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQwenEduApiActivationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API status or POP error code.
    shared_ptr<string> code_ {};
    // The activation result.
    shared_ptr<GetQwenEduApiActivationStatusResponseBody::Data> data_ {};
    // The request error message.
    shared_ptr<string> message_ {};
    // The **POP request ID**. This field is not returned if signature verification or identity authentication fails.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
