// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class ListDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody(ListDataSourcesResponseBody &&) = default ;
    ListDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody& operator=(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody& operator=(ListDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(AuditSwitch, auditSwitch_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DbAddresses, dbAddresses_);
        DARABONBA_PTR_TO_JSON(DbCertificate, dbCertificate_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DbTypeName, dbTypeName_);
        DARABONBA_PTR_TO_JSON(DbUsername, dbUsername_);
        DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_TO_JSON(DbVersionName, dbVersionName_);
      };
      friend void from_json(const Darabonba::Json& j, DbList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(AuditSwitch, auditSwitch_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DbAddresses, dbAddresses_);
        DARABONBA_PTR_FROM_JSON(DbCertificate, dbCertificate_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DbTypeName, dbTypeName_);
        DARABONBA_PTR_FROM_JSON(DbUsername, dbUsername_);
        DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_FROM_JSON(DbVersionName, dbVersionName_);
      };
      DbList() = default ;
      DbList(const DbList &) = default ;
      DbList(DbList &&) = default ;
      DbList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbList() = default ;
      DbList& operator=(const DbList &) = default ;
      DbList& operator=(DbList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->auditSwitch_ == nullptr && this->createTime_ == nullptr && this->dbAddresses_ == nullptr && this->dbCertificate_ == nullptr && this->dbId_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbName_ == nullptr && this->dbType_ == nullptr && this->dbTypeName_ == nullptr && this->dbUsername_ == nullptr
        && this->dbVersion_ == nullptr && this->dbVersionName_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline DbList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // auditSwitch Field Functions 
      bool hasAuditSwitch() const { return this->auditSwitch_ != nullptr;};
      void deleteAuditSwitch() { this->auditSwitch_ = nullptr;};
      inline int32_t getAuditSwitch() const { DARABONBA_PTR_GET_DEFAULT(auditSwitch_, 0) };
      inline DbList& setAuditSwitch(int32_t auditSwitch) { DARABONBA_PTR_SET_VALUE(auditSwitch_, auditSwitch) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DbList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dbAddresses Field Functions 
      bool hasDbAddresses() const { return this->dbAddresses_ != nullptr;};
      void deleteDbAddresses() { this->dbAddresses_ = nullptr;};
      inline const vector<string> & getDbAddresses() const { DARABONBA_PTR_GET_CONST(dbAddresses_, vector<string>) };
      inline vector<string> getDbAddresses() { DARABONBA_PTR_GET(dbAddresses_, vector<string>) };
      inline DbList& setDbAddresses(const vector<string> & dbAddresses) { DARABONBA_PTR_SET_VALUE(dbAddresses_, dbAddresses) };
      inline DbList& setDbAddresses(vector<string> && dbAddresses) { DARABONBA_PTR_SET_RVALUE(dbAddresses_, dbAddresses) };


      // dbCertificate Field Functions 
      bool hasDbCertificate() const { return this->dbCertificate_ != nullptr;};
      void deleteDbCertificate() { this->dbCertificate_ = nullptr;};
      inline string getDbCertificate() const { DARABONBA_PTR_GET_DEFAULT(dbCertificate_, "") };
      inline DbList& setDbCertificate(string dbCertificate) { DARABONBA_PTR_SET_VALUE(dbCertificate_, dbCertificate) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline DbList& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline DbList& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline DbList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline int32_t getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, 0) };
      inline DbList& setDbType(int32_t dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // dbTypeName Field Functions 
      bool hasDbTypeName() const { return this->dbTypeName_ != nullptr;};
      void deleteDbTypeName() { this->dbTypeName_ = nullptr;};
      inline string getDbTypeName() const { DARABONBA_PTR_GET_DEFAULT(dbTypeName_, "") };
      inline DbList& setDbTypeName(string dbTypeName) { DARABONBA_PTR_SET_VALUE(dbTypeName_, dbTypeName) };


      // dbUsername Field Functions 
      bool hasDbUsername() const { return this->dbUsername_ != nullptr;};
      void deleteDbUsername() { this->dbUsername_ = nullptr;};
      inline string getDbUsername() const { DARABONBA_PTR_GET_DEFAULT(dbUsername_, "") };
      inline DbList& setDbUsername(string dbUsername) { DARABONBA_PTR_SET_VALUE(dbUsername_, dbUsername) };


      // dbVersion Field Functions 
      bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
      void deleteDbVersion() { this->dbVersion_ = nullptr;};
      inline int32_t getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, 0) };
      inline DbList& setDbVersion(int32_t dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


      // dbVersionName Field Functions 
      bool hasDbVersionName() const { return this->dbVersionName_ != nullptr;};
      void deleteDbVersionName() { this->dbVersionName_ = nullptr;};
      inline string getDbVersionName() const { DARABONBA_PTR_GET_DEFAULT(dbVersionName_, "") };
      inline DbList& setDbVersionName(string dbVersionName) { DARABONBA_PTR_SET_VALUE(dbVersionName_, dbVersionName) };


    protected:
      shared_ptr<int32_t> assetType_ {};
      shared_ptr<int32_t> auditSwitch_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<string>> dbAddresses_ {};
      shared_ptr<string> dbCertificate_ {};
      shared_ptr<int32_t> dbId_ {};
      shared_ptr<string> dbInstanceId_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<int32_t> dbType_ {};
      shared_ptr<string> dbTypeName_ {};
      shared_ptr<string> dbUsername_ {};
      shared_ptr<int32_t> dbVersion_ {};
      shared_ptr<string> dbVersionName_ {};
    };

    virtual bool empty() const override { return this->dbList_ == nullptr
        && this->requestId_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const vector<ListDataSourcesResponseBody::DbList> & getDbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<ListDataSourcesResponseBody::DbList>) };
    inline vector<ListDataSourcesResponseBody::DbList> getDbList() { DARABONBA_PTR_GET(dbList_, vector<ListDataSourcesResponseBody::DbList>) };
    inline ListDataSourcesResponseBody& setDbList(const vector<ListDataSourcesResponseBody::DbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline ListDataSourcesResponseBody& setDbList(vector<ListDataSourcesResponseBody::DbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataSourcesResponseBody::DbList>> dbList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
