// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKESCHEMAPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKESCHEMAPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RevokeSchemaPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeSchemaPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(privileges, privileges_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeSchemaPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(privileges, privileges_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    RevokeSchemaPermissionRequest() = default ;
    RevokeSchemaPermissionRequest(const RevokeSchemaPermissionRequest &) = default ;
    RevokeSchemaPermissionRequest(RevokeSchemaPermissionRequest &&) = default ;
    RevokeSchemaPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeSchemaPermissionRequest() = default ;
    RevokeSchemaPermissionRequest& operator=(const RevokeSchemaPermissionRequest &) = default ;
    RevokeSchemaPermissionRequest& operator=(RevokeSchemaPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->privileges_ == nullptr && return this->schemaName_ == nullptr && return this->userName_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline RevokeSchemaPermissionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<string> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
    inline vector<string> privileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
    inline RevokeSchemaPermissionRequest& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline RevokeSchemaPermissionRequest& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline RevokeSchemaPermissionRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RevokeSchemaPermissionRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<vector<string>> privileges_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
