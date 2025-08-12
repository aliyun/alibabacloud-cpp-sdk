// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class RemoveUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    RemoveUsersRequest() = default ;
    RemoveUsersRequest(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest(RemoveUsersRequest &&) = default ;
    RemoveUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersRequest() = default ;
    RemoveUsersRequest& operator=(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest& operator=(RemoveUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->users_ != nullptr; };
    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline RemoveUsersRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline RemoveUsersRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The usernames of the convenience users that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
