// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatabaseInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CreateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseInput, databaseInput_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseInput, databaseInput_);
    };
    CreateDatabaseRequest() = default ;
    CreateDatabaseRequest(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest(CreateDatabaseRequest &&) = default ;
    CreateDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatabaseRequest() = default ;
    CreateDatabaseRequest& operator=(const CreateDatabaseRequest &) = default ;
    CreateDatabaseRequest& operator=(CreateDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseInput_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline CreateDatabaseRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseInput Field Functions 
    bool hasDatabaseInput() const { return this->databaseInput_ != nullptr;};
    void deleteDatabaseInput() { this->databaseInput_ = nullptr;};
    inline const DatabaseInput & databaseInput() const { DARABONBA_PTR_GET_CONST(databaseInput_, DatabaseInput) };
    inline DatabaseInput databaseInput() { DARABONBA_PTR_GET(databaseInput_, DatabaseInput) };
    inline CreateDatabaseRequest& setDatabaseInput(const DatabaseInput & databaseInput) { DARABONBA_PTR_SET_VALUE(databaseInput_, databaseInput) };
    inline CreateDatabaseRequest& setDatabaseInput(DatabaseInput && databaseInput) { DARABONBA_PTR_SET_RVALUE(databaseInput_, databaseInput) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database details.
    std::shared_ptr<DatabaseInput> databaseInput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
