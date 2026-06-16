// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnthropicHost, anthropicHost_);
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DashscopeHost, dashscopeHost_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InnerToken, innerToken_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnthropicHost, anthropicHost_);
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DashscopeHost, dashscopeHost_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InnerToken, innerToken_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(InnerApiKey, innerApiKey_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(InnerApiKey, innerApiKey_);
      };
      ApiKeys() = default ;
      ApiKeys(const ApiKeys &) = default ;
      ApiKeys(ApiKeys &&) = default ;
      ApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKeys() = default ;
      ApiKeys& operator=(const ApiKeys &) = default ;
      ApiKeys& operator=(ApiKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->innerApiKey_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ApiKeys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // innerApiKey Field Functions 
      bool hasInnerApiKey() const { return this->innerApiKey_ != nullptr;};
      void deleteInnerApiKey() { this->innerApiKey_ = nullptr;};
      inline string getInnerApiKey() const { DARABONBA_PTR_GET_DEFAULT(innerApiKey_, "") };
      inline ApiKeys& setInnerApiKey(string innerApiKey) { DARABONBA_PTR_SET_VALUE(innerApiKey_, innerApiKey) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> innerApiKey_ {};
    };

    virtual bool empty() const override { return this->anthropicHost_ == nullptr
        && this->apiKeys_ == nullptr && this->appId_ == nullptr && this->code_ == nullptr && this->dashscopeHost_ == nullptr && this->host_ == nullptr
        && this->innerToken_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->token_ == nullptr; };
    // anthropicHost Field Functions 
    bool hasAnthropicHost() const { return this->anthropicHost_ != nullptr;};
    void deleteAnthropicHost() { this->anthropicHost_ = nullptr;};
    inline string getAnthropicHost() const { DARABONBA_PTR_GET_DEFAULT(anthropicHost_, "") };
    inline GetUserResponseBody& setAnthropicHost(string anthropicHost) { DARABONBA_PTR_SET_VALUE(anthropicHost_, anthropicHost) };


    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<GetUserResponseBody::ApiKeys> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<GetUserResponseBody::ApiKeys>) };
    inline vector<GetUserResponseBody::ApiKeys> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<GetUserResponseBody::ApiKeys>) };
    inline GetUserResponseBody& setApiKeys(const vector<GetUserResponseBody::ApiKeys> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline GetUserResponseBody& setApiKeys(vector<GetUserResponseBody::ApiKeys> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetUserResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dashscopeHost Field Functions 
    bool hasDashscopeHost() const { return this->dashscopeHost_ != nullptr;};
    void deleteDashscopeHost() { this->dashscopeHost_ = nullptr;};
    inline string getDashscopeHost() const { DARABONBA_PTR_GET_DEFAULT(dashscopeHost_, "") };
    inline GetUserResponseBody& setDashscopeHost(string dashscopeHost) { DARABONBA_PTR_SET_VALUE(dashscopeHost_, dashscopeHost) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetUserResponseBody& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // innerToken Field Functions 
    bool hasInnerToken() const { return this->innerToken_ != nullptr;};
    void deleteInnerToken() { this->innerToken_ = nullptr;};
    inline string getInnerToken() const { DARABONBA_PTR_GET_DEFAULT(innerToken_, "") };
    inline GetUserResponseBody& setInnerToken(string innerToken) { DARABONBA_PTR_SET_VALUE(innerToken_, innerToken) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetUserResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> anthropicHost_ {};
    shared_ptr<vector<GetUserResponseBody::ApiKeys>> apiKeys_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> dashscopeHost_ {};
    shared_ptr<string> host_ {};
    shared_ptr<string> innerToken_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
