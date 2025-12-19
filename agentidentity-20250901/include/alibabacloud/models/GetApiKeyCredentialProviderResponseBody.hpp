// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetAPIKeyCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProvider, APIKeyCredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProvider, APIKeyCredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAPIKeyCredentialProviderResponseBody() = default ;
    GetAPIKeyCredentialProviderResponseBody(const GetAPIKeyCredentialProviderResponseBody &) = default ;
    GetAPIKeyCredentialProviderResponseBody(GetAPIKeyCredentialProviderResponseBody &&) = default ;
    GetAPIKeyCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAPIKeyCredentialProviderResponseBody() = default ;
    GetAPIKeyCredentialProviderResponseBody& operator=(const GetAPIKeyCredentialProviderResponseBody &) = default ;
    GetAPIKeyCredentialProviderResponseBody& operator=(GetAPIKeyCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKeyCredentialProvider_ == nullptr
        && return this->requestId_ == nullptr; };
    // APIKeyCredentialProvider Field Functions 
    bool hasAPIKeyCredentialProvider() const { return this->APIKeyCredentialProvider_ != nullptr;};
    void deleteAPIKeyCredentialProvider() { this->APIKeyCredentialProvider_ = nullptr;};
    inline const GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider & APIKeyCredentialProvider() const { DARABONBA_PTR_GET_CONST(APIKeyCredentialProvider_, GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider APIKeyCredentialProvider() { DARABONBA_PTR_GET(APIKeyCredentialProvider_, GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBody& setAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider & APIKeyCredentialProvider) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProvider_, APIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBody& setAPIKeyCredentialProvider(GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider && APIKeyCredentialProvider) { DARABONBA_PTR_SET_RVALUE(APIKeyCredentialProvider_, APIKeyCredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAPIKeyCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAPIKeyCredentialProviderResponseBodyAPIKeyCredentialProvider> APIKeyCredentialProvider_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
