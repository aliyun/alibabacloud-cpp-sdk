// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyUsersUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListUsersResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers(ListUsersResponseBodyUsers &&) = default ;
    ListUsersResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsers() = default ;
    ListUsersResponseBodyUsers& operator=(const ListUsersResponseBodyUsers &) = default ;
    ListUsersResponseBodyUsers& operator=(ListUsersResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userInfo_ == nullptr; };
    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const vector<Models::ListUsersResponseBodyUsersUserInfo> & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, vector<Models::ListUsersResponseBodyUsersUserInfo>) };
    inline vector<Models::ListUsersResponseBodyUsersUserInfo> userInfo() { DARABONBA_PTR_GET(userInfo_, vector<Models::ListUsersResponseBodyUsersUserInfo>) };
    inline ListUsersResponseBodyUsers& setUserInfo(const vector<Models::ListUsersResponseBodyUsersUserInfo> & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListUsersResponseBodyUsers& setUserInfo(vector<Models::ListUsersResponseBodyUsersUserInfo> && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<vector<Models::ListUsersResponseBodyUsersUserInfo>> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
