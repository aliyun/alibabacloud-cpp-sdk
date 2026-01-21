// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserARNs, userARNs_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserARNs, userARNs_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListVpcEndpointServiceUsersResponseBody() = default ;
    ListVpcEndpointServiceUsersResponseBody(const ListVpcEndpointServiceUsersResponseBody &) = default ;
    ListVpcEndpointServiceUsersResponseBody(ListVpcEndpointServiceUsersResponseBody &&) = default ;
    ListVpcEndpointServiceUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceUsersResponseBody() = default ;
    ListVpcEndpointServiceUsersResponseBody& operator=(const ListVpcEndpointServiceUsersResponseBody &) = default ;
    ListVpcEndpointServiceUsersResponseBody& operator=(ListVpcEndpointServiceUsersResponseBody &&) = default ;
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
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Users& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The ID of the Alibaba Cloud account in the whitelist of the endpoint service.
      shared_ptr<int64_t> userId_ {};
    };

    class UserARNs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserARNs& obj) { 
        DARABONBA_PTR_TO_JSON(UserARN, userARN_);
      };
      friend void from_json(const Darabonba::Json& j, UserARNs& obj) { 
        DARABONBA_PTR_FROM_JSON(UserARN, userARN_);
      };
      UserARNs() = default ;
      UserARNs(const UserARNs &) = default ;
      UserARNs(UserARNs &&) = default ;
      UserARNs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserARNs() = default ;
      UserARNs& operator=(const UserARNs &) = default ;
      UserARNs& operator=(UserARNs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userARN_ == nullptr; };
      // userARN Field Functions 
      bool hasUserARN() const { return this->userARN_ != nullptr;};
      void deleteUserARN() { this->userARN_ = nullptr;};
      inline string getUserARN() const { DARABONBA_PTR_GET_DEFAULT(userARN_, "") };
      inline UserARNs& setUserARN(string userARN) { DARABONBA_PTR_SET_VALUE(userARN_, userARN) };


    protected:
      // The whitelist in the format of ARN.
      shared_ptr<string> userARN_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userARNs_ == nullptr && this->users_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServiceUsersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userARNs Field Functions 
    bool hasUserARNs() const { return this->userARNs_ != nullptr;};
    void deleteUserARNs() { this->userARNs_ = nullptr;};
    inline const vector<ListVpcEndpointServiceUsersResponseBody::UserARNs> & getUserARNs() const { DARABONBA_PTR_GET_CONST(userARNs_, vector<ListVpcEndpointServiceUsersResponseBody::UserARNs>) };
    inline vector<ListVpcEndpointServiceUsersResponseBody::UserARNs> getUserARNs() { DARABONBA_PTR_GET(userARNs_, vector<ListVpcEndpointServiceUsersResponseBody::UserARNs>) };
    inline ListVpcEndpointServiceUsersResponseBody& setUserARNs(const vector<ListVpcEndpointServiceUsersResponseBody::UserARNs> & userARNs) { DARABONBA_PTR_SET_VALUE(userARNs_, userARNs) };
    inline ListVpcEndpointServiceUsersResponseBody& setUserARNs(vector<ListVpcEndpointServiceUsersResponseBody::UserARNs> && userARNs) { DARABONBA_PTR_SET_RVALUE(userARNs_, userARNs) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListVpcEndpointServiceUsersResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListVpcEndpointServiceUsersResponseBody::Users>) };
    inline vector<ListVpcEndpointServiceUsersResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListVpcEndpointServiceUsersResponseBody::Users>) };
    inline ListVpcEndpointServiceUsersResponseBody& setUsers(const vector<ListVpcEndpointServiceUsersResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListVpcEndpointServiceUsersResponseBody& setUsers(vector<ListVpcEndpointServiceUsersResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The whitelists in the format of Aliyun Resource Name (ARN).
    shared_ptr<vector<ListVpcEndpointServiceUsersResponseBody::UserARNs>> userARNs_ {};
    // The Alibaba Cloud accounts in the whitelist of the endpoint service.
    shared_ptr<vector<ListVpcEndpointServiceUsersResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
