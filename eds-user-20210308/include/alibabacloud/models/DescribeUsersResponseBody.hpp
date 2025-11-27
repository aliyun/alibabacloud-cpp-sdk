// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeUsersResponseBody() = default ;
    DescribeUsersResponseBody(const DescribeUsersResponseBody &) = default ;
    DescribeUsersResponseBody(DescribeUsersResponseBody &&) = default ;
    DescribeUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersResponseBody() = default ;
    DescribeUsersResponseBody& operator=(const DescribeUsersResponseBody &) = default ;
    DescribeUsersResponseBody& operator=(DescribeUsersResponseBody &&) = default ;
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
    inline DescribeUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeUsersResponseBodyUsers>) };
    inline vector<DescribeUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<DescribeUsersResponseBodyUsers>) };
    inline DescribeUsersResponseBody& setUsers(const vector<DescribeUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeUsersResponseBody& setUsers(vector<DescribeUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the convenience accounts.
    std::shared_ptr<vector<DescribeUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
