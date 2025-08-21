// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFINGERPRINTTOOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFINGERPRINTTOOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class AddFingerprintToOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFingerprintToOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, AddFingerprintToOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    AddFingerprintToOIDCProviderRequest() = default ;
    AddFingerprintToOIDCProviderRequest(const AddFingerprintToOIDCProviderRequest &) = default ;
    AddFingerprintToOIDCProviderRequest(AddFingerprintToOIDCProviderRequest &&) = default ;
    AddFingerprintToOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFingerprintToOIDCProviderRequest() = default ;
    AddFingerprintToOIDCProviderRequest& operator=(const AddFingerprintToOIDCProviderRequest &) = default ;
    AddFingerprintToOIDCProviderRequest& operator=(AddFingerprintToOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fingerprint_ != nullptr
        && this->OIDCProviderName_ != nullptr; };
    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline AddFingerprintToOIDCProviderRequest& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string OIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline AddFingerprintToOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The fingerprint of the HTTPS CA certificate.
    // 
    // The fingerprint can contain letters and digits.
    // 
    // The fingerprint can be up to 128 characters in length.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The name of the OIDC IdP.
    std::shared_ptr<string> OIDCProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
