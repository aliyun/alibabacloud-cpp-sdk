// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOG_HPP_
#define ALIBABACLOUD_MODELS_CATALOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Catalog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Catalog& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(DefaultCatalog, defaultCatalog_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JdbcEnabled, jdbcEnabled_);
      DARABONBA_PTR_TO_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageAccessConfig, storageAccessConfig_);
      DARABONBA_PTR_TO_JSON(ThriftEnabled, thriftEnabled_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Catalog& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(DefaultCatalog, defaultCatalog_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JdbcEnabled, jdbcEnabled_);
      DARABONBA_PTR_FROM_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageAccessConfig, storageAccessConfig_);
      DARABONBA_PTR_FROM_JSON(ThriftEnabled, thriftEnabled_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    Catalog() = default ;
    Catalog(const Catalog &) = default ;
    Catalog(Catalog &&) = default ;
    Catalog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Catalog() = default ;
    Catalog& operator=(const Catalog &) = default ;
    Catalog& operator=(Catalog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->catalogType_ == nullptr && return this->createTime_ == nullptr && return this->createdBy_ == nullptr && return this->defaultCatalog_ == nullptr && return this->description_ == nullptr
        && return this->jdbcEnabled_ == nullptr && return this->locationUri_ == nullptr && return this->owner_ == nullptr && return this->status_ == nullptr && return this->storageAccessConfig_ == nullptr
        && return this->thriftEnabled_ == nullptr && return this->updateTime_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline Catalog& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string catalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline Catalog& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Catalog& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline Catalog& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // defaultCatalog Field Functions 
    bool hasDefaultCatalog() const { return this->defaultCatalog_ != nullptr;};
    void deleteDefaultCatalog() { this->defaultCatalog_ = nullptr;};
    inline bool defaultCatalog() const { DARABONBA_PTR_GET_DEFAULT(defaultCatalog_, false) };
    inline Catalog& setDefaultCatalog(bool defaultCatalog) { DARABONBA_PTR_SET_VALUE(defaultCatalog_, defaultCatalog) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Catalog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jdbcEnabled Field Functions 
    bool hasJdbcEnabled() const { return this->jdbcEnabled_ != nullptr;};
    void deleteJdbcEnabled() { this->jdbcEnabled_ = nullptr;};
    inline bool jdbcEnabled() const { DARABONBA_PTR_GET_DEFAULT(jdbcEnabled_, false) };
    inline Catalog& setJdbcEnabled(bool jdbcEnabled) { DARABONBA_PTR_SET_VALUE(jdbcEnabled_, jdbcEnabled) };


    // locationUri Field Functions 
    bool hasLocationUri() const { return this->locationUri_ != nullptr;};
    void deleteLocationUri() { this->locationUri_ = nullptr;};
    inline string locationUri() const { DARABONBA_PTR_GET_DEFAULT(locationUri_, "") };
    inline Catalog& setLocationUri(string locationUri) { DARABONBA_PTR_SET_VALUE(locationUri_, locationUri) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline Catalog& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Catalog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageAccessConfig Field Functions 
    bool hasStorageAccessConfig() const { return this->storageAccessConfig_ != nullptr;};
    void deleteStorageAccessConfig() { this->storageAccessConfig_ = nullptr;};
    inline string storageAccessConfig() const { DARABONBA_PTR_GET_DEFAULT(storageAccessConfig_, "") };
    inline Catalog& setStorageAccessConfig(string storageAccessConfig) { DARABONBA_PTR_SET_VALUE(storageAccessConfig_, storageAccessConfig) };


    // thriftEnabled Field Functions 
    bool hasThriftEnabled() const { return this->thriftEnabled_ != nullptr;};
    void deleteThriftEnabled() { this->thriftEnabled_ = nullptr;};
    inline bool thriftEnabled() const { DARABONBA_PTR_GET_DEFAULT(thriftEnabled_, false) };
    inline Catalog& setThriftEnabled(bool thriftEnabled) { DARABONBA_PTR_SET_VALUE(thriftEnabled_, thriftEnabled) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline Catalog& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> catalogType_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<bool> defaultCatalog_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> jdbcEnabled_ = nullptr;
    std::shared_ptr<string> locationUri_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> storageAccessConfig_ = nullptr;
    std::shared_ptr<bool> thriftEnabled_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
