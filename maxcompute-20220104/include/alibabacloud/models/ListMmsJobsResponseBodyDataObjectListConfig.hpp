// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODYDATAOBJECTLISTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSJOBSRESPONSEBODYDATAOBJECTLISTCONFIG_HPP_
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
  class ListMmsJobsResponseBodyDataObjectListConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsJobsResponseBodyDataObjectListConfig& obj) { 
      DARABONBA_PTR_TO_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_TO_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_TO_JSON(increment, increment_);
      DARABONBA_ANY_TO_JSON(others, others_);
      DARABONBA_PTR_TO_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
      DARABONBA_PTR_TO_JSON(schemaOnly, schemaOnly_);
      DARABONBA_PTR_TO_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_TO_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_TO_JSON(tables, tables_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(tunnelQuota, tunnelQuota_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsJobsResponseBodyDataObjectListConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(columnMapping, columnMapping_);
      DARABONBA_PTR_FROM_JSON(enableVerification, enableVerification_);
      DARABONBA_PTR_FROM_JSON(increment, increment_);
      DARABONBA_ANY_FROM_JSON(others, others_);
      DARABONBA_PTR_FROM_JSON(partitionFilters, partitionFilters_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(schemaOnly, schemaOnly_);
      DARABONBA_PTR_FROM_JSON(tableBlackList, tableBlackList_);
      DARABONBA_PTR_FROM_JSON(tableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(tableWhiteList, tableWhiteList_);
      DARABONBA_PTR_FROM_JSON(tables, tables_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(tunnelQuota, tunnelQuota_);
    };
    ListMmsJobsResponseBodyDataObjectListConfig() = default ;
    ListMmsJobsResponseBodyDataObjectListConfig(const ListMmsJobsResponseBodyDataObjectListConfig &) = default ;
    ListMmsJobsResponseBodyDataObjectListConfig(ListMmsJobsResponseBodyDataObjectListConfig &&) = default ;
    ListMmsJobsResponseBodyDataObjectListConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsJobsResponseBodyDataObjectListConfig() = default ;
    ListMmsJobsResponseBodyDataObjectListConfig& operator=(const ListMmsJobsResponseBodyDataObjectListConfig &) = default ;
    ListMmsJobsResponseBodyDataObjectListConfig& operator=(ListMmsJobsResponseBodyDataObjectListConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnMapping_ == nullptr
        && return this->enableVerification_ == nullptr && return this->increment_ == nullptr && return this->others_ == nullptr && return this->partitionFilters_ == nullptr && return this->partitions_ == nullptr
        && return this->schemaOnly_ == nullptr && return this->tableBlackList_ == nullptr && return this->tableMapping_ == nullptr && return this->tableWhiteList_ == nullptr && return this->tables_ == nullptr
        && return this->taskType_ == nullptr && return this->tunnelQuota_ == nullptr; };
    // columnMapping Field Functions 
    bool hasColumnMapping() const { return this->columnMapping_ != nullptr;};
    void deleteColumnMapping() { this->columnMapping_ = nullptr;};
    inline const map<string, string> & columnMapping() const { DARABONBA_PTR_GET_CONST(columnMapping_, map<string, string>) };
    inline map<string, string> columnMapping() { DARABONBA_PTR_GET(columnMapping_, map<string, string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setColumnMapping(const map<string, string> & columnMapping) { DARABONBA_PTR_SET_VALUE(columnMapping_, columnMapping) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setColumnMapping(map<string, string> && columnMapping) { DARABONBA_PTR_SET_RVALUE(columnMapping_, columnMapping) };


    // enableVerification Field Functions 
    bool hasEnableVerification() const { return this->enableVerification_ != nullptr;};
    void deleteEnableVerification() { this->enableVerification_ = nullptr;};
    inline bool enableVerification() const { DARABONBA_PTR_GET_DEFAULT(enableVerification_, false) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setEnableVerification(bool enableVerification) { DARABONBA_PTR_SET_VALUE(enableVerification_, enableVerification) };


    // increment Field Functions 
    bool hasIncrement() const { return this->increment_ != nullptr;};
    void deleteIncrement() { this->increment_ = nullptr;};
    inline bool increment() const { DARABONBA_PTR_GET_DEFAULT(increment_, false) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setIncrement(bool increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };


    // others Field Functions 
    bool hasOthers() const { return this->others_ != nullptr;};
    void deleteOthers() { this->others_ = nullptr;};
    inline     const Darabonba::Json & others() const { DARABONBA_GET(others_) };
    Darabonba::Json & others() { DARABONBA_GET(others_) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setOthers(const Darabonba::Json & others) { DARABONBA_SET_VALUE(others_, others) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setOthers(Darabonba::Json & others) { DARABONBA_SET_RVALUE(others_, others) };


    // partitionFilters Field Functions 
    bool hasPartitionFilters() const { return this->partitionFilters_ != nullptr;};
    void deletePartitionFilters() { this->partitionFilters_ = nullptr;};
    inline const map<string, string> & partitionFilters() const { DARABONBA_PTR_GET_CONST(partitionFilters_, map<string, string>) };
    inline map<string, string> partitionFilters() { DARABONBA_PTR_GET(partitionFilters_, map<string, string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setPartitionFilters(const map<string, string> & partitionFilters) { DARABONBA_PTR_SET_VALUE(partitionFilters_, partitionFilters) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setPartitionFilters(map<string, string> && partitionFilters) { DARABONBA_PTR_SET_RVALUE(partitionFilters_, partitionFilters) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<int64_t> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<int64_t>) };
    inline vector<int64_t> partitions() { DARABONBA_PTR_GET(partitions_, vector<int64_t>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setPartitions(const vector<int64_t> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setPartitions(vector<int64_t> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // schemaOnly Field Functions 
    bool hasSchemaOnly() const { return this->schemaOnly_ != nullptr;};
    void deleteSchemaOnly() { this->schemaOnly_ = nullptr;};
    inline bool schemaOnly() const { DARABONBA_PTR_GET_DEFAULT(schemaOnly_, false) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setSchemaOnly(bool schemaOnly) { DARABONBA_PTR_SET_VALUE(schemaOnly_, schemaOnly) };


    // tableBlackList Field Functions 
    bool hasTableBlackList() const { return this->tableBlackList_ != nullptr;};
    void deleteTableBlackList() { this->tableBlackList_ = nullptr;};
    inline const vector<string> & tableBlackList() const { DARABONBA_PTR_GET_CONST(tableBlackList_, vector<string>) };
    inline vector<string> tableBlackList() { DARABONBA_PTR_GET(tableBlackList_, vector<string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableBlackList(const vector<string> & tableBlackList) { DARABONBA_PTR_SET_VALUE(tableBlackList_, tableBlackList) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableBlackList(vector<string> && tableBlackList) { DARABONBA_PTR_SET_RVALUE(tableBlackList_, tableBlackList) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const map<string, string> & tableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, map<string, string>) };
    inline map<string, string> tableMapping() { DARABONBA_PTR_GET(tableMapping_, map<string, string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableMapping(const map<string, string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableMapping(map<string, string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // tableWhiteList Field Functions 
    bool hasTableWhiteList() const { return this->tableWhiteList_ != nullptr;};
    void deleteTableWhiteList() { this->tableWhiteList_ = nullptr;};
    inline const vector<string> & tableWhiteList() const { DARABONBA_PTR_GET_CONST(tableWhiteList_, vector<string>) };
    inline vector<string> tableWhiteList() { DARABONBA_PTR_GET(tableWhiteList_, vector<string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableWhiteList(const vector<string> & tableWhiteList) { DARABONBA_PTR_SET_VALUE(tableWhiteList_, tableWhiteList) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTableWhiteList(vector<string> && tableWhiteList) { DARABONBA_PTR_SET_RVALUE(tableWhiteList_, tableWhiteList) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // tunnelQuota Field Functions 
    bool hasTunnelQuota() const { return this->tunnelQuota_ != nullptr;};
    void deleteTunnelQuota() { this->tunnelQuota_ = nullptr;};
    inline string tunnelQuota() const { DARABONBA_PTR_GET_DEFAULT(tunnelQuota_, "") };
    inline ListMmsJobsResponseBodyDataObjectListConfig& setTunnelQuota(string tunnelQuota) { DARABONBA_PTR_SET_VALUE(tunnelQuota_, tunnelQuota) };


  protected:
    std::shared_ptr<map<string, string>> columnMapping_ = nullptr;
    std::shared_ptr<bool> enableVerification_ = nullptr;
    std::shared_ptr<bool> increment_ = nullptr;
    Darabonba::Json others_ = nullptr;
    std::shared_ptr<map<string, string>> partitionFilters_ = nullptr;
    std::shared_ptr<vector<int64_t>> partitions_ = nullptr;
    std::shared_ptr<bool> schemaOnly_ = nullptr;
    std::shared_ptr<vector<string>> tableBlackList_ = nullptr;
    std::shared_ptr<map<string, string>> tableMapping_ = nullptr;
    std::shared_ptr<vector<string>> tableWhiteList_ = nullptr;
    std::shared_ptr<vector<string>> tables_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> tunnelQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
