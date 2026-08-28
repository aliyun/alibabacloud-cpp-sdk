// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEENDPOINTAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEENDPOINTAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetServiceEndpointApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEndpointApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEndpointApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetServiceEndpointApiKeyResponseBody() = default ;
    GetServiceEndpointApiKeyResponseBody(const GetServiceEndpointApiKeyResponseBody &) = default ;
    GetServiceEndpointApiKeyResponseBody(GetServiceEndpointApiKeyResponseBody &&) = default ;
    GetServiceEndpointApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEndpointApiKeyResponseBody() = default ;
    GetServiceEndpointApiKeyResponseBody& operator=(const GetServiceEndpointApiKeyResponseBody &) = default ;
    GetServiceEndpointApiKeyResponseBody& operator=(GetServiceEndpointApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(apiKeyFingerprint, apiKeyFingerprint_);
        DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
        DARABONBA_PTR_TO_JSON(apiKeySource, apiKeySource_);
        DARABONBA_PTR_TO_JSON(authenticationType, authenticationType_);
        DARABONBA_PTR_TO_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(apiKeyFingerprint, apiKeyFingerprint_);
        DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
        DARABONBA_PTR_FROM_JSON(apiKeySource, apiKeySource_);
        DARABONBA_PTR_FROM_JSON(authenticationType, authenticationType_);
        DARABONBA_PTR_FROM_JSON(serviceEndpointId, serviceEndpointId_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiKeyFingerprint_ == nullptr && this->apiKeyName_ == nullptr && this->apiKeySource_ == nullptr && this->authenticationType_ == nullptr && this->serviceEndpointId_ == nullptr
        && this->workspaceId_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Data& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiKeyFingerprint Field Functions 
      bool hasApiKeyFingerprint() const { return this->apiKeyFingerprint_ != nullptr;};
      void deleteApiKeyFingerprint() { this->apiKeyFingerprint_ = nullptr;};
      inline string getApiKeyFingerprint() const { DARABONBA_PTR_GET_DEFAULT(apiKeyFingerprint_, "") };
      inline Data& setApiKeyFingerprint(string apiKeyFingerprint) { DARABONBA_PTR_SET_VALUE(apiKeyFingerprint_, apiKeyFingerprint) };


      // apiKeyName Field Functions 
      bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
      void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
      inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
      inline Data& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


      // apiKeySource Field Functions 
      bool hasApiKeySource() const { return this->apiKeySource_ != nullptr;};
      void deleteApiKeySource() { this->apiKeySource_ = nullptr;};
      inline string getApiKeySource() const { DARABONBA_PTR_GET_DEFAULT(apiKeySource_, "") };
      inline Data& setApiKeySource(string apiKeySource) { DARABONBA_PTR_SET_VALUE(apiKeySource_, apiKeySource) };


      // authenticationType Field Functions 
      bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
      void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
      inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
      inline Data& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


      // serviceEndpointId Field Functions 
      bool hasServiceEndpointId() const { return this->serviceEndpointId_ != nullptr;};
      void deleteServiceEndpointId() { this->serviceEndpointId_ = nullptr;};
      inline string getServiceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(serviceEndpointId_, "") };
      inline Data& setServiceEndpointId(string serviceEndpointId) { DARABONBA_PTR_SET_VALUE(serviceEndpointId_, serviceEndpointId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The currently active API Key for the service endpoint. The service reads this value from the gateway consumer in real time. AgentCore does not persist the plaintext. When calling the service endpoint, include this value in the request header specified by apiKeyName. Do not log this value or expose it in public configurations.
      shared_ptr<string> apiKey_ {};
      // The API Key fingerprint, which consists of the first 12 lowercase hexadecimal characters of the SHA-256 digest of the API Key. It can be used to identify the key version but cannot replace the API Key for authentication.
      shared_ptr<string> apiKeyFingerprint_ {};
      // The name of the HTTP request header used to pass the API Key. The value is currently fixed to x-api-key.
      shared_ptr<string> apiKeyName_ {};
      // The location where the API Key is passed. The value is currently fixed to Header, indicating that the API Key is passed through an HTTP request header.
      shared_ptr<string> apiKeySource_ {};
      // The authentication type of the service endpoint. Valid values:
      // - NONE: Authentication is not enabled.
      // - API_KEY: API Key authentication is used.
      // 
      // This operation succeeds only when the authentication type is API_KEY. Therefore, the value API_KEY is always returned in a successful response.
      shared_ptr<string> authenticationType_ {};
      // The service endpoint ID.
      shared_ptr<string> serviceEndpointId_ {};
      // The ID of the workspace to which the service endpoint belongs.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetServiceEndpointApiKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceEndpointApiKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceEndpointApiKeyResponseBody::Data) };
    inline GetServiceEndpointApiKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceEndpointApiKeyResponseBody::Data) };
    inline GetServiceEndpointApiKeyResponseBody& setData(const GetServiceEndpointApiKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceEndpointApiKeyResponseBody& setData(GetServiceEndpointApiKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetServiceEndpointApiKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceEndpointApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceEndpointApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceEndpointApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The value is SUCCESS when the request succeeds.
    shared_ptr<string> code_ {};
    // The currently active API Key information for the service endpoint.
    shared_ptr<GetServiceEndpointApiKeyResponseBody::Data> data_ {};
    // The HTTP status code. The value is 200 when the request succeeds.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message. The value is success when the request succeeds.
    shared_ptr<string> message_ {};
    // The request ID, used for troubleshooting and tracing.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. The value is true when the request succeeds.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
