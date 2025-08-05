// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHANAINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHANAINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateHanaInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHanaInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(HanaName, hanaName_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHanaInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(HanaName, hanaName_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateHanaInstanceRequest() = default ;
    CreateHanaInstanceRequest(const CreateHanaInstanceRequest &) = default ;
    CreateHanaInstanceRequest(CreateHanaInstanceRequest &&) = default ;
    CreateHanaInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHanaInstanceRequest() = default ;
    CreateHanaInstanceRequest& operator=(const CreateHanaInstanceRequest &) = default ;
    CreateHanaInstanceRequest& operator=(CreateHanaInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertSetting_ != nullptr
        && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->ecsInstanceId_ != nullptr && this->hanaName_ != nullptr
        && this->host_ != nullptr && this->instanceNumber_ != nullptr && this->password_ != nullptr && this->resourceGroupId_ != nullptr && this->sid_ != nullptr
        && this->useSsl_ != nullptr && this->userName_ != nullptr && this->validateCertificate_ != nullptr && this->vaultId_ != nullptr; };
    // alertSetting Field Functions 
    bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
    void deleteAlertSetting() { this->alertSetting_ = nullptr;};
    inline string alertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
    inline CreateHanaInstanceRequest& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateHanaInstanceRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateHanaInstanceRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateHanaInstanceRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline CreateHanaInstanceRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // hanaName Field Functions 
    bool hasHanaName() const { return this->hanaName_ != nullptr;};
    void deleteHanaName() { this->hanaName_ = nullptr;};
    inline string hanaName() const { DARABONBA_PTR_GET_DEFAULT(hanaName_, "") };
    inline CreateHanaInstanceRequest& setHanaName(string hanaName) { DARABONBA_PTR_SET_VALUE(hanaName_, hanaName) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateHanaInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceNumber Field Functions 
    bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
    void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
    inline int32_t instanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
    inline CreateHanaInstanceRequest& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateHanaInstanceRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateHanaInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline CreateHanaInstanceRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline bool useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
    inline CreateHanaInstanceRequest& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateHanaInstanceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // validateCertificate Field Functions 
    bool hasValidateCertificate() const { return this->validateCertificate_ != nullptr;};
    void deleteValidateCertificate() { this->validateCertificate_ = nullptr;};
    inline bool validateCertificate() const { DARABONBA_PTR_GET_DEFAULT(validateCertificate_, false) };
    inline CreateHanaInstanceRequest& setValidateCertificate(bool validateCertificate) { DARABONBA_PTR_SET_VALUE(validateCertificate_, validateCertificate) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateHanaInstanceRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
    std::shared_ptr<string> alertSetting_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // The backup type. Valid values:
    // 
    // - **SELF_ACCOUNT**: Data is backed up within the same Alibaba Cloud account.
    // - **CROSS_ACCOUNT**: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The IDs of the ECS instances that host the SAP HANA instance to be registered. Cloud Backup installs backup clients on the specified ECS instances.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The name of the SAP HANA instance.
    std::shared_ptr<string> hanaName_ = nullptr;
    // The private or internal IP address of the host where the primary node of the SAP HANA instance resides.
    std::shared_ptr<string> host_ = nullptr;
    // The instance number of the SAP HANA system.
    std::shared_ptr<int32_t> instanceNumber_ = nullptr;
    // The password that is used to connect with the SAP HANA database.
    std::shared_ptr<string> password_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security identifier (SID) of the SAP HANA database. For more information, see [How to find sid user and instance number of HANA db?](https://answers.sap.com/questions/555192/how-to-find-sid-user-and-instance-number-of-hana-d.html?spm=a2c4g.11186623.0.0.55c34b4ftZeXNK).
    std::shared_ptr<string> sid_ = nullptr;
    // Specifies whether to connect with the SAP HANA database over Secure Sockets Layer (SSL).
    std::shared_ptr<bool> useSsl_ = nullptr;
    // The username of the SYSTEMDB database.
    std::shared_ptr<string> userName_ = nullptr;
    // Specifies whether to verify the SSL certificate of the SAP HANA database.
    std::shared_ptr<bool> validateCertificate_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
