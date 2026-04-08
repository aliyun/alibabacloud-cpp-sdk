// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSTIMERREQUEST_HPP_
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
  class CreateMmsTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_TO_JSON(enableDataMigration, enableDataMigration_);
      DARABONBA_PTR_TO_JSON(enableSchemaMigration, enableSchemaMigration_);
      DARABONBA_PTR_TO_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(others, others_);
      DARABONBA_PTR_TO_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_FROM_JSON(enableDataMigration, enableDataMigration_);
      DARABONBA_PTR_FROM_JSON(enableSchemaMigration, enableSchemaMigration_);
      DARABONBA_PTR_FROM_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(others, others_);
      DARABONBA_PTR_FROM_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateMmsTimerRequest() = default ;
    CreateMmsTimerRequest(const CreateMmsTimerRequest &) = default ;
    CreateMmsTimerRequest(CreateMmsTimerRequest &&) = default ;
    CreateMmsTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsTimerRequest() = default ;
    CreateMmsTimerRequest& operator=(const CreateMmsTimerRequest &) = default ;
    CreateMmsTimerRequest& operator=(CreateMmsTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnMapping_ == nullptr
        && this->enableDataMigration_ == nullptr && this->enableSchemaMigration_ == nullptr && this->enableVerification_ == nullptr && this->name_ == nullptr && this->others_ == nullptr
        && this->partitionFilters_ == nullptr && this->partitions_ == nullptr && this->scheduleType_ == nullptr && this->sourceId_ == nullptr && this->srcDbName_ == nullptr
        && this->tableBlackList_ == nullptr && this->tableMapping_ == nullptr && this->tableWhiteList_ == nullptr && this->tables_ == nullptr && this->value_ == nullptr; };
    // columnMapping Field Functions 
    bool hasColumnMapping() const { return this->columnMapping_ != nullptr;};
    void deleteColumnMapping() { this->columnMapping_ = nullptr;};
    inline const map<string, string> & getColumnMapping() const { DARABONBA_PTR_GET_CONST(columnMapping_, map<string, string>) };
    inline map<string, string> getColumnMapping() { DARABONBA_PTR_GET(columnMapping_, map<string, string>) };
    inline CreateMmsTimerRequest& setColumnMapping(const map<string, string> & columnMapping) { DARABONBA_PTR_SET_VALUE(columnMapping_, columnMapping) };
    inline CreateMmsTimerRequest& setColumnMapping(map<string, string> && columnMapping) { DARABONBA_PTR_SET_RVALUE(columnMapping_, columnMapping) };


    // enableDataMigration Field Functions 
    bool hasEnableDataMigration() const { return this->enableDataMigration_ != nullptr;};
    void deleteEnableDataMigration() { this->enableDataMigration_ = nullptr;};
    inline bool getEnableDataMigration() const { DARABONBA_PTR_GET_DEFAULT(enableDataMigration_, false) };
    inline CreateMmsTimerRequest& setEnableDataMigration(bool enableDataMigration) { DARABONBA_PTR_SET_VALUE(enableDataMigration_, enableDataMigration) };


    // enableSchemaMigration Field Functions 
    bool hasEnableSchemaMigration() const { return this->enableSchemaMigration_ != nullptr;};
    void deleteEnableSchemaMigration() { this->enableSchemaMigration_ = nullptr;};
    inline bool getEnableSchemaMigration() const { DARABONBA_PTR_GET_DEFAULT(enableSchemaMigration_, false) };
    inline CreateMmsTimerRequest& setEnableSchemaMigration(bool enableSchemaMigration) { DARABONBA_PTR_SET_VALUE(enableSchemaMigration_, enableSchemaMigration) };


    // enableVerification Field Functions 
    bool hasEnableVerification() const { return this->enableVerification_ != nullptr;};
    void deleteEnableVerification() { this->enableVerification_ = nullptr;};
    inline bool getEnableVerification() const { DARABONBA_PTR_GET_DEFAULT(enableVerification_, false) };
    inline CreateMmsTimerRequest& setEnableVerification(bool enableVerification) { DARABONBA_PTR_SET_VALUE(enableVerification_, enableVerification) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMmsTimerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // others Field Functions 
    bool hasOthers() const { return this->others_ != nullptr;};
    void deleteOthers() { this->others_ = nullptr;};
    inline     const Darabonba::Json & getOthers() const { DARABONBA_GET(others_) };
    Darabonba::Json & getOthers() { DARABONBA_GET(others_) };
    inline CreateMmsTimerRequest& setOthers(const Darabonba::Json & others) { DARABONBA_SET_VALUE(others_, others) };
    inline CreateMmsTimerRequest& setOthers(Darabonba::Json && others) { DARABONBA_SET_RVALUE(others_, others) };


    // partitionFilters Field Functions 
    bool hasPartitionFilters() const { return this->partitionFilters_ != nullptr;};
    void deletePartitionFilters() { this->partitionFilters_ = nullptr;};
    inline const map<string, string> & getPartitionFilters() const { DARABONBA_PTR_GET_CONST(partitionFilters_, map<string, string>) };
    inline map<string, string> getPartitionFilters() { DARABONBA_PTR_GET(partitionFilters_, map<string, string>) };
    inline CreateMmsTimerRequest& setPartitionFilters(const map<string, string> & partitionFilters) { DARABONBA_PTR_SET_VALUE(partitionFilters_, partitionFilters) };
    inline CreateMmsTimerRequest& setPartitionFilters(map<string, string> && partitionFilters) { DARABONBA_PTR_SET_RVALUE(partitionFilters_, partitionFilters) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<int64_t> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<int64_t>) };
    inline vector<int64_t> getPartitions() { DARABONBA_PTR_GET(partitions_, vector<int64_t>) };
    inline CreateMmsTimerRequest& setPartitions(const vector<int64_t> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline CreateMmsTimerRequest& setPartitions(vector<int64_t> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline CreateMmsTimerRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline CreateMmsTimerRequest& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string getSrcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline CreateMmsTimerRequest& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // tableBlackList Field Functions 
    bool hasTableBlackList() const { return this->tableBlackList_ != nullptr;};
    void deleteTableBlackList() { this->tableBlackList_ = nullptr;};
    inline const vector<string> & getTableBlackList() const { DARABONBA_PTR_GET_CONST(tableBlackList_, vector<string>) };
    inline vector<string> getTableBlackList() { DARABONBA_PTR_GET(tableBlackList_, vector<string>) };
    inline CreateMmsTimerRequest& setTableBlackList(const vector<string> & tableBlackList) { DARABONBA_PTR_SET_VALUE(tableBlackList_, tableBlackList) };
    inline CreateMmsTimerRequest& setTableBlackList(vector<string> && tableBlackList) { DARABONBA_PTR_SET_RVALUE(tableBlackList_, tableBlackList) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const map<string, string> & getTableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, map<string, string>) };
    inline map<string, string> getTableMapping() { DARABONBA_PTR_GET(tableMapping_, map<string, string>) };
    inline CreateMmsTimerRequest& setTableMapping(const map<string, string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline CreateMmsTimerRequest& setTableMapping(map<string, string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // tableWhiteList Field Functions 
    bool hasTableWhiteList() const { return this->tableWhiteList_ != nullptr;};
    void deleteTableWhiteList() { this->tableWhiteList_ = nullptr;};
    inline const vector<string> & getTableWhiteList() const { DARABONBA_PTR_GET_CONST(tableWhiteList_, vector<string>) };
    inline vector<string> getTableWhiteList() { DARABONBA_PTR_GET(tableWhiteList_, vector<string>) };
    inline CreateMmsTimerRequest& setTableWhiteList(const vector<string> & tableWhiteList) { DARABONBA_PTR_SET_VALUE(tableWhiteList_, tableWhiteList) };
    inline CreateMmsTimerRequest& setTableWhiteList(vector<string> && tableWhiteList) { DARABONBA_PTR_SET_RVALUE(tableWhiteList_, tableWhiteList) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline CreateMmsTimerRequest& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline CreateMmsTimerRequest& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateMmsTimerRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<map<string, string>> columnMapping_ {};
    shared_ptr<bool> enableDataMigration_ {};
    shared_ptr<bool> enableSchemaMigration_ {};
    shared_ptr<bool> enableVerification_ {};
    shared_ptr<string> name_ {};
    Darabonba::Json others_ {};
    shared_ptr<map<string, string>> partitionFilters_ {};
    shared_ptr<vector<int64_t>> partitions_ {};
    shared_ptr<string> scheduleType_ {};
    shared_ptr<int64_t> sourceId_ {};
    shared_ptr<string> srcDbName_ {};
    shared_ptr<vector<string>> tableBlackList_ {};
    shared_ptr<map<string, string>> tableMapping_ {};
    shared_ptr<vector<string>> tableWhiteList_ {};
    shared_ptr<vector<string>> tables_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
