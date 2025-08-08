// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODYLOGICTABLELISTLOGICTABLE_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLESRESPONSEBODYLOGICTABLELISTLOGICTABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList.hpp>
#include <alibabacloud/models/ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTablesResponseBodyLogicTableListLogicTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTablesResponseBodyLogicTableListLogicTable& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TableExpr, tableExpr_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTablesResponseBodyLogicTableListLogicTable& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TableExpr, tableExpr_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListLogicTablesResponseBodyLogicTableListLogicTable() = default ;
    ListLogicTablesResponseBodyLogicTableListLogicTable(const ListLogicTablesResponseBodyLogicTableListLogicTable &) = default ;
    ListLogicTablesResponseBodyLogicTableListLogicTable(ListLogicTablesResponseBodyLogicTableListLogicTable &&) = default ;
    ListLogicTablesResponseBodyLogicTableListLogicTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTablesResponseBodyLogicTableListLogicTable() = default ;
    ListLogicTablesResponseBodyLogicTableListLogicTable& operator=(const ListLogicTablesResponseBodyLogicTableListLogicTable &) = default ;
    ListLogicTablesResponseBodyLogicTableListLogicTable& operator=(ListLogicTablesResponseBodyLogicTableListLogicTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseId_ != nullptr
        && this->logic_ != nullptr && this->ownerIdList_ != nullptr && this->ownerNameList_ != nullptr && this->schemaName_ != nullptr && this->tableCount_ != nullptr
        && this->tableExpr_ != nullptr && this->tableGuid_ != nullptr && this->tableId_ != nullptr && this->tableName_ != nullptr; };
    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList) };
    inline Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList) };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setOwnerIdList(const Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setOwnerIdList(Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList) };
    inline Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList) };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setOwnerNameList(const Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setOwnerNameList(Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline string tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setTableCount(string tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // tableExpr Field Functions 
    bool hasTableExpr() const { return this->tableExpr_ != nullptr;};
    void deleteTableExpr() { this->tableExpr_ = nullptr;};
    inline string tableExpr() const { DARABONBA_PTR_GET_DEFAULT(tableExpr_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setTableExpr(string tableExpr) { DARABONBA_PTR_SET_VALUE(tableExpr_, tableExpr) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListLogicTablesResponseBodyLogicTableListLogicTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the logical database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // Indicates whether the table is a logical table. The value is fixed to true.
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the owners of the logical tables.
    std::shared_ptr<Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the owners of the logical tables.
    std::shared_ptr<Models::ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList> ownerNameList_ = nullptr;
    // The logical database to which the logical table belongs.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The number of logical tables.
    std::shared_ptr<string> tableCount_ = nullptr;
    // The expression of the logical table.
    std::shared_ptr<string> tableExpr_ = nullptr;
    // The GUID of the logical table.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The ID of the logical table.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the logical table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
