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
    // The ID of the asset account.
    // 
    // > You must specify at least one of `AssetAccountId` and `AssetAccountName`. If you specify both parameters, `AssetAccountId` is used.
    shared_ptr<string> assetAccountId_ {};
    // The name of the asset account. If this parameter specifies a custom account, you must enter the actual account name.
    // 
    // > If you specify both `AssetAccountId` and `AssetAccountName`, `AssetAccountId` is used.
    shared_ptr<string> assetAccountName_ {};
    // The password that is encoded in Base64. This parameter is required if you want to generate an O\\&M token for a custom account.
    shared_ptr<string> assetAccountPassword_ {};
    // The protocol that is used to connect to the asset. Valid values:
    // 
    // - **SSH**
    // 
    // - **RDP**
    // 
    // - **Oracle**
    // 
    // - **PostgreSQL**
    // 
    // - **MySQL**
    // 
    // - **SQLServer**
    // 
    // > This parameter is required if you want to generate an O\\&M token for a custom account.
    shared_ptr<string> assetAccountProtocolName_ {};
    // The ID of the asset.
    // 
    // This parameter is required.
    shared_ptr<string> assetId_ {};
    // The type of the asset for which you want to generate an O\\&M token. Valid values:
    // 
    // - **Host**
    // 
    // - **Database**
    // 
    // This parameter is required.
    shared_ptr<string> assetType_ {};
    // The name of the database. This parameter is required for a custom account if you set OperationMode to Sso and AssetAccountProtocolName to PostgreSQL or Oracle.
    // 
    // > This parameter is supported only by bastion hosts of V3.2.44 or later.
    shared_ptr<string> databaseSchema_ {};
    // The ID of the bastion host instance.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The logon attribute. This parameter is required if you set OperationMode to Sso and use a custom Oracle account. Valid values:
    // 
    // - **SERVICENAME**
    // 
    // - **SID**
    // 
    // > This parameter is supported only by bastion hosts of V3.2.44 or later.
    shared_ptr<string> loginAttribute_ {};
    // The O\\&M mode. Valid values:
    // 
    // - **WebToken**: generates an O\\&M token.
    // 
    // - **Sso**: logs on to the client.
    // 
    // > This parameter is supported only by bastion hosts of V3.2.44 or later. If you do not specify this parameter, WebToken is used.
    shared_ptr<string> operationMode_ {};
    // The remarks for the logon. This parameter is required if your administrator enables logon remarks in the control policy.
    shared_ptr<string> operationNote_ {};
    // The region ID of the bastion host instance.
    // 
    // > For more information about region IDs, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The type of the client that you want to use for O\\&M on a Linux asset. This parameter is required if you set OperationMode to Sso and the asset protocol to SSH. Valid values:
    // 
    // - **ssh**: opens a client that supports the SSH protocol to perform O\\&M with SSH permissions.
    // 
    // - **sftp**: opens a client that supports the SFTP protocol to perform O\\&M with SFTP permissions.
    // 
    // > This parameter is supported only by bastion hosts of V3.2.44 or later.
    shared_ptr<string> ssoClient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
