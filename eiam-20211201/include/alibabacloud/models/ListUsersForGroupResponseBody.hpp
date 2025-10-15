// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUsersForGroupResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUsersForGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersForGroupResponseBody() = default ;
    ListUsersForGroupResponseBody(const ListUsersForGroupResponseBody &) = default ;
    ListUsersForGroupResponseBody(ListUsersForGroupResponseBody &&) = default ;
    ListUsersForGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupResponseBody() = default ;
    ListUsersForGroupResponseBody& operator=(const ListUsersForGroupResponseBody &) = default ;
    ListUsersForGroupResponseBody& operator=(ListUsersForGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersForGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersForGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersForGroupResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersForGroupResponseBodyUsers>) };
    inline vector<ListUsersForGroupResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListUsersForGroupResponseBodyUsers>) };
    inline ListUsersForGroupResponseBody& setUsers(const vector<ListUsersForGroupResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersForGroupResponseBody& setUsers(vector<ListUsersForGroupResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned. The maximum number of entries that can be returned per page is specified by PageSize.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The information about accounts.
    std::shared_ptr<vector<ListUsersForGroupResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
