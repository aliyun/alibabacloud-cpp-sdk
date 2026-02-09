// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENVIRONMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEENVIRONMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteEnvironmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEnvironmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteEnvironmentResponseBody() = default ;
    DeleteEnvironmentResponseBody(const DeleteEnvironmentResponseBody &) = default ;
    DeleteEnvironmentResponseBody(DeleteEnvironmentResponseBody &&) = default ;
    DeleteEnvironmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEnvironmentResponseBody() = default ;
    DeleteEnvironmentResponseBody& operator=(const DeleteEnvironmentResponseBody &) = default ;
    DeleteEnvironmentResponseBody& operator=(DeleteEnvironmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteEnvironmentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteEnvironmentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEnvironmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID. You can use the ID to trace the request link.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
