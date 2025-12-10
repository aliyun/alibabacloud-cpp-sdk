// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEINPUT_HPP_
#define ALIBABACLOUD_MODELS_TABLEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/FieldSchema.hpp>
#include <alibabacloud/models/PrincipalPrivilegeSet.hpp>
#include <alibabacloud/models/StorageDescriptor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableInput& obj) { 
      DARABONBA_PTR_TO_JSON(Cascade, cascade_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(Privileges, privileges_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(RewriteEnabled, rewriteEnabled_);
      DARABONBA_PTR_TO_JSON(Sd, sd_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(Temporary, temporary_);
      DARABONBA_PTR_TO_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_TO_JSON(ViewOriginalText, viewOriginalText_);
    };
    friend void from_json(const Darabonba::Json& j, TableInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Cascade, cascade_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(RewriteEnabled, rewriteEnabled_);
      DARABONBA_PTR_FROM_JSON(Sd, sd_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(Temporary, temporary_);
      DARABONBA_PTR_FROM_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_FROM_JSON(ViewOriginalText, viewOriginalText_);
    };
    TableInput() = default ;
    TableInput(const TableInput &) = default ;
    TableInput(TableInput &&) = default ;
    TableInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableInput() = default ;
    TableInput& operator=(const TableInput &) = default ;
    TableInput& operator=(TableInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cascade_ == nullptr
        && return this->createTime_ == nullptr && return this->createdBy_ == nullptr && return this->databaseName_ == nullptr && return this->lastAccessTime_ == nullptr && return this->lastAnalyzedTime_ == nullptr
        && return this->owner_ == nullptr && return this->ownerType_ == nullptr && return this->parameters_ == nullptr && return this->partitionKeys_ == nullptr && return this->privileges_ == nullptr
        && return this->retention_ == nullptr && return this->rewriteEnabled_ == nullptr && return this->sd_ == nullptr && return this->tableName_ == nullptr && return this->tableType_ == nullptr
        && return this->temporary_ == nullptr && return this->viewExpandedText_ == nullptr && return this->viewOriginalText_ == nullptr; };
    // cascade Field Functions 
    bool hasCascade() const { return this->cascade_ != nullptr;};
    void deleteCascade() { this->cascade_ = nullptr;};
    inline bool cascade() const { DARABONBA_PTR_GET_DEFAULT(cascade_, false) };
    inline TableInput& setCascade(bool cascade) { DARABONBA_PTR_SET_VALUE(cascade_, cascade) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline TableInput& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline TableInput& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline TableInput& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int32_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0) };
    inline TableInput& setLastAccessTime(int32_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastAnalyzedTime Field Functions 
    bool hasLastAnalyzedTime() const { return this->lastAnalyzedTime_ != nullptr;};
    void deleteLastAnalyzedTime() { this->lastAnalyzedTime_ = nullptr;};
    inline int32_t lastAnalyzedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAnalyzedTime_, 0) };
    inline TableInput& setLastAnalyzedTime(int32_t lastAnalyzedTime) { DARABONBA_PTR_SET_VALUE(lastAnalyzedTime_, lastAnalyzedTime) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TableInput& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline TableInput& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline TableInput& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline TableInput& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline const vector<FieldSchema> & partitionKeys() const { DARABONBA_PTR_GET_CONST(partitionKeys_, vector<FieldSchema>) };
    inline vector<FieldSchema> partitionKeys() { DARABONBA_PTR_GET(partitionKeys_, vector<FieldSchema>) };
    inline TableInput& setPartitionKeys(const vector<FieldSchema> & partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };
    inline TableInput& setPartitionKeys(vector<FieldSchema> && partitionKeys) { DARABONBA_PTR_SET_RVALUE(partitionKeys_, partitionKeys) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const PrincipalPrivilegeSet & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, PrincipalPrivilegeSet) };
    inline PrincipalPrivilegeSet privileges() { DARABONBA_PTR_GET(privileges_, PrincipalPrivilegeSet) };
    inline TableInput& setPrivileges(const PrincipalPrivilegeSet & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline TableInput& setPrivileges(PrincipalPrivilegeSet && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline TableInput& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rewriteEnabled Field Functions 
    bool hasRewriteEnabled() const { return this->rewriteEnabled_ != nullptr;};
    void deleteRewriteEnabled() { this->rewriteEnabled_ = nullptr;};
    inline bool rewriteEnabled() const { DARABONBA_PTR_GET_DEFAULT(rewriteEnabled_, false) };
    inline TableInput& setRewriteEnabled(bool rewriteEnabled) { DARABONBA_PTR_SET_VALUE(rewriteEnabled_, rewriteEnabled) };


    // sd Field Functions 
    bool hasSd() const { return this->sd_ != nullptr;};
    void deleteSd() { this->sd_ = nullptr;};
    inline const StorageDescriptor & sd() const { DARABONBA_PTR_GET_CONST(sd_, StorageDescriptor) };
    inline StorageDescriptor sd() { DARABONBA_PTR_GET(sd_, StorageDescriptor) };
    inline TableInput& setSd(const StorageDescriptor & sd) { DARABONBA_PTR_SET_VALUE(sd_, sd) };
    inline TableInput& setSd(StorageDescriptor && sd) { DARABONBA_PTR_SET_RVALUE(sd_, sd) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableInput& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline TableInput& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // temporary Field Functions 
    bool hasTemporary() const { return this->temporary_ != nullptr;};
    void deleteTemporary() { this->temporary_ = nullptr;};
    inline bool temporary() const { DARABONBA_PTR_GET_DEFAULT(temporary_, false) };
    inline TableInput& setTemporary(bool temporary) { DARABONBA_PTR_SET_VALUE(temporary_, temporary) };


    // viewExpandedText Field Functions 
    bool hasViewExpandedText() const { return this->viewExpandedText_ != nullptr;};
    void deleteViewExpandedText() { this->viewExpandedText_ = nullptr;};
    inline string viewExpandedText() const { DARABONBA_PTR_GET_DEFAULT(viewExpandedText_, "") };
    inline TableInput& setViewExpandedText(string viewExpandedText) { DARABONBA_PTR_SET_VALUE(viewExpandedText_, viewExpandedText) };


    // viewOriginalText Field Functions 
    bool hasViewOriginalText() const { return this->viewOriginalText_ != nullptr;};
    void deleteViewOriginalText() { this->viewOriginalText_ = nullptr;};
    inline string viewOriginalText() const { DARABONBA_PTR_GET_DEFAULT(viewOriginalText_, "") };
    inline TableInput& setViewOriginalText(string viewOriginalText) { DARABONBA_PTR_SET_VALUE(viewOriginalText_, viewOriginalText) };


  protected:
    std::shared_ptr<bool> cascade_ = nullptr;
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<int32_t> lastAccessTime_ = nullptr;
    std::shared_ptr<int32_t> lastAnalyzedTime_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerType_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<vector<FieldSchema>> partitionKeys_ = nullptr;
    std::shared_ptr<PrincipalPrivilegeSet> privileges_ = nullptr;
    std::shared_ptr<int32_t> retention_ = nullptr;
    std::shared_ptr<bool> rewriteEnabled_ = nullptr;
    std::shared_ptr<StorageDescriptor> sd_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<bool> temporary_ = nullptr;
    std::shared_ptr<string> viewExpandedText_ = nullptr;
    std::shared_ptr<string> viewOriginalText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
