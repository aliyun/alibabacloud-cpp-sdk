// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody(RemoveUsersResponseBody &&) = default ;
    RemoveUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersResponseBody() = default ;
    RemoveUsersResponseBody& operator=(const RemoveUsersResponseBody &) = default ;
    RemoveUsersResponseBody& operator=(RemoveUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<RemoveUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<RemoveUsersResponseBodyUsers>) };
    inline vector<RemoveUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<RemoveUsersResponseBodyUsers>) };
    inline RemoveUsersResponseBody& setUsers(const vector<RemoveUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline RemoveUsersResponseBody& setUsers(vector<RemoveUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<RemoveUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
