// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetFederatedCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProvider, federatedCredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProvider, federatedCredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFederatedCredentialProviderResponseBody() = default ;
    GetFederatedCredentialProviderResponseBody(const GetFederatedCredentialProviderResponseBody &) = default ;
    GetFederatedCredentialProviderResponseBody(GetFederatedCredentialProviderResponseBody &&) = default ;
    GetFederatedCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFederatedCredentialProviderResponseBody() = default ;
    GetFederatedCredentialProviderResponseBody& operator=(const GetFederatedCredentialProviderResponseBody &) = default ;
    GetFederatedCredentialProviderResponseBody& operator=(GetFederatedCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federatedCredentialProvider_ == nullptr
        && return this->requestId_ == nullptr; };
    // federatedCredentialProvider Field Functions 
    bool hasFederatedCredentialProvider() const { return this->federatedCredentialProvider_ != nullptr;};
    void deleteFederatedCredentialProvider() { this->federatedCredentialProvider_ = nullptr;};
    inline const GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider & federatedCredentialProvider() const { DARABONBA_PTR_GET_CONST(federatedCredentialProvider_, GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider federatedCredentialProvider() { DARABONBA_PTR_GET(federatedCredentialProvider_, GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBody& setFederatedCredentialProvider(const GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider & federatedCredentialProvider) { DARABONBA_PTR_SET_VALUE(federatedCredentialProvider_, federatedCredentialProvider) };
    inline GetFederatedCredentialProviderResponseBody& setFederatedCredentialProvider(GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider && federatedCredentialProvider) { DARABONBA_PTR_SET_RVALUE(federatedCredentialProvider_, federatedCredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFederatedCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetFederatedCredentialProviderResponseBodyFederatedCredentialProvider> federatedCredentialProvider_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
