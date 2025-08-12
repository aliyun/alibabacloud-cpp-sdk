// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckLiveMessageUsersInGroupResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CheckLiveMessageUsersInGroupResponseBody() = default ;
    CheckLiveMessageUsersInGroupResponseBody(const CheckLiveMessageUsersInGroupResponseBody &) = default ;
    CheckLiveMessageUsersInGroupResponseBody(CheckLiveMessageUsersInGroupResponseBody &&) = default ;
    CheckLiveMessageUsersInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersInGroupResponseBody() = default ;
    CheckLiveMessageUsersInGroupResponseBody& operator=(const CheckLiveMessageUsersInGroupResponseBody &) = default ;
    CheckLiveMessageUsersInGroupResponseBody& operator=(CheckLiveMessageUsersInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->users_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckLiveMessageUsersInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CheckLiveMessageUsersInGroupResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<CheckLiveMessageUsersInGroupResponseBodyUsers>) };
    inline vector<CheckLiveMessageUsersInGroupResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<CheckLiveMessageUsersInGroupResponseBodyUsers>) };
    inline CheckLiveMessageUsersInGroupResponseBody& setUsers(const vector<CheckLiveMessageUsersInGroupResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CheckLiveMessageUsersInGroupResponseBody& setUsers(vector<CheckLiveMessageUsersInGroupResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of users queried.
    std::shared_ptr<vector<CheckLiveMessageUsersInGroupResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
