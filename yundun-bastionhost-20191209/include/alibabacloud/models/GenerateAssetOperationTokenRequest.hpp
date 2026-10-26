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
        && this->assetAccountName_ == nullptr && this->assetAccountPassword_ == nullptr && this->assetAccountProtocolName_ == nullptr && this->assetId_ == nullptr && this->assetType_ == nullptr
        && this->databaseSchema_ == nullptr && this->instanceId_ == nullptr && this->loginAttribute_ == nullptr && this->operationMode_ == nullptr && this->operationNote_ == nullptr
        && this->regionId_ == nullptr && this->ssoClient_ == nullptr; };
    // assetAccountId Field Functions 
    bool hasAssetAccountId() const { return this->assetAccountId_ != nullptr;};
    void deleteAssetAccountId() { this->assetAccountId_ = nullptr;};
    inline string getAssetAccountId() const { DARABONBA_PTR_GET_DEFAULT(assetAccountId_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountId(string assetAccountId) { DARABONBA_PTR_SET_VALUE(assetAccountId_, assetAccountId) };


    // assetAccountName Field Functions 
    bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
    void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
    inline string getAssetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


    // assetAccountPassword Field Functions 
    bool hasAssetAccountPassword() const { return this->assetAccountPassword_ != nullptr;};
    void deleteAssetAccountPassword() { this->assetAccountPassword_ = nullptr;};
    inline string getAssetAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(assetAccountPassword_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountPassword(string assetAccountPassword) { DARABONBA_PTR_SET_VALUE(assetAccountPassword_, assetAccountPassword) };


    // assetAccountProtocolName Field Functions 
    bool hasAssetAccountProtocolName() const { return this->assetAccountProtocolName_ != nullptr;};
    void deleteAssetAccountProtocolName() { this->assetAccountProtocolName_ = nullptr;};
    inline string getAssetAccountProtocolName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountProtocolName_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetAccountProtocolName(string assetAccountProtocolName) { DARABONBA_PTR_SET_VALUE(assetAccountProtocolName_, assetAccountProtocolName) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline GenerateAssetOperationTokenRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // databaseSchema Field Functions 
    bool hasDatabaseSchema() const { return this->databaseSchema_ != nullptr;};
    void deleteDatabaseSchema() { this->databaseSchema_ = nullptr;};
    inline string getDatabaseSchema() const { DARABONBA_PTR_GET_DEFAULT(databaseSchema_, "") };
    inline GenerateAssetOperationTokenRequest& setDatabaseSchema(string databaseSchema) { DARABONBA_PTR_SET_VALUE(databaseSchema_, databaseSchema) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateAssetOperationTokenRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginAttribute Field Functions 
    bool hasLoginAttribute() const { return this->loginAttribute_ != nullptr;};
    void deleteLoginAttribute() { this->loginAttribute_ = nullptr;};
    inline string getLoginAttribute() const { DARABONBA_PTR_GET_DEFAULT(loginAttribute_, "") };
    inline GenerateAssetOperationTokenRequest& setLoginAttribute(string loginAttribute) { DARABONBA_PTR_SET_VALUE(loginAttribute_, loginAttribute) };


    // operationMode Field Functions 
    bool hasOperationMode() const { return this->operationMode_ != nullptr;};
    void deleteOperationMode() { this->operationMode_ = nullptr;};
    inline string getOperationMode() const { DARABONBA_PTR_GET_DEFAULT(operationMode_, "") };
    inline GenerateAssetOperationTokenRequest& setOperationMode(string operationMode) { DARABONBA_PTR_SET_VALUE(operationMode_, operationMode) };


    // operationNote Field Functions 
    bool hasOperationNote() const { return this->operationNote_ != nullptr;};
    void deleteOperationNote() { this->operationNote_ = nullptr;};
    inline string getOperationNote() const { DARABONBA_PTR_GET_DEFAULT(operationNote_, "") };
    inline GenerateAssetOperationTokenRequest& setOperationNote(string operationNote) { DARABONBA_PTR_SET_VALUE(operationNote_, operationNote) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateAssetOperationTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ssoClient Field Functions 
    bool hasSsoClient() const { return this->ssoClient_ != nullptr;};
    void deleteSsoClient() { this->ssoClient_ = nullptr;};
    inline string getSsoClient() const { DARABONBA_PTR_GET_DEFAULT(ssoClient_, "") };
    inline GenerateAssetOperationTokenRequest& setSsoClient(string ssoClient) { DARABONBA_PTR_SET_VALUE(ssoClient_, ssoClient) };


  protected:
    // The ID of the asset account for which you want to apply for an O&M token.
    // > You must specify at least one of AssetAccountId and AssetAccountName. If both are specified, AssetAccountId takes precedence.
    shared_ptr<string> assetAccountId_ {};
    // The name of the host account. If the account is a custom account, specify the actual account name.
    // 
    // > If both AssetAccountId and AssetAccountName are specified, AssetAccountId takes precedence.
    shared_ptr<string> assetAccountName_ {};
    // The Base64-encoded password. This parameter is required when you apply for an O&M token for a custom account.
    shared_ptr<string> assetAccountPassword_ {};
    // The name of the protocol. Valid values:
    // 
    // - **SSH**
    // - **RDP**
    // - **Oracle**
    // - **PostgreSQL**
    // - **MySQL**
    // - **SQLServer**
    // 
    // > This parameter is required when you apply for an O&M token for a custom account.
    shared_ptr<string> assetAccountProtocolName_ {};
    // The ID of the asset for which you want to apply for an O&M token.
    // 
    // This parameter is required.
    shared_ptr<string> assetId_ {};
    // The Asset Type for which you want to apply for a token. Valid values:
    // - **Host**: host
    // - **Database**: database
    // 
    // This parameter is required.
    shared_ptr<string> assetType_ {};
    // The name of the database. This parameter is required when OperationMode is set to Sso, AssetAccountProtocolName is set to PostgreSQL or Oracle, and the account is a custom account.
    // > This parameter is supported only in Bastionhost V3.2.44 and later.
    shared_ptr<string> databaseSchema_ {};
    // The instance ID of the Bastionhost instance for which you want to apply for an O&M token.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The logon attribute. This parameter is required when OperationMode is set to Sso and the account is a custom Oracle account. Valid values:
    // - **SERVICENAME**
    // - **SID**
    // > This parameter is supported only in Bastionhost V3.2.44 and later.
    shared_ptr<string> loginAttribute_ {};
    // The O&M logon method. Valid values:
    // - **WebToken**: obtain an O&M token
    // - **Sso**: log on by using a local client
    // > This parameter is supported only in Bastionhost V3.2.44 and later. If this parameter is left empty, the default value WebToken is used.
    shared_ptr<string> operationMode_ {};
    // The logon note. This parameter is required when the administrator enables the logon note feature in the control policy.
    shared_ptr<string> operationNote_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The type of the local client to be opened for O&M operations on Linux assets. This parameter is required when OperationMode is set to Sso and the asset protocol is SSH. Valid values:
    // - **ssh**: open an SSH client to perform O&M operations with SSH permissions
    // - **sftp**: open an SFTP client to perform O&M operations with SFTP permissions
    // > This parameter is supported only in Bastionhost V3.2.44 and later.
    shared_ptr<string> ssoClient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
