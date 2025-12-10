// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLERESOURCETABLE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLERESOURCETABLE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/LifecycleResourceTableSd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleResourceTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleResourceTable& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Sd, sd_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleResourceTable& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Sd, sd_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    LifecycleResourceTable() = default ;
    LifecycleResourceTable(const LifecycleResourceTable &) = default ;
    LifecycleResourceTable(LifecycleResourceTable &&) = default ;
    LifecycleResourceTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleResourceTable() = default ;
    LifecycleResourceTable& operator=(const LifecycleResourceTable &) = default ;
    LifecycleResourceTable& operator=(LifecycleResourceTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->databaseName_ == nullptr && return this->parameters_ == nullptr && return this->sd_ == nullptr && return this->tableName_ == nullptr && return this->tableType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline LifecycleResourceTable& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline LifecycleResourceTable& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline LifecycleResourceTable& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline LifecycleResourceTable& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // sd Field Functions 
    bool hasSd() const { return this->sd_ != nullptr;};
    void deleteSd() { this->sd_ = nullptr;};
    inline const Models::LifecycleResourceTableSd & sd() const { DARABONBA_PTR_GET_CONST(sd_, Models::LifecycleResourceTableSd) };
    inline Models::LifecycleResourceTableSd sd() { DARABONBA_PTR_GET(sd_, Models::LifecycleResourceTableSd) };
    inline LifecycleResourceTable& setSd(const Models::LifecycleResourceTableSd & sd) { DARABONBA_PTR_SET_VALUE(sd_, sd) };
    inline LifecycleResourceTable& setSd(Models::LifecycleResourceTableSd && sd) { DARABONBA_PTR_SET_RVALUE(sd_, sd) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline LifecycleResourceTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline LifecycleResourceTable& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<Models::LifecycleResourceTableSd> sd_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
