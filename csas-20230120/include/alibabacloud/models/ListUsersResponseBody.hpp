// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalNum_ != nullptr && this->users_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListUsersResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersResponseBodyUsers>) };
    inline vector<ListUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListUsersResponseBodyUsers>) };
    inline ListUsersResponseBody& setUsers(const vector<ListUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersResponseBody& setUsers(vector<ListUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
    std::shared_ptr<vector<ListUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
