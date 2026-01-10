// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncOrderDetail, structSyncOrderDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncOrderDetail, structSyncOrderDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncOrderDetailResponseBody() = default ;
    GetStructSyncOrderDetailResponseBody(const GetStructSyncOrderDetailResponseBody &) = default ;
    GetStructSyncOrderDetailResponseBody(GetStructSyncOrderDetailResponseBody &&) = default ;
    GetStructSyncOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncOrderDetailResponseBody() = default ;
    GetStructSyncOrderDetailResponseBody& operator=(const GetStructSyncOrderDetailResponseBody &) = default ;
    GetStructSyncOrderDetailResponseBody& operator=(GetStructSyncOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructSyncOrderDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructSyncOrderDetail& obj) { 
        DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_TO_JSON(SourceDatabaseInfo, sourceDatabaseInfo_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SourceVersionInfo, sourceVersionInfo_);
        DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_TO_JSON(TargetDatabaseInfo, targetDatabaseInfo_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TargetVersionInfo, targetVersionInfo_);
      };
      friend void from_json(const Darabonba::Json& j, StructSyncOrderDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
        DARABONBA_PTR_FROM_JSON(SourceDatabaseInfo, sourceDatabaseInfo_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SourceVersionInfo, sourceVersionInfo_);
        DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
        DARABONBA_PTR_FROM_JSON(TargetDatabaseInfo, targetDatabaseInfo_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TargetVersionInfo, targetVersionInfo_);
      };
      StructSyncOrderDetail() = default ;
      StructSyncOrderDetail(const StructSyncOrderDetail &) = default ;
      StructSyncOrderDetail(StructSyncOrderDetail &&) = default ;
      StructSyncOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructSyncOrderDetail() = default ;
      StructSyncOrderDetail& operator=(const StructSyncOrderDetail &) = default ;
      StructSyncOrderDetail& operator=(StructSyncOrderDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetVersionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetVersionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, TargetVersionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        TargetVersionInfo() = default ;
        TargetVersionInfo(const TargetVersionInfo &) = default ;
        TargetVersionInfo(TargetVersionInfo &&) = default ;
        TargetVersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetVersionInfo() = default ;
        TargetVersionInfo& operator=(const TargetVersionInfo &) = default ;
        TargetVersionInfo& operator=(TargetVersionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->versionId_ == nullptr; };
        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline TargetVersionInfo& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The version number.
        shared_ptr<string> versionId_ {};
      };

      class TargetDatabaseInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetDatabaseInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        };
        friend void from_json(const Darabonba::Json& j, TargetDatabaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        };
        TargetDatabaseInfo() = default ;
        TargetDatabaseInfo(const TargetDatabaseInfo &) = default ;
        TargetDatabaseInfo(TargetDatabaseInfo &&) = default ;
        TargetDatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetDatabaseInfo() = default ;
        TargetDatabaseInfo& operator=(const TargetDatabaseInfo &) = default ;
        TargetDatabaseInfo& operator=(TargetDatabaseInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->searchName_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline TargetDatabaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline TargetDatabaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline TargetDatabaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline TargetDatabaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline TargetDatabaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      protected:
        // The ID of the destination database.
        shared_ptr<int64_t> dbId_ {};
        // The type of the database engine.
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the database instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
        shared_ptr<string> envType_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database
        shared_ptr<bool> logic_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
      };

      class TableInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
          DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
        };
        TableInfoList() = default ;
        TableInfoList(const TableInfoList &) = default ;
        TableInfoList(TableInfoList &&) = default ;
        TableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableInfoList() = default ;
        TableInfoList& operator=(const TableInfoList &) = default ;
        TableInfoList& operator=(TableInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceTableName_ == nullptr
        && this->targetTableName_ == nullptr; };
        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline TableInfoList& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline TableInfoList& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


      protected:
        // The name of the table whose schema you want to synchronize.
        shared_ptr<string> sourceTableName_ {};
        // The name of the table to which you want to synchronize the schema of a table.
        shared_ptr<string> targetTableName_ {};
      };

      class SourceVersionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceVersionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceVersionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        SourceVersionInfo() = default ;
        SourceVersionInfo(const SourceVersionInfo &) = default ;
        SourceVersionInfo(SourceVersionInfo &&) = default ;
        SourceVersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceVersionInfo() = default ;
        SourceVersionInfo& operator=(const SourceVersionInfo &) = default ;
        SourceVersionInfo& operator=(SourceVersionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->versionId_ == nullptr; };
        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline SourceVersionInfo& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        // The version number.
        shared_ptr<string> versionId_ {};
      };

      class SourceDatabaseInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceDatabaseInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceDatabaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
        };
        SourceDatabaseInfo() = default ;
        SourceDatabaseInfo(const SourceDatabaseInfo &) = default ;
        SourceDatabaseInfo(SourceDatabaseInfo &&) = default ;
        SourceDatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceDatabaseInfo() = default ;
        SourceDatabaseInfo& operator=(const SourceDatabaseInfo &) = default ;
        SourceDatabaseInfo& operator=(SourceDatabaseInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->logic_ == nullptr && this->searchName_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline SourceDatabaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline SourceDatabaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline SourceDatabaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline SourceDatabaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline SourceDatabaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


      protected:
        // The ID of the source database.
        shared_ptr<int64_t> dbId_ {};
        // The type of the database engine.
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the database instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
        shared_ptr<string> envType_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database.
        // *   **false**: The database is not a logical database
        shared_ptr<bool> logic_ {};
        // The name that is used to search for the database.
        shared_ptr<string> searchName_ {};
      };

      virtual bool empty() const override { return this->ignoreError_ == nullptr
        && this->sourceDatabaseInfo_ == nullptr && this->sourceType_ == nullptr && this->sourceVersionInfo_ == nullptr && this->tableInfoList_ == nullptr && this->targetDatabaseInfo_ == nullptr
        && this->targetType_ == nullptr && this->targetVersionInfo_ == nullptr; };
      // ignoreError Field Functions 
      bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
      void deleteIgnoreError() { this->ignoreError_ = nullptr;};
      inline bool getIgnoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
      inline StructSyncOrderDetail& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


      // sourceDatabaseInfo Field Functions 
      bool hasSourceDatabaseInfo() const { return this->sourceDatabaseInfo_ != nullptr;};
      void deleteSourceDatabaseInfo() { this->sourceDatabaseInfo_ = nullptr;};
      inline const StructSyncOrderDetail::SourceDatabaseInfo & getSourceDatabaseInfo() const { DARABONBA_PTR_GET_CONST(sourceDatabaseInfo_, StructSyncOrderDetail::SourceDatabaseInfo) };
      inline StructSyncOrderDetail::SourceDatabaseInfo getSourceDatabaseInfo() { DARABONBA_PTR_GET(sourceDatabaseInfo_, StructSyncOrderDetail::SourceDatabaseInfo) };
      inline StructSyncOrderDetail& setSourceDatabaseInfo(const StructSyncOrderDetail::SourceDatabaseInfo & sourceDatabaseInfo) { DARABONBA_PTR_SET_VALUE(sourceDatabaseInfo_, sourceDatabaseInfo) };
      inline StructSyncOrderDetail& setSourceDatabaseInfo(StructSyncOrderDetail::SourceDatabaseInfo && sourceDatabaseInfo) { DARABONBA_PTR_SET_RVALUE(sourceDatabaseInfo_, sourceDatabaseInfo) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline StructSyncOrderDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // sourceVersionInfo Field Functions 
      bool hasSourceVersionInfo() const { return this->sourceVersionInfo_ != nullptr;};
      void deleteSourceVersionInfo() { this->sourceVersionInfo_ = nullptr;};
      inline const StructSyncOrderDetail::SourceVersionInfo & getSourceVersionInfo() const { DARABONBA_PTR_GET_CONST(sourceVersionInfo_, StructSyncOrderDetail::SourceVersionInfo) };
      inline StructSyncOrderDetail::SourceVersionInfo getSourceVersionInfo() { DARABONBA_PTR_GET(sourceVersionInfo_, StructSyncOrderDetail::SourceVersionInfo) };
      inline StructSyncOrderDetail& setSourceVersionInfo(const StructSyncOrderDetail::SourceVersionInfo & sourceVersionInfo) { DARABONBA_PTR_SET_VALUE(sourceVersionInfo_, sourceVersionInfo) };
      inline StructSyncOrderDetail& setSourceVersionInfo(StructSyncOrderDetail::SourceVersionInfo && sourceVersionInfo) { DARABONBA_PTR_SET_RVALUE(sourceVersionInfo_, sourceVersionInfo) };


      // tableInfoList Field Functions 
      bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
      void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
      inline const vector<StructSyncOrderDetail::TableInfoList> & getTableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<StructSyncOrderDetail::TableInfoList>) };
      inline vector<StructSyncOrderDetail::TableInfoList> getTableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<StructSyncOrderDetail::TableInfoList>) };
      inline StructSyncOrderDetail& setTableInfoList(const vector<StructSyncOrderDetail::TableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
      inline StructSyncOrderDetail& setTableInfoList(vector<StructSyncOrderDetail::TableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


      // targetDatabaseInfo Field Functions 
      bool hasTargetDatabaseInfo() const { return this->targetDatabaseInfo_ != nullptr;};
      void deleteTargetDatabaseInfo() { this->targetDatabaseInfo_ = nullptr;};
      inline const StructSyncOrderDetail::TargetDatabaseInfo & getTargetDatabaseInfo() const { DARABONBA_PTR_GET_CONST(targetDatabaseInfo_, StructSyncOrderDetail::TargetDatabaseInfo) };
      inline StructSyncOrderDetail::TargetDatabaseInfo getTargetDatabaseInfo() { DARABONBA_PTR_GET(targetDatabaseInfo_, StructSyncOrderDetail::TargetDatabaseInfo) };
      inline StructSyncOrderDetail& setTargetDatabaseInfo(const StructSyncOrderDetail::TargetDatabaseInfo & targetDatabaseInfo) { DARABONBA_PTR_SET_VALUE(targetDatabaseInfo_, targetDatabaseInfo) };
      inline StructSyncOrderDetail& setTargetDatabaseInfo(StructSyncOrderDetail::TargetDatabaseInfo && targetDatabaseInfo) { DARABONBA_PTR_SET_RVALUE(targetDatabaseInfo_, targetDatabaseInfo) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline StructSyncOrderDetail& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // targetVersionInfo Field Functions 
      bool hasTargetVersionInfo() const { return this->targetVersionInfo_ != nullptr;};
      void deleteTargetVersionInfo() { this->targetVersionInfo_ = nullptr;};
      inline const StructSyncOrderDetail::TargetVersionInfo & getTargetVersionInfo() const { DARABONBA_PTR_GET_CONST(targetVersionInfo_, StructSyncOrderDetail::TargetVersionInfo) };
      inline StructSyncOrderDetail::TargetVersionInfo getTargetVersionInfo() { DARABONBA_PTR_GET(targetVersionInfo_, StructSyncOrderDetail::TargetVersionInfo) };
      inline StructSyncOrderDetail& setTargetVersionInfo(const StructSyncOrderDetail::TargetVersionInfo & targetVersionInfo) { DARABONBA_PTR_SET_VALUE(targetVersionInfo_, targetVersionInfo) };
      inline StructSyncOrderDetail& setTargetVersionInfo(StructSyncOrderDetail::TargetVersionInfo && targetVersionInfo) { DARABONBA_PTR_SET_RVALUE(targetVersionInfo_, targetVersionInfo) };


    protected:
      // Indicates whether to skip errors. Valid values:
      // 
      // *   **true**: skips the error and continues to execute SQL statements.
      // *   **false**: stops executing SQL statements.
      shared_ptr<bool> ignoreError_ {};
      // The information about the source database.
      shared_ptr<StructSyncOrderDetail::SourceDatabaseInfo> sourceDatabaseInfo_ {};
      // The schema version of the source database. Valid values:
      // 
      // *   **DATASOURCE**: the default latest version of the system
      // *   **VERSION**: a previous schema version that you manually specify
      shared_ptr<string> sourceType_ {};
      // The version information about the source instance.
      // 
      // > This parameter is displayed only when the value of the **SourceType** parameter is **VERSION**.
      shared_ptr<StructSyncOrderDetail::SourceVersionInfo> sourceVersionInfo_ {};
      // The information about the table whose schema you want to synchronize.
      shared_ptr<vector<StructSyncOrderDetail::TableInfoList>> tableInfoList_ {};
      // The information about the destination database.
      shared_ptr<StructSyncOrderDetail::TargetDatabaseInfo> targetDatabaseInfo_ {};
      // The schema version of the destination database. Valid values:
      // 
      // *   **DATASOURCE**: the default latest version of the system
      // *   **VERSION**: a previous schema version that you manually specify
      shared_ptr<string> targetType_ {};
      // The version information about the destination instance.
      // 
      // > This parameter is displayed only when the value of the **SourceType** parameter is **VERSION**.
      shared_ptr<StructSyncOrderDetail::TargetVersionInfo> targetVersionInfo_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->structSyncOrderDetail_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncOrderDetail Field Functions 
    bool hasStructSyncOrderDetail() const { return this->structSyncOrderDetail_ != nullptr;};
    void deleteStructSyncOrderDetail() { this->structSyncOrderDetail_ = nullptr;};
    inline const GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail & getStructSyncOrderDetail() const { DARABONBA_PTR_GET_CONST(structSyncOrderDetail_, GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail getStructSyncOrderDetail() { DARABONBA_PTR_GET(structSyncOrderDetail_, GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBody& setStructSyncOrderDetail(const GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail & structSyncOrderDetail) { DARABONBA_PTR_SET_VALUE(structSyncOrderDetail_, structSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBody& setStructSyncOrderDetail(GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail && structSyncOrderDetail) { DARABONBA_PTR_SET_RVALUE(structSyncOrderDetail_, structSyncOrderDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the schema synchronization ticket.
    shared_ptr<GetStructSyncOrderDetailResponseBody::StructSyncOrderDetail> structSyncOrderDetail_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
