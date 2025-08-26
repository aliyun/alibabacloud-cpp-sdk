// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLTABLEBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_DLTABLEBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DLTablebaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLTablebaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_TO_JSON(ViewOriginalText, viewOriginalText_);
    };
    friend void from_json(const Darabonba::Json& j, DLTablebaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PartitionKeys, partitionKeys_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(ViewExpandedText, viewExpandedText_);
      DARABONBA_PTR_FROM_JSON(ViewOriginalText, viewOriginalText_);
    };
    DLTablebaseInfo() = default ;
    DLTablebaseInfo(const DLTablebaseInfo &) = default ;
    DLTablebaseInfo(DLTablebaseInfo &&) = default ;
    DLTablebaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLTablebaseInfo() = default ;
    DLTablebaseInfo& operator=(const DLTablebaseInfo &) = default ;
    DLTablebaseInfo& operator=(DLTablebaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->createTime_ != nullptr && this->creatorId_ != nullptr && this->dbId_ != nullptr && this->dbName_ != nullptr && this->description_ != nullptr
        && this->lastAccessTime_ != nullptr && this->location_ != nullptr && this->modifierId_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->ownerType_ != nullptr && this->parameters_ != nullptr && this->partitionKeys_ != nullptr && this->retention_ != nullptr && this->tableType_ != nullptr
        && this->viewExpandedText_ != nullptr && this->viewOriginalText_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline DLTablebaseInfo& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int32_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0) };
    inline DLTablebaseInfo& setCreateTime(int32_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline DLTablebaseInfo& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline DLTablebaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DLTablebaseInfo& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DLTablebaseInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int32_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0) };
    inline DLTablebaseInfo& setLastAccessTime(int32_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DLTablebaseInfo& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // modifierId Field Functions 
    bool hasModifierId() const { return this->modifierId_ != nullptr;};
    void deleteModifierId() { this->modifierId_ = nullptr;};
    inline int64_t modifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, 0L) };
    inline DLTablebaseInfo& setModifierId(int64_t modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DLTablebaseInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DLTablebaseInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string ownerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline DLTablebaseInfo& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline DLTablebaseInfo& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DLTablebaseInfo& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // partitionKeys Field Functions 
    bool hasPartitionKeys() const { return this->partitionKeys_ != nullptr;};
    void deletePartitionKeys() { this->partitionKeys_ = nullptr;};
    inline const vector<DLColumn> & partitionKeys() const { DARABONBA_PTR_GET_CONST(partitionKeys_, vector<DLColumn>) };
    inline vector<DLColumn> partitionKeys() { DARABONBA_PTR_GET(partitionKeys_, vector<DLColumn>) };
    inline DLTablebaseInfo& setPartitionKeys(const vector<DLColumn> & partitionKeys) { DARABONBA_PTR_SET_VALUE(partitionKeys_, partitionKeys) };
    inline DLTablebaseInfo& setPartitionKeys(vector<DLColumn> && partitionKeys) { DARABONBA_PTR_SET_RVALUE(partitionKeys_, partitionKeys) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline DLTablebaseInfo& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline DLTablebaseInfo& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // viewExpandedText Field Functions 
    bool hasViewExpandedText() const { return this->viewExpandedText_ != nullptr;};
    void deleteViewExpandedText() { this->viewExpandedText_ = nullptr;};
    inline string viewExpandedText() const { DARABONBA_PTR_GET_DEFAULT(viewExpandedText_, "") };
    inline DLTablebaseInfo& setViewExpandedText(string viewExpandedText) { DARABONBA_PTR_SET_VALUE(viewExpandedText_, viewExpandedText) };


    // viewOriginalText Field Functions 
    bool hasViewOriginalText() const { return this->viewOriginalText_ != nullptr;};
    void deleteViewOriginalText() { this->viewOriginalText_ = nullptr;};
    inline string viewOriginalText() const { DARABONBA_PTR_GET_DEFAULT(viewOriginalText_, "") };
    inline DLTablebaseInfo& setViewOriginalText(string viewOriginalText) { DARABONBA_PTR_SET_VALUE(viewOriginalText_, viewOriginalText) };


  protected:
    std::shared_ptr<string> catalogName_ = nullptr;
    std::shared_ptr<int32_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> lastAccessTime_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> modifierId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerType_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
    std::shared_ptr<vector<DLColumn>> partitionKeys_ = nullptr;
    std::shared_ptr<int32_t> retention_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<string> viewExpandedText_ = nullptr;
    std::shared_ptr<string> viewOriginalText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
