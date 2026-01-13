// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectApiKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectApiKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectApiKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSupabaseProjectApiKeysResponseBody() = default ;
    GetSupabaseProjectApiKeysResponseBody(const GetSupabaseProjectApiKeysResponseBody &) = default ;
    GetSupabaseProjectApiKeysResponseBody(GetSupabaseProjectApiKeysResponseBody &&) = default ;
    GetSupabaseProjectApiKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectApiKeysResponseBody() = default ;
    GetSupabaseProjectApiKeysResponseBody& operator=(const GetSupabaseProjectApiKeysResponseBody &) = default ;
    GetSupabaseProjectApiKeysResponseBody& operator=(GetSupabaseProjectApiKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->name_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ApiKeys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ApiKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The queried API key.
      shared_ptr<string> apiKey_ {};
      // The name of the API key, including the Anon key and the service role key.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys>) };
    inline vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys>) };
    inline GetSupabaseProjectApiKeysResponseBody& setApiKeys(const vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline GetSupabaseProjectApiKeysResponseBody& setApiKeys(vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseProjectApiKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried API keys.
    shared_ptr<vector<GetSupabaseProjectApiKeysResponseBody::ApiKeys>> apiKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
