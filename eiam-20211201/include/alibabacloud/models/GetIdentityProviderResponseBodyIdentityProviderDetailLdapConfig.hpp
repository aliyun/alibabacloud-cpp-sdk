// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILLDAPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILLDAPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdministratorPassword, administratorPassword_);
      DARABONBA_PTR_TO_JSON(AdministratorUsername, administratorUsername_);
      DARABONBA_PTR_TO_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
      DARABONBA_PTR_TO_JSON(CertificateFingerprints, certificateFingerprints_);
      DARABONBA_PTR_TO_JSON(LdapProtocol, ldapProtocol_);
      DARABONBA_PTR_TO_JSON(LdapServerHost, ldapServerHost_);
      DARABONBA_PTR_TO_JSON(LdapServerPort, ldapServerPort_);
      DARABONBA_PTR_TO_JSON(StartTlsStatus, startTlsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministratorPassword, administratorPassword_);
      DARABONBA_PTR_FROM_JSON(AdministratorUsername, administratorUsername_);
      DARABONBA_PTR_FROM_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
      DARABONBA_PTR_FROM_JSON(CertificateFingerprints, certificateFingerprints_);
      DARABONBA_PTR_FROM_JSON(LdapProtocol, ldapProtocol_);
      DARABONBA_PTR_FROM_JSON(LdapServerHost, ldapServerHost_);
      DARABONBA_PTR_FROM_JSON(LdapServerPort, ldapServerPort_);
      DARABONBA_PTR_FROM_JSON(StartTlsStatus, startTlsStatus_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig(GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administratorPassword_ == nullptr
        && return this->administratorUsername_ == nullptr && return this->certificateFingerprintStatus_ == nullptr && return this->certificateFingerprints_ == nullptr && return this->ldapProtocol_ == nullptr && return this->ldapServerHost_ == nullptr
        && return this->ldapServerPort_ == nullptr && return this->startTlsStatus_ == nullptr; };
    // administratorPassword Field Functions 
    bool hasAdministratorPassword() const { return this->administratorPassword_ != nullptr;};
    void deleteAdministratorPassword() { this->administratorPassword_ = nullptr;};
    inline string administratorPassword() const { DARABONBA_PTR_GET_DEFAULT(administratorPassword_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setAdministratorPassword(string administratorPassword) { DARABONBA_PTR_SET_VALUE(administratorPassword_, administratorPassword) };


    // administratorUsername Field Functions 
    bool hasAdministratorUsername() const { return this->administratorUsername_ != nullptr;};
    void deleteAdministratorUsername() { this->administratorUsername_ = nullptr;};
    inline string administratorUsername() const { DARABONBA_PTR_GET_DEFAULT(administratorUsername_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setAdministratorUsername(string administratorUsername) { DARABONBA_PTR_SET_VALUE(administratorUsername_, administratorUsername) };


    // certificateFingerprintStatus Field Functions 
    bool hasCertificateFingerprintStatus() const { return this->certificateFingerprintStatus_ != nullptr;};
    void deleteCertificateFingerprintStatus() { this->certificateFingerprintStatus_ = nullptr;};
    inline string certificateFingerprintStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateFingerprintStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setCertificateFingerprintStatus(string certificateFingerprintStatus) { DARABONBA_PTR_SET_VALUE(certificateFingerprintStatus_, certificateFingerprintStatus) };


    // certificateFingerprints Field Functions 
    bool hasCertificateFingerprints() const { return this->certificateFingerprints_ != nullptr;};
    void deleteCertificateFingerprints() { this->certificateFingerprints_ = nullptr;};
    inline const vector<string> & certificateFingerprints() const { DARABONBA_PTR_GET_CONST(certificateFingerprints_, vector<string>) };
    inline vector<string> certificateFingerprints() { DARABONBA_PTR_GET(certificateFingerprints_, vector<string>) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setCertificateFingerprints(const vector<string> & certificateFingerprints) { DARABONBA_PTR_SET_VALUE(certificateFingerprints_, certificateFingerprints) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setCertificateFingerprints(vector<string> && certificateFingerprints) { DARABONBA_PTR_SET_RVALUE(certificateFingerprints_, certificateFingerprints) };


    // ldapProtocol Field Functions 
    bool hasLdapProtocol() const { return this->ldapProtocol_ != nullptr;};
    void deleteLdapProtocol() { this->ldapProtocol_ = nullptr;};
    inline string ldapProtocol() const { DARABONBA_PTR_GET_DEFAULT(ldapProtocol_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setLdapProtocol(string ldapProtocol) { DARABONBA_PTR_SET_VALUE(ldapProtocol_, ldapProtocol) };


    // ldapServerHost Field Functions 
    bool hasLdapServerHost() const { return this->ldapServerHost_ != nullptr;};
    void deleteLdapServerHost() { this->ldapServerHost_ = nullptr;};
    inline string ldapServerHost() const { DARABONBA_PTR_GET_DEFAULT(ldapServerHost_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setLdapServerHost(string ldapServerHost) { DARABONBA_PTR_SET_VALUE(ldapServerHost_, ldapServerHost) };


    // ldapServerPort Field Functions 
    bool hasLdapServerPort() const { return this->ldapServerPort_ != nullptr;};
    void deleteLdapServerPort() { this->ldapServerPort_ = nullptr;};
    inline int32_t ldapServerPort() const { DARABONBA_PTR_GET_DEFAULT(ldapServerPort_, 0) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setLdapServerPort(int32_t ldapServerPort) { DARABONBA_PTR_SET_VALUE(ldapServerPort_, ldapServerPort) };


    // startTlsStatus Field Functions 
    bool hasStartTlsStatus() const { return this->startTlsStatus_ != nullptr;};
    void deleteStartTlsStatus() { this->startTlsStatus_ = nullptr;};
    inline string startTlsStatus() const { DARABONBA_PTR_GET_DEFAULT(startTlsStatus_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailLdapConfig& setStartTlsStatus(string startTlsStatus) { DARABONBA_PTR_SET_VALUE(startTlsStatus_, startTlsStatus) };


  protected:
    // Administrator password.
    std::shared_ptr<string> administratorPassword_ = nullptr;
    // Administrator username.
    std::shared_ptr<string> administratorUsername_ = nullptr;
    // Whether to verify the fingerprint certificate.
    std::shared_ptr<string> certificateFingerprintStatus_ = nullptr;
    // Certificate fingerprint list.
    std::shared_ptr<vector<string>> certificateFingerprints_ = nullptr;
    // Ldap protocol.
    std::shared_ptr<string> ldapProtocol_ = nullptr;
    // ldap server host.
    std::shared_ptr<string> ldapServerHost_ = nullptr;
    // ldap server port.
    std::shared_ptr<int32_t> ldapServerPort_ = nullptr;
    // StartTls status.
    std::shared_ptr<string> startTlsStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
