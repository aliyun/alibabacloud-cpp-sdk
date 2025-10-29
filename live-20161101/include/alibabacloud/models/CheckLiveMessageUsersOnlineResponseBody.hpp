// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckLiveMessageUsersOnlineResponseBodyUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersOnlineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersOnlineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersOnlineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    CheckLiveMessageUsersOnlineResponseBody() = default ;
    CheckLiveMessageUsersOnlineResponseBody(const CheckLiveMessageUsersOnlineResponseBody &) = default ;
    CheckLiveMessageUsersOnlineResponseBody(CheckLiveMessageUsersOnlineResponseBody &&) = default ;
    CheckLiveMessageUsersOnlineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersOnlineResponseBody() = default ;
    CheckLiveMessageUsersOnlineResponseBody& operator=(const CheckLiveMessageUsersOnlineResponseBody &) = default ;
    CheckLiveMessageUsersOnlineResponseBody& operator=(CheckLiveMessageUsersOnlineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckLiveMessageUsersOnlineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<CheckLiveMessageUsersOnlineResponseBodyUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<CheckLiveMessageUsersOnlineResponseBodyUserList>) };
    inline vector<CheckLiveMessageUsersOnlineResponseBodyUserList> userList() { DARABONBA_PTR_GET(userList_, vector<CheckLiveMessageUsersOnlineResponseBodyUserList>) };
    inline CheckLiveMessageUsersOnlineResponseBody& setUserList(const vector<CheckLiveMessageUsersOnlineResponseBodyUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline CheckLiveMessageUsersOnlineResponseBody& setUserList(vector<CheckLiveMessageUsersOnlineResponseBodyUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of users queried.
    std::shared_ptr<vector<CheckLiveMessageUsersOnlineResponseBodyUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
