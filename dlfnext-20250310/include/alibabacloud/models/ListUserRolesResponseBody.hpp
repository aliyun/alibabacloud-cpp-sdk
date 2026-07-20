// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Role.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListUserRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(roles, roles_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(roles, roles_);
    };
    ListUserRolesResponseBody() = default ;
    ListUserRolesResponseBody(const ListUserRolesResponseBody &) = default ;
    ListUserRolesResponseBody(ListUserRolesResponseBody &&) = default ;
    ListUserRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRolesResponseBody() = default ;
    ListUserRolesResponseBody& operator=(const ListUserRolesResponseBody &) = default ;
    ListUserRolesResponseBody& operator=(ListUserRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->roles_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListUserRolesResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<Role> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<Role>) };
    inline vector<Role> getRoles() { DARABONBA_PTR_GET(roles_, vector<Role>) };
    inline ListUserRolesResponseBody& setRoles(const vector<Role> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline ListUserRolesResponseBody& setRoles(vector<Role> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


  protected:
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<vector<Role>> roles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
