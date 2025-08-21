// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODYSAMLPROVIDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMLPROVIDERSRESPONSEBODYSAMLPROVIDERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListSAMLProvidersResponseBodySAMLProviders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSAMLProvidersResponseBodySAMLProviders& obj) { 
      DARABONBA_PTR_TO_JSON(SAMLProvider, SAMLProvider_);
    };
    friend void from_json(const Darabonba::Json& j, ListSAMLProvidersResponseBodySAMLProviders& obj) { 
      DARABONBA_PTR_FROM_JSON(SAMLProvider, SAMLProvider_);
    };
    ListSAMLProvidersResponseBodySAMLProviders() = default ;
    ListSAMLProvidersResponseBodySAMLProviders(const ListSAMLProvidersResponseBodySAMLProviders &) = default ;
    ListSAMLProvidersResponseBodySAMLProviders(ListSAMLProvidersResponseBodySAMLProviders &&) = default ;
    ListSAMLProvidersResponseBodySAMLProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSAMLProvidersResponseBodySAMLProviders() = default ;
    ListSAMLProvidersResponseBodySAMLProviders& operator=(const ListSAMLProvidersResponseBodySAMLProviders &) = default ;
    ListSAMLProvidersResponseBodySAMLProviders& operator=(ListSAMLProvidersResponseBodySAMLProviders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SAMLProvider_ != nullptr; };
    // SAMLProvider Field Functions 
    bool hasSAMLProvider() const { return this->SAMLProvider_ != nullptr;};
    void deleteSAMLProvider() { this->SAMLProvider_ = nullptr;};
    inline const vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> & SAMLProvider() const { DARABONBA_PTR_GET_CONST(SAMLProvider_, vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>) };
    inline vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> SAMLProvider() { DARABONBA_PTR_GET(SAMLProvider_, vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>) };
    inline ListSAMLProvidersResponseBodySAMLProviders& setSAMLProvider(const vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> & SAMLProvider) { DARABONBA_PTR_SET_VALUE(SAMLProvider_, SAMLProvider) };
    inline ListSAMLProvidersResponseBodySAMLProviders& setSAMLProvider(vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> && SAMLProvider) { DARABONBA_PTR_SET_RVALUE(SAMLProvider_, SAMLProvider) };


  protected:
    std::shared_ptr<vector<Models::ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>> SAMLProvider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
