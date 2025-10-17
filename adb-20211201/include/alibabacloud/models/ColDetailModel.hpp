// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_COLDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ColDetailModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColDetailModel& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DistributeKey, distributeKey_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ColDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DistributeKey, distributeKey_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ColDetailModel() = default ;
    ColDetailModel(const ColDetailModel &) = default ;
    ColDetailModel(ColDetailModel &&) = default ;
    ColDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColDetailModel() = default ;
    ColDetailModel& operator=(const ColDetailModel &) = default ;
    ColDetailModel& operator=(ColDetailModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->distributeKey_ == nullptr && return this->nullable_ == nullptr && return this->partitionKey_ == nullptr
        && return this->primaryKey_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ColDetailModel& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ColDetailModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ColDetailModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distributeKey Field Functions 
    bool hasDistributeKey() const { return this->distributeKey_ != nullptr;};
    void deleteDistributeKey() { this->distributeKey_ = nullptr;};
    inline bool distributeKey() const { DARABONBA_PTR_GET_DEFAULT(distributeKey_, false) };
    inline ColDetailModel& setDistributeKey(bool distributeKey) { DARABONBA_PTR_SET_VALUE(distributeKey_, distributeKey) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ColDetailModel& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline bool partitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
    inline ColDetailModel& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline ColDetailModel& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ColDetailModel& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ColDetailModel& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ColDetailModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ColDetailModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> distributeKey_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<bool> partitionKey_ = nullptr;
    std::shared_ptr<bool> primaryKey_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
