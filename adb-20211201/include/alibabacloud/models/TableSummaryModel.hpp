// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLESUMMARYMODEL_HPP_
#define ALIBABACLOUD_MODELS_TABLESUMMARYMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OpenStructMvDetailModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class TableSummaryModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableSummaryModel& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MvDetailModel, mvDetailModel_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSize, tableSize_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, TableSummaryModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MvDetailModel, mvDetailModel_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSize, tableSize_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    TableSummaryModel() = default ;
    TableSummaryModel(const TableSummaryModel &) = default ;
    TableSummaryModel(TableSummaryModel &&) = default ;
    TableSummaryModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableSummaryModel() = default ;
    TableSummaryModel& operator=(const TableSummaryModel &) = default ;
    TableSummaryModel& operator=(TableSummaryModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->mvDetailModel_ != nullptr && this->owner_ != nullptr && this->SQL_ != nullptr && this->schemaName_ != nullptr
        && this->tableName_ != nullptr && this->tableSize_ != nullptr && this->tableType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline TableSummaryModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TableSummaryModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mvDetailModel Field Functions 
    bool hasMvDetailModel() const { return this->mvDetailModel_ != nullptr;};
    void deleteMvDetailModel() { this->mvDetailModel_ = nullptr;};
    inline const OpenStructMvDetailModel & mvDetailModel() const { DARABONBA_PTR_GET_CONST(mvDetailModel_, OpenStructMvDetailModel) };
    inline OpenStructMvDetailModel mvDetailModel() { DARABONBA_PTR_GET(mvDetailModel_, OpenStructMvDetailModel) };
    inline TableSummaryModel& setMvDetailModel(const OpenStructMvDetailModel & mvDetailModel) { DARABONBA_PTR_SET_VALUE(mvDetailModel_, mvDetailModel) };
    inline TableSummaryModel& setMvDetailModel(OpenStructMvDetailModel && mvDetailModel) { DARABONBA_PTR_SET_RVALUE(mvDetailModel_, mvDetailModel) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TableSummaryModel& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline TableSummaryModel& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline TableSummaryModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableSummaryModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSize Field Functions 
    bool hasTableSize() const { return this->tableSize_ != nullptr;};
    void deleteTableSize() { this->tableSize_ = nullptr;};
    inline int64_t tableSize() const { DARABONBA_PTR_GET_DEFAULT(tableSize_, 0L) };
    inline TableSummaryModel& setTableSize(int64_t tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline TableSummaryModel& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline TableSummaryModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<OpenStructMvDetailModel> mvDetailModel_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> SQL_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> tableSize_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
