// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProvider, identityProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProvider, identityProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody(GetIdentityProviderResponseBody &&) = default ;
    GetIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody& operator=(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody& operator=(GetIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProvider_ == nullptr
        && return this->requestId_ == nullptr; };
    // identityProvider Field Functions 
    bool hasIdentityProvider() const { return this->identityProvider_ != nullptr;};
    void deleteIdentityProvider() { this->identityProvider_ = nullptr;};
    inline const GetIdentityProviderResponseBodyIdentityProvider & identityProvider() const { DARABONBA_PTR_GET_CONST(identityProvider_, GetIdentityProviderResponseBodyIdentityProvider) };
    inline GetIdentityProviderResponseBodyIdentityProvider identityProvider() { DARABONBA_PTR_GET(identityProvider_, GetIdentityProviderResponseBodyIdentityProvider) };
    inline GetIdentityProviderResponseBody& setIdentityProvider(const GetIdentityProviderResponseBodyIdentityProvider & identityProvider) { DARABONBA_PTR_SET_VALUE(identityProvider_, identityProvider) };
    inline GetIdentityProviderResponseBody& setIdentityProvider(GetIdentityProviderResponseBodyIdentityProvider && identityProvider) { DARABONBA_PTR_SET_RVALUE(identityProvider_, identityProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIdentityProviderResponseBodyIdentityProvider> identityProvider_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
