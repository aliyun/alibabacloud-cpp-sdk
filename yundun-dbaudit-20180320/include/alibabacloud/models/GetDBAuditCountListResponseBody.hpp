// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBAUDITCOUNTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBAUDITCOUNTLISTRESPONSEBODY_HPP_
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
  class GetDBAuditCountListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBAuditCountListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBAuditCountListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDBAuditCountListResponseBody() = default ;
    GetDBAuditCountListResponseBody(const GetDBAuditCountListResponseBody &) = default ;
    GetDBAuditCountListResponseBody(GetDBAuditCountListResponseBody &&) = default ;
    GetDBAuditCountListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBAuditCountListResponseBody() = default ;
    GetDBAuditCountListResponseBody& operator=(const GetDBAuditCountListResponseBody &) = default ;
    GetDBAuditCountListResponseBody& operator=(GetDBAuditCountListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbList& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(DbAddresses, dbAddresses_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DbTypeName, dbTypeName_);
        DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_TO_JSON(DbVersionName, dbVersionName_);
        DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
      };
      friend void from_json(const Darabonba::Json& j, DbList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(DbAddresses, dbAddresses_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DbTypeName, dbTypeName_);
        DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
        DARABONBA_PTR_FROM_JSON(DbVersionName, dbVersionName_);
        DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
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
        && this->dbAddresses_ == nullptr && this->dbId_ == nullptr && this->dbName_ == nullptr && this->dbType_ == nullptr && this->dbTypeName_ == nullptr
        && this->dbVersion_ == nullptr && this->dbVersionName_ == nullptr && this->riskCount_ == nullptr && this->sessionCount_ == nullptr && this->sqlCount_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
      inline DbList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // dbAddresses Field Functions 
      bool hasDbAddresses() const { return this->dbAddresses_ != nullptr;};
      void deleteDbAddresses() { this->dbAddresses_ = nullptr;};
      inline const vector<string> & getDbAddresses() const { DARABONBA_PTR_GET_CONST(dbAddresses_, vector<string>) };
      inline vector<string> getDbAddresses() { DARABONBA_PTR_GET(dbAddresses_, vector<string>) };
      inline DbList& setDbAddresses(const vector<string> & dbAddresses) { DARABONBA_PTR_SET_VALUE(dbAddresses_, dbAddresses) };
      inline DbList& setDbAddresses(vector<string> && dbAddresses) { DARABONBA_PTR_SET_RVALUE(dbAddresses_, dbAddresses) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
      inline DbList& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


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


      // riskCount Field Functions 
      bool hasRiskCount() const { return this->riskCount_ != nullptr;};
      void deleteRiskCount() { this->riskCount_ = nullptr;};
      inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
      inline DbList& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DbList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // sqlCount Field Functions 
      bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
      void deleteSqlCount() { this->sqlCount_ = nullptr;};
      inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
      inline DbList& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


    protected:
      shared_ptr<int32_t> assetType_ {};
      shared_ptr<vector<string>> dbAddresses_ {};
      shared_ptr<int32_t> dbId_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<int32_t> dbType_ {};
      shared_ptr<string> dbTypeName_ {};
      shared_ptr<int32_t> dbVersion_ {};
      shared_ptr<string> dbVersionName_ {};
      shared_ptr<int64_t> riskCount_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> sqlCount_ {};
    };

    virtual bool empty() const override { return this->dbList_ == nullptr
        && this->requestId_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const vector<GetDBAuditCountListResponseBody::DbList> & getDbList() const { DARABONBA_PTR_GET_CONST(dbList_, vector<GetDBAuditCountListResponseBody::DbList>) };
    inline vector<GetDBAuditCountListResponseBody::DbList> getDbList() { DARABONBA_PTR_GET(dbList_, vector<GetDBAuditCountListResponseBody::DbList>) };
    inline GetDBAuditCountListResponseBody& setDbList(const vector<GetDBAuditCountListResponseBody::DbList> & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline GetDBAuditCountListResponseBody& setDbList(vector<GetDBAuditCountListResponseBody::DbList> && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBAuditCountListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetDBAuditCountListResponseBody::DbList>> dbList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
