// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGINPUT_HPP_
#define ALIBABACLOUD_MODELS_CATALOGINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogInput& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JdbcEnabled, jdbcEnabled_);
      DARABONBA_PTR_TO_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(StorageAccessConfig, storageAccessConfig_);
      DARABONBA_PTR_TO_JSON(ThriftEnabled, thriftEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogInput& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JdbcEnabled, jdbcEnabled_);
      DARABONBA_PTR_FROM_JSON(LocationUri, locationUri_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(StorageAccessConfig, storageAccessConfig_);
      DARABONBA_PTR_FROM_JSON(ThriftEnabled, thriftEnabled_);
    };
    CatalogInput() = default ;
    CatalogInput(const CatalogInput &) = default ;
    CatalogInput(CatalogInput &&) = default ;
    CatalogInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogInput() = default ;
    CatalogInput& operator=(const CatalogInput &) = default ;
    CatalogInput& operator=(CatalogInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->catalogType_ == nullptr && return this->description_ == nullptr && return this->jdbcEnabled_ == nullptr && return this->locationUri_ == nullptr && return this->owner_ == nullptr
        && return this->storageAccessConfig_ == nullptr && return this->thriftEnabled_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CatalogInput& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string catalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline CatalogInput& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CatalogInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jdbcEnabled Field Functions 
    bool hasJdbcEnabled() const { return this->jdbcEnabled_ != nullptr;};
    void deleteJdbcEnabled() { this->jdbcEnabled_ = nullptr;};
    inline bool jdbcEnabled() const { DARABONBA_PTR_GET_DEFAULT(jdbcEnabled_, false) };
    inline CatalogInput& setJdbcEnabled(bool jdbcEnabled) { DARABONBA_PTR_SET_VALUE(jdbcEnabled_, jdbcEnabled) };


    // locationUri Field Functions 
    bool hasLocationUri() const { return this->locationUri_ != nullptr;};
    void deleteLocationUri() { this->locationUri_ = nullptr;};
    inline string locationUri() const { DARABONBA_PTR_GET_DEFAULT(locationUri_, "") };
    inline CatalogInput& setLocationUri(string locationUri) { DARABONBA_PTR_SET_VALUE(locationUri_, locationUri) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CatalogInput& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // storageAccessConfig Field Functions 
    bool hasStorageAccessConfig() const { return this->storageAccessConfig_ != nullptr;};
    void deleteStorageAccessConfig() { this->storageAccessConfig_ = nullptr;};
    inline string storageAccessConfig() const { DARABONBA_PTR_GET_DEFAULT(storageAccessConfig_, "") };
    inline CatalogInput& setStorageAccessConfig(string storageAccessConfig) { DARABONBA_PTR_SET_VALUE(storageAccessConfig_, storageAccessConfig) };


    // thriftEnabled Field Functions 
    bool hasThriftEnabled() const { return this->thriftEnabled_ != nullptr;};
    void deleteThriftEnabled() { this->thriftEnabled_ = nullptr;};
    inline bool thriftEnabled() const { DARABONBA_PTR_GET_DEFAULT(thriftEnabled_, false) };
    inline CatalogInput& setThriftEnabled(bool thriftEnabled) { DARABONBA_PTR_SET_VALUE(thriftEnabled_, thriftEnabled) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<string> catalogType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> jdbcEnabled_ = nullptr;
    std::shared_ptr<string> locationUri_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> storageAccessConfig_ = nullptr;
    std::shared_ptr<bool> thriftEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
