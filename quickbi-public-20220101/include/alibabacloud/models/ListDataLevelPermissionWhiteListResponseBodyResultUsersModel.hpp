// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODYRESULTUSERSMODEL_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODYRESULTUSERSMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataLevelPermissionWhiteListResponseBodyResultUsersModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel() = default ;
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel(const ListDataLevelPermissionWhiteListResponseBodyResultUsersModel &) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel(ListDataLevelPermissionWhiteListResponseBodyResultUsersModel &&) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLevelPermissionWhiteListResponseBodyResultUsersModel() = default ;
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& operator=(const ListDataLevelPermissionWhiteListResponseBodyResultUsersModel &) = default ;
    ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& operator=(ListDataLevelPermissionWhiteListResponseBodyResultUsersModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userGroups_ != nullptr
        && this->users_ != nullptr; };
    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<string> & userGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<string>) };
    inline vector<string> userGroups() { DARABONBA_PTR_GET(userGroups_, vector<string>) };
    inline ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& setUserGroups(const vector<string> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& setUserGroups(vector<string> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListDataLevelPermissionWhiteListResponseBodyResultUsersModel& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // UserGroups.
    std::shared_ptr<vector<string>> userGroups_ = nullptr;
    // Users.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
