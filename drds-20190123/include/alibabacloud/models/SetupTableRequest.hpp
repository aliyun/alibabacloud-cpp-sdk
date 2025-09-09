// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUPTABLEREQUEST_HPP_
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
  class SetupTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowFullTableScan, allowFullTableScan_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, SetupTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowFullTableScan, allowFullTableScan_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    SetupTableRequest() = default ;
    SetupTableRequest(const SetupTableRequest &) = default ;
    SetupTableRequest(SetupTableRequest &&) = default ;
    SetupTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupTableRequest() = default ;
    SetupTableRequest& operator=(const SetupTableRequest &) = default ;
    SetupTableRequest& operator=(SetupTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowFullTableScan_ != nullptr
        && this->dbName_ != nullptr && this->drdsInstanceId_ != nullptr && this->regionId_ != nullptr && this->tableName_ != nullptr; };
    // allowFullTableScan Field Functions 
    bool hasAllowFullTableScan() const { return this->allowFullTableScan_ != nullptr;};
    void deleteAllowFullTableScan() { this->allowFullTableScan_ = nullptr;};
    inline bool allowFullTableScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullTableScan_, false) };
    inline SetupTableRequest& setAllowFullTableScan(bool allowFullTableScan) { DARABONBA_PTR_SET_VALUE(allowFullTableScan_, allowFullTableScan) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SetupTableRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline SetupTableRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetupTableRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline const vector<string> & tableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
    inline vector<string> tableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
    inline SetupTableRequest& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
    inline SetupTableRequest& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


  protected:
    // Specifies whether to enable full table scan.
    // 
    // This parameter is required.
    std::shared_ptr<bool> allowFullTableScan_ = nullptr;
    // The name of the database in which the table resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region where the streaming domain resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
