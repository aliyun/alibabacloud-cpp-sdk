// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateUsersRequest() = default ;
    CreateUsersRequest(const CreateUsersRequest &) = default ;
    CreateUsersRequest(CreateUsersRequest &&) = default ;
    CreateUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequest() = default ;
    CreateUsersRequest& operator=(const CreateUsersRequest &) = default ;
    CreateUsersRequest& operator=(CreateUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->userName_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline Users& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Users& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The password of the user.
      // 
      // This parameter is required.
      shared_ptr<string> password_ {};
      // The username.
      // 
      // This parameter is required.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->regionId_ == nullptr && this->users_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CreateUsersRequest::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<CreateUsersRequest::Users>) };
    inline vector<CreateUsersRequest::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<CreateUsersRequest::Users>) };
    inline CreateUsersRequest& setUsers(const vector<CreateUsersRequest::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateUsersRequest& setUsers(vector<CreateUsersRequest::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of users. The number of users must be from 0 to 10.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateUsersRequest::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
