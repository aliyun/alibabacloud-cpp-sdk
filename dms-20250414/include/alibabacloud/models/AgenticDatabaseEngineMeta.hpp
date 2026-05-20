// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICDATABASEENGINEMETA_HPP_
#define ALIBABACLOUD_MODELS_AGENTICDATABASEENGINEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticDatabaseEngineMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticDatabaseEngineMeta& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(StorageCapacity, storageCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticDatabaseEngineMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(StorageCapacity, storageCapacity_);
    };
    AgenticDatabaseEngineMeta() = default ;
    AgenticDatabaseEngineMeta(const AgenticDatabaseEngineMeta &) = default ;
    AgenticDatabaseEngineMeta(AgenticDatabaseEngineMeta &&) = default ;
    AgenticDatabaseEngineMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticDatabaseEngineMeta() = default ;
    AgenticDatabaseEngineMeta& operator=(const AgenticDatabaseEngineMeta &) = default ;
    AgenticDatabaseEngineMeta& operator=(AgenticDatabaseEngineMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->encoding_ == nullptr && this->schemaName_ == nullptr && this->storageCapacity_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline AgenticDatabaseEngineMeta& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline AgenticDatabaseEngineMeta& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline AgenticDatabaseEngineMeta& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // storageCapacity Field Functions 
    bool hasStorageCapacity() const { return this->storageCapacity_ != nullptr;};
    void deleteStorageCapacity() { this->storageCapacity_ = nullptr;};
    inline int64_t getStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(storageCapacity_, 0L) };
    inline AgenticDatabaseEngineMeta& setStorageCapacity(int64_t storageCapacity) { DARABONBA_PTR_SET_VALUE(storageCapacity_, storageCapacity) };


  protected:
    shared_ptr<string> catalogName_ {};
    shared_ptr<string> encoding_ {};
    shared_ptr<string> schemaName_ {};
    shared_ptr<int64_t> storageCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
