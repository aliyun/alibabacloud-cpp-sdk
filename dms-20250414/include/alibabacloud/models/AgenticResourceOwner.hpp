// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICRESOURCEOWNER_HPP_
#define ALIBABACLOUD_MODELS_AGENTICRESOURCEOWNER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticResourceOwner : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticResourceOwner& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogAlias, catalogAlias_);
      DARABONBA_PTR_TO_JSON(CatalogDataSourceType, catalogDataSourceType_);
      DARABONBA_PTR_TO_JSON(CatalogEnvType, catalogEnvType_);
      DARABONBA_PTR_TO_JSON(CatalogHost, catalogHost_);
      DARABONBA_PTR_TO_JSON(CatalogPort, catalogPort_);
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseQualifiedName, databaseQualifiedName_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(GrantBy, grantBy_);
      DARABONBA_PTR_TO_JSON(GrantFrom, grantFrom_);
      DARABONBA_PTR_TO_JSON(OwnerPrincipalId, ownerPrincipalId_);
      DARABONBA_PTR_TO_JSON(OwnerPrincipalType, ownerPrincipalType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticResourceOwner& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogAlias, catalogAlias_);
      DARABONBA_PTR_FROM_JSON(CatalogDataSourceType, catalogDataSourceType_);
      DARABONBA_PTR_FROM_JSON(CatalogEnvType, catalogEnvType_);
      DARABONBA_PTR_FROM_JSON(CatalogHost, catalogHost_);
      DARABONBA_PTR_FROM_JSON(CatalogPort, catalogPort_);
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseQualifiedName, databaseQualifiedName_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(GrantBy, grantBy_);
      DARABONBA_PTR_FROM_JSON(GrantFrom, grantFrom_);
      DARABONBA_PTR_FROM_JSON(OwnerPrincipalId, ownerPrincipalId_);
      DARABONBA_PTR_FROM_JSON(OwnerPrincipalType, ownerPrincipalType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    AgenticResourceOwner() = default ;
    AgenticResourceOwner(const AgenticResourceOwner &) = default ;
    AgenticResourceOwner(AgenticResourceOwner &&) = default ;
    AgenticResourceOwner(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticResourceOwner() = default ;
    AgenticResourceOwner& operator=(const AgenticResourceOwner &) = default ;
    AgenticResourceOwner& operator=(AgenticResourceOwner &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogAlias_ == nullptr
        && this->catalogDataSourceType_ == nullptr && this->catalogEnvType_ == nullptr && this->catalogHost_ == nullptr && this->catalogPort_ == nullptr && this->catalogUuid_ == nullptr
        && this->dataSourceUuid_ == nullptr && this->databaseQualifiedName_ == nullptr && this->databaseUuid_ == nullptr && this->grantBy_ == nullptr && this->grantFrom_ == nullptr
        && this->ownerPrincipalId_ == nullptr && this->ownerPrincipalType_ == nullptr && this->resourceType_ == nullptr; };
    // catalogAlias Field Functions 
    bool hasCatalogAlias() const { return this->catalogAlias_ != nullptr;};
    void deleteCatalogAlias() { this->catalogAlias_ = nullptr;};
    inline string getCatalogAlias() const { DARABONBA_PTR_GET_DEFAULT(catalogAlias_, "") };
    inline AgenticResourceOwner& setCatalogAlias(string catalogAlias) { DARABONBA_PTR_SET_VALUE(catalogAlias_, catalogAlias) };


    // catalogDataSourceType Field Functions 
    bool hasCatalogDataSourceType() const { return this->catalogDataSourceType_ != nullptr;};
    void deleteCatalogDataSourceType() { this->catalogDataSourceType_ = nullptr;};
    inline string getCatalogDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(catalogDataSourceType_, "") };
    inline AgenticResourceOwner& setCatalogDataSourceType(string catalogDataSourceType) { DARABONBA_PTR_SET_VALUE(catalogDataSourceType_, catalogDataSourceType) };


    // catalogEnvType Field Functions 
    bool hasCatalogEnvType() const { return this->catalogEnvType_ != nullptr;};
    void deleteCatalogEnvType() { this->catalogEnvType_ = nullptr;};
    inline string getCatalogEnvType() const { DARABONBA_PTR_GET_DEFAULT(catalogEnvType_, "") };
    inline AgenticResourceOwner& setCatalogEnvType(string catalogEnvType) { DARABONBA_PTR_SET_VALUE(catalogEnvType_, catalogEnvType) };


    // catalogHost Field Functions 
    bool hasCatalogHost() const { return this->catalogHost_ != nullptr;};
    void deleteCatalogHost() { this->catalogHost_ = nullptr;};
    inline string getCatalogHost() const { DARABONBA_PTR_GET_DEFAULT(catalogHost_, "") };
    inline AgenticResourceOwner& setCatalogHost(string catalogHost) { DARABONBA_PTR_SET_VALUE(catalogHost_, catalogHost) };


    // catalogPort Field Functions 
    bool hasCatalogPort() const { return this->catalogPort_ != nullptr;};
    void deleteCatalogPort() { this->catalogPort_ = nullptr;};
    inline string getCatalogPort() const { DARABONBA_PTR_GET_DEFAULT(catalogPort_, "") };
    inline AgenticResourceOwner& setCatalogPort(string catalogPort) { DARABONBA_PTR_SET_VALUE(catalogPort_, catalogPort) };


    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticResourceOwner& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // dataSourceUuid Field Functions 
    bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
    void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
    inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
    inline AgenticResourceOwner& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


    // databaseQualifiedName Field Functions 
    bool hasDatabaseQualifiedName() const { return this->databaseQualifiedName_ != nullptr;};
    void deleteDatabaseQualifiedName() { this->databaseQualifiedName_ = nullptr;};
    inline string getDatabaseQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(databaseQualifiedName_, "") };
    inline AgenticResourceOwner& setDatabaseQualifiedName(string databaseQualifiedName) { DARABONBA_PTR_SET_VALUE(databaseQualifiedName_, databaseQualifiedName) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline AgenticResourceOwner& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // grantBy Field Functions 
    bool hasGrantBy() const { return this->grantBy_ != nullptr;};
    void deleteGrantBy() { this->grantBy_ = nullptr;};
    inline string getGrantBy() const { DARABONBA_PTR_GET_DEFAULT(grantBy_, "") };
    inline AgenticResourceOwner& setGrantBy(string grantBy) { DARABONBA_PTR_SET_VALUE(grantBy_, grantBy) };


    // grantFrom Field Functions 
    bool hasGrantFrom() const { return this->grantFrom_ != nullptr;};
    void deleteGrantFrom() { this->grantFrom_ = nullptr;};
    inline string getGrantFrom() const { DARABONBA_PTR_GET_DEFAULT(grantFrom_, "") };
    inline AgenticResourceOwner& setGrantFrom(string grantFrom) { DARABONBA_PTR_SET_VALUE(grantFrom_, grantFrom) };


    // ownerPrincipalId Field Functions 
    bool hasOwnerPrincipalId() const { return this->ownerPrincipalId_ != nullptr;};
    void deleteOwnerPrincipalId() { this->ownerPrincipalId_ = nullptr;};
    inline string getOwnerPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalId_, "") };
    inline AgenticResourceOwner& setOwnerPrincipalId(string ownerPrincipalId) { DARABONBA_PTR_SET_VALUE(ownerPrincipalId_, ownerPrincipalId) };


    // ownerPrincipalType Field Functions 
    bool hasOwnerPrincipalType() const { return this->ownerPrincipalType_ != nullptr;};
    void deleteOwnerPrincipalType() { this->ownerPrincipalType_ = nullptr;};
    inline string getOwnerPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalType_, "") };
    inline AgenticResourceOwner& setOwnerPrincipalType(string ownerPrincipalType) { DARABONBA_PTR_SET_VALUE(ownerPrincipalType_, ownerPrincipalType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AgenticResourceOwner& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The instance alias. This display property comes from the catalog to which the resource belongs and is used only for frontend display to align with the data permission list. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> catalogAlias_ {};
    // The instance data source type, used only for frontend display. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> catalogDataSourceType_ {};
    // The instance environment type, used only for frontend display. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> catalogEnvType_ {};
    // The instance host, used only for frontend display. Built-in sample data sources are masked as ******. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> catalogHost_ {};
    // The instance port, used only for frontend display. Built-in sample data sources are masked as ******. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> catalogPort_ {};
    // The UUID of the catalog to which the resource belongs.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the instance data source to which the resource belongs. It is used only for frontend display and instance locating. Non-sensitive connection information is not masked. It is populated only in the My Assets or Managed Resources query scenarios and is null in other scenarios.
    shared_ptr<string> dataSourceUuid_ {};
    // The fully qualified name of the database. It has a value only when ResourceType is DATABASE and is populated by the downstream service, which facilitates direct frontend display. For MySQL, it is the database name itself. For PostgreSQL or SQL Server, it is in the format of DatabaseName.SchemaName.
    shared_ptr<string> databaseQualifiedName_ {};
    // The UUID of the database. It has a value only when ResourceType is DATABASE.
    shared_ptr<string> databaseUuid_ {};
    // The principal ID of the operator who registered the ownership relationship. The downstream service does not return this field in the My Assets query scenario, and the value is null.
    shared_ptr<string> grantBy_ {};
    // The source channel of the ownership. CONSOLE indicates manual registration in the console. Other values indicate that the ownership is written by the built-in system. The downstream service does not return this field in the My Assets query scenario, and the value is null.
    shared_ptr<string> grantFrom_ {};
    // The principal ID of the owner. This is the internal principal ID of the gateway with a usr_ or agt_ prefix, not the Alibaba Cloud UID.
    shared_ptr<string> ownerPrincipalId_ {};
    // The principal type of the owner. Valid values:
    // - USER: Human user.
    // - AGENT: Managed agent.
    shared_ptr<string> ownerPrincipalType_ {};
    // The ownership level. Valid values:
    // - INSTANCE: Instance-level ownership. The coordinate includes only CatalogUuid.
    // - DATABASE: Database-level ownership. The coordinate includes CatalogUuid and DatabaseUuid.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
