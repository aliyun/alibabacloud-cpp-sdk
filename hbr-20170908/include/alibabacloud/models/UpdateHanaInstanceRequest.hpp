// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHANAINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHANAINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateHanaInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHanaInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HanaName, hanaName_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHanaInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HanaName, hanaName_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateHanaInstanceRequest() = default ;
    UpdateHanaInstanceRequest(const UpdateHanaInstanceRequest &) = default ;
    UpdateHanaInstanceRequest(UpdateHanaInstanceRequest &&) = default ;
    UpdateHanaInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHanaInstanceRequest() = default ;
    UpdateHanaInstanceRequest& operator=(const UpdateHanaInstanceRequest &) = default ;
    UpdateHanaInstanceRequest& operator=(UpdateHanaInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertSetting_ != nullptr
        && this->clusterId_ != nullptr && this->hanaName_ != nullptr && this->host_ != nullptr && this->instanceNumber_ != nullptr && this->password_ != nullptr
        && this->resourceGroupId_ != nullptr && this->useSsl_ != nullptr && this->userName_ != nullptr && this->validateCertificate_ != nullptr && this->vaultId_ != nullptr; };
    // alertSetting Field Functions 
    bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
    void deleteAlertSetting() { this->alertSetting_ = nullptr;};
    inline string alertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
    inline UpdateHanaInstanceRequest& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateHanaInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hanaName Field Functions 
    bool hasHanaName() const { return this->hanaName_ != nullptr;};
    void deleteHanaName() { this->hanaName_ = nullptr;};
    inline string hanaName() const { DARABONBA_PTR_GET_DEFAULT(hanaName_, "") };
    inline UpdateHanaInstanceRequest& setHanaName(string hanaName) { DARABONBA_PTR_SET_VALUE(hanaName_, hanaName) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateHanaInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceNumber Field Functions 
    bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
    void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
    inline int32_t instanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
    inline UpdateHanaInstanceRequest& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateHanaInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateHanaInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline bool useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
    inline UpdateHanaInstanceRequest& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateHanaInstanceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // validateCertificate Field Functions 
    bool hasValidateCertificate() const { return this->validateCertificate_ != nullptr;};
    void deleteValidateCertificate() { this->validateCertificate_ = nullptr;};
    inline bool validateCertificate() const { DARABONBA_PTR_GET_DEFAULT(validateCertificate_, false) };
    inline UpdateHanaInstanceRequest& setValidateCertificate(bool validateCertificate) { DARABONBA_PTR_SET_VALUE(validateCertificate_, validateCertificate) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateHanaInstanceRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
    std::shared_ptr<string> alertSetting_ = nullptr;
    // The ID of the SAP HANA instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the SAP HANA instance.
    std::shared_ptr<string> hanaName_ = nullptr;
    // The private or internal IP address of the host where the primary node of the SAP HANA instance resides.
    std::shared_ptr<string> host_ = nullptr;
    // The instance number of the SAP HANA system.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> instanceNumber_ = nullptr;
    // The password that is used to connect with the SAP HANA database.
    std::shared_ptr<string> password_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to connect with the SAP HANA database over Secure Sockets Layer (SSL). Valid values:
    // 
    // *   true: The SAP HANA database is connected over SSL.
    // *   false: The SAP HANA database is not connected over SSL.
    // 
    // This parameter is required.
    std::shared_ptr<bool> useSsl_ = nullptr;
    // The username of the SYSTEMDB database.
    std::shared_ptr<string> userName_ = nullptr;
    // Specifies whether to verify the SSL certificate of the SAP HANA database. Valid values:
    // 
    // *   true: The SSL certificate of the SAP HANA database is verified.
    // *   false: The SSL certificate of the SAP HANA database is not verified.
    // 
    // This parameter is required.
    std::shared_ptr<bool> validateCertificate_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
