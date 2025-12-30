// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DeleteUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DeleteUsersRequest() = default ;
    DeleteUsersRequest(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest(DeleteUsersRequest &&) = default ;
    DeleteUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUsersRequest() = default ;
    DeleteUsersRequest& operator=(const DeleteUsersRequest &) = default ;
    DeleteUsersRequest& operator=(DeleteUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userName_ == nullptr; };
      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The name of user N that you want to delete.
      // 
      // Valid values of N: 1 to 100.
      // 
      // This parameter is required.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->user_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<DeleteUsersRequest::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<DeleteUsersRequest::User>) };
    inline vector<DeleteUsersRequest::User> getUser() { DARABONBA_PTR_GET(user_, vector<DeleteUsersRequest::User>) };
    inline DeleteUsersRequest& setUser(const vector<DeleteUsersRequest::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline DeleteUsersRequest& setUser(vector<DeleteUsersRequest::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The users that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<DeleteUsersRequest::User>> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
