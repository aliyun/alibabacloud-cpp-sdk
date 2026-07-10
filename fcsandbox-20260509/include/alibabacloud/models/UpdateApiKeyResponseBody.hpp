// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateApiKeyResponseBody() = default ;
    UpdateApiKeyResponseBody(const UpdateApiKeyResponseBody &) = default ;
    UpdateApiKeyResponseBody(UpdateApiKeyResponseBody &&) = default ;
    UpdateApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyResponseBody() = default ;
    UpdateApiKeyResponseBody& operator=(const UpdateApiKeyResponseBody &) = default ;
    UpdateApiKeyResponseBody& operator=(UpdateApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline const ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, ApiKey) };
    inline ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, ApiKey) };
    inline UpdateApiKeyResponseBody& setApiKey(const ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
    inline UpdateApiKeyResponseBody& setApiKey(ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateApiKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ApiKey> apiKey_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
