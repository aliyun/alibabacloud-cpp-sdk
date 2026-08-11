// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiKey.hpp>
#include <vector>
#include <alibabacloud/models/IPConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ResetApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(ipBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(ipWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ResetApiKeyResponseBody() = default ;
    ResetApiKeyResponseBody(const ResetApiKeyResponseBody &) = default ;
    ResetApiKeyResponseBody(ResetApiKeyResponseBody &&) = default ;
    ResetApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetApiKeyResponseBody() = default ;
    ResetApiKeyResponseBody& operator=(const ResetApiKeyResponseBody &) = default ;
    ResetApiKeyResponseBody& operator=(ResetApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->code_ == nullptr && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline const ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, ApiKey) };
    inline ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, ApiKey) };
    inline ResetApiKeyResponseBody& setApiKey(const ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
    inline ResetApiKeyResponseBody& setApiKey(ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ResetApiKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline const vector<IPConfig> & getIpBlacklist() const { DARABONBA_PTR_GET_CONST(ipBlacklist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpBlacklist() { DARABONBA_PTR_GET(ipBlacklist_, vector<IPConfig>) };
    inline ResetApiKeyResponseBody& setIpBlacklist(const vector<IPConfig> & ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };
    inline ResetApiKeyResponseBody& setIpBlacklist(vector<IPConfig> && ipBlacklist) { DARABONBA_PTR_SET_RVALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline const vector<IPConfig> & getIpWhitelist() const { DARABONBA_PTR_GET_CONST(ipWhitelist_, vector<IPConfig>) };
    inline vector<IPConfig> getIpWhitelist() { DARABONBA_PTR_GET(ipWhitelist_, vector<IPConfig>) };
    inline ResetApiKeyResponseBody& setIpWhitelist(const vector<IPConfig> & ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };
    inline ResetApiKeyResponseBody& setIpWhitelist(vector<IPConfig> && ipWhitelist) { DARABONBA_PTR_SET_RVALUE(ipWhitelist_, ipWhitelist) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResetApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API key information.
    shared_ptr<ApiKey> apiKey_ {};
    // The error code.
    shared_ptr<string> code_ {};
    shared_ptr<vector<IPConfig>> ipBlacklist_ {};
    shared_ptr<vector<IPConfig>> ipWhitelist_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
