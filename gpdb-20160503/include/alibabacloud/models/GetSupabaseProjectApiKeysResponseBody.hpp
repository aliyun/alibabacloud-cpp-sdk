// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSupabaseProjectApiKeysResponseBodyApiKeys.hpp>
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
    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && return this->requestId_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<GetSupabaseProjectApiKeysResponseBodyApiKeys> & apiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<GetSupabaseProjectApiKeysResponseBodyApiKeys>) };
    inline vector<GetSupabaseProjectApiKeysResponseBodyApiKeys> apiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<GetSupabaseProjectApiKeysResponseBodyApiKeys>) };
    inline GetSupabaseProjectApiKeysResponseBody& setApiKeys(const vector<GetSupabaseProjectApiKeysResponseBodyApiKeys> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline GetSupabaseProjectApiKeysResponseBody& setApiKeys(vector<GetSupabaseProjectApiKeysResponseBodyApiKeys> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseProjectApiKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetSupabaseProjectApiKeysResponseBodyApiKeys>> apiKeys_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
