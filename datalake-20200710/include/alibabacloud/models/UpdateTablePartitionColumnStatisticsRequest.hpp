// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEPARTITIONCOLUMNSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColumnStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateTablePartitionColumnStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTablePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColumnStatisticsList, columnStatisticsList_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsStatsCompliant, isStatsCompliant_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(ValidWriteIdList, validWriteIdList_);
      DARABONBA_PTR_TO_JSON(WriteId, writeId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTablePartitionColumnStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColumnStatisticsList, columnStatisticsList_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsStatsCompliant, isStatsCompliant_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(ValidWriteIdList, validWriteIdList_);
      DARABONBA_PTR_FROM_JSON(WriteId, writeId_);
    };
    UpdateTablePartitionColumnStatisticsRequest() = default ;
    UpdateTablePartitionColumnStatisticsRequest(const UpdateTablePartitionColumnStatisticsRequest &) = default ;
    UpdateTablePartitionColumnStatisticsRequest(UpdateTablePartitionColumnStatisticsRequest &&) = default ;
    UpdateTablePartitionColumnStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTablePartitionColumnStatisticsRequest() = default ;
    UpdateTablePartitionColumnStatisticsRequest& operator=(const UpdateTablePartitionColumnStatisticsRequest &) = default ;
    UpdateTablePartitionColumnStatisticsRequest& operator=(UpdateTablePartitionColumnStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->columnStatisticsList_ == nullptr && return this->databaseName_ == nullptr && return this->engine_ == nullptr && return this->isStatsCompliant_ == nullptr && return this->tableName_ == nullptr
        && return this->validWriteIdList_ == nullptr && return this->writeId_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // columnStatisticsList Field Functions 
    bool hasColumnStatisticsList() const { return this->columnStatisticsList_ != nullptr;};
    void deleteColumnStatisticsList() { this->columnStatisticsList_ = nullptr;};
    inline const vector<ColumnStatistics> & columnStatisticsList() const { DARABONBA_PTR_GET_CONST(columnStatisticsList_, vector<ColumnStatistics>) };
    inline vector<ColumnStatistics> columnStatisticsList() { DARABONBA_PTR_GET(columnStatisticsList_, vector<ColumnStatistics>) };
    inline UpdateTablePartitionColumnStatisticsRequest& setColumnStatisticsList(const vector<ColumnStatistics> & columnStatisticsList) { DARABONBA_PTR_SET_VALUE(columnStatisticsList_, columnStatisticsList) };
    inline UpdateTablePartitionColumnStatisticsRequest& setColumnStatisticsList(vector<ColumnStatistics> && columnStatisticsList) { DARABONBA_PTR_SET_RVALUE(columnStatisticsList_, columnStatisticsList) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isStatsCompliant Field Functions 
    bool hasIsStatsCompliant() const { return this->isStatsCompliant_ != nullptr;};
    void deleteIsStatsCompliant() { this->isStatsCompliant_ = nullptr;};
    inline bool isStatsCompliant() const { DARABONBA_PTR_GET_DEFAULT(isStatsCompliant_, false) };
    inline UpdateTablePartitionColumnStatisticsRequest& setIsStatsCompliant(bool isStatsCompliant) { DARABONBA_PTR_SET_VALUE(isStatsCompliant_, isStatsCompliant) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // validWriteIdList Field Functions 
    bool hasValidWriteIdList() const { return this->validWriteIdList_ != nullptr;};
    void deleteValidWriteIdList() { this->validWriteIdList_ = nullptr;};
    inline string validWriteIdList() const { DARABONBA_PTR_GET_DEFAULT(validWriteIdList_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setValidWriteIdList(string validWriteIdList) { DARABONBA_PTR_SET_VALUE(validWriteIdList_, validWriteIdList) };


    // writeId Field Functions 
    bool hasWriteId() const { return this->writeId_ != nullptr;};
    void deleteWriteId() { this->writeId_ = nullptr;};
    inline string writeId() const { DARABONBA_PTR_GET_DEFAULT(writeId_, "") };
    inline UpdateTablePartitionColumnStatisticsRequest& setWriteId(string writeId) { DARABONBA_PTR_SET_VALUE(writeId_, writeId) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<vector<ColumnStatistics>> columnStatisticsList_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<bool> isStatsCompliant_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> validWriteIdList_ = nullptr;
    std::shared_ptr<string> writeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
