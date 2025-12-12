// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyDataUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListUsersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListUsersResponseBodyData() = default ;
    ListUsersResponseBodyData(const ListUsersResponseBodyData &) = default ;
    ListUsersResponseBodyData(ListUsersResponseBodyData &&) = default ;
    ListUsersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyData() = default ;
    ListUsersResponseBodyData& operator=(const ListUsersResponseBodyData &) = default ;
    ListUsersResponseBodyData& operator=(ListUsersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->user_ == nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyDataUser> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<Models::ListUsersResponseBodyDataUser>) };
    inline vector<Models::ListUsersResponseBodyDataUser> user() { DARABONBA_PTR_GET(user_, vector<Models::ListUsersResponseBodyDataUser>) };
    inline ListUsersResponseBodyData& setUser(const vector<Models::ListUsersResponseBodyDataUser> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListUsersResponseBodyData& setUser(vector<Models::ListUsersResponseBodyDataUser> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<vector<Models::ListUsersResponseBodyDataUser>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
