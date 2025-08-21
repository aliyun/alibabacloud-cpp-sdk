// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECLIENTIDFROMOIDCPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVECLIENTIDFROMOIDCPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class RemoveClientIdFromOIDCProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveClientIdFromOIDCProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OIDCProvider, OIDCProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveClientIdFromOIDCProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OIDCProvider, OIDCProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveClientIdFromOIDCProviderResponseBody() = default ;
    RemoveClientIdFromOIDCProviderResponseBody(const RemoveClientIdFromOIDCProviderResponseBody &) = default ;
    RemoveClientIdFromOIDCProviderResponseBody(RemoveClientIdFromOIDCProviderResponseBody &&) = default ;
    RemoveClientIdFromOIDCProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveClientIdFromOIDCProviderResponseBody() = default ;
    RemoveClientIdFromOIDCProviderResponseBody& operator=(const RemoveClientIdFromOIDCProviderResponseBody &) = default ;
    RemoveClientIdFromOIDCProviderResponseBody& operator=(RemoveClientIdFromOIDCProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OIDCProvider_ != nullptr
        && this->requestId_ != nullptr; };
    // OIDCProvider Field Functions 
    bool hasOIDCProvider() const { return this->OIDCProvider_ != nullptr;};
    void deleteOIDCProvider() { this->OIDCProvider_ = nullptr;};
    inline const RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider & OIDCProvider() const { DARABONBA_PTR_GET_CONST(OIDCProvider_, RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider) };
    inline RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider OIDCProvider() { DARABONBA_PTR_GET(OIDCProvider_, RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider) };
    inline RemoveClientIdFromOIDCProviderResponseBody& setOIDCProvider(const RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider & OIDCProvider) { DARABONBA_PTR_SET_VALUE(OIDCProvider_, OIDCProvider) };
    inline RemoveClientIdFromOIDCProviderResponseBody& setOIDCProvider(RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider && OIDCProvider) { DARABONBA_PTR_SET_RVALUE(OIDCProvider_, OIDCProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveClientIdFromOIDCProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the OIDC IdP.
    std::shared_ptr<RemoveClientIdFromOIDCProviderResponseBodyOIDCProvider> OIDCProvider_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
