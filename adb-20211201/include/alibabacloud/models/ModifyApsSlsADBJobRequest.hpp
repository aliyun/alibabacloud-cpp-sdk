// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSSLSADBJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSSLSADBJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsSlsADBJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsSlsADBJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DirtyDataProcessPattern, dirtyDataProcessPattern_);
      DARABONBA_PTR_TO_JSON(ExactlyOnce, exactlyOnce_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UnixTimestampConvert, unixTimestampConvert_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsSlsADBJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DirtyDataProcessPattern, dirtyDataProcessPattern_);
      DARABONBA_PTR_FROM_JSON(ExactlyOnce, exactlyOnce_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartingOffsets, startingOffsets_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UnixTimestampConvert, unixTimestampConvert_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
    };
    ModifyApsSlsADBJobRequest() = default ;
    ModifyApsSlsADBJobRequest(const ModifyApsSlsADBJobRequest &) = default ;
    ModifyApsSlsADBJobRequest(ModifyApsSlsADBJobRequest &&) = default ;
    ModifyApsSlsADBJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsSlsADBJobRequest() = default ;
    ModifyApsSlsADBJobRequest& operator=(const ModifyApsSlsADBJobRequest &) = default ;
    ModifyApsSlsADBJobRequest& operator=(ModifyApsSlsADBJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(MapName, mapName_);
        DARABONBA_PTR_TO_JSON(MapType, mapType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(MapName, mapName_);
        DARABONBA_PTR_FROM_JSON(MapType, mapType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mapName_ == nullptr
        && this->mapType_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // mapName Field Functions 
      bool hasMapName() const { return this->mapName_ != nullptr;};
      void deleteMapName() { this->mapName_ = nullptr;};
      inline string getMapName() const { DARABONBA_PTR_GET_DEFAULT(mapName_, "") };
      inline Columns& setMapName(string mapName) { DARABONBA_PTR_SET_VALUE(mapName_, mapName) };


      // mapType Field Functions 
      bool hasMapType() const { return this->mapType_ != nullptr;};
      void deleteMapType() { this->mapType_ = nullptr;};
      inline string getMapType() const { DARABONBA_PTR_GET_DEFAULT(mapType_, "") };
      inline Columns& setMapType(string mapType) { DARABONBA_PTR_SET_VALUE(mapType_, mapType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the mapping.
      shared_ptr<string> mapName_ {};
      // The type of the mapping.
      shared_ptr<string> mapType_ {};
      // The name of the column.
      shared_ptr<string> name_ {};
      // The data type of the column.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->columns_ == nullptr
        && this->DBClusterId_ == nullptr && this->dbName_ == nullptr && this->dirtyDataProcessPattern_ == nullptr && this->exactlyOnce_ == nullptr && this->password_ == nullptr
        && this->regionId_ == nullptr && this->startingOffsets_ == nullptr && this->tableName_ == nullptr && this->unixTimestampConvert_ == nullptr && this->userName_ == nullptr
        && this->workloadId_ == nullptr && this->workloadName_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ModifyApsSlsADBJobRequest::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ModifyApsSlsADBJobRequest::Columns>) };
    inline vector<ModifyApsSlsADBJobRequest::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<ModifyApsSlsADBJobRequest::Columns>) };
    inline ModifyApsSlsADBJobRequest& setColumns(const vector<ModifyApsSlsADBJobRequest::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ModifyApsSlsADBJobRequest& setColumns(vector<ModifyApsSlsADBJobRequest::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsSlsADBJobRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyApsSlsADBJobRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dirtyDataProcessPattern Field Functions 
    bool hasDirtyDataProcessPattern() const { return this->dirtyDataProcessPattern_ != nullptr;};
    void deleteDirtyDataProcessPattern() { this->dirtyDataProcessPattern_ = nullptr;};
    inline string getDirtyDataProcessPattern() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataProcessPattern_, "") };
    inline ModifyApsSlsADBJobRequest& setDirtyDataProcessPattern(string dirtyDataProcessPattern) { DARABONBA_PTR_SET_VALUE(dirtyDataProcessPattern_, dirtyDataProcessPattern) };


    // exactlyOnce Field Functions 
    bool hasExactlyOnce() const { return this->exactlyOnce_ != nullptr;};
    void deleteExactlyOnce() { this->exactlyOnce_ = nullptr;};
    inline string getExactlyOnce() const { DARABONBA_PTR_GET_DEFAULT(exactlyOnce_, "") };
    inline ModifyApsSlsADBJobRequest& setExactlyOnce(string exactlyOnce) { DARABONBA_PTR_SET_VALUE(exactlyOnce_, exactlyOnce) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyApsSlsADBJobRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsSlsADBJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string getStartingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline ModifyApsSlsADBJobRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ModifyApsSlsADBJobRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // unixTimestampConvert Field Functions 
    bool hasUnixTimestampConvert() const { return this->unixTimestampConvert_ != nullptr;};
    void deleteUnixTimestampConvert() { this->unixTimestampConvert_ = nullptr;};
    inline string getUnixTimestampConvert() const { DARABONBA_PTR_GET_DEFAULT(unixTimestampConvert_, "") };
    inline ModifyApsSlsADBJobRequest& setUnixTimestampConvert(string unixTimestampConvert) { DARABONBA_PTR_SET_VALUE(unixTimestampConvert_, unixTimestampConvert) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyApsSlsADBJobRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string getWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline ModifyApsSlsADBJobRequest& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline ModifyApsSlsADBJobRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The information about columns.
    shared_ptr<vector<ModifyApsSlsADBJobRequest::Columns>> columns_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the database.
    shared_ptr<string> dbName_ {};
    // The dirty data processing mode.
    shared_ptr<string> dirtyDataProcessPattern_ {};
    // Specifies whether to enable the consistency check.
    shared_ptr<string> exactlyOnce_ {};
    // The password of the database account.
    shared_ptr<string> password_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start offset.
    shared_ptr<string> startingOffsets_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
    // The timestamp conversion.
    shared_ptr<string> unixTimestampConvert_ {};
    // The name of the database account.
    shared_ptr<string> userName_ {};
    // The job ID.
    // 
    // This parameter is required.
    shared_ptr<string> workloadId_ {};
    // The name of the workload.
    shared_ptr<string> workloadName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
