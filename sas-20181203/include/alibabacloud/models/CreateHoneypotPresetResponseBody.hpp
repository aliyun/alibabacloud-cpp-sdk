// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPRESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateHoneypotPresetResponseBodyHoneypotPreset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotPresetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HoneypotPreset, honeypotPreset_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HoneypotPreset, honeypotPreset_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateHoneypotPresetResponseBody() = default ;
    CreateHoneypotPresetResponseBody(const CreateHoneypotPresetResponseBody &) = default ;
    CreateHoneypotPresetResponseBody(CreateHoneypotPresetResponseBody &&) = default ;
    CreateHoneypotPresetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotPresetResponseBody() = default ;
    CreateHoneypotPresetResponseBody& operator=(const CreateHoneypotPresetResponseBody &) = default ;
    CreateHoneypotPresetResponseBody& operator=(CreateHoneypotPresetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->honeypotPreset_ != nullptr && this->httpStatusCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHoneypotPresetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // honeypotPreset Field Functions 
    bool hasHoneypotPreset() const { return this->honeypotPreset_ != nullptr;};
    void deleteHoneypotPreset() { this->honeypotPreset_ = nullptr;};
    inline const CreateHoneypotPresetResponseBodyHoneypotPreset & honeypotPreset() const { DARABONBA_PTR_GET_CONST(honeypotPreset_, CreateHoneypotPresetResponseBodyHoneypotPreset) };
    inline CreateHoneypotPresetResponseBodyHoneypotPreset honeypotPreset() { DARABONBA_PTR_GET(honeypotPreset_, CreateHoneypotPresetResponseBodyHoneypotPreset) };
    inline CreateHoneypotPresetResponseBody& setHoneypotPreset(const CreateHoneypotPresetResponseBodyHoneypotPreset & honeypotPreset) { DARABONBA_PTR_SET_VALUE(honeypotPreset_, honeypotPreset) };
    inline CreateHoneypotPresetResponseBody& setHoneypotPreset(CreateHoneypotPresetResponseBodyHoneypotPreset && honeypotPreset) { DARABONBA_PTR_SET_RVALUE(honeypotPreset_, honeypotPreset) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateHoneypotPresetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHoneypotPresetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHoneypotPresetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateHoneypotPresetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The creation result.
    std::shared_ptr<CreateHoneypotPresetResponseBodyHoneypotPreset> honeypotPreset_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
