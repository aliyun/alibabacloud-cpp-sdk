// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANASHANA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANAINSTANCESRESPONSEBODYHANASHANA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHanaInstancesResponseBodyHanasHanaTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaInstancesResponseBodyHanasHana : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaInstancesResponseBodyHanasHana& obj) { 
      DARABONBA_PTR_TO_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(HanaName, hanaName_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaInstancesResponseBodyHanasHana& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertSetting, alertSetting_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(HanaName, hanaName_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceNumber, instanceNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(ValidateCertificate, validateCertificate_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeHanaInstancesResponseBodyHanasHana() = default ;
    DescribeHanaInstancesResponseBodyHanasHana(const DescribeHanaInstancesResponseBodyHanasHana &) = default ;
    DescribeHanaInstancesResponseBodyHanasHana(DescribeHanaInstancesResponseBodyHanasHana &&) = default ;
    DescribeHanaInstancesResponseBodyHanasHana(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaInstancesResponseBodyHanasHana() = default ;
    DescribeHanaInstancesResponseBodyHanasHana& operator=(const DescribeHanaInstancesResponseBodyHanasHana &) = default ;
    DescribeHanaInstancesResponseBodyHanasHana& operator=(DescribeHanaInstancesResponseBodyHanasHana &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertSetting_ == nullptr
        && return this->clusterId_ == nullptr && return this->crossAccountRoleName_ == nullptr && return this->crossAccountType_ == nullptr && return this->crossAccountUserId_ == nullptr && return this->hanaName_ == nullptr
        && return this->host_ == nullptr && return this->instanceNumber_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->statusMessage_ == nullptr
        && return this->tags_ == nullptr && return this->useSsl_ == nullptr && return this->userName_ == nullptr && return this->validateCertificate_ == nullptr && return this->vaultId_ == nullptr; };
    // alertSetting Field Functions 
    bool hasAlertSetting() const { return this->alertSetting_ != nullptr;};
    void deleteAlertSetting() { this->alertSetting_ = nullptr;};
    inline string alertSetting() const { DARABONBA_PTR_GET_DEFAULT(alertSetting_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setAlertSetting(string alertSetting) { DARABONBA_PTR_SET_VALUE(alertSetting_, alertSetting) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // hanaName Field Functions 
    bool hasHanaName() const { return this->hanaName_ != nullptr;};
    void deleteHanaName() { this->hanaName_ = nullptr;};
    inline string hanaName() const { DARABONBA_PTR_GET_DEFAULT(hanaName_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setHanaName(string hanaName) { DARABONBA_PTR_SET_VALUE(hanaName_, hanaName) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceNumber Field Functions 
    bool hasInstanceNumber() const { return this->instanceNumber_ != nullptr;};
    void deleteInstanceNumber() { this->instanceNumber_ = nullptr;};
    inline int32_t instanceNumber() const { DARABONBA_PTR_GET_DEFAULT(instanceNumber_, 0) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setInstanceNumber(int32_t instanceNumber) { DARABONBA_PTR_SET_VALUE(instanceNumber_, instanceNumber) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeHanaInstancesResponseBodyHanasHanaTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeHanaInstancesResponseBodyHanasHanaTags) };
    inline Models::DescribeHanaInstancesResponseBodyHanasHanaTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeHanaInstancesResponseBodyHanasHanaTags) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setTags(const Models::DescribeHanaInstancesResponseBodyHanasHanaTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setTags(Models::DescribeHanaInstancesResponseBodyHanasHanaTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline bool useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, false) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setUseSsl(bool useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // validateCertificate Field Functions 
    bool hasValidateCertificate() const { return this->validateCertificate_ != nullptr;};
    void deleteValidateCertificate() { this->validateCertificate_ = nullptr;};
    inline bool validateCertificate() const { DARABONBA_PTR_GET_DEFAULT(validateCertificate_, false) };
    inline DescribeHanaInstancesResponseBodyHanasHana& setValidateCertificate(bool validateCertificate) { DARABONBA_PTR_SET_VALUE(validateCertificate_, validateCertificate) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaInstancesResponseBodyHanasHana& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The alert settings. Valid value: INHERITED, which indicates that the Cloud Backup client sends alert notifications by using the same method configured for the backup vault.
    std::shared_ptr<string> alertSetting_ = nullptr;
    // The ID of the SAP HANA instance.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   **SELF_ACCOUNT**: Data is backed up within the same Alibaba Cloud account.
    // *   **CROSS_ACCOUNT**: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The name of the SAP HANA instance.
    std::shared_ptr<string> hanaName_ = nullptr;
    // The private or internal IP address of the host where the primary node of the SAP HANA instance resides.
    std::shared_ptr<string> host_ = nullptr;
    // The instance number of the SAP HANA system.
    std::shared_ptr<int32_t> instanceNumber_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the SAP HANA instance. Valid values:
    // 
    // *   INITIALIZING: The instance is being initialized.
    // *   INITIALIZED: The instance is registered.
    // *   INVALID_HANA_NODE: The instance is invalid.
    // *   INITIALIZE_FAILED: The client fails to be installed on the instance.
    std::shared_ptr<int64_t> status_ = nullptr;
    // The status information.
    std::shared_ptr<string> statusMessage_ = nullptr;
    // The tags of the SAP HANA instance.
    std::shared_ptr<Models::DescribeHanaInstancesResponseBodyHanasHanaTags> tags_ = nullptr;
    // Indicates whether the SAP HANA instance is connected over Secure Sockets Layer (SSL). Valid values:
    // 
    // *   true: The SAP HANA instance is connected over SSL.
    // *   false: The SAP HANA instance is not connected over SSL.
    std::shared_ptr<bool> useSsl_ = nullptr;
    // The username of the SYSTEMDB database.
    std::shared_ptr<string> userName_ = nullptr;
    // Indicates whether the SSL certificate of the SAP HANA instance is verified.
    std::shared_ptr<bool> validateCertificate_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
