// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupUserResponseBodyGroups.hpp>
#include <alibabacloud/models/DescribeGroupUserResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeGroupUserResponseBody() = default ;
    DescribeGroupUserResponseBody(const DescribeGroupUserResponseBody &) = default ;
    DescribeGroupUserResponseBody(DescribeGroupUserResponseBody &&) = default ;
    DescribeGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupUserResponseBody() = default ;
    DescribeGroupUserResponseBody& operator=(const DescribeGroupUserResponseBody &) = default ;
    DescribeGroupUserResponseBody& operator=(DescribeGroupUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groups_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->users_ != nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeGroupUserResponseBodyGroups> & groups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeGroupUserResponseBodyGroups>) };
    inline vector<DescribeGroupUserResponseBodyGroups> groups() { DARABONBA_PTR_GET(groups_, vector<DescribeGroupUserResponseBodyGroups>) };
    inline DescribeGroupUserResponseBody& setGroups(const vector<DescribeGroupUserResponseBodyGroups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupUserResponseBody& setGroups(vector<DescribeGroupUserResponseBodyGroups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGroupUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeGroupUserResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeGroupUserResponseBodyUsers>) };
    inline vector<DescribeGroupUserResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<DescribeGroupUserResponseBodyUsers>) };
    inline DescribeGroupUserResponseBody& setUsers(const vector<DescribeGroupUserResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeGroupUserResponseBody& setUsers(vector<DescribeGroupUserResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<vector<DescribeGroupUserResponseBodyGroups>> groups_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeGroupUserResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
