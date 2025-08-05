// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLE_HPP_
#define ALIBABACLOUD_MODELS_TABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Table : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Table& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isExternal, isExternal_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(schemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(storageAction, storageAction_);
      DARABONBA_PTR_TO_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_TO_JSON(storageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(updatedBy, updatedBy_);
    };
    friend void from_json(const Darabonba::Json& j, Table& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isExternal, isExternal_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(schemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(storageAction, storageAction_);
      DARABONBA_PTR_FROM_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_FROM_JSON(storageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(updatedBy, updatedBy_);
    };
    Table() = default ;
    Table(const Table &) = default ;
    Table(Table &&) = default ;
    Table(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Table() = default ;
    Table& operator=(const Table &) = default ;
    Table& operator=(Table &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdAt_ != nullptr
        && this->createdBy_ != nullptr && this->id_ != nullptr && this->isExternal_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr
        && this->path_ != nullptr && this->schema_ != nullptr && this->schemaId_ != nullptr && this->storageAction_ != nullptr && this->storageActionTimestamp_ != nullptr
        && this->storageClass_ != nullptr && this->updatedAt_ != nullptr && this->updatedBy_ != nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Table& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Table& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Table& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isExternal Field Functions 
    bool hasIsExternal() const { return this->isExternal_ != nullptr;};
    void deleteIsExternal() { this->isExternal_ = nullptr;};
    inline bool isExternal() const { DARABONBA_PTR_GET_DEFAULT(isExternal_, false) };
    inline Table& setIsExternal(bool isExternal) { DARABONBA_PTR_SET_VALUE(isExternal_, isExternal) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Table& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline Table& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline Table& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema schema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline Table& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline Table& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline Table& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // storageAction Field Functions 
    bool hasStorageAction() const { return this->storageAction_ != nullptr;};
    void deleteStorageAction() { this->storageAction_ = nullptr;};
    inline string storageAction() const { DARABONBA_PTR_GET_DEFAULT(storageAction_, "") };
    inline Table& setStorageAction(string storageAction) { DARABONBA_PTR_SET_VALUE(storageAction_, storageAction) };


    // storageActionTimestamp Field Functions 
    bool hasStorageActionTimestamp() const { return this->storageActionTimestamp_ != nullptr;};
    void deleteStorageActionTimestamp() { this->storageActionTimestamp_ = nullptr;};
    inline int64_t storageActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storageActionTimestamp_, 0L) };
    inline Table& setStorageActionTimestamp(int64_t storageActionTimestamp) { DARABONBA_PTR_SET_VALUE(storageActionTimestamp_, storageActionTimestamp) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline Table& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline Table& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline Table& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isExternal_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<Schema> schema_ = nullptr;
    std::shared_ptr<int64_t> schemaId_ = nullptr;
    std::shared_ptr<string> storageAction_ = nullptr;
    std::shared_ptr<int64_t> storageActionTimestamp_ = nullptr;
    std::shared_ptr<string> storageClass_ = nullptr;
    std::shared_ptr<int64_t> updatedAt_ = nullptr;
    std::shared_ptr<string> updatedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
