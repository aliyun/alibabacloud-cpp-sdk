// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspaceUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListWorkspaceUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListWorkspaceUsersResponseBody() = default ;
    ListWorkspaceUsersResponseBody(const ListWorkspaceUsersResponseBody &) = default ;
    ListWorkspaceUsersResponseBody(ListWorkspaceUsersResponseBody &&) = default ;
    ListWorkspaceUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceUsersResponseBody() = default ;
    ListWorkspaceUsersResponseBody& operator=(const ListWorkspaceUsersResponseBody &) = default ;
    ListWorkspaceUsersResponseBody& operator=(ListWorkspaceUsersResponseBody &&) = default ;
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
    inline ListWorkspaceUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWorkspaceUsersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListWorkspaceUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListWorkspaceUsersResponseBodyUsers>) };
    inline vector<ListWorkspaceUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListWorkspaceUsersResponseBodyUsers>) };
    inline ListWorkspaceUsersResponseBody& setUsers(const vector<ListWorkspaceUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListWorkspaceUsersResponseBody& setUsers(vector<ListWorkspaceUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of users who meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The users.
    std::shared_ptr<vector<ListWorkspaceUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
