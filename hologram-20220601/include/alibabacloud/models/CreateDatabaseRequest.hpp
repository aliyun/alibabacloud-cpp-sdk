// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(permissionModel, permissionModel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(permissionModel, permissionModel_);
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
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->permissionModel_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateDatabaseRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string getPermissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline CreateDatabaseRequest& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


  protected:
    shared_ptr<string> databaseName_ {};
    shared_ptr<string> permissionModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
