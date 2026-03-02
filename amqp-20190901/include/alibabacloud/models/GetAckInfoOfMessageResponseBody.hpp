// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACKINFOOFMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetAckInfoOfMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAckInfoOfMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAckInfoOfMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAckInfoOfMessageResponseBody() = default ;
    GetAckInfoOfMessageResponseBody(const GetAckInfoOfMessageResponseBody &) = default ;
    GetAckInfoOfMessageResponseBody(GetAckInfoOfMessageResponseBody &&) = default ;
    GetAckInfoOfMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAckInfoOfMessageResponseBody() = default ;
    GetAckInfoOfMessageResponseBody& operator=(const GetAckInfoOfMessageResponseBody &) = default ;
    GetAckInfoOfMessageResponseBody& operator=(GetAckInfoOfMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AckErrorInfo, ackErrorInfo_);
        DARABONBA_PTR_TO_JSON(AckResult, ackResult_);
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_ANY_TO_JSON(Property, property_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AckErrorInfo, ackErrorInfo_);
        DARABONBA_PTR_FROM_JSON(AckResult, ackResult_);
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_ANY_FROM_JSON(Property, property_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
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
      virtual bool empty() const override { return this->ackErrorInfo_ == nullptr
        && this->ackResult_ == nullptr && this->action_ == nullptr && this->code_ == nullptr && this->property_ == nullptr && this->timeStamp_ == nullptr; };
      // ackErrorInfo Field Functions 
      bool hasAckErrorInfo() const { return this->ackErrorInfo_ != nullptr;};
      void deleteAckErrorInfo() { this->ackErrorInfo_ = nullptr;};
      inline string getAckErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(ackErrorInfo_, "") };
      inline Data& setAckErrorInfo(string ackErrorInfo) { DARABONBA_PTR_SET_VALUE(ackErrorInfo_, ackErrorInfo) };


      // ackResult Field Functions 
      bool hasAckResult() const { return this->ackResult_ != nullptr;};
      void deleteAckResult() { this->ackResult_ = nullptr;};
      inline string getAckResult() const { DARABONBA_PTR_GET_DEFAULT(ackResult_, "") };
      inline Data& setAckResult(string ackResult) { DARABONBA_PTR_SET_VALUE(ackResult_, ackResult) };


      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline Data& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // property Field Functions 
      bool hasProperty() const { return this->property_ != nullptr;};
      void deleteProperty() { this->property_ = nullptr;};
      inline       const Darabonba::Json & getProperty() const { DARABONBA_GET(property_) };
      Darabonba::Json & getProperty() { DARABONBA_GET(property_) };
      inline Data& setProperty(const Darabonba::Json & property) { DARABONBA_SET_VALUE(property_, property) };
      inline Data& setProperty(Darabonba::Json && property) { DARABONBA_SET_RVALUE(property_, property) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline Data& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      shared_ptr<string> ackErrorInfo_ {};
      shared_ptr<string> ackResult_ {};
      shared_ptr<string> action_ {};
      shared_ptr<string> code_ {};
      Darabonba::Json property_ {};
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAckInfoOfMessageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAckInfoOfMessageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAckInfoOfMessageResponseBody::Data>) };
    inline vector<GetAckInfoOfMessageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAckInfoOfMessageResponseBody::Data>) };
    inline GetAckInfoOfMessageResponseBody& setData(const vector<GetAckInfoOfMessageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAckInfoOfMessageResponseBody& setData(vector<GetAckInfoOfMessageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAckInfoOfMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAckInfoOfMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAckInfoOfMessageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<vector<GetAckInfoOfMessageResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
