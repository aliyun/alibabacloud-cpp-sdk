// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsersInGroupResponseBodyEndUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeUsersInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlineUsersCount, onlineUsersCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_TO_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_TO_JSON(UsersCount, usersCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsersInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUsers, endUsers_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlineUsersCount, onlineUsersCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
      DARABONBA_PTR_FROM_JSON(UserOuPath, userOuPath_);
      DARABONBA_PTR_FROM_JSON(UsersCount, usersCount_);
    };
    DescribeUsersInGroupResponseBody() = default ;
    DescribeUsersInGroupResponseBody(const DescribeUsersInGroupResponseBody &) = default ;
    DescribeUsersInGroupResponseBody(DescribeUsersInGroupResponseBody &&) = default ;
    DescribeUsersInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsersInGroupResponseBody() = default ;
    DescribeUsersInGroupResponseBody& operator=(const DescribeUsersInGroupResponseBody &) = default ;
    DescribeUsersInGroupResponseBody& operator=(DescribeUsersInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUsers_ == nullptr
        && return this->nextToken_ == nullptr && return this->onlineUsersCount_ == nullptr && return this->requestId_ == nullptr && return this->userGroupName_ == nullptr && return this->userOuPath_ == nullptr
        && return this->usersCount_ == nullptr; };
    // endUsers Field Functions 
    bool hasEndUsers() const { return this->endUsers_ != nullptr;};
    void deleteEndUsers() { this->endUsers_ = nullptr;};
    inline const vector<DescribeUsersInGroupResponseBodyEndUsers> & endUsers() const { DARABONBA_PTR_GET_CONST(endUsers_, vector<DescribeUsersInGroupResponseBodyEndUsers>) };
    inline vector<DescribeUsersInGroupResponseBodyEndUsers> endUsers() { DARABONBA_PTR_GET(endUsers_, vector<DescribeUsersInGroupResponseBodyEndUsers>) };
    inline DescribeUsersInGroupResponseBody& setEndUsers(const vector<DescribeUsersInGroupResponseBodyEndUsers> & endUsers) { DARABONBA_PTR_SET_VALUE(endUsers_, endUsers) };
    inline DescribeUsersInGroupResponseBody& setEndUsers(vector<DescribeUsersInGroupResponseBodyEndUsers> && endUsers) { DARABONBA_PTR_SET_RVALUE(endUsers_, endUsers) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUsersInGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlineUsersCount Field Functions 
    bool hasOnlineUsersCount() const { return this->onlineUsersCount_ != nullptr;};
    void deleteOnlineUsersCount() { this->onlineUsersCount_ = nullptr;};
    inline int32_t onlineUsersCount() const { DARABONBA_PTR_GET_DEFAULT(onlineUsersCount_, 0) };
    inline DescribeUsersInGroupResponseBody& setOnlineUsersCount(int32_t onlineUsersCount) { DARABONBA_PTR_SET_VALUE(onlineUsersCount_, onlineUsersCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsersInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline DescribeUsersInGroupResponseBody& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    // userOuPath Field Functions 
    bool hasUserOuPath() const { return this->userOuPath_ != nullptr;};
    void deleteUserOuPath() { this->userOuPath_ = nullptr;};
    inline string userOuPath() const { DARABONBA_PTR_GET_DEFAULT(userOuPath_, "") };
    inline DescribeUsersInGroupResponseBody& setUserOuPath(string userOuPath) { DARABONBA_PTR_SET_VALUE(userOuPath_, userOuPath) };


    // usersCount Field Functions 
    bool hasUsersCount() const { return this->usersCount_ != nullptr;};
    void deleteUsersCount() { this->usersCount_ = nullptr;};
    inline int32_t usersCount() const { DARABONBA_PTR_GET_DEFAULT(usersCount_, 0) };
    inline DescribeUsersInGroupResponseBody& setUsersCount(int32_t usersCount) { DARABONBA_PTR_SET_VALUE(usersCount_, usersCount) };


  protected:
    // The authorized users.
    std::shared_ptr<vector<DescribeUsersInGroupResponseBodyEndUsers>> endUsers_ = nullptr;
    // The token that is used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of authorized users that are connected to cloud computers of the cloud computer share.
    std::shared_ptr<int32_t> onlineUsersCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> userGroupName_ = nullptr;
    std::shared_ptr<string> userOuPath_ = nullptr;
    // The total number of authorized users of the cloud computer share.
    std::shared_ptr<int32_t> usersCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
