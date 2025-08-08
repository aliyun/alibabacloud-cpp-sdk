// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELISTDATABASELISTTABLELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELISTDATABASELISTTABLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& obj) { 
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& obj) { 
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList(const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList(GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList &&) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& operator=(const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& operator=(GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableId_ != nullptr
        && this->tableName_ != nullptr && this->tableType_ != nullptr; };
    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // The ID of the table.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the physical table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of the table. This is a reserved parameter.
    std::shared_ptr<string> tableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
