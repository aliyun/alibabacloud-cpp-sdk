// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(TableColumns, tableColumns_);
      DARABONBA_PTR_TO_JSON(TableDesc, tableDesc_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, AddTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(TableColumns, tableColumns_);
      DARABONBA_PTR_FROM_JSON(TableDesc, tableDesc_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    AddTableRequest() = default ;
    AddTableRequest(const AddTableRequest &) = default ;
    AddTableRequest(AddTableRequest &&) = default ;
    AddTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTableRequest() = default ;
    AddTableRequest& operator=(const AddTableRequest &) = default ;
    AddTableRequest& operator=(AddTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableColumns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableColumns& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnDesc, columnDesc_);
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
      };
      friend void from_json(const Darabonba::Json& j, TableColumns& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnDesc, columnDesc_);
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      };
      TableColumns() = default ;
      TableColumns(const TableColumns &) = default ;
      TableColumns(TableColumns &&) = default ;
      TableColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableColumns() = default ;
      TableColumns& operator=(const TableColumns &) = default ;
      TableColumns& operator=(TableColumns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnDesc_ == nullptr
        && this->columnName_ == nullptr && this->dataType_ == nullptr; };
      // columnDesc Field Functions 
      bool hasColumnDesc() const { return this->columnDesc_ != nullptr;};
      void deleteColumnDesc() { this->columnDesc_ = nullptr;};
      inline string getColumnDesc() const { DARABONBA_PTR_GET_DEFAULT(columnDesc_, "") };
      inline TableColumns& setColumnDesc(string columnDesc) { DARABONBA_PTR_SET_VALUE(columnDesc_, columnDesc) };


      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline TableColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline TableColumns& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    protected:
      // The column description.
      shared_ptr<string> columnDesc_ {};
      // The column name.
      // 
      // This parameter is required.
      shared_ptr<string> columnName_ {};
      // The data type.
      // 
      // This parameter is required.
      shared_ptr<string> dataType_ {};
    };

    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->tableColumns_ == nullptr && this->tableDesc_ == nullptr && this->tableName_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline AddTableRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // tableColumns Field Functions 
    bool hasTableColumns() const { return this->tableColumns_ != nullptr;};
    void deleteTableColumns() { this->tableColumns_ = nullptr;};
    inline const vector<AddTableRequest::TableColumns> & getTableColumns() const { DARABONBA_PTR_GET_CONST(tableColumns_, vector<AddTableRequest::TableColumns>) };
    inline vector<AddTableRequest::TableColumns> getTableColumns() { DARABONBA_PTR_GET(tableColumns_, vector<AddTableRequest::TableColumns>) };
    inline AddTableRequest& setTableColumns(const vector<AddTableRequest::TableColumns> & tableColumns) { DARABONBA_PTR_SET_VALUE(tableColumns_, tableColumns) };
    inline AddTableRequest& setTableColumns(vector<AddTableRequest::TableColumns> && tableColumns) { DARABONBA_PTR_SET_RVALUE(tableColumns_, tableColumns) };


    // tableDesc Field Functions 
    bool hasTableDesc() const { return this->tableDesc_ != nullptr;};
    void deleteTableDesc() { this->tableDesc_ = nullptr;};
    inline string getTableDesc() const { DARABONBA_PTR_GET_DEFAULT(tableDesc_, "") };
    inline AddTableRequest& setTableDesc(string tableDesc) { DARABONBA_PTR_SET_VALUE(tableDesc_, tableDesc) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline AddTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The connector ID.
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The column information of the table.
    // 
    // This parameter is required.
    shared_ptr<vector<AddTableRequest::TableColumns>> tableColumns_ {};
    shared_ptr<string> tableDesc_ {};
    // The table name.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
