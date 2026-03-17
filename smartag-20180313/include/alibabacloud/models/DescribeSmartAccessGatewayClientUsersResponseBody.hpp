// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYCLIENTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTACCESSGATEWAYCLIENTUSERSRESPONSEBODY_HPP_
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
  class DescribeSmartAccessGatewayClientUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartAccessGatewayClientUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartAccessGatewayClientUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeSmartAccessGatewayClientUsersResponseBody() = default ;
    DescribeSmartAccessGatewayClientUsersResponseBody(const DescribeSmartAccessGatewayClientUsersResponseBody &) = default ;
    DescribeSmartAccessGatewayClientUsersResponseBody(DescribeSmartAccessGatewayClientUsersResponseBody &&) = default ;
    DescribeSmartAccessGatewayClientUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartAccessGatewayClientUsersResponseBody() = default ;
    DescribeSmartAccessGatewayClientUsersResponseBody& operator=(const DescribeSmartAccessGatewayClientUsersResponseBody &) = default ;
    DescribeSmartAccessGatewayClientUsersResponseBody& operator=(DescribeSmartAccessGatewayClientUsersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AccelerateBandwidth, accelerateBandwidth_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(IsStaticIp, isStaticIp_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(UserMail, userMail_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(AccelerateBandwidth, accelerateBandwidth_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(IsStaticIp, isStaticIp_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        virtual bool empty() const override { return this->accelerateBandwidth_ == nullptr
        && this->bandwidth_ == nullptr && this->clientIp_ == nullptr && this->isStaticIp_ == nullptr && this->state_ == nullptr && this->userMail_ == nullptr
        && this->userName_ == nullptr; };
        // accelerateBandwidth Field Functions 
        bool hasAccelerateBandwidth() const { return this->accelerateBandwidth_ != nullptr;};
        void deleteAccelerateBandwidth() { this->accelerateBandwidth_ = nullptr;};
        inline int64_t getAccelerateBandwidth() const { DARABONBA_PTR_GET_DEFAULT(accelerateBandwidth_, 0L) };
        inline User& setAccelerateBandwidth(int64_t accelerateBandwidth) { DARABONBA_PTR_SET_VALUE(accelerateBandwidth_, accelerateBandwidth) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline User& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline User& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // isStaticIp Field Functions 
        bool hasIsStaticIp() const { return this->isStaticIp_ != nullptr;};
        void deleteIsStaticIp() { this->isStaticIp_ = nullptr;};
        inline int64_t getIsStaticIp() const { DARABONBA_PTR_GET_DEFAULT(isStaticIp_, 0L) };
        inline User& setIsStaticIp(int64_t isStaticIp) { DARABONBA_PTR_SET_VALUE(isStaticIp_, isStaticIp) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
        inline User& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // userMail Field Functions 
        bool hasUserMail() const { return this->userMail_ != nullptr;};
        void deleteUserMail() { this->userMail_ = nullptr;};
        inline string getUserMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
        inline User& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<int64_t> accelerateBandwidth_ {};
        shared_ptr<int32_t> bandwidth_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<int64_t> isStaticIp_ {};
        shared_ptr<int32_t> state_ {};
        shared_ptr<string> userMail_ {};
        shared_ptr<string> userName_ {};
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

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const DescribeSmartAccessGatewayClientUsersResponseBody::Users & getUsers() const { DARABONBA_PTR_GET_CONST(users_, DescribeSmartAccessGatewayClientUsersResponseBody::Users) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody::Users getUsers() { DARABONBA_PTR_GET(users_, DescribeSmartAccessGatewayClientUsersResponseBody::Users) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setUsers(const DescribeSmartAccessGatewayClientUsersResponseBody::Users & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeSmartAccessGatewayClientUsersResponseBody& setUsers(DescribeSmartAccessGatewayClientUsersResponseBody::Users && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<DescribeSmartAccessGatewayClientUsersResponseBody::Users> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
