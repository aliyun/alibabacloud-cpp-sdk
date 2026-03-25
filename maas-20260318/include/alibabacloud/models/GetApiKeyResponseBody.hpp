// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaaS20260318
{
namespace Models
{
  class GetApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody(GetApiKeyResponseBody &&) = default ;
    GetApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody& operator=(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody& operator=(GetApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKey& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(isBlocked, isBlocked_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKey& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(isBlocked, isBlocked_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      ApiKey() = default ;
      ApiKey(const ApiKey &) = default ;
      ApiKey(ApiKey &&) = default ;
      ApiKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKey() = default ;
      ApiKey& operator=(const ApiKey &) = default ;
      ApiKey& operator=(ApiKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->apiKeyValue_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->isBlocked_ == nullptr
        && this->workspaceId_ == nullptr; };
      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
      inline ApiKey& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // apiKeyValue Field Functions 
      bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
      void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
      inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
      inline ApiKey& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ApiKey& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKey& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ApiKey& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // isBlocked Field Functions 
      bool hasIsBlocked() const { return this->isBlocked_ != nullptr;};
      void deleteIsBlocked() { this->isBlocked_ = nullptr;};
      inline int32_t getIsBlocked() const { DARABONBA_PTR_GET_DEFAULT(isBlocked_, 0) };
      inline ApiKey& setIsBlocked(int32_t isBlocked) { DARABONBA_PTR_SET_VALUE(isBlocked_, isBlocked) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ApiKey& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // API Key ID。
      shared_ptr<int64_t> apiKeyId_ {};
      // API Key Value。
      shared_ptr<string> apiKeyValue_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int32_t> isBlocked_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline const GetApiKeyResponseBody::ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, GetApiKeyResponseBody::ApiKey) };
    inline GetApiKeyResponseBody::ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, GetApiKeyResponseBody::ApiKey) };
    inline GetApiKeyResponseBody& setApiKey(const GetApiKeyResponseBody::ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
    inline GetApiKeyResponseBody& setApiKey(GetApiKeyResponseBody::ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApiKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetApiKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // API Key。
    shared_ptr<GetApiKeyResponseBody::ApiKey> apiKey_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaaS20260318
#endif
