// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEKNOWLEDGEVO_HPP_
#define ALIBABACLOUD_MODELS_TABLEKNOWLEDGEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class TableKnowledgeVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableKnowledgeVO& obj) { 
      DARABONBA_PTR_TO_JSON(AssetCreatedGmt, assetCreatedGmt_);
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(HotLevel, hotLevel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(NumRows, numRows_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, TableKnowledgeVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetCreatedGmt, assetCreatedGmt_);
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(HotLevel, hotLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(NumRows, numRows_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    TableKnowledgeVO() = default ;
    TableKnowledgeVO(const TableKnowledgeVO &) = default ;
    TableKnowledgeVO(TableKnowledgeVO &&) = default ;
    TableKnowledgeVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableKnowledgeVO() = default ;
    TableKnowledgeVO& operator=(const TableKnowledgeVO &) = default ;
    TableKnowledgeVO& operator=(TableKnowledgeVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetCreatedGmt_ == nullptr
        && this->assetDescription_ == nullptr && this->assetModifiedGmt_ == nullptr && this->dbId_ == nullptr && this->dbName_ == nullptr && this->dbType_ == nullptr
        && this->description_ == nullptr && this->envType_ == nullptr && this->hotLevel_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->level_ == nullptr && this->levelType_ == nullptr && this->logic_ == nullptr && this->numRows_ == nullptr && this->schemaName_ == nullptr
        && this->size_ == nullptr && this->summary_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr && this->title_ == nullptr; };
    // assetCreatedGmt Field Functions 
    bool hasAssetCreatedGmt() const { return this->assetCreatedGmt_ != nullptr;};
    void deleteAssetCreatedGmt() { this->assetCreatedGmt_ = nullptr;};
    inline string getAssetCreatedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetCreatedGmt_, "") };
    inline TableKnowledgeVO& setAssetCreatedGmt(string assetCreatedGmt) { DARABONBA_PTR_SET_VALUE(assetCreatedGmt_, assetCreatedGmt) };


    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline TableKnowledgeVO& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // assetModifiedGmt Field Functions 
    bool hasAssetModifiedGmt() const { return this->assetModifiedGmt_ != nullptr;};
    void deleteAssetModifiedGmt() { this->assetModifiedGmt_ = nullptr;};
    inline string getAssetModifiedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetModifiedGmt_, "") };
    inline TableKnowledgeVO& setAssetModifiedGmt(string assetModifiedGmt) { DARABONBA_PTR_SET_VALUE(assetModifiedGmt_, assetModifiedGmt) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline TableKnowledgeVO& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline TableKnowledgeVO& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline TableKnowledgeVO& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TableKnowledgeVO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TableKnowledgeVO& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // hotLevel Field Functions 
    bool hasHotLevel() const { return this->hotLevel_ != nullptr;};
    void deleteHotLevel() { this->hotLevel_ = nullptr;};
    inline int32_t getHotLevel() const { DARABONBA_PTR_GET_DEFAULT(hotLevel_, 0) };
    inline TableKnowledgeVO& setHotLevel(int32_t hotLevel) { DARABONBA_PTR_SET_VALUE(hotLevel_, hotLevel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline TableKnowledgeVO& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline TableKnowledgeVO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline TableKnowledgeVO& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline string getLevelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, "") };
    inline TableKnowledgeVO& setLevelType(string levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline TableKnowledgeVO& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline TableKnowledgeVO& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline TableKnowledgeVO& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline TableKnowledgeVO& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline TableKnowledgeVO& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline TableKnowledgeVO& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableKnowledgeVO& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline TableKnowledgeVO& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> assetCreatedGmt_ {};
    shared_ptr<string> assetDescription_ {};
    shared_ptr<string> assetModifiedGmt_ {};
    shared_ptr<int32_t> dbId_ {};
    shared_ptr<string> dbName_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> envType_ {};
    shared_ptr<int32_t> hotLevel_ {};
    shared_ptr<int32_t> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<int32_t> level_ {};
    shared_ptr<string> levelType_ {};
    shared_ptr<bool> logic_ {};
    shared_ptr<int64_t> numRows_ {};
    shared_ptr<string> schemaName_ {};
    shared_ptr<int64_t> size_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<int64_t> tableId_ {};
    shared_ptr<string> tableName_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
