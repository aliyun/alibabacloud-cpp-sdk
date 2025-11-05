// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEDATABASEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEDATABASEPERMISSIONREQUEST_HPP_
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
  class RevokeDatabasePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeDatabasePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(privileges, privileges_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeDatabasePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(privileges, privileges_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    RevokeDatabasePermissionRequest() = default ;
    RevokeDatabasePermissionRequest(const RevokeDatabasePermissionRequest &) = default ;
    RevokeDatabasePermissionRequest(RevokeDatabasePermissionRequest &&) = default ;
    RevokeDatabasePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeDatabasePermissionRequest() = default ;
    RevokeDatabasePermissionRequest& operator=(const RevokeDatabasePermissionRequest &) = default ;
    RevokeDatabasePermissionRequest& operator=(RevokeDatabasePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->privileges_ == nullptr && return this->userName_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline RevokeDatabasePermissionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // privileges Field Functions 
    bool hasPrivileges() const { return this->privileges_ != nullptr;};
    void deletePrivileges() { this->privileges_ = nullptr;};
    inline const vector<string> & privileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
    inline vector<string> privileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
    inline RevokeDatabasePermissionRequest& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
    inline RevokeDatabasePermissionRequest& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RevokeDatabasePermissionRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<vector<string>> privileges_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
