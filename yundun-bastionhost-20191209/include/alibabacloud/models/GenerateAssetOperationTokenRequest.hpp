// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GenerateAssetOperationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAssetOperationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetAccountId, assetAccountId_);
      DARABONBA_PTR_TO_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_TO_JSON(AssetAccountPassword, assetAccountPassword_);
      DARABONBA_PTR_TO_JSON(AssetAccountProtocolName, assetAccountProtocolName_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_TO_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_TO_JSON(OperationNote, operationNote_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SsoClient, ssoClient_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAssetOperationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetAccountId, assetAccountId_);
      DARABONBA_PTR_FROM_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_FROM_JSON(AssetAccountPassword, assetAccountPassword_);
      DARABONBA_PTR_FROM_JSON(AssetAccountProtocolName, assetAccountProtocolName_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(DatabaseSchema, databaseSchema_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginAttribute, loginAttribute_);
      DARABONBA_PTR_FROM_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_FROM_JSON(OperationNote, operationNote_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SsoClient, ssoClient_);
    };
    GenerateAssetOperationTokenRequest() = default ;
    GenerateAssetOperationTokenRequest(const GenerateAssetOperationTokenRequest &) = default ;
    GenerateAssetOperationTokenRequest(GenerateAssetOperationTokenRequest &&) = default ;
    GenerateAssetOperationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAssetOperationTokenRequest() = default ;
    GenerateAssetOperationTokenRequest& operator=(const GenerateAssetOperationTokenRequest &) = default ;
    GenerateAssetOperationTokenRequest& operator=(GenerateAssetOperationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetAccountId_ == nullptr
        && return this->assetAccountName_ == nullptr && return this->assetAccountPassword_ == nullptr && return this->assetAccountProtocolName_ == nullptr && return this->assetId_ == nullptr && return this->assetType_ == nullptr
        && return this->databaseSchema_ == nullptr && return this->instanceId_ == nullptr && return this->loginAttribute_ == nullptr && return this->operationMode_ == nullptr && return this->operationNote_ == nullptr
        && return this->regionId_ == nullptr && return this->ssoClient_ == nullptr; };
    // assetAccountId Field Functions 
    bool hasAssetAccountId() const { return this->assetAccountId_ != nullptr;};
    void deleteAssetAccountId() { this->assetAccountId_ = nullptr;};
    inline string assetAccountId() const { DARABONBA_PTR_GET_DEFAULT(assetAccountId_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountId(string assetAccountId) { DARABONBA_PTR_SET_VALUE(assetAccountId_, assetAccountId) };


    // assetAccountName Field Functions 
    bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
    void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
    inline string assetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


    // assetAccountPassword Field Functions 
    bool hasAssetAccountPassword() const { return this->assetAccountPassword_ != nullptr;};
    void deleteAssetAccountPassword() { this->assetAccountPassword_ = nullptr;};
    inline string assetAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(assetAccountPassword_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountPassword(string assetAccountPassword) { DARABONBA_PTR_SET_VALUE(assetAccountPassword_, assetAccountPassword) };


    // assetAccountProtocolName Field Functions 
    bool hasAssetAccountProtocolName() const { return this->assetAccountProtocolName_ != nullptr;};
    void deleteAssetAccountProtocolName() { this->assetAccountProtocolName_ = nullptr;};
    inline string assetAccountProtocolName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountProtocolName_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountProtocolName(string assetAccountProtocolName) { DARABONBA_PTR_SET_VALUE(assetAccountProtocolName_, assetAccountProtocolName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string databaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline GenerateAssetOperationTokenRequest& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateAssetOperationTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginAttribute Field Functions 
    bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
    void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
    inline string loginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
    inline GenerateAssetOperationTokenRequest& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


    // operationMode Field Functions 
    bool hasOperationMode() const { return this->operationMode_ != nullptr;};
    void deleteOperationMode() { this->operationMode_ = nullptr;};
    inline string operationMode() const { DARABONBA_PTR_GET_DEFAULT(operationMode_, "") };
    inline GenerateAssetOperationTokenRequest& setOperationMode(string operationMode) { DARABONBA_PTR_SET_VALUE(operationMode_, operationMode) };


    // operationNote Field Functions 
    bool hasOperationNote() const { return this->operationNote_ != nullptr;};
    void deleteOperationNote() { this->operationNote_ = nullptr;};
    inline string operationNote() const { DARABONBA_PTR_GET_DEFAULT(operationNote_, "") };
    inline GenerateAssetOperationTokenRequest& setOperationNote(string operationNote) { DARABONBA_PTR_SET_VALUE(operationNote_, operationNote) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateAssetOperationTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ssoClient Field Functions 
    bool hasSsoClient() const { return this->ssoClient_ != nullptr;};
    void deleteSsoClient() { this->ssoClient_ = nullptr;};
    inline string ssoClient() const { DARABONBA_PTR_GET_DEFAULT(ssoClient_, "") };
    inline GenerateAssetOperationTokenRequest& setSsoClient(string ssoClient) { DARABONBA_PTR_SET_VALUE(ssoClient_, ssoClient) };


  protected:
    // The ID of the account whose assets the O\\&M token takes effect.
    // 
    // >  You must specify at least one of the following parameters: AssetAccountId and AssetAccountName. If you specify both parameters, AssetAccountId takes precedence.
    std::shared_ptr<string> assetAccountId_ = nullptr;
    // The name of the host account. If you use a custom account, enter a real account name.
    // 
    // >  When both AssetAccountId and AssetAccountName are specified, AssetAccountId takes precedence.
    std::shared_ptr<string> assetAccountName_ = nullptr;
    // The Base64-encoded password. This parameter is required if you want to apply for an O\\&M token for a custom account.
    std::shared_ptr<string> assetAccountPassword_ = nullptr;
    // The name of the protocol. Valid values:
    // 
    // *   SSH
    // *   RDP
    // *   Oracle
    // *   PostgreSQL
    // *   MySQL
    // *   SQLServer
    std::shared_ptr<string> assetAccountProtocolName_ = nullptr;
    // The ID of the asset for which you want to apply for an O\\&M token.
    // 
    // This parameter is required.
    std::shared_ptr<string> assetId_ = nullptr;
    // The type of the asset for which you want to apply for an O\\&M token. Valid values:
    // 
    // *   **Host**
    // *   **Database**
    // 
    // This parameter is required.
    std::shared_ptr<string> assetType_ = nullptr;
    // The name of the database. If you set OperationMode to Sso and AssetAccountProtocolName to PostgreSQL or Oracle and you select Custom Account for the Database Account parameter, you must specify this parameter.
    // 
    // >This parameter is available only for bastion hosts that run V3.2.44 or later.
    std::shared_ptr<string> databaseSchema_ = nullptr;
    // The ID of the bastion host for which you want to apply an O\\&M token.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The logon attribute. If you set OperationMode to Sso and AssetAccountProtocolName to Oracle, you must specify this parameter. Valid values:
    // 
    // *   **SERVICENAME**
    // *   **SID**
    // 
    // >  This parameter is available only for Bastionhost V3.2.44 and later.
    std::shared_ptr<string> loginAttribute_ = nullptr;
    // The O\\&M logon method. Valid values:
    // 
    // *   **WebToken**: O\\&M token-based logon.
    // *   **Sso**: local client-based logon.
    // 
    // >  This parameter is available only for Bastionhost V3.2.44 and later. If you do not specify this parameter, the default value WebToken is used.
    std::shared_ptr<string> operationMode_ = nullptr;
    // The logon remarks. This parameter is required if an administrator enables the feature of logon remarks on the Control Policies page.
    std::shared_ptr<string> operationNote_ = nullptr;
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the local client that you want to perform O\\&M operations on Linux assets. If you set OperationMode to Sso and AssetAccountProtocolName to SSH, you must specify this parameter. Valid values:
    // 
    // *   **ssh**: Perform O\\&M operations on Linux assets by connecting to a bastion host from an SSH client.
    // *   **sftp**: Perform O\\&M operations on Linux assets by connecting to a bastion host from a Secure File Transfer Protocol (SFTP) client.
    // 
    // >  This parameter is available only for Bastionhost V3.2.44 and later.
    std::shared_ptr<string> ssoClient_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
