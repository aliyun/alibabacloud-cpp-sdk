// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIRECTORYUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIRECTORYUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDirectoryUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListDirectoryUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDirectoryUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListDirectoryUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListDirectoryUsersResponseBody() = default ;
    ListDirectoryUsersResponseBody(const ListDirectoryUsersResponseBody &) = default ;
    ListDirectoryUsersResponseBody(ListDirectoryUsersResponseBody &&) = default ;
    ListDirectoryUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDirectoryUsersResponseBody() = default ;
    ListDirectoryUsersResponseBody& operator=(const ListDirectoryUsersResponseBody &) = default ;
    ListDirectoryUsersResponseBody& operator=(ListDirectoryUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->users_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDirectoryUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDirectoryUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListDirectoryUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListDirectoryUsersResponseBodyUsers>) };
    inline vector<ListDirectoryUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListDirectoryUsersResponseBodyUsers>) };
    inline ListDirectoryUsersResponseBody& setUsers(const vector<ListDirectoryUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListDirectoryUsersResponseBody& setUsers(vector<ListDirectoryUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The token used to start the next query. If the value of this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The usernames corresponding to the AD directory. If the AD directory contains only the Administrator and Guest accounts, the Users array will be empty.
    std::shared_ptr<vector<ListDirectoryUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
