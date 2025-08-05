// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_TO_JSON(eta, eta_);
      DARABONBA_PTR_TO_JSON(increment, increment_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(others, others_);
      DARABONBA_PTR_TO_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
      DARABONBA_PTR_TO_JSON(schemaOnly, schemaOnly_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_TO_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_FROM_JSON(eta, eta_);
      DARABONBA_PTR_FROM_JSON(increment, increment_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(others, others_);
      DARABONBA_PTR_FROM_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(schemaOnly, schemaOnly_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcSchemaName, srcSchemaName_);
      DARABONBA_PTR_FROM_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    CreateMmsJobRequest() = default ;
    CreateMmsJobRequest(const CreateMmsJobRequest &) = default ;
    CreateMmsJobRequest(CreateMmsJobRequest &&) = default ;
    CreateMmsJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsJobRequest() = default ;
    CreateMmsJobRequest& operator=(const CreateMmsJobRequest &) = default ;
    CreateMmsJobRequest& operator=(CreateMmsJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnMapping_ != nullptr
        && this->dstDbName_ != nullptr && this->dstSchemaName_ != nullptr && this->enableVerification_ != nullptr && this->eta_ != nullptr && this->increment_ != nullptr
        && this->name_ != nullptr && this->others_ != nullptr && this->partitionFilters_ != nullptr && this->partitions_ != nullptr && this->schemaOnly_ != nullptr
        && this->sourceId_ != nullptr && this->sourceName_ != nullptr && this->srcDbName_ != nullptr && this->srcSchemaName_ != nullptr && this->tableBlackList_ != nullptr
        && this->tableMapping_ != nullptr && this->tableWhiteList_ != nullptr && this->tables_ != nullptr && this->taskType_ != nullptr; };
    // columnMapping Field Functions 
    bool hasColumnMapping() const { return this->columnMapping_ != nullptr;};
    void deleteColumnMapping() { this->columnMapping_ = nullptr;};
    inline const map<string, string> & columnMapping() const { DARABONBA_PTR_GET_CONST(columnMapping_, map<string, string>) };
    inline map<string, string> columnMapping() { DARABONBA_PTR_GET(columnMapping_, map<string, string>) };
    inline CreateMmsJobRequest& setColumnMapping(const map<string, string> & columnMapping) { DARABONBA_PTR_SET_VALUE(columnMapping_, columnMapping) };
    inline CreateMmsJobRequest& setColumnMapping(map<string, string> && columnMapping) { DARABONBA_PTR_SET_RVALUE(columnMapping_, columnMapping) };


    // dstDbName Field Functions 
    bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
    void deleteDstDbName() { this->dstDbName_ = nullptr;};
    inline string dstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
    inline CreateMmsJobRequest& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string dstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline CreateMmsJobRequest& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // enableVerification Field Functions 
    bool hasEnableVerification() const { return this->enableVerification_ != nullptr;};
    void deleteEnableVerification() { this->enableVerification_ = nullptr;};
    inline bool enableVerification() const { DARABONBA_PTR_GET_DEFAULT(enableVerification_, false) };
    inline CreateMmsJobRequest& setEnableVerification(bool enableVerification) { DARABONBA_PTR_SET_VALUE(enableVerification_, enableVerification) };


    // eta Field Functions 
    bool hasEta() const { return this->eta_ != nullptr;};
    void deleteEta() { this->eta_ = nullptr;};
    inline string eta() const { DARABONBA_PTR_GET_DEFAULT(eta_, "") };
    inline CreateMmsJobRequest& setEta(string eta) { DARABONBA_PTR_SET_VALUE(eta_, eta) };


    // increment Field Functions 
    bool hasIncrement() const { return this->increment_ != nullptr;};
    void deleteIncrement() { this->increment_ = nullptr;};
    inline bool increment() const { DARABONBA_PTR_GET_DEFAULT(increment_, false) };
    inline CreateMmsJobRequest& setIncrement(bool increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMmsJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // others Field Functions 
    bool hasOthers() const { return this->others_ != nullptr;};
    void deleteOthers() { this->others_ = nullptr;};
    inline     const Darabonba::Json & others() const { DARABONBA_GET(others_) };
    Darabonba::Json & others() { DARABONBA_GET(others_) };
    inline CreateMmsJobRequest& setOthers(const Darabonba::Json & others) { DARABONBA_SET_VALUE(others_, others) };
    inline CreateMmsJobRequest& setOthers(Darabonba::Json & others) { DARABONBA_SET_RVALUE(others_, others) };


    // partitionFilters Field Functions 
    bool hasPartitionFilters() const { return this->partitionFilters_ != nullptr;};
    void deletePartitionFilters() { this->partitionFilters_ = nullptr;};
    inline const map<string, string> & partitionFilters() const { DARABONBA_PTR_GET_CONST(partitionFilters_, map<string, string>) };
    inline map<string, string> partitionFilters() { DARABONBA_PTR_GET(partitionFilters_, map<string, string>) };
    inline CreateMmsJobRequest& setPartitionFilters(const map<string, string> & partitionFilters) { DARABONBA_PTR_SET_VALUE(partitionFilters_, partitionFilters) };
    inline CreateMmsJobRequest& setPartitionFilters(map<string, string> && partitionFilters) { DARABONBA_PTR_SET_RVALUE(partitionFilters_, partitionFilters) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<int64_t> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<int64_t>) };
    inline vector<int64_t> partitions() { DARABONBA_PTR_GET(partitions_, vector<int64_t>) };
    inline CreateMmsJobRequest& setPartitions(const vector<int64_t> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline CreateMmsJobRequest& setPartitions(vector<int64_t> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // schemaOnly Field Functions 
    bool hasSchemaOnly() const { return this->schemaOnly_ != nullptr;};
    void deleteSchemaOnly() { this->schemaOnly_ = nullptr;};
    inline bool schemaOnly() const { DARABONBA_PTR_GET_DEFAULT(schemaOnly_, false) };
    inline CreateMmsJobRequest& setSchemaOnly(bool schemaOnly) { DARABONBA_PTR_SET_VALUE(schemaOnly_, schemaOnly) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline CreateMmsJobRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline CreateMmsJobRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string srcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline CreateMmsJobRequest& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcSchemaName Field Functions 
    bool hasSrcSchemaName() const { return this->srcSchemaName_ != nullptr;};
    void deleteSrcSchemaName() { this->srcSchemaName_ = nullptr;};
    inline string srcSchemaName() const { DARABONBA_PTR_GET_DEFAULT(srcSchemaName_, "") };
    inline CreateMmsJobRequest& setSrcSchemaName(string srcSchemaName) { DARABONBA_PTR_SET_VALUE(srcSchemaName_, srcSchemaName) };


    // tableBlackList Field Functions 
    bool hasTableBlackList() const { return this->tableBlackList_ != nullptr;};
    void deleteTableBlackList() { this->tableBlackList_ = nullptr;};
    inline const vector<string> & tableBlackList() const { DARABONBA_PTR_GET_CONST(tableBlackList_, vector<string>) };
    inline vector<string> tableBlackList() { DARABONBA_PTR_GET(tableBlackList_, vector<string>) };
    inline CreateMmsJobRequest& setTableBlackList(const vector<string> & tableBlackList) { DARABONBA_PTR_SET_VALUE(tableBlackList_, tableBlackList) };
    inline CreateMmsJobRequest& setTableBlackList(vector<string> && tableBlackList) { DARABONBA_PTR_SET_RVALUE(tableBlackList_, tableBlackList) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const map<string, string> & tableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, map<string, string>) };
    inline map<string, string> tableMapping() { DARABONBA_PTR_GET(tableMapping_, map<string, string>) };
    inline CreateMmsJobRequest& setTableMapping(const map<string, string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline CreateMmsJobRequest& setTableMapping(map<string, string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // tableWhiteList Field Functions 
    bool hasTableWhiteList() const { return this->tableWhiteList_ != nullptr;};
    void deleteTableWhiteList() { this->tableWhiteList_ = nullptr;};
    inline const vector<string> & tableWhiteList() const { DARABONBA_PTR_GET_CONST(tableWhiteList_, vector<string>) };
    inline vector<string> tableWhiteList() { DARABONBA_PTR_GET(tableWhiteList_, vector<string>) };
    inline CreateMmsJobRequest& setTableWhiteList(const vector<string> & tableWhiteList) { DARABONBA_PTR_SET_VALUE(tableWhiteList_, tableWhiteList) };
    inline CreateMmsJobRequest& setTableWhiteList(vector<string> && tableWhiteList) { DARABONBA_PTR_SET_RVALUE(tableWhiteList_, tableWhiteList) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline CreateMmsJobRequest& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CreateMmsJobRequest& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreateMmsJobRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<map<string, string>> columnMapping_ = nullptr;
    std::shared_ptr<string> dstDbName_ = nullptr;
    std::shared_ptr<string> dstSchemaName_ = nullptr;
    std::shared_ptr<bool> enableVerification_ = nullptr;
    std::shared_ptr<string> eta_ = nullptr;
    std::shared_ptr<bool> increment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json others_ = nullptr;
    std::shared_ptr<map<string, string>> partitionFilters_ = nullptr;
    std::shared_ptr<vector<int64_t>> partitions_ = nullptr;
    std::shared_ptr<bool> schemaOnly_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> srcDbName_ = nullptr;
    std::shared_ptr<string> srcSchemaName_ = nullptr;
    std::shared_ptr<vector<string>> tableBlackList_ = nullptr;
    std::shared_ptr<map<string, string>> tableMapping_ = nullptr;
    std::shared_ptr<vector<string>> tableWhiteList_ = nullptr;
    std::shared_ptr<vector<string>> tables_ = nullptr;
    // MOCK, HIVE: hive udtf task, HIVE_DATAX: hive datax task, COPY_TASK: odps Copy Task, ODPS_INSERT_OVERWRITE: odps simple insert overwrite task, MC2MC_VERIFY, OSS, HIVE_OSS
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
