// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSSLSADBJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSSLSADBJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsSlsADBJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsSlsADBJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columnsShrink_);
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
    friend void from_json(const Darabonba::Json& j, ModifyApsSlsADBJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columnsShrink_);
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
    ModifyApsSlsADBJobShrinkRequest() = default ;
    ModifyApsSlsADBJobShrinkRequest(const ModifyApsSlsADBJobShrinkRequest &) = default ;
    ModifyApsSlsADBJobShrinkRequest(ModifyApsSlsADBJobShrinkRequest &&) = default ;
    ModifyApsSlsADBJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsSlsADBJobShrinkRequest() = default ;
    ModifyApsSlsADBJobShrinkRequest& operator=(const ModifyApsSlsADBJobShrinkRequest &) = default ;
    ModifyApsSlsADBJobShrinkRequest& operator=(ModifyApsSlsADBJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnsShrink_ != nullptr
        && this->DBClusterId_ != nullptr && this->dbName_ != nullptr && this->dirtyDataProcessPattern_ != nullptr && this->exactlyOnce_ != nullptr && this->password_ != nullptr
        && this->regionId_ != nullptr && this->startingOffsets_ != nullptr && this->tableName_ != nullptr && this->unixTimestampConvert_ != nullptr && this->userName_ != nullptr
        && this->workloadId_ != nullptr && this->workloadName_ != nullptr; };
    // columnsShrink Field Functions 
    bool hasColumnsShrink() const { return this->columnsShrink_ != nullptr;};
    void deleteColumnsShrink() { this->columnsShrink_ = nullptr;};
    inline string columnsShrink() const { DARABONBA_PTR_GET_DEFAULT(columnsShrink_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setColumnsShrink(string columnsShrink) { DARABONBA_PTR_SET_VALUE(columnsShrink_, columnsShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dirtyDataProcessPattern Field Functions 
    bool hasDirtyDataProcessPattern() const { return this->dirtyDataProcessPattern_ != nullptr;};
    void deleteDirtyDataProcessPattern() { this->dirtyDataProcessPattern_ = nullptr;};
    inline string dirtyDataProcessPattern() const { DARABONBA_PTR_GET_DEFAULT(dirtyDataProcessPattern_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setDirtyDataProcessPattern(string dirtyDataProcessPattern) { DARABONBA_PTR_SET_VALUE(dirtyDataProcessPattern_, dirtyDataProcessPattern) };


    // exactlyOnce Field Functions 
    bool hasExactlyOnce() const { return this->exactlyOnce_ != nullptr;};
    void deleteExactlyOnce() { this->exactlyOnce_ = nullptr;};
    inline string exactlyOnce() const { DARABONBA_PTR_GET_DEFAULT(exactlyOnce_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setExactlyOnce(string exactlyOnce) { DARABONBA_PTR_SET_VALUE(exactlyOnce_, exactlyOnce) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startingOffsets Field Functions 
    bool hasStartingOffsets() const { return this->startingOffsets_ != nullptr;};
    void deleteStartingOffsets() { this->startingOffsets_ = nullptr;};
    inline string startingOffsets() const { DARABONBA_PTR_GET_DEFAULT(startingOffsets_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setStartingOffsets(string startingOffsets) { DARABONBA_PTR_SET_VALUE(startingOffsets_, startingOffsets) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // unixTimestampConvert Field Functions 
    bool hasUnixTimestampConvert() const { return this->unixTimestampConvert_ != nullptr;};
    void deleteUnixTimestampConvert() { this->unixTimestampConvert_ = nullptr;};
    inline string unixTimestampConvert() const { DARABONBA_PTR_GET_DEFAULT(unixTimestampConvert_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setUnixTimestampConvert(string unixTimestampConvert) { DARABONBA_PTR_SET_VALUE(unixTimestampConvert_, unixTimestampConvert) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline ModifyApsSlsADBJobShrinkRequest& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


  protected:
    // The information about columns.
    std::shared_ptr<string> columnsShrink_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The dirty data processing mode.
    std::shared_ptr<string> dirtyDataProcessPattern_ = nullptr;
    // Specifies whether to enable the consistency check.
    std::shared_ptr<string> exactlyOnce_ = nullptr;
    // The password of the database account.
    std::shared_ptr<string> password_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start offset.
    std::shared_ptr<string> startingOffsets_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The timestamp conversion.
    std::shared_ptr<string> unixTimestampConvert_ = nullptr;
    // The name of the database account.
    std::shared_ptr<string> userName_ = nullptr;
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workloadId_ = nullptr;
    // The name of the workload.
    std::shared_ptr<string> workloadName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
