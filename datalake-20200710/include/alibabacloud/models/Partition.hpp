// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITION_HPP_
#define ALIBABACLOUD_MODELS_PARTITION_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/PrincipalPrivilegeSet.hpp>
#include <alibabacloud/models/StorageDescriptor.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Partition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Partition& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
      DARABONBA_PTR_TO_JSON(Sd, sd_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, Partition& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
      DARABONBA_PTR_FROM_JSON(Sd, sd_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    Partition() = default ;
    Partition(const Partition &) = default ;
    Partition(Partition &&) = default ;
    Partition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Partition() = default ;
    Partition& operator=(const Partition &) = default ;
    Partition& operator=(Partition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->databaseName_ == nullptr && return this->lastAccessTime_ == nullptr && return this->lastAnalyzedTime_ == nullptr && return this->parameters_ == nullptr && return this->privileges_ == nullptr
        && return this->sd_ == nullptr && return this->tableName_ == nullptr && return this->values_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline Partition& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline Partition& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int32_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0) };
    inline Partition& setLastAccessTime(int32_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastAnalyzedTime Field Functions 
    bool hasLastAnalyzedTime() const { return this->lastAnalyzedTime_ != nullptr;};
    void deleteLastAnalyzedTime() { this->lastAnalyzedTime_ = nullptr;};
    inline int32_t lastAnalyzedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAnalyzedTime_, 0) };
    inline Partition& setLastAnalyzedTime(int32_t lastAnalyzedTime) { DARABONBA_PTR_SET_VALUE(lastAnalyzedTime_, lastAnalyzedTime) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline Partition& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline Partition& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const PrincipalPrivilegeSet & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, PrincipalPrivilegeSet) };
    inline PrincipalPrivilegeSet privileges() { DARABONBA_PTR_GET(privileges_, PrincipalPrivilegeSet) };
    inline Partition& setPrivileges(const PrincipalPrivilegeSet & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline Partition& setPrivileges(PrincipalPrivilegeSet && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    // sd Field Functions 
    bool hasSd() const { return this->sd_ != nullptr;};
    void deleteSd() { this->sd_ = nullptr;};
    inline const StorageDescriptor & sd() const { DARABONBA_PTR_GET_CONST(sd_, StorageDescriptor) };
    inline StorageDescriptor sd() { DARABONBA_PTR_GET(sd_, StorageDescriptor) };
    inline Partition& setSd(const StorageDescriptor & sd) { DARABONBA_PTR_SET_VALUE(sd_, sd) };
    inline Partition& setSd(StorageDescriptor && sd) { DARABONBA_PTR_SET_RVALUE(sd_, sd) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline Partition& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline Partition& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline Partition& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<int32_t> lastAccessTime_ = nullptr;
    std::shared_ptr<int32_t> lastAnalyzedTime_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<PrincipalPrivilegeSet> privileges_ = nullptr;
    std::shared_ptr<StorageDescriptor> sd_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
