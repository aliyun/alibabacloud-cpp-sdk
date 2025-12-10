// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATABASEREQUEST_HPP_
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
  class UpdateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseInput, databaseInput_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseInput, databaseInput_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateDatabaseRequest() = default ;
    UpdateDatabaseRequest(const UpdateDatabaseRequest &) = default ;
    UpdateDatabaseRequest(UpdateDatabaseRequest &&) = default ;
    UpdateDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatabaseRequest() = default ;
    UpdateDatabaseRequest& operator=(const UpdateDatabaseRequest &) = default ;
    UpdateDatabaseRequest& operator=(UpdateDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseInput_ == nullptr && return this->name_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline UpdateDatabaseRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseInput Field Functions 
    bool hasDatabaseInput() const { return this->databaseInput_ != nullptr;};
    void deleteDatabaseInput() { this->databaseInput_ = nullptr;};
    inline const DatabaseInput & databaseInput() const { DARABONBA_PTR_GET_CONST(databaseInput_, DatabaseInput) };
    inline DatabaseInput databaseInput() { DARABONBA_PTR_GET(databaseInput_, DatabaseInput) };
    inline UpdateDatabaseRequest& setDatabaseInput(const DatabaseInput & databaseInput) { DARABONBA_PTR_SET_VALUE(databaseInput_, databaseInput) };
    inline UpdateDatabaseRequest& setDatabaseInput(DatabaseInput && databaseInput) { DARABONBA_PTR_SET_RVALUE(databaseInput_, databaseInput) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDatabaseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The information about the updated database.
    std::shared_ptr<DatabaseInput> databaseInput_ = nullptr;
    // The name of the database before the update. If the database name remains the same after the update, only other information in the DatabaseInput parameter is updated.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
