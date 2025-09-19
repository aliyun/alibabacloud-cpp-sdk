// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLPARTITION_HPP_
#define ALIBABACLOUD_MODELS_DLPARTITION_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DLStorageDescriptor.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLPartition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLPartition& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Sd, sd_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DLPartition& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Sd, sd_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DLPartition() = default ;
    DLPartition(const DLPartition &) = default ;
    DLPartition(DLPartition &&) = default ;
    DLPartition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLPartition() = default ;
    DLPartition& operator=(const DLPartition &) = default ;
    DLPartition& operator=(DLPartition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->createTime_ != nullptr && this->dbName_ != nullptr && this->lastAccessTime_ != nullptr && this->parameters_ != nullptr && this->sd_ != nullptr
        && this->tableName_ != nullptr && this->values_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline DLPartition& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline DLPartition& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DLPartition& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int32_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0) };
    inline DLPartition& setLastAccessTime(int32_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline DLPartition& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DLPartition& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // sd Field Functions 
    bool hasSd() const { return this->sd_ != nullptr;};
    void deleteSd() { this->sd_ = nullptr;};
    inline const DLStorageDescriptor & sd() const { DARABONBA_PTR_GET_CONST(sd_, DLStorageDescriptor) };
    inline DLStorageDescriptor sd() { DARABONBA_PTR_GET(sd_, DLStorageDescriptor) };
    inline DLPartition& setSd(const DLStorageDescriptor & sd) { DARABONBA_PTR_SET_VALUE(sd_, sd) };
    inline DLPartition& setSd(DLStorageDescriptor && sd) { DARABONBA_PTR_SET_RVALUE(sd_, sd) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DLPartition& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DLPartition& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DLPartition& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> catalogName_ = nullptr;
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<int32_t> lastAccessTime_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<DLStorageDescriptor> sd_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
