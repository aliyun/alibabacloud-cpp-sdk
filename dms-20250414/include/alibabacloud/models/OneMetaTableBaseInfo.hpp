// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETATABLEBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_ONEMETATABLEBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OneMetaTableEngineMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaTableBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaTableBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(TableUuid, tableUuid_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaTableBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(TableUuid, tableUuid_);
    };
    OneMetaTableBaseInfo() = default ;
    OneMetaTableBaseInfo(const OneMetaTableBaseInfo &) = default ;
    OneMetaTableBaseInfo(OneMetaTableBaseInfo &&) = default ;
    OneMetaTableBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaTableBaseInfo() = default ;
    OneMetaTableBaseInfo& operator=(const OneMetaTableBaseInfo &) = default ;
    OneMetaTableBaseInfo& operator=(OneMetaTableBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogType_ == nullptr
        && this->databaseUuid_ == nullptr && this->description_ == nullptr && this->engineMeta_ == nullptr && this->name_ == nullptr && this->qualifiedName_ == nullptr
        && this->tableType_ == nullptr && this->tableUuid_ == nullptr; };
    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline OneMetaTableBaseInfo& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline OneMetaTableBaseInfo& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OneMetaTableBaseInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineMeta Field Functions 
    bool hasEngineMeta() const { return this->engineMeta_ != nullptr;};
    void deleteEngineMeta() { this->engineMeta_ = nullptr;};
    inline const OneMetaTableEngineMeta & getEngineMeta() const { DARABONBA_PTR_GET_CONST(engineMeta_, OneMetaTableEngineMeta) };
    inline OneMetaTableEngineMeta getEngineMeta() { DARABONBA_PTR_GET(engineMeta_, OneMetaTableEngineMeta) };
    inline OneMetaTableBaseInfo& setEngineMeta(const OneMetaTableEngineMeta & engineMeta) { DARABONBA_PTR_SET_VALUE(engineMeta_, engineMeta) };
    inline OneMetaTableBaseInfo& setEngineMeta(OneMetaTableEngineMeta && engineMeta) { DARABONBA_PTR_SET_RVALUE(engineMeta_, engineMeta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OneMetaTableBaseInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline OneMetaTableBaseInfo& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline OneMetaTableBaseInfo& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // tableUuid Field Functions 
    bool hasTableUuid() const { return this->tableUuid_ != nullptr;};
    void deleteTableUuid() { this->tableUuid_ = nullptr;};
    inline string getTableUuid() const { DARABONBA_PTR_GET_DEFAULT(tableUuid_, "") };
    inline OneMetaTableBaseInfo& setTableUuid(string tableUuid) { DARABONBA_PTR_SET_VALUE(tableUuid_, tableUuid) };


  protected:
    shared_ptr<string> catalogType_ {};
    shared_ptr<string> databaseUuid_ {};
    shared_ptr<string> description_ {};
    shared_ptr<OneMetaTableEngineMeta> engineMeta_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> qualifiedName_ {};
    shared_ptr<string> tableType_ {};
    shared_ptr<string> tableUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
