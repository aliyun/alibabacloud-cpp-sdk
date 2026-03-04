// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateApiDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApiDestinationResponseBody() = default ;
    CreateApiDestinationResponseBody(const CreateApiDestinationResponseBody &) = default ;
    CreateApiDestinationResponseBody(CreateApiDestinationResponseBody &&) = default ;
    CreateApiDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiDestinationResponseBody() = default ;
    CreateApiDestinationResponseBody& operator=(const CreateApiDestinationResponseBody &) = default ;
    CreateApiDestinationResponseBody& operator=(CreateApiDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Date : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Date& obj) { 
        DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      };
      friend void from_json(const Darabonba::Json& j, Date& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      };
      Date() = default ;
      Date(const Date &) = default ;
      Date(Date &&) = default ;
      Date(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Date() = default ;
      Date& operator=(const Date &) = default ;
      Date& operator=(Date &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiDestinationName_ == nullptr; };
      // apiDestinationName Field Functions 
      bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
      void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
      inline string getApiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
      inline Date& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    protected:
      // The name of the API destination.
      shared_ptr<string> apiDestinationName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->date_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateApiDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline const CreateApiDestinationResponseBody::Date & getDate() const { DARABONBA_PTR_GET_CONST(date_, CreateApiDestinationResponseBody::Date) };
    inline CreateApiDestinationResponseBody::Date getDate() { DARABONBA_PTR_GET(date_, CreateApiDestinationResponseBody::Date) };
    inline CreateApiDestinationResponseBody& setDate(const CreateApiDestinationResponseBody::Date & date) { DARABONBA_PTR_SET_VALUE(date_, date) };
    inline CreateApiDestinationResponseBody& setDate(CreateApiDestinationResponseBody::Date && date) { DARABONBA_PTR_SET_RVALUE(date_, date) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateApiDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApiDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The data returned if the API destination is created.
    shared_ptr<CreateApiDestinationResponseBody::Date> date_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
