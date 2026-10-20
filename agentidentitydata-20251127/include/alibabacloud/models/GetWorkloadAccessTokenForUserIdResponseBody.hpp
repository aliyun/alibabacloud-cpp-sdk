// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetWorkloadAccessTokenForUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadAccessTokenForUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadAccessTokenForUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    GetWorkloadAccessTokenForUserIdResponseBody() = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(const GetWorkloadAccessTokenForUserIdResponseBody &) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(GetWorkloadAccessTokenForUserIdResponseBody &&) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadAccessTokenForUserIdResponseBody() = default ;
    GetWorkloadAccessTokenForUserIdResponseBody& operator=(const GetWorkloadAccessTokenForUserIdResponseBody &) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody& operator=(GetWorkloadAccessTokenForUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserContext& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserContext& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserContext() = default ;
      UserContext(const UserContext &) = default ;
      UserContext(UserContext &&) = default ;
      UserContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserContext() = default ;
      UserContext& operator=(const UserContext &) = default ;
      UserContext& operator=(UserContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userId_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserContext& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userContext_ == nullptr && this->workloadAccessToken_ == nullptr && this->workloadIdentityArn_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const GetWorkloadAccessTokenForUserIdResponseBody::UserContext & getUserContext() const { DARABONBA_PTR_GET_CONST(userContext_, GetWorkloadAccessTokenForUserIdResponseBody::UserContext) };
    inline GetWorkloadAccessTokenForUserIdResponseBody::UserContext getUserContext() { DARABONBA_PTR_GET(userContext_, GetWorkloadAccessTokenForUserIdResponseBody::UserContext) };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setUserContext(const GetWorkloadAccessTokenForUserIdResponseBody::UserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setUserContext(GetWorkloadAccessTokenForUserIdResponseBody::UserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string getWorkloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


    // workloadIdentityArn Field Functions 
    bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
    void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
    inline string getWorkloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetWorkloadAccessTokenForUserIdResponseBody::UserContext> userContext_ {};
    shared_ptr<string> workloadAccessToken_ {};
    shared_ptr<string> workloadIdentityArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
