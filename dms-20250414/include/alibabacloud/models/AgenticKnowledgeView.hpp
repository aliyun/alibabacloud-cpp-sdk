// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICKNOWLEDGEVIEW_HPP_
#define ALIBABACLOUD_MODELS_AGENTICKNOWLEDGEVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticKnowledgeView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticKnowledgeView& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(LockedBy, lockedBy_);
      DARABONBA_PTR_TO_JSON(LockedTime, lockedTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UnitCatalogUuid, unitCatalogUuid_);
      DARABONBA_PTR_TO_JSON(UnitDatabaseUuid, unitDatabaseUuid_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticKnowledgeView& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(LockedBy, lockedBy_);
      DARABONBA_PTR_FROM_JSON(LockedTime, lockedTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UnitCatalogUuid, unitCatalogUuid_);
      DARABONBA_PTR_FROM_JSON(UnitDatabaseUuid, unitDatabaseUuid_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    AgenticKnowledgeView() = default ;
    AgenticKnowledgeView(const AgenticKnowledgeView &) = default ;
    AgenticKnowledgeView(AgenticKnowledgeView &&) = default ;
    AgenticKnowledgeView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticKnowledgeView() = default ;
    AgenticKnowledgeView& operator=(const AgenticKnowledgeView &) = default ;
    AgenticKnowledgeView& operator=(AgenticKnowledgeView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->columnName_ == nullptr && this->createTime_ == nullptr && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->entityType_ == nullptr
        && this->extra_ == nullptr && this->knowledgeUuid_ == nullptr && this->level_ == nullptr && this->locked_ == nullptr && this->lockedBy_ == nullptr
        && this->lockedTime_ == nullptr && this->modifyTime_ == nullptr && this->qualifiedName_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr
        && this->title_ == nullptr && this->unitCatalogUuid_ == nullptr && this->unitDatabaseUuid_ == nullptr && this->version_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticKnowledgeView& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline AgenticKnowledgeView& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline AgenticKnowledgeView& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline AgenticKnowledgeView& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgenticKnowledgeView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline AgenticKnowledgeView& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
    inline AgenticKnowledgeView& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline AgenticKnowledgeView& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline AgenticKnowledgeView& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AgenticKnowledgeView& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline bool getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
    inline AgenticKnowledgeView& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // lockedBy Field Functions 
    bool hasLockedBy() const { return this->lockedBy_ != nullptr;};
    void deleteLockedBy() { this->lockedBy_ = nullptr;};
    inline string getLockedBy() const { DARABONBA_PTR_GET_DEFAULT(lockedBy_, "") };
    inline AgenticKnowledgeView& setLockedBy(string lockedBy) { DARABONBA_PTR_SET_VALUE(lockedBy_, lockedBy) };


    // lockedTime Field Functions 
    bool hasLockedTime() const { return this->lockedTime_ != nullptr;};
    void deleteLockedTime() { this->lockedTime_ = nullptr;};
    inline int64_t getLockedTime() const { DARABONBA_PTR_GET_DEFAULT(lockedTime_, 0L) };
    inline AgenticKnowledgeView& setLockedTime(int64_t lockedTime) { DARABONBA_PTR_SET_VALUE(lockedTime_, lockedTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline AgenticKnowledgeView& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline AgenticKnowledgeView& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AgenticKnowledgeView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline AgenticKnowledgeView& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AgenticKnowledgeView& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // unitCatalogUuid Field Functions 
    bool hasUnitCatalogUuid() const { return this->unitCatalogUuid_ != nullptr;};
    void deleteUnitCatalogUuid() { this->unitCatalogUuid_ = nullptr;};
    inline string getUnitCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(unitCatalogUuid_, "") };
    inline AgenticKnowledgeView& setUnitCatalogUuid(string unitCatalogUuid) { DARABONBA_PTR_SET_VALUE(unitCatalogUuid_, unitCatalogUuid) };


    // unitDatabaseUuid Field Functions 
    bool hasUnitDatabaseUuid() const { return this->unitDatabaseUuid_ != nullptr;};
    void deleteUnitDatabaseUuid() { this->unitDatabaseUuid_ = nullptr;};
    inline string getUnitDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(unitDatabaseUuid_, "") };
    inline AgenticKnowledgeView& setUnitDatabaseUuid(string unitDatabaseUuid) { DARABONBA_PTR_SET_VALUE(unitDatabaseUuid_, unitDatabaseUuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline AgenticKnowledgeView& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> catalogUuid_ {};
    shared_ptr<string> columnName_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> databaseUuid_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> entityType_ {};
    Darabonba::Json extra_ {};
    shared_ptr<string> knowledgeUuid_ {};
    shared_ptr<string> level_ {};
    shared_ptr<bool> locked_ {};
    shared_ptr<string> lockedBy_ {};
    shared_ptr<int64_t> lockedTime_ {};
    shared_ptr<int64_t> modifyTime_ {};
    shared_ptr<string> qualifiedName_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> unitCatalogUuid_ {};
    shared_ptr<string> unitDatabaseUuid_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
