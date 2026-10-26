// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAMASKINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAMASKINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class CreateDataMaskingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataMaskingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncAlgorithm, encAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskHandleId, riskHandleId_);
      DARABONBA_PTR_TO_JSON(SubRuleList, subRuleList_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataMaskingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncAlgorithm, encAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskHandleId, riskHandleId_);
      DARABONBA_PTR_FROM_JSON(SubRuleList, subRuleList_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    CreateDataMaskingRuleRequest() = default ;
    CreateDataMaskingRuleRequest(const CreateDataMaskingRuleRequest &) = default ;
    CreateDataMaskingRuleRequest(CreateDataMaskingRuleRequest &&) = default ;
    CreateDataMaskingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataMaskingRuleRequest() = default ;
    CreateDataMaskingRuleRequest& operator=(const CreateDataMaskingRuleRequest &) = default ;
    CreateDataMaskingRuleRequest& operator=(CreateDataMaskingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AuthDb, authDb_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AuthDb, authDb_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->authDb_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline UserList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // authDb Field Functions 
      bool hasAuthDb() const { return this->authDb_ != nullptr;};
      void deleteAuthDb() { this->authDb_ = nullptr;};
      inline string getAuthDb() const { DARABONBA_PTR_GET_DEFAULT(authDb_, "") };
      inline UserList& setAuthDb(string authDb) { DARABONBA_PTR_SET_VALUE(authDb_, authDb) };


    protected:
      // The identifier of the database account. You can obtain it from Items[].Id in the response of the ListDataAssetAccounts operation. Pass the value as a string.
      shared_ptr<string> accountId_ {};
      // The authentication database for MongoDB accounts. This parameter is required when you select a MongoDB account. You do not need to pass this parameter for other services.
      shared_ptr<string> authDb_ {};
    };

    class SubRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, SubRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      SubRuleList() = default ;
      SubRuleList(const SubRuleList &) = default ;
      SubRuleList(SubRuleList &&) = default ;
      SubRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubRuleList() = default ;
      SubRuleList& operator=(const SubRuleList &) = default ;
      SubRuleList& operator=(SubRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columns_ == nullptr
        && this->dbName_ == nullptr && this->tableName_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline string getColumns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
      inline SubRuleList& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline SubRuleList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline SubRuleList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The list of target column names. Multiple column names are separated by commas (,).
      shared_ptr<string> columns_ {};
      // The name of the target database.
      shared_ptr<string> dbName_ {};
      // The name of the target table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->encAlgorithm_ == nullptr
        && this->encryptionKeyId_ == nullptr && this->encryptionKeyMode_ == nullptr && this->engineType_ == nullptr && this->expireTime_ == nullptr && this->expireTimeOperation_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskHandleId_ == nullptr
        && this->subRuleList_ == nullptr && this->userList_ == nullptr; };
    // encAlgorithm Field Functions 
    bool hasEncAlgorithm() const { return this->encAlgorithm_ != nullptr;};
    void deleteEncAlgorithm() { this->encAlgorithm_ = nullptr;};
    inline string getEncAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encAlgorithm_, "") };
    inline CreateDataMaskingRuleRequest& setEncAlgorithm(string encAlgorithm) { DARABONBA_PTR_SET_VALUE(encAlgorithm_, encAlgorithm) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline CreateDataMaskingRuleRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // encryptionKeyMode Field Functions 
    bool hasEncryptionKeyMode() const { return this->encryptionKeyMode_ != nullptr;};
    void deleteEncryptionKeyMode() { this->encryptionKeyMode_ = nullptr;};
    inline string getEncryptionKeyMode() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyMode_, "") };
    inline CreateDataMaskingRuleRequest& setEncryptionKeyMode(string encryptionKeyMode) { DARABONBA_PTR_SET_VALUE(encryptionKeyMode_, encryptionKeyMode) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateDataMaskingRuleRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline CreateDataMaskingRuleRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeOperation Field Functions 
    bool hasExpireTimeOperation() const { return this->expireTimeOperation_ != nullptr;};
    void deleteExpireTimeOperation() { this->expireTimeOperation_ = nullptr;};
    inline string getExpireTimeOperation() const { DARABONBA_PTR_GET_DEFAULT(expireTimeOperation_, "") };
    inline CreateDataMaskingRuleRequest& setExpireTimeOperation(string expireTimeOperation) { DARABONBA_PTR_SET_VALUE(expireTimeOperation_, expireTimeOperation) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDataMaskingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataMaskingRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateDataMaskingRuleRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline CreateDataMaskingRuleRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskHandleId Field Functions 
    bool hasRiskHandleId() const { return this->riskHandleId_ != nullptr;};
    void deleteRiskHandleId() { this->riskHandleId_ = nullptr;};
    inline int64_t getRiskHandleId() const { DARABONBA_PTR_GET_DEFAULT(riskHandleId_, 0L) };
    inline CreateDataMaskingRuleRequest& setRiskHandleId(int64_t riskHandleId) { DARABONBA_PTR_SET_VALUE(riskHandleId_, riskHandleId) };


    // subRuleList Field Functions 
    bool hasSubRuleList() const { return this->subRuleList_ != nullptr;};
    void deleteSubRuleList() { this->subRuleList_ = nullptr;};
    inline const vector<CreateDataMaskingRuleRequest::SubRuleList> & getSubRuleList() const { DARABONBA_PTR_GET_CONST(subRuleList_, vector<CreateDataMaskingRuleRequest::SubRuleList>) };
    inline vector<CreateDataMaskingRuleRequest::SubRuleList> getSubRuleList() { DARABONBA_PTR_GET(subRuleList_, vector<CreateDataMaskingRuleRequest::SubRuleList>) };
    inline CreateDataMaskingRuleRequest& setSubRuleList(const vector<CreateDataMaskingRuleRequest::SubRuleList> & subRuleList) { DARABONBA_PTR_SET_VALUE(subRuleList_, subRuleList) };
    inline CreateDataMaskingRuleRequest& setSubRuleList(vector<CreateDataMaskingRuleRequest::SubRuleList> && subRuleList) { DARABONBA_PTR_SET_RVALUE(subRuleList_, subRuleList) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<CreateDataMaskingRuleRequest::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<CreateDataMaskingRuleRequest::UserList>) };
    inline vector<CreateDataMaskingRuleRequest::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<CreateDataMaskingRuleRequest::UserList>) };
    inline CreateDataMaskingRuleRequest& setUserList(const vector<CreateDataMaskingRuleRequest::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline CreateDataMaskingRuleRequest& setUserList(vector<CreateDataMaskingRuleRequest::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The name of the column encryption algorithm. The availability of AES_128_GCM, AES_256_GCM, and SM4_128_GCM depends on the instance. Select an available algorithm from ListDataMaskingEncryptionAlgorithms.
    shared_ptr<string> encAlgorithm_ {};
    // The identifier of the Key Management Service (KMS) key. You can obtain it from Items[].KeyId in the response of the ListKmsKeys operation. Provide this parameter when you use a KMS key. Do not pass this parameter in local key scenarios.
    shared_ptr<string> encryptionKeyId_ {};
    // The key mode. Valid values:
    // - client_key: local key
    // - kms_key: KMS key
    // When you use kms_key, you must specify EncryptionKeyId.
    shared_ptr<string> encryptionKeyMode_ {};
    // The type of the database engine. The value must be consistent with the EngineType of the target instance, such as MySQL or PostgreSQL.
    shared_ptr<string> engineType_ {};
    // The expiration time of the plaintext permission. The value is a UNIX timestamp in milliseconds since 00:00:00 UTC on January 1, 1970. Specify this parameter only when ExpireTimeOperation is set to SET. The value must be later than the current time and no greater than 2145953410000. The server saves the value with second precision. Do not specify this parameter when ExpireTimeOperation is set to PRESERVE or CLEAR.
    shared_ptr<int64_t> expireTime_ {};
    // The processing method for the permission expiration time. Valid values:
    // - PRESERVE: retains the original expiration time.
    // - CLEAR: clears the expiration time.
    // - SET: sets ExpireTime.
    // Default value: PRESERVE. Only fullAccess supports setting a validity period.
    shared_ptr<string> expireTimeOperation_ {};
    // The instance identity. You can obtain it from Items[].InstanceId in the response of the ListDataMaskingInstances operation.
    shared_ptr<string> instanceId_ {};
    // The language of the response description. Valid values:
    // - zh: Chinese
    // - en: English
    shared_ptr<string> lang_ {};
    // The code of the cloud service. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also passed, the two must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The identifier of the cloud service type. Valid values:
    // - 5: RDS
    // - 8: POLARDB
    // - 27: PolarDBX2
    // When specified together with ProductCode, the values must correspond to each other.
    shared_ptr<int64_t> productId_ {};
    // The identifier of the associated risk handling record. You do not need to specify this parameter in the standard column encryption creation process.
    shared_ptr<int64_t> riskHandleId_ {};
    // The list of column encryption targets grouped by database and table.
    shared_ptr<vector<CreateDataMaskingRuleRequest::SubRuleList>> subRuleList_ {};
    // The list of database accounts to which the fullAccess plaintext permission is granted. The accounts must belong to the target instance.
    shared_ptr<vector<CreateDataMaskingRuleRequest::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
