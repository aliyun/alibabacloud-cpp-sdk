// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICSQLEXECUTECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICSQLEXECUTECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateAgenticSqlExecuteCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticSqlExecuteCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticSqlExecuteCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    CreateAgenticSqlExecuteCredentialRequest() = default ;
    CreateAgenticSqlExecuteCredentialRequest(const CreateAgenticSqlExecuteCredentialRequest &) = default ;
    CreateAgenticSqlExecuteCredentialRequest(CreateAgenticSqlExecuteCredentialRequest &&) = default ;
    CreateAgenticSqlExecuteCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticSqlExecuteCredentialRequest() = default ;
    CreateAgenticSqlExecuteCredentialRequest& operator=(const CreateAgenticSqlExecuteCredentialRequest &) = default ;
    CreateAgenticSqlExecuteCredentialRequest& operator=(CreateAgenticSqlExecuteCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->catalogUuid_ == nullptr && this->databaseUuid_ == nullptr && this->qualifiedName_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreateAgenticSqlExecuteCredentialRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline CreateAgenticSqlExecuteCredentialRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline CreateAgenticSqlExecuteCredentialRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline CreateAgenticSqlExecuteCredentialRequest& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    // The name of the instance.
    shared_ptr<string> catalogName_ {};
    // The UUID of the instance.
    shared_ptr<string> catalogUuid_ {};
    // The UUID of the database. If you specify this parameter, the credential is restricted to this database. You can call the ListDatabases operation to obtain the UUID.
    shared_ptr<string> databaseUuid_ {};
    // The fully qualified name of the database. This parameter must be used together with CatalogUuid or CatalogName.
    // 
    // - MySQL database: The value is the same as the database name.
    // - PostgreSQL database or other databases with schemas: The value is in the database.schema format.
    shared_ptr<string> qualifiedName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
