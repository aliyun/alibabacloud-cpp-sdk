// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METARESOURCE_HPP_
#define ALIBABACLOUD_MODELS_METARESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CatalogResource.hpp>
#include <alibabacloud/models/ColumnResource.hpp>
#include <alibabacloud/models/DatabaseResource.hpp>
#include <alibabacloud/models/FunctionResource.hpp>
#include <alibabacloud/models/TableResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class MetaResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaResource& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogResource, catalogResource_);
      DARABONBA_PTR_TO_JSON(ColumnResource, columnResource_);
      DARABONBA_PTR_TO_JSON(DatabaseResource, databaseResource_);
      DARABONBA_PTR_TO_JSON(FunctionResource, functionResource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TableResource, tableResource_);
    };
    friend void from_json(const Darabonba::Json& j, MetaResource& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogResource, catalogResource_);
      DARABONBA_PTR_FROM_JSON(ColumnResource, columnResource_);
      DARABONBA_PTR_FROM_JSON(DatabaseResource, databaseResource_);
      DARABONBA_PTR_FROM_JSON(FunctionResource, functionResource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TableResource, tableResource_);
    };
    MetaResource() = default ;
    MetaResource(const MetaResource &) = default ;
    MetaResource(MetaResource &&) = default ;
    MetaResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaResource() = default ;
    MetaResource& operator=(const MetaResource &) = default ;
    MetaResource& operator=(MetaResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogResource_ == nullptr
        && return this->columnResource_ == nullptr && return this->databaseResource_ == nullptr && return this->functionResource_ == nullptr && return this->resourceType_ == nullptr && return this->tableResource_ == nullptr; };
    // catalogResource Field Functions 
    bool hasCatalogResource() const { return this->catalogResource_ != nullptr;};
    void deleteCatalogResource() { this->catalogResource_ = nullptr;};
    inline const CatalogResource & catalogResource() const { DARABONBA_PTR_GET_CONST(catalogResource_, CatalogResource) };
    inline CatalogResource catalogResource() { DARABONBA_PTR_GET(catalogResource_, CatalogResource) };
    inline MetaResource& setCatalogResource(const CatalogResource & catalogResource) { DARABONBA_PTR_SET_VALUE(catalogResource_, catalogResource) };
    inline MetaResource& setCatalogResource(CatalogResource && catalogResource) { DARABONBA_PTR_SET_RVALUE(catalogResource_, catalogResource) };


    // columnResource Field Functions 
    bool hasColumnResource() const { return this->columnResource_ != nullptr;};
    void deleteColumnResource() { this->columnResource_ = nullptr;};
    inline const ColumnResource & columnResource() const { DARABONBA_PTR_GET_CONST(columnResource_, ColumnResource) };
    inline ColumnResource columnResource() { DARABONBA_PTR_GET(columnResource_, ColumnResource) };
    inline MetaResource& setColumnResource(const ColumnResource & columnResource) { DARABONBA_PTR_SET_VALUE(columnResource_, columnResource) };
    inline MetaResource& setColumnResource(ColumnResource && columnResource) { DARABONBA_PTR_SET_RVALUE(columnResource_, columnResource) };


    // databaseResource Field Functions 
    bool hasDatabaseResource() const { return this->databaseResource_ != nullptr;};
    void deleteDatabaseResource() { this->databaseResource_ = nullptr;};
    inline const DatabaseResource & databaseResource() const { DARABONBA_PTR_GET_CONST(databaseResource_, DatabaseResource) };
    inline DatabaseResource databaseResource() { DARABONBA_PTR_GET(databaseResource_, DatabaseResource) };
    inline MetaResource& setDatabaseResource(const DatabaseResource & databaseResource) { DARABONBA_PTR_SET_VALUE(databaseResource_, databaseResource) };
    inline MetaResource& setDatabaseResource(DatabaseResource && databaseResource) { DARABONBA_PTR_SET_RVALUE(databaseResource_, databaseResource) };


    // functionResource Field Functions 
    bool hasFunctionResource() const { return this->functionResource_ != nullptr;};
    void deleteFunctionResource() { this->functionResource_ = nullptr;};
    inline const FunctionResource & functionResource() const { DARABONBA_PTR_GET_CONST(functionResource_, FunctionResource) };
    inline FunctionResource functionResource() { DARABONBA_PTR_GET(functionResource_, FunctionResource) };
    inline MetaResource& setFunctionResource(const FunctionResource & functionResource) { DARABONBA_PTR_SET_VALUE(functionResource_, functionResource) };
    inline MetaResource& setFunctionResource(FunctionResource && functionResource) { DARABONBA_PTR_SET_RVALUE(functionResource_, functionResource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline MetaResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tableResource Field Functions 
    bool hasTableResource() const { return this->tableResource_ != nullptr;};
    void deleteTableResource() { this->tableResource_ = nullptr;};
    inline const TableResource & tableResource() const { DARABONBA_PTR_GET_CONST(tableResource_, TableResource) };
    inline TableResource tableResource() { DARABONBA_PTR_GET(tableResource_, TableResource) };
    inline MetaResource& setTableResource(const TableResource & tableResource) { DARABONBA_PTR_SET_VALUE(tableResource_, tableResource) };
    inline MetaResource& setTableResource(TableResource && tableResource) { DARABONBA_PTR_SET_RVALUE(tableResource_, tableResource) };


  protected:
    std::shared_ptr<CatalogResource> catalogResource_ = nullptr;
    std::shared_ptr<ColumnResource> columnResource_ = nullptr;
    std::shared_ptr<DatabaseResource> databaseResource_ = nullptr;
    std::shared_ptr<FunctionResource> functionResource_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<TableResource> tableResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
