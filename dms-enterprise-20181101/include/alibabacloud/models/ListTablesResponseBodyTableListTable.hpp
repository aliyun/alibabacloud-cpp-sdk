// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLELISTTABLE_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYTABLELISTTABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTablesResponseBodyTableListTableOwnerIdList.hpp>
#include <alibabacloud/models/ListTablesResponseBodyTableListTableOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesResponseBodyTableListTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyTableListTable& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(NumRows, numRows_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(StoreCapacity, storeCapacity_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyTableListTable& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(NumRows, numRows_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(StoreCapacity, storeCapacity_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    ListTablesResponseBodyTableListTable() = default ;
    ListTablesResponseBodyTableListTable(const ListTablesResponseBodyTableListTable &) = default ;
    ListTablesResponseBodyTableListTable(ListTablesResponseBodyTableListTable &&) = default ;
    ListTablesResponseBodyTableListTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyTableListTable() = default ;
    ListTablesResponseBodyTableListTable& operator=(const ListTablesResponseBodyTableListTable &) = default ;
    ListTablesResponseBodyTableListTable& operator=(ListTablesResponseBodyTableListTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseId_ == nullptr
        && return this->description_ == nullptr && return this->encoding_ == nullptr && return this->engine_ == nullptr && return this->numRows_ == nullptr && return this->ownerIdList_ == nullptr
        && return this->ownerNameList_ == nullptr && return this->storeCapacity_ == nullptr && return this->tableGuid_ == nullptr && return this->tableId_ == nullptr && return this->tableName_ == nullptr
        && return this->tableSchemaName_ == nullptr && return this->tableType_ == nullptr; };
    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListTablesResponseBodyTableListTable& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTablesResponseBodyTableListTable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline ListTablesResponseBodyTableListTable& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListTablesResponseBodyTableListTable& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline ListTablesResponseBodyTableListTable& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::ListTablesResponseBodyTableListTableOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::ListTablesResponseBodyTableListTableOwnerIdList) };
    inline Models::ListTablesResponseBodyTableListTableOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::ListTablesResponseBodyTableListTableOwnerIdList) };
    inline ListTablesResponseBodyTableListTable& setOwnerIdList(const Models::ListTablesResponseBodyTableListTableOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListTablesResponseBodyTableListTable& setOwnerIdList(Models::ListTablesResponseBodyTableListTableOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::ListTablesResponseBodyTableListTableOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::ListTablesResponseBodyTableListTableOwnerNameList) };
    inline Models::ListTablesResponseBodyTableListTableOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::ListTablesResponseBodyTableListTableOwnerNameList) };
    inline ListTablesResponseBodyTableListTable& setOwnerNameList(const Models::ListTablesResponseBodyTableListTableOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline ListTablesResponseBodyTableListTable& setOwnerNameList(Models::ListTablesResponseBodyTableListTableOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // storeCapacity Field Functions 
    bool hasStoreCapacity() const { return this->storeCapacity_ != nullptr;};
    void deleteStoreCapacity() { this->storeCapacity_ = nullptr;};
    inline int64_t storeCapacity() const { DARABONBA_PTR_GET_DEFAULT(storeCapacity_, 0L) };
    inline ListTablesResponseBodyTableListTable& setStoreCapacity(int64_t storeCapacity) { DARABONBA_PTR_SET_VALUE(storeCapacity_, storeCapacity) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline ListTablesResponseBodyTableListTable& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListTablesResponseBodyTableListTable& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListTablesResponseBodyTableListTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string tableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline ListTablesResponseBodyTableListTable& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ListTablesResponseBodyTableListTable& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // The ID of the physical database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The description of the table.
    std::shared_ptr<string> description_ = nullptr;
    // The encoding format of the table.
    std::shared_ptr<string> encoding_ = nullptr;
    // The engine of the table.
    std::shared_ptr<string> engine_ = nullptr;
    // The number of rows in the table. This is a statistical value and does not indicate the actual number of rows.
    std::shared_ptr<int64_t> numRows_ = nullptr;
    // The ID list of the table owners.
    std::shared_ptr<Models::ListTablesResponseBodyTableListTableOwnerIdList> ownerIdList_ = nullptr;
    // The nickname list of the table owners.
    std::shared_ptr<Models::ListTablesResponseBodyTableListTableOwnerNameList> ownerNameList_ = nullptr;
    // The storage space that is occupied by the table. This is a statistical value and does not indicate the accurate storage space. Unit: MB.
    std::shared_ptr<int64_t> storeCapacity_ = nullptr;
    // The GUID of the table in DMS.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The ID of the table.
    std::shared_ptr<string> tableId_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The database in which the table resides.
    std::shared_ptr<string> tableSchemaName_ = nullptr;
    // The type of the table. Default value: NORMAL.
    std::shared_ptr<string> tableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
