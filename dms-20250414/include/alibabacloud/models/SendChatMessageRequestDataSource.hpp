// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUESTDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUESTDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SendChatMessageRequestDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageRequestDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DmsDatabaseId, dmsDatabaseId_);
      DARABONBA_PTR_TO_JSON(DmsInstanceId, dmsInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageRequestDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DmsDatabaseId, dmsDatabaseId_);
      DARABONBA_PTR_FROM_JSON(DmsInstanceId, dmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    SendChatMessageRequestDataSource() = default ;
    SendChatMessageRequestDataSource(const SendChatMessageRequestDataSource &) = default ;
    SendChatMessageRequestDataSource(SendChatMessageRequestDataSource &&) = default ;
    SendChatMessageRequestDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageRequestDataSource() = default ;
    SendChatMessageRequestDataSource& operator=(const SendChatMessageRequestDataSource &) = default ;
    SendChatMessageRequestDataSource& operator=(SendChatMessageRequestDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && return this->dataSourceType_ == nullptr && return this->database_ == nullptr && return this->dbName_ == nullptr && return this->dmsDatabaseId_ == nullptr && return this->dmsInstanceId_ == nullptr
        && return this->engine_ == nullptr && return this->fileId_ == nullptr && return this->location_ == nullptr && return this->regionId_ == nullptr && return this->tables_ == nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline SendChatMessageRequestDataSource& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline SendChatMessageRequestDataSource& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline SendChatMessageRequestDataSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SendChatMessageRequestDataSource& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dmsDatabaseId Field Functions 
    bool hasDmsDatabaseId() const { return this->dmsDatabaseId_ != nullptr;};
    void deleteDmsDatabaseId() { this->dmsDatabaseId_ = nullptr;};
    inline string dmsDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(dmsDatabaseId_, "") };
    inline SendChatMessageRequestDataSource& setDmsDatabaseId(string dmsDatabaseId) { DARABONBA_PTR_SET_VALUE(dmsDatabaseId_, dmsDatabaseId) };


    // dmsInstanceId Field Functions 
    bool hasDmsInstanceId() const { return this->dmsInstanceId_ != nullptr;};
    void deleteDmsInstanceId() { this->dmsInstanceId_ = nullptr;};
    inline string dmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmsInstanceId_, "") };
    inline SendChatMessageRequestDataSource& setDmsInstanceId(string dmsInstanceId) { DARABONBA_PTR_SET_VALUE(dmsInstanceId_, dmsInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline SendChatMessageRequestDataSource& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline SendChatMessageRequestDataSource& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline SendChatMessageRequestDataSource& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendChatMessageRequestDataSource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline SendChatMessageRequestDataSource& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline SendChatMessageRequestDataSource& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> dmsDatabaseId_ = nullptr;
    std::shared_ptr<string> dmsInstanceId_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
