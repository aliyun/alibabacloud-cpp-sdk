// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTABLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTABLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddTableShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTableShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(TableColumns, tableColumnsShrink_);
      DARABONBA_PTR_TO_JSON(TableDesc, tableDesc_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, AddTableShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(TableColumns, tableColumnsShrink_);
      DARABONBA_PTR_FROM_JSON(TableDesc, tableDesc_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    AddTableShrinkRequest() = default ;
    AddTableShrinkRequest(const AddTableShrinkRequest &) = default ;
    AddTableShrinkRequest(AddTableShrinkRequest &&) = default ;
    AddTableShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTableShrinkRequest() = default ;
    AddTableShrinkRequest& operator=(const AddTableShrinkRequest &) = default ;
    AddTableShrinkRequest& operator=(AddTableShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->tableColumnsShrink_ == nullptr && this->tableDesc_ == nullptr && this->tableName_ == nullptr; };
    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline AddTableShrinkRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // tableColumnsShrink Field Functions 
    bool hasTableColumnsShrink() const { return this->tableColumnsShrink_ != nullptr;};
    void deleteTableColumnsShrink() { this->tableColumnsShrink_ = nullptr;};
    inline string getTableColumnsShrink() const { DARABONBA_PTR_GET_DEFAULT(tableColumnsShrink_, "") };
    inline AddTableShrinkRequest& setTableColumnsShrink(string tableColumnsShrink) { DARABONBA_PTR_SET_VALUE(tableColumnsShrink_, tableColumnsShrink) };


    // tableDesc Field Functions 
    bool hasTableDesc() const { return this->tableDesc_ != nullptr;};
    void deleteTableDesc() { this->tableDesc_ = nullptr;};
    inline string getTableDesc() const { DARABONBA_PTR_GET_DEFAULT(tableDesc_, "") };
    inline AddTableShrinkRequest& setTableDesc(string tableDesc) { DARABONBA_PTR_SET_VALUE(tableDesc_, tableDesc) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline AddTableShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The connector ID.
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The column information of the table.
    // 
    // This parameter is required.
    shared_ptr<string> tableColumnsShrink_ {};
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
