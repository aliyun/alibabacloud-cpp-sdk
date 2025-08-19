// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VEHICLE5ITEMQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VEHICLE5ITEMQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Vehicle5ItemQueryResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Vehicle5ItemQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Vehicle5ItemQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, Vehicle5ItemQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    Vehicle5ItemQueryResponseBody() = default ;
    Vehicle5ItemQueryResponseBody(const Vehicle5ItemQueryResponseBody &) = default ;
    Vehicle5ItemQueryResponseBody(Vehicle5ItemQueryResponseBody &&) = default ;
    Vehicle5ItemQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Vehicle5ItemQueryResponseBody() = default ;
    Vehicle5ItemQueryResponseBody& operator=(const Vehicle5ItemQueryResponseBody &) = default ;
    Vehicle5ItemQueryResponseBody& operator=(Vehicle5ItemQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->resultObject_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Vehicle5ItemQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline Vehicle5ItemQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Vehicle5ItemQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const Vehicle5ItemQueryResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, Vehicle5ItemQueryResponseBodyResultObject) };
    inline Vehicle5ItemQueryResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, Vehicle5ItemQueryResponseBodyResultObject) };
    inline Vehicle5ItemQueryResponseBody& setResultObject(const Vehicle5ItemQueryResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline Vehicle5ItemQueryResponseBody& setResultObject(Vehicle5ItemQueryResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code
    std::shared_ptr<string> code_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned result information.
    std::shared_ptr<Vehicle5ItemQueryResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
