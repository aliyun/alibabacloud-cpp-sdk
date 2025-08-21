// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeleteOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    DeleteOIDCProviderRequest() = default ;
    DeleteOIDCProviderRequest(const DeleteOIDCProviderRequest &) = default ;
    DeleteOIDCProviderRequest(DeleteOIDCProviderRequest &&) = default ;
    DeleteOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOIDCProviderRequest() = default ;
    DeleteOIDCProviderRequest& operator=(const DeleteOIDCProviderRequest &) = default ;
    DeleteOIDCProviderRequest& operator=(DeleteOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OIDCProviderName_ != nullptr; };
    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string OIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline DeleteOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The name of the OIDC IdP.
    std::shared_ptr<string> OIDCProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
