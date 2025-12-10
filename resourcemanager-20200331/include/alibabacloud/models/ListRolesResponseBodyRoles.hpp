// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYROLES_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYROLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRolesResponseBodyRolesRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListRolesResponseBodyRoles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyRoles& obj) { 
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyRoles& obj) { 
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListRolesResponseBodyRoles() = default ;
    ListRolesResponseBodyRoles(const ListRolesResponseBodyRoles &) = default ;
    ListRolesResponseBodyRoles(ListRolesResponseBodyRoles &&) = default ;
    ListRolesResponseBodyRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyRoles() = default ;
    ListRolesResponseBodyRoles& operator=(const ListRolesResponseBodyRoles &) = default ;
    ListRolesResponseBodyRoles& operator=(ListRolesResponseBodyRoles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->role_ == nullptr; };
    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const vector<Models::ListRolesResponseBodyRolesRole> & role() const { DARABONBA_PTR_GET_CONST(role_, vector<Models::ListRolesResponseBodyRolesRole>) };
    inline vector<Models::ListRolesResponseBodyRolesRole> role() { DARABONBA_PTR_GET(role_, vector<Models::ListRolesResponseBodyRolesRole>) };
    inline ListRolesResponseBodyRoles& setRole(const vector<Models::ListRolesResponseBodyRolesRole> & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline ListRolesResponseBodyRoles& setRole(vector<Models::ListRolesResponseBodyRolesRole> && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    std::shared_ptr<vector<Models::ListRolesResponseBodyRolesRole>> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
