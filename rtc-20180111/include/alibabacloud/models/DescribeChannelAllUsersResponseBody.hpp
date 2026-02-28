// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELALLUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELALLUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelAllUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelAllUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelAllUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeChannelAllUsersResponseBody() = default ;
    DescribeChannelAllUsersResponseBody(const DescribeChannelAllUsersResponseBody &) = default ;
    DescribeChannelAllUsersResponseBody(DescribeChannelAllUsersResponseBody &&) = default ;
    DescribeChannelAllUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelAllUsersResponseBody() = default ;
    DescribeChannelAllUsersResponseBody& operator=(const DescribeChannelAllUsersResponseBody &) = default ;
    DescribeChannelAllUsersResponseBody& operator=(DescribeChannelAllUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->userId_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->channelExist_ == nullptr
        && this->requestId_ == nullptr && this->users_ == nullptr; };
    // channelExist Field Functions 
    bool hasChannelExist() const { return this->channelExist_ != nullptr;};
    void deleteChannelExist() { this->channelExist_ = nullptr;};
    inline bool getChannelExist() const { DARABONBA_PTR_GET_DEFAULT(channelExist_, false) };
    inline DescribeChannelAllUsersResponseBody& setChannelExist(bool channelExist) { DARABONBA_PTR_SET_VALUE(channelExist_, channelExist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelAllUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeChannelAllUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeChannelAllUsersResponseBody::Users>) };
    inline vector<DescribeChannelAllUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<DescribeChannelAllUsersResponseBody::Users>) };
    inline DescribeChannelAllUsersResponseBody& setUsers(const vector<DescribeChannelAllUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeChannelAllUsersResponseBody& setUsers(vector<DescribeChannelAllUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    shared_ptr<bool> channelExist_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeChannelAllUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
