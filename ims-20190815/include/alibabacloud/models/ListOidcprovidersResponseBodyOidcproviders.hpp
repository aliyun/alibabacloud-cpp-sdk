// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODYOIDCPROVIDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTOIDCPROVIDERSRESPONSEBODYOIDCPROVIDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListOIDCProvidersResponseBodyOIDCProviders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOIDCProvidersResponseBodyOIDCProviders& obj) { 
      DARABONBA_PTR_TO_JSON(OIDCProvider, OIDCProvider_);
    };
    friend void from_json(const Darabonba::Json& j, ListOIDCProvidersResponseBodyOIDCProviders& obj) { 
      DARABONBA_PTR_FROM_JSON(OIDCProvider, OIDCProvider_);
    };
    ListOIDCProvidersResponseBodyOIDCProviders() = default ;
    ListOIDCProvidersResponseBodyOIDCProviders(const ListOIDCProvidersResponseBodyOIDCProviders &) = default ;
    ListOIDCProvidersResponseBodyOIDCProviders(ListOIDCProvidersResponseBodyOIDCProviders &&) = default ;
    ListOIDCProvidersResponseBodyOIDCProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOIDCProvidersResponseBodyOIDCProviders() = default ;
    ListOIDCProvidersResponseBodyOIDCProviders& operator=(const ListOIDCProvidersResponseBodyOIDCProviders &) = default ;
    ListOIDCProvidersResponseBodyOIDCProviders& operator=(ListOIDCProvidersResponseBodyOIDCProviders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OIDCProvider_ != nullptr; };
    // OIDCProvider Field Functions 
    bool hasOIDCProvider() const { return this->OIDCProvider_ != nullptr;};
    void deleteOIDCProvider() { this->OIDCProvider_ = nullptr;};
    inline const vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider> & OIDCProvider() const { DARABONBA_PTR_GET_CONST(OIDCProvider_, vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider>) };
    inline vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider> OIDCProvider() { DARABONBA_PTR_GET(OIDCProvider_, vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider>) };
    inline ListOIDCProvidersResponseBodyOIDCProviders& setOIDCProvider(const vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider> & OIDCProvider) { DARABONBA_PTR_SET_VALUE(OIDCProvider_, OIDCProvider) };
    inline ListOIDCProvidersResponseBodyOIDCProviders& setOIDCProvider(vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider> && OIDCProvider) { DARABONBA_PTR_SET_RVALUE(OIDCProvider_, OIDCProvider) };


  protected:
    std::shared_ptr<vector<Models::ListOIDCProvidersResponseBodyOIDCProvidersOIDCProvider>> OIDCProvider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
