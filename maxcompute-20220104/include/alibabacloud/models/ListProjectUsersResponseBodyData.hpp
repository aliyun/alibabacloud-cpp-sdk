// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectUsersResponseBodyDataUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(users, users_);
    };
    ListProjectUsersResponseBodyData() = default ;
    ListProjectUsersResponseBodyData(const ListProjectUsersResponseBodyData &) = default ;
    ListProjectUsersResponseBodyData(ListProjectUsersResponseBodyData &&) = default ;
    ListProjectUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectUsersResponseBodyData() = default ;
    ListProjectUsersResponseBodyData& operator=(const ListProjectUsersResponseBodyData &) = default ;
    ListProjectUsersResponseBodyData& operator=(ListProjectUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->users_ != nullptr; };
    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Models::ListProjectUsersResponseBodyDataUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Models::ListProjectUsersResponseBodyDataUsers>) };
    inline vector<Models::ListProjectUsersResponseBodyDataUsers> users() { DARABONBA_PTR_GET(users_, vector<Models::ListProjectUsersResponseBodyDataUsers>) };
    inline ListProjectUsersResponseBodyData& setUsers(const vector<Models::ListProjectUsersResponseBodyDataUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListProjectUsersResponseBodyData& setUsers(vector<Models::ListProjectUsersResponseBodyDataUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // An array that contains users.
    std::shared_ptr<vector<Models::ListProjectUsersResponseBodyDataUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
