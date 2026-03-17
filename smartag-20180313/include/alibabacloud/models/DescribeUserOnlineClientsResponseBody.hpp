// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERONLINECLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERONLINECLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeUserOnlineClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserOnlineClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserOnlineClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeUserOnlineClientsResponseBody() = default ;
    DescribeUserOnlineClientsResponseBody(const DescribeUserOnlineClientsResponseBody &) = default ;
    DescribeUserOnlineClientsResponseBody(DescribeUserOnlineClientsResponseBody &&) = default ;
    DescribeUserOnlineClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserOnlineClientsResponseBody() = default ;
    DescribeUserOnlineClientsResponseBody& operator=(const DescribeUserOnlineClientsResponseBody &) = default ;
    DescribeUserOnlineClientsResponseBody& operator=(DescribeUserOnlineClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      class User : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const User& obj) { 
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(OnlineTime, onlineTime_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(OnlineTime, onlineTime_);
        };
        User() = default ;
        User(const User &) = default ;
        User(User &&) = default ;
        User(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~User() = default ;
        User& operator=(const User &) = default ;
        User& operator=(User &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->onlineTime_ == nullptr; };
        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline User& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // onlineTime Field Functions 
        bool hasOnlineTime() const { return this->onlineTime_ != nullptr;};
        void deleteOnlineTime() { this->onlineTime_ = nullptr;};
        inline string getOnlineTime() const { DARABONBA_PTR_GET_DEFAULT(onlineTime_, "") };
        inline User& setOnlineTime(string onlineTime) { DARABONBA_PTR_SET_VALUE(onlineTime_, onlineTime) };


      protected:
        shared_ptr<string> clientIp_ {};
        shared_ptr<string> onlineTime_ {};
      };

      virtual bool empty() const override { return this->user_ == nullptr; };
      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const vector<Users::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<Users::User>) };
      inline vector<Users::User> getUser() { DARABONBA_PTR_GET(user_, vector<Users::User>) };
      inline Users& setUser(const vector<Users::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline Users& setUser(vector<Users::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      shared_ptr<vector<Users::User>> user_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->users_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserOnlineClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const DescribeUserOnlineClientsResponseBody::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, DescribeUserOnlineClientsResponseBody::Users) };
    inline DescribeUserOnlineClientsResponseBody::Users getUsers() { DARABONBA_PTR_GET(users_, DescribeUserOnlineClientsResponseBody::Users) };
    inline DescribeUserOnlineClientsResponseBody& setUsers(const DescribeUserOnlineClientsResponseBody::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeUserOnlineClientsResponseBody& setUsers(DescribeUserOnlineClientsResponseBody::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeUserOnlineClientsResponseBody::Users> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
