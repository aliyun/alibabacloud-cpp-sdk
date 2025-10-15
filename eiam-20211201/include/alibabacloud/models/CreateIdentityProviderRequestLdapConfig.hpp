// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTLDAPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTLDAPCONFIG_HPP_
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
  class CreateIdentityProviderRequestLdapConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestLdapConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdministratorPassword, administratorPassword_);
      DARABONBA_PTR_TO_JSON(AdministratorUsername, administratorUsername_);
      DARABONBA_PTR_TO_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
      DARABONBA_PTR_TO_JSON(CertificateFingerprints, certificateFingerprints_);
      DARABONBA_PTR_TO_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
      DARABONBA_PTR_TO_JSON(GroupObjectClass, groupObjectClass_);
      DARABONBA_PTR_TO_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
      DARABONBA_PTR_TO_JSON(LdapProtocol, ldapProtocol_);
      DARABONBA_PTR_TO_JSON(LdapServerHost, ldapServerHost_);
      DARABONBA_PTR_TO_JSON(LdapServerPort, ldapServerPort_);
      DARABONBA_PTR_TO_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
      DARABONBA_PTR_TO_JSON(StartTlsStatus, startTlsStatus_);
      DARABONBA_PTR_TO_JSON(UserLoginIdentifier, userLoginIdentifier_);
      DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
      DARABONBA_PTR_TO_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestLdapConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdministratorPassword, administratorPassword_);
      DARABONBA_PTR_FROM_JSON(AdministratorUsername, administratorUsername_);
      DARABONBA_PTR_FROM_JSON(CertificateFingerprintStatus, certificateFingerprintStatus_);
      DARABONBA_PTR_FROM_JSON(CertificateFingerprints, certificateFingerprints_);
      DARABONBA_PTR_FROM_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
      DARABONBA_PTR_FROM_JSON(GroupObjectClass, groupObjectClass_);
      DARABONBA_PTR_FROM_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
      DARABONBA_PTR_FROM_JSON(LdapProtocol, ldapProtocol_);
      DARABONBA_PTR_FROM_JSON(LdapServerHost, ldapServerHost_);
      DARABONBA_PTR_FROM_JSON(LdapServerPort, ldapServerPort_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
      DARABONBA_PTR_FROM_JSON(StartTlsStatus, startTlsStatus_);
      DARABONBA_PTR_FROM_JSON(UserLoginIdentifier, userLoginIdentifier_);
      DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
      DARABONBA_PTR_FROM_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
    };
    CreateIdentityProviderRequestLdapConfig() = default ;
    CreateIdentityProviderRequestLdapConfig(const CreateIdentityProviderRequestLdapConfig &) = default ;
    CreateIdentityProviderRequestLdapConfig(CreateIdentityProviderRequestLdapConfig &&) = default ;
    CreateIdentityProviderRequestLdapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestLdapConfig() = default ;
    CreateIdentityProviderRequestLdapConfig& operator=(const CreateIdentityProviderRequestLdapConfig &) = default ;
    CreateIdentityProviderRequestLdapConfig& operator=(CreateIdentityProviderRequestLdapConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administratorPassword_ == nullptr
        && return this->administratorUsername_ == nullptr && return this->certificateFingerprintStatus_ == nullptr && return this->certificateFingerprints_ == nullptr && return this->groupMemberAttributeName_ == nullptr && return this->groupObjectClass_ == nullptr
        && return this->groupObjectClassCustomFilter_ == nullptr && return this->ldapProtocol_ == nullptr && return this->ldapServerHost_ == nullptr && return this->ldapServerPort_ == nullptr && return this->organizationUnitObjectClass_ == nullptr
        && return this->startTlsStatus_ == nullptr && return this->userLoginIdentifier_ == nullptr && return this->userObjectClass_ == nullptr && return this->userObjectClassCustomFilter_ == nullptr; };
    // administratorPassword Field Functions 
    bool hasAdministratorPassword() const { return this->administratorPassword_ != nullptr;};
    void deleteAdministratorPassword() { this->administratorPassword_ = nullptr;};
    inline string administratorPassword() const { DARABONBA_PTR_GET_DEFAULT(administratorPassword_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setAdministratorPassword(string administratorPassword) { DARABONBA_PTR_SET_VALUE(administratorPassword_, administratorPassword) };


    // administratorUsername Field Functions 
    bool hasAdministratorUsername() const { return this->administratorUsername_ != nullptr;};
    void deleteAdministratorUsername() { this->administratorUsername_ = nullptr;};
    inline string administratorUsername() const { DARABONBA_PTR_GET_DEFAULT(administratorUsername_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setAdministratorUsername(string administratorUsername) { DARABONBA_PTR_SET_VALUE(administratorUsername_, administratorUsername) };


    // certificateFingerprintStatus Field Functions 
    bool hasCertificateFingerprintStatus() const { return this->certificateFingerprintStatus_ != nullptr;};
    void deleteCertificateFingerprintStatus() { this->certificateFingerprintStatus_ = nullptr;};
    inline string certificateFingerprintStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateFingerprintStatus_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setCertificateFingerprintStatus(string certificateFingerprintStatus) { DARABONBA_PTR_SET_VALUE(certificateFingerprintStatus_, certificateFingerprintStatus) };


    // certificateFingerprints Field Functions 
    bool hasCertificateFingerprints() const { return this->certificateFingerprints_ != nullptr;};
    void deleteCertificateFingerprints() { this->certificateFingerprints_ = nullptr;};
    inline const vector<string> & certificateFingerprints() const { DARABONBA_PTR_GET_CONST(certificateFingerprints_, vector<string>) };
    inline vector<string> certificateFingerprints() { DARABONBA_PTR_GET(certificateFingerprints_, vector<string>) };
    inline CreateIdentityProviderRequestLdapConfig& setCertificateFingerprints(const vector<string> & certificateFingerprints) { DARABONBA_PTR_SET_VALUE(certificateFingerprints_, certificateFingerprints) };
    inline CreateIdentityProviderRequestLdapConfig& setCertificateFingerprints(vector<string> && certificateFingerprints) { DARABONBA_PTR_SET_RVALUE(certificateFingerprints_, certificateFingerprints) };


    // groupMemberAttributeName Field Functions 
    bool hasGroupMemberAttributeName() const { return this->groupMemberAttributeName_ != nullptr;};
    void deleteGroupMemberAttributeName() { this->groupMemberAttributeName_ = nullptr;};
    inline string groupMemberAttributeName() const { DARABONBA_PTR_GET_DEFAULT(groupMemberAttributeName_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setGroupMemberAttributeName(string groupMemberAttributeName) { DARABONBA_PTR_SET_VALUE(groupMemberAttributeName_, groupMemberAttributeName) };


    // groupObjectClass Field Functions 
    bool hasGroupObjectClass() const { return this->groupObjectClass_ != nullptr;};
    void deleteGroupObjectClass() { this->groupObjectClass_ = nullptr;};
    inline string groupObjectClass() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClass_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setGroupObjectClass(string groupObjectClass) { DARABONBA_PTR_SET_VALUE(groupObjectClass_, groupObjectClass) };


    // groupObjectClassCustomFilter Field Functions 
    bool hasGroupObjectClassCustomFilter() const { return this->groupObjectClassCustomFilter_ != nullptr;};
    void deleteGroupObjectClassCustomFilter() { this->groupObjectClassCustomFilter_ = nullptr;};
    inline string groupObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClassCustomFilter_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setGroupObjectClassCustomFilter(string groupObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(groupObjectClassCustomFilter_, groupObjectClassCustomFilter) };


    // ldapProtocol Field Functions 
    bool hasLdapProtocol() const { return this->ldapProtocol_ != nullptr;};
    void deleteLdapProtocol() { this->ldapProtocol_ = nullptr;};
    inline string ldapProtocol() const { DARABONBA_PTR_GET_DEFAULT(ldapProtocol_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setLdapProtocol(string ldapProtocol) { DARABONBA_PTR_SET_VALUE(ldapProtocol_, ldapProtocol) };


    // ldapServerHost Field Functions 
    bool hasLdapServerHost() const { return this->ldapServerHost_ != nullptr;};
    void deleteLdapServerHost() { this->ldapServerHost_ = nullptr;};
    inline string ldapServerHost() const { DARABONBA_PTR_GET_DEFAULT(ldapServerHost_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setLdapServerHost(string ldapServerHost) { DARABONBA_PTR_SET_VALUE(ldapServerHost_, ldapServerHost) };


    // ldapServerPort Field Functions 
    bool hasLdapServerPort() const { return this->ldapServerPort_ != nullptr;};
    void deleteLdapServerPort() { this->ldapServerPort_ = nullptr;};
    inline int32_t ldapServerPort() const { DARABONBA_PTR_GET_DEFAULT(ldapServerPort_, 0) };
    inline CreateIdentityProviderRequestLdapConfig& setLdapServerPort(int32_t ldapServerPort) { DARABONBA_PTR_SET_VALUE(ldapServerPort_, ldapServerPort) };


    // organizationUnitObjectClass Field Functions 
    bool hasOrganizationUnitObjectClass() const { return this->organizationUnitObjectClass_ != nullptr;};
    void deleteOrganizationUnitObjectClass() { this->organizationUnitObjectClass_ = nullptr;};
    inline string organizationUnitObjectClass() const { DARABONBA_PTR_GET_DEFAULT(organizationUnitObjectClass_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setOrganizationUnitObjectClass(string organizationUnitObjectClass) { DARABONBA_PTR_SET_VALUE(organizationUnitObjectClass_, organizationUnitObjectClass) };


    // startTlsStatus Field Functions 
    bool hasStartTlsStatus() const { return this->startTlsStatus_ != nullptr;};
    void deleteStartTlsStatus() { this->startTlsStatus_ = nullptr;};
    inline string startTlsStatus() const { DARABONBA_PTR_GET_DEFAULT(startTlsStatus_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setStartTlsStatus(string startTlsStatus) { DARABONBA_PTR_SET_VALUE(startTlsStatus_, startTlsStatus) };


    // userLoginIdentifier Field Functions 
    bool hasUserLoginIdentifier() const { return this->userLoginIdentifier_ != nullptr;};
    void deleteUserLoginIdentifier() { this->userLoginIdentifier_ = nullptr;};
    inline string userLoginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(userLoginIdentifier_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setUserLoginIdentifier(string userLoginIdentifier) { DARABONBA_PTR_SET_VALUE(userLoginIdentifier_, userLoginIdentifier) };


    // userObjectClass Field Functions 
    bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
    void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
    inline string userObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


    // userObjectClassCustomFilter Field Functions 
    bool hasUserObjectClassCustomFilter() const { return this->userObjectClassCustomFilter_ != nullptr;};
    void deleteUserObjectClassCustomFilter() { this->userObjectClassCustomFilter_ = nullptr;};
    inline string userObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(userObjectClassCustomFilter_, "") };
    inline CreateIdentityProviderRequestLdapConfig& setUserObjectClassCustomFilter(string userObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(userObjectClassCustomFilter_, userObjectClassCustomFilter) };


  protected:
    // Administrator password.
    std::shared_ptr<string> administratorPassword_ = nullptr;
    // Administrator username.
    std::shared_ptr<string> administratorUsername_ = nullptr;
    // Whether to verify the certificate fingerprint. Value range:
    // 
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> certificateFingerprintStatus_ = nullptr;
    // List of certificate fingerprints.
    std::shared_ptr<vector<string>> certificateFingerprints_ = nullptr;
    // Group member attribute name.
    std::shared_ptr<string> groupMemberAttributeName_ = nullptr;
    // Group ObjectClass.
    std::shared_ptr<string> groupObjectClass_ = nullptr;
    // Custom filter for Group ObjectClass.
    std::shared_ptr<string> groupObjectClassCustomFilter_ = nullptr;
    // Communication protocol.
    std::shared_ptr<string> ldapProtocol_ = nullptr;
    // AD/LDAP server address.
    std::shared_ptr<string> ldapServerHost_ = nullptr;
    // AD/LDAP port number.
    std::shared_ptr<int32_t> ldapServerPort_ = nullptr;
    // Organization Unit ObjectClass.
    std::shared_ptr<string> organizationUnitObjectClass_ = nullptr;
    // Whether startTLS is enabled. Value range:
    // - Disabled: disabled
    // 
    // - Enabled: enabled
    std::shared_ptr<string> startTlsStatus_ = nullptr;
    // User login identifier.
    std::shared_ptr<string> userLoginIdentifier_ = nullptr;
    // User ObjectClass.
    std::shared_ptr<string> userObjectClass_ = nullptr;
    // Custom filter for User ObjectClass.
    std::shared_ptr<string> userObjectClassCustomFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
