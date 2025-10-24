// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSBYROLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSBYROLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersByRoleResponseBodyDataUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListUsersByRoleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersByRoleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersByRoleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(users, users_);
    };
    ListUsersByRoleResponseBodyData() = default ;
    ListUsersByRoleResponseBodyData(const ListUsersByRoleResponseBodyData &) = default ;
    ListUsersByRoleResponseBodyData(ListUsersByRoleResponseBodyData &&) = default ;
    ListUsersByRoleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersByRoleResponseBodyData() = default ;
    ListUsersByRoleResponseBodyData& operator=(const ListUsersByRoleResponseBodyData &) = default ;
    ListUsersByRoleResponseBodyData& operator=(ListUsersByRoleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->users_ == nullptr; };
    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Models::ListUsersByRoleResponseBodyDataUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Models::ListUsersByRoleResponseBodyDataUsers>) };
    inline vector<Models::ListUsersByRoleResponseBodyDataUsers> users() { DARABONBA_PTR_GET(users_, vector<Models::ListUsersByRoleResponseBodyDataUsers>) };
    inline ListUsersByRoleResponseBodyData& setUsers(const vector<Models::ListUsersByRoleResponseBodyDataUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersByRoleResponseBodyData& setUsers(vector<Models::ListUsersByRoleResponseBodyDataUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The users.
    std::shared_ptr<vector<Models::ListUsersByRoleResponseBodyDataUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
