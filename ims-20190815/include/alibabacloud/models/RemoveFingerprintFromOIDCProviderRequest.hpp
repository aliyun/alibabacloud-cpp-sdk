// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEFINGERPRINTFROMOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEFINGERPRINTFROMOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class RemoveFingerprintFromOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveFingerprintFromOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveFingerprintFromOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    RemoveFingerprintFromOIDCProviderRequest() = default ;
    RemoveFingerprintFromOIDCProviderRequest(const RemoveFingerprintFromOIDCProviderRequest &) = default ;
    RemoveFingerprintFromOIDCProviderRequest(RemoveFingerprintFromOIDCProviderRequest &&) = default ;
    RemoveFingerprintFromOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveFingerprintFromOIDCProviderRequest() = default ;
    RemoveFingerprintFromOIDCProviderRequest& operator=(const RemoveFingerprintFromOIDCProviderRequest &) = default ;
    RemoveFingerprintFromOIDCProviderRequest& operator=(RemoveFingerprintFromOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fingerprint_ == nullptr
        && this->OIDCProviderName_ == nullptr; };
    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline RemoveFingerprintFromOIDCProviderRequest& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string getOIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline RemoveFingerprintFromOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The fingerprint that you want to remove.
    shared_ptr<string> fingerprint_ {};
    // The name of the OIDC IdP.
    shared_ptr<string> OIDCProviderName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
