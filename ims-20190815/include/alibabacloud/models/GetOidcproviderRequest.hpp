// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    GetOIDCProviderRequest() = default ;
    GetOIDCProviderRequest(const GetOIDCProviderRequest &) = default ;
    GetOIDCProviderRequest(GetOIDCProviderRequest &&) = default ;
    GetOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOIDCProviderRequest() = default ;
    GetOIDCProviderRequest& operator=(const GetOIDCProviderRequest &) = default ;
    GetOIDCProviderRequest& operator=(GetOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OIDCProviderName_ != nullptr; };
    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string OIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline GetOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The name of the OIDC IdP.
    std::shared_ptr<string> OIDCProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
