// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Avatar, avatar_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtJoinGroup, gmtJoinGroup_);
        DARABONBA_PTR_TO_JSON(JobNumber, jobNumber_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtJoinGroup, gmtJoinGroup_);
        DARABONBA_PTR_FROM_JSON(JobNumber, jobNumber_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->address_ == nullptr
        && this->avatar_ == nullptr && this->email_ == nullptr && this->endUserId_ == nullptr && this->gmtCreated_ == nullptr && this->gmtJoinGroup_ == nullptr
        && this->jobNumber_ == nullptr && this->nickName_ == nullptr && this->phone_ == nullptr && this->remark_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Users& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline Users& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Users& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Users& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtJoinGroup Field Functions 
      bool hasGmtJoinGroup() const { return this->gmtJoinGroup_ != nullptr;};
      void deleteGmtJoinGroup() { this->gmtJoinGroup_ = nullptr;};
      inline string getGmtJoinGroup() const { DARABONBA_PTR_GET_DEFAULT(gmtJoinGroup_, "") };
      inline Users& setGmtJoinGroup(string gmtJoinGroup) { DARABONBA_PTR_SET_VALUE(gmtJoinGroup_, gmtJoinGroup) };


      // jobNumber Field Functions 
      bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
      void deleteJobNumber() { this->jobNumber_ = nullptr;};
      inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
      inline Users& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Users& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Users& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Users& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // >  This field is deprecated.
      shared_ptr<string> address_ {};
      // >  This field is deprecated.
      shared_ptr<string> avatar_ {};
      // The email address.
      shared_ptr<string> email_ {};
      // The user name.
      shared_ptr<string> endUserId_ {};
      // The time when the user was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the user was added to the user group.
      shared_ptr<string> gmtJoinGroup_ {};
      // >  This field is deprecated.
      shared_ptr<string> jobNumber_ {};
      // The display name.
      shared_ptr<string> nickName_ {};
      // The mobile number.
      shared_ptr<string> phone_ {};
      // The remarks on the user.
      shared_ptr<string> remark_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(UserCount, userCount_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->userCount_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Groups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline string getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, "") };
      inline Groups& setUserCount(string userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    protected:
      // The user group ID.
      shared_ptr<string> groupId_ {};
      // The name of the user group.
      shared_ptr<string> groupName_ {};
      // The number of members in the user group.
      shared_ptr<string> userCount_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->users_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribeGroupUserResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribeGroupUserResponseBody::Groups>) };
    inline vector<DescribeGroupUserResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribeGroupUserResponseBody::Groups>) };
    inline DescribeGroupUserResponseBody& setGroups(const vector<DescribeGroupUserResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribeGroupUserResponseBody& setGroups(vector<DescribeGroupUserResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGroupUserResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeGroupUserResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeGroupUserResponseBody::Users>) };
    inline vector<DescribeGroupUserResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<DescribeGroupUserResponseBody::Users>) };
    inline DescribeGroupUserResponseBody& setUsers(const vector<DescribeGroupUserResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeGroupUserResponseBody& setUsers(vector<DescribeGroupUserResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // >  This field is deprecated.
    shared_ptr<vector<DescribeGroupUserResponseBody::Groups>> groups_ {};
    // The token for the next query. If NextToken is empty, all results have been queried.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The members.
    shared_ptr<vector<DescribeGroupUserResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
