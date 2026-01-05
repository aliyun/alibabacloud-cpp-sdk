// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGETOGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendMessageToGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageToGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageToGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    SendMessageToGroupResponseBody() = default ;
    SendMessageToGroupResponseBody(const SendMessageToGroupResponseBody &) = default ;
    SendMessageToGroupResponseBody(SendMessageToGroupResponseBody &&) = default ;
    SendMessageToGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageToGroupResponseBody() = default ;
    SendMessageToGroupResponseBody& operator=(const SendMessageToGroupResponseBody &) = default ;
    SendMessageToGroupResponseBody& operator=(SendMessageToGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->messageId_ == nullptr; };
      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Result& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    protected:
      // The ID of the message.
      shared_ptr<string> messageId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendMessageToGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const SendMessageToGroupResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, SendMessageToGroupResponseBody::Result) };
    inline SendMessageToGroupResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, SendMessageToGroupResponseBody::Result) };
    inline SendMessageToGroupResponseBody& setResult(const SendMessageToGroupResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline SendMessageToGroupResponseBody& setResult(SendMessageToGroupResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The data returned.
    shared_ptr<SendMessageToGroupResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
