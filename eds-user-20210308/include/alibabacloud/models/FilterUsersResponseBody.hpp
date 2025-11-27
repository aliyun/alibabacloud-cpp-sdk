// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilterUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    FilterUsersResponseBody() = default ;
    FilterUsersResponseBody(const FilterUsersResponseBody &) = default ;
    FilterUsersResponseBody(FilterUsersResponseBody &&) = default ;
    FilterUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBody() = default ;
    FilterUsersResponseBody& operator=(const FilterUsersResponseBody &) = default ;
    FilterUsersResponseBody& operator=(FilterUsersResponseBody &&) = default ;
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
    inline FilterUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FilterUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<FilterUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<FilterUsersResponseBodyUsers>) };
    inline vector<FilterUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<FilterUsersResponseBodyUsers>) };
    inline FilterUsersResponseBody& setUsers(const vector<FilterUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline FilterUsersResponseBody& setUsers(vector<FilterUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. If not all results are returned in a query, a value is returned for the NextToken parameter. In this case, you can use the returned NextToken value to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the convenience accounts.
    std::shared_ptr<vector<FilterUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
