// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_TABLEDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColDetailModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class TableDetailModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableDetailModel& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, TableDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    TableDetailModel() = default ;
    TableDetailModel(const TableDetailModel &) = default ;
    TableDetailModel(TableDetailModel &&) = default ;
    TableDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableDetailModel() = default ;
    TableDetailModel& operator=(const TableDetailModel &) = default ;
    TableDetailModel& operator=(TableDetailModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalog_ != nullptr
        && this->columns_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->owner_ != nullptr && this->schemaName_ != nullptr
        && this->tableName_ != nullptr && this->tableType_ != nullptr && this->updateTime_ != nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string catalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline TableDetailModel& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ColDetailModel> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ColDetailModel>) };
    inline vector<ColDetailModel> columns() { DARABONBA_PTR_GET(columns_, vector<ColDetailModel>) };
    inline TableDetailModel& setColumns(const vector<ColDetailModel> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline TableDetailModel& setColumns(vector<ColDetailModel> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline TableDetailModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TableDetailModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TableDetailModel& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline TableDetailModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableDetailModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline TableDetailModel& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline TableDetailModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> catalog_ = nullptr;
    std::shared_ptr<vector<ColDetailModel>> columns_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
