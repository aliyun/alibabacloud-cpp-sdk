// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApiDestinationResponseBodyDate.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->date_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateApiDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline const CreateApiDestinationResponseBodyDate & date() const { DARABONBA_PTR_GET_CONST(date_, CreateApiDestinationResponseBodyDate) };
    inline CreateApiDestinationResponseBodyDate date() { DARABONBA_PTR_GET(date_, CreateApiDestinationResponseBodyDate) };
    inline CreateApiDestinationResponseBody& setDate(const CreateApiDestinationResponseBodyDate & date) { DARABONBA_PTR_SET_VALUE(date_, date) };
    inline CreateApiDestinationResponseBody& setDate(CreateApiDestinationResponseBodyDate && date) { DARABONBA_PTR_SET_RVALUE(date_, date) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateApiDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApiDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The data returned if the API destination is created.
    std::shared_ptr<CreateApiDestinationResponseBodyDate> date_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
