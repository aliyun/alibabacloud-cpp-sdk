// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPBROADCASTTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUPBROADCASTTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SetupBroadcastTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupBroadcastTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, SetupBroadcastTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    SetupBroadcastTablesRequest() = default ;
    SetupBroadcastTablesRequest(const SetupBroadcastTablesRequest &) = default ;
    SetupBroadcastTablesRequest(SetupBroadcastTablesRequest &&) = default ;
    SetupBroadcastTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupBroadcastTablesRequest() = default ;
    SetupBroadcastTablesRequest& operator=(const SetupBroadcastTablesRequest &) = default ;
    SetupBroadcastTablesRequest& operator=(SetupBroadcastTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->active_ != nullptr
        && this->dbName_ != nullptr && this->drdsInstanceId_ != nullptr && this->regionId_ != nullptr && this->tableName_ != nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline SetupBroadcastTablesRequest& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SetupBroadcastTablesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SetupBroadcastTablesRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetupBroadcastTablesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline const vector<string> & tableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
    inline vector<string> tableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
    inline SetupBroadcastTablesRequest& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
    inline SetupBroadcastTablesRequest& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


  protected:
    // Specifies whether to activate a broadcast table for the database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> active_ = nullptr;
    // The name of the database for which you want to configure a broadcast table.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region in which the PolarDB-X 1.0 instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
