// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOfficeSiteUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListOfficeSiteUsersResponseBody() = default ;
    ListOfficeSiteUsersResponseBody(const ListOfficeSiteUsersResponseBody &) = default ;
    ListOfficeSiteUsersResponseBody(ListOfficeSiteUsersResponseBody &&) = default ;
    ListOfficeSiteUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteUsersResponseBody() = default ;
    ListOfficeSiteUsersResponseBody& operator=(const ListOfficeSiteUsersResponseBody &) = default ;
    ListOfficeSiteUsersResponseBody& operator=(ListOfficeSiteUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->users_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOfficeSiteUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOfficeSiteUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListOfficeSiteUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListOfficeSiteUsersResponseBodyUsers>) };
    inline vector<ListOfficeSiteUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListOfficeSiteUsersResponseBodyUsers>) };
    inline ListOfficeSiteUsersResponseBody& setUsers(const vector<ListOfficeSiteUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListOfficeSiteUsersResponseBody& setUsers(vector<ListOfficeSiteUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The usernames of the AD accounts.\\
    // If the only Administrator and Guest users exist in the enterprise AD directory, an empty User array is returned.
    std::shared_ptr<vector<ListOfficeSiteUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
