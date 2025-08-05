// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateApiDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApiDestinationResponseBody() = default ;
    UpdateApiDestinationResponseBody(const UpdateApiDestinationResponseBody &) = default ;
    UpdateApiDestinationResponseBody(UpdateApiDestinationResponseBody &&) = default ;
    UpdateApiDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiDestinationResponseBody() = default ;
    UpdateApiDestinationResponseBody& operator=(const UpdateApiDestinationResponseBody &) = default ;
    UpdateApiDestinationResponseBody& operator=(UpdateApiDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline UpdateApiDestinationResponseBody& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateApiDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApiDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApiDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // api-destination-name
    std::shared_ptr<string> apiDestinationName_ = nullptr;
    // The response code. If the request is successful, Success is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message. If the request is successful, success is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
