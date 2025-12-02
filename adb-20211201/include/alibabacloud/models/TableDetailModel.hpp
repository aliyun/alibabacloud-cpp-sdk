// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_TABLEDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ColDetailModel.hpp>
#include <map>
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
      DARABONBA_PTR_TO_JSON(CreatedBySource, createdBySource_);
      DARABONBA_PTR_TO_JSON(CreatedByUser, createdByUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, TableDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBySource, createdBySource_);
      DARABONBA_PTR_FROM_JSON(CreatedByUser, createdByUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
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
    virtual bool empty() const override { return this->catalog_ == nullptr
        && return this->columns_ == nullptr && return this->createTime_ == nullptr && return this->createdBySource_ == nullptr && return this->createdByUser_ == nullptr && return this->description_ == nullptr
        && return this->location_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr
        && return this->tableType_ == nullptr && return this->updateTime_ == nullptr; };
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


    // createdBySource Field Functions 
    bool hasCreatedBySource() const { return this->createdBySource_ != nullptr;};
    void deleteCreatedBySource() { this->createdBySource_ = nullptr;};
    inline string createdBySource() const { DARABONBA_PTR_GET_DEFAULT(createdBySource_, "") };
    inline TableDetailModel& setCreatedBySource(string createdBySource) { DARABONBA_PTR_SET_VALUE(createdBySource_, createdBySource) };


    // createdByUser Field Functions 
    bool hasCreatedByUser() const { return this->createdByUser_ != nullptr;};
    void deleteCreatedByUser() { this->createdByUser_ = nullptr;};
    inline string createdByUser() const { DARABONBA_PTR_GET_DEFAULT(createdByUser_, "") };
    inline TableDetailModel& setCreatedByUser(string createdByUser) { DARABONBA_PTR_SET_VALUE(createdByUser_, createdByUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TableDetailModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline TableDetailModel& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TableDetailModel& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline TableDetailModel& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline TableDetailModel& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


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
    std::shared_ptr<string> createdBySource_ = nullptr;
    std::shared_ptr<string> createdByUser_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
