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
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseQualifiedName, databaseQualifiedName_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(GrantBy, grantBy_);
      DARABONBA_PTR_TO_JSON(GrantFrom, grantFrom_);
      DARABONBA_PTR_TO_JSON(OwnerPrincipalId, ownerPrincipalId_);
      DARABONBA_PTR_TO_JSON(OwnerPrincipalType, ownerPrincipalType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticResourceOwner& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
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
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->databaseQualifiedName_ == nullptr && this->databaseUuid_ == nullptr && this->grantBy_ == nullptr && this->grantFrom_ == nullptr && this->ownerPrincipalId_ == nullptr
        && this->ownerPrincipalType_ == nullptr && this->resourceType_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticResourceOwner& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


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
    // The UUID of the Catalog to which the resource belongs.
    shared_ptr<string> catalogUuid_ {};
    // The qualified name of the database. This field has a value only when ResourceType is DATABASE and the downstream backfills the value. This field is provided for direct display on the frontend. For MySQL, this is the database name itself. For PostgreSQL or SQL Server, this is in the format of DatabaseName.SchemaName.
    shared_ptr<string> databaseQualifiedName_ {};
    // The UUID of the database. This field has a value only when ResourceType is DATABASE.
    shared_ptr<string> databaseUuid_ {};
    // The principal ID of the operator who registered this ownership relationship. In the "My Assets" scenario, the downstream does not return this field, and the value is null.
    shared_ptr<string> grantBy_ {};
    // The source channel of the ownership. Valid values:
    // - CONSOLE: Manually registered in the console.
    // - Other values: Written by the system built-in ownership mechanism.
    // 
    // In the "My Assets" scenario, the downstream does not return this field, and the value is null.
    shared_ptr<string> grantFrom_ {};
    // The Owner principal ID. This is a gateway internal principal ID with the usr_ or agt_ prefix, not an Alibaba Cloud UID.
    shared_ptr<string> ownerPrincipalId_ {};
    // The Owner principal type. Valid values:
    // - USER: Human user.
    // - AGENT: Managed Agent.
    shared_ptr<string> ownerPrincipalType_ {};
    // The ownership level. Valid values:
    // - INSTANCE: Instance-level ownership. The coordinate contains only CatalogUuid.
    // - DATABASE: Database-level ownership. The coordinate contains CatalogUuid + DatabaseUuid.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
