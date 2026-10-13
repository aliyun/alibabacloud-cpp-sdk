// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEOIDCAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIATEOIDCAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InitiateOidcAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiateOidcAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, InitiateOidcAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    InitiateOidcAuthRequest() = default ;
    InitiateOidcAuthRequest(const InitiateOidcAuthRequest &) = default ;
    InitiateOidcAuthRequest(InitiateOidcAuthRequest &&) = default ;
    InitiateOidcAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiateOidcAuthRequest() = default ;
    InitiateOidcAuthRequest& operator=(const InitiateOidcAuthRequest &) = default ;
    InitiateOidcAuthRequest& operator=(InitiateOidcAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provider_ == nullptr; };
    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline InitiateOidcAuthRequest& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    // The OIDC provider identifier.
    shared_ptr<string> provider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
