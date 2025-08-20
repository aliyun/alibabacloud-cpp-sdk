// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CSTOREINDEXMODEL_HPP_
#define ALIBABACLOUD_MODELS_CSTOREINDEXMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldSchemaModel.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CstoreIndexModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CstoreIndexModel& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnOrds, columnOrds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IndexColumns, indexColumns_);
      DARABONBA_PTR_TO_JSON(IndexName, indexName_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(PhysicalTableName, physicalTableName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CstoreIndexModel& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnOrds, columnOrds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IndexColumns, indexColumns_);
      DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(PhysicalTableName, physicalTableName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CstoreIndexModel() = default ;
    CstoreIndexModel(const CstoreIndexModel &) = default ;
    CstoreIndexModel(CstoreIndexModel &&) = default ;
    CstoreIndexModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CstoreIndexModel() = default ;
    CstoreIndexModel& operator=(const CstoreIndexModel &) = default ;
    CstoreIndexModel& operator=(CstoreIndexModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnOrds_ != nullptr
        && this->createTime_ != nullptr && this->databaseName_ != nullptr && this->indexColumns_ != nullptr && this->indexName_ != nullptr && this->indexType_ != nullptr
        && this->options_ != nullptr && this->physicalTableName_ != nullptr && this->updateTime_ != nullptr; };
    // columnOrds Field Functions 
    bool hasColumnOrds() const { return this->columnOrds_ != nullptr;};
    void deleteColumnOrds() { this->columnOrds_ = nullptr;};
    inline const vector<string> & columnOrds() const { DARABONBA_PTR_GET_CONST(columnOrds_, vector<string>) };
    inline vector<string> columnOrds() { DARABONBA_PTR_GET(columnOrds_, vector<string>) };
    inline CstoreIndexModel& setColumnOrds(const vector<string> & columnOrds) { DARABONBA_PTR_SET_VALUE(columnOrds_, columnOrds) };
    inline CstoreIndexModel& setColumnOrds(vector<string> && columnOrds) { DARABONBA_PTR_SET_RVALUE(columnOrds_, columnOrds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CstoreIndexModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CstoreIndexModel& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // indexColumns Field Functions 
    bool hasIndexColumns() const { return this->indexColumns_ != nullptr;};
    void deleteIndexColumns() { this->indexColumns_ = nullptr;};
    inline const vector<FieldSchemaModel> & indexColumns() const { DARABONBA_PTR_GET_CONST(indexColumns_, vector<FieldSchemaModel>) };
    inline vector<FieldSchemaModel> indexColumns() { DARABONBA_PTR_GET(indexColumns_, vector<FieldSchemaModel>) };
    inline CstoreIndexModel& setIndexColumns(const vector<FieldSchemaModel> & indexColumns) { DARABONBA_PTR_SET_VALUE(indexColumns_, indexColumns) };
    inline CstoreIndexModel& setIndexColumns(vector<FieldSchemaModel> && indexColumns) { DARABONBA_PTR_SET_RVALUE(indexColumns_, indexColumns) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline CstoreIndexModel& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline CstoreIndexModel& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const map<string, string> & options() const { DARABONBA_PTR_GET_CONST(options_, map<string, string>) };
    inline map<string, string> options() { DARABONBA_PTR_GET(options_, map<string, string>) };
    inline CstoreIndexModel& setOptions(const map<string, string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline CstoreIndexModel& setOptions(map<string, string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // physicalTableName Field Functions 
    bool hasPhysicalTableName() const { return this->physicalTableName_ != nullptr;};
    void deletePhysicalTableName() { this->physicalTableName_ = nullptr;};
    inline string physicalTableName() const { DARABONBA_PTR_GET_DEFAULT(physicalTableName_, "") };
    inline CstoreIndexModel& setPhysicalTableName(string physicalTableName) { DARABONBA_PTR_SET_VALUE(physicalTableName_, physicalTableName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CstoreIndexModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<string>> columnOrds_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<vector<FieldSchemaModel>> indexColumns_ = nullptr;
    std::shared_ptr<string> indexName_ = nullptr;
    std::shared_ptr<string> indexType_ = nullptr;
    std::shared_ptr<map<string, string>> options_ = nullptr;
    std::shared_ptr<string> physicalTableName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
