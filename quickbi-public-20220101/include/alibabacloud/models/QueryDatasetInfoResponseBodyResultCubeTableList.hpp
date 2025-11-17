// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTCUBETABLELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETINFORESPONSEBODYRESULTCUBETABLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetInfoResponseBodyResultCubeTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetInfoResponseBodyResultCubeTableList& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(Customsql, customsql_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(FactTable, factTable_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetInfoResponseBodyResultCubeTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Customsql, customsql_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(FactTable, factTable_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
    };
    QueryDatasetInfoResponseBodyResultCubeTableList() = default ;
    QueryDatasetInfoResponseBodyResultCubeTableList(const QueryDatasetInfoResponseBodyResultCubeTableList &) = default ;
    QueryDatasetInfoResponseBodyResultCubeTableList(QueryDatasetInfoResponseBodyResultCubeTableList &&) = default ;
    QueryDatasetInfoResponseBodyResultCubeTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetInfoResponseBodyResultCubeTableList() = default ;
    QueryDatasetInfoResponseBodyResultCubeTableList& operator=(const QueryDatasetInfoResponseBodyResultCubeTableList &) = default ;
    QueryDatasetInfoResponseBodyResultCubeTableList& operator=(QueryDatasetInfoResponseBodyResultCubeTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && return this->customsql_ == nullptr && return this->datasourceId_ == nullptr && return this->dsType_ == nullptr && return this->factTable_ == nullptr && return this->sql_ == nullptr
        && return this->tableName_ == nullptr && return this->uniqueId_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // customsql Field Functions 
    bool hasCustomsql() const { return this->customsql_ != nullptr;};
    void deleteCustomsql() { this->customsql_ = nullptr;};
    inline bool customsql() const { DARABONBA_PTR_GET_DEFAULT(customsql_, false) };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setCustomsql(bool customsql) { DARABONBA_PTR_SET_VALUE(customsql_, customsql) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // factTable Field Functions 
    bool hasFactTable() const { return this->factTable_ != nullptr;};
    void deleteFactTable() { this->factTable_ = nullptr;};
    inline bool factTable() const { DARABONBA_PTR_GET_DEFAULT(factTable_, false) };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setFactTable(bool factTable) { DARABONBA_PTR_SET_VALUE(factTable_, factTable) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string uniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline QueryDatasetInfoResponseBodyResultCubeTableList& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


  protected:
    // Indicates whether the data source table is valid. Valid values:
    // 
    // *   true: data source table
    // *   false: custom table
    std::shared_ptr<string> caption_ = nullptr;
    // The display name of the table.
    std::shared_ptr<bool> customsql_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> datasourceId_ = nullptr;
    // The ID of the data source.
    std::shared_ptr<string> dsType_ = nullptr;
    // The unique ID of the table.
    std::shared_ptr<bool> factTable_ = nullptr;
    // Indicates whether the table is a custom SQL table. Valid values:
    // 
    // *   true: custom SQL table
    // *   false: non-custom SQL table
    std::shared_ptr<string> sql_ = nullptr;
    // The list of tables used by the dataset.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   mysql
    // *   odps
    // *   oracle
    // *   ... and other data source types supported by Quick BI
    std::shared_ptr<string> uniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
