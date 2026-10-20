// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORJWTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORJWTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetWorkloadAccessTokenForJWTResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadAccessTokenForJWTResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserContext, userContext_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadAccessTokenForJWTResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
    };
    GetWorkloadAccessTokenForJWTResponseBody() = default ;
    GetWorkloadAccessTokenForJWTResponseBody(const GetWorkloadAccessTokenForJWTResponseBody &) = default ;
    GetWorkloadAccessTokenForJWTResponseBody(GetWorkloadAccessTokenForJWTResponseBody &&) = default ;
    GetWorkloadAccessTokenForJWTResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadAccessTokenForJWTResponseBody() = default ;
    GetWorkloadAccessTokenForJWTResponseBody& operator=(const GetWorkloadAccessTokenForJWTResponseBody &) = default ;
    GetWorkloadAccessTokenForJWTResponseBody& operator=(GetWorkloadAccessTokenForJWTResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserContext& obj) { 
        DARABONBA_PTR_TO_JSON(JwtClaims, jwtClaims_);
      };
      friend void from_json(const Darabonba::Json& j, UserContext& obj) { 
        DARABONBA_PTR_FROM_JSON(JwtClaims, jwtClaims_);
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
      class JwtClaims : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JwtClaims& obj) { 
          DARABONBA_PTR_TO_JSON(Audiences, audiences_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(JTI, JTI_);
          DARABONBA_PTR_TO_JSON(Subject, subject_);
        };
        friend void from_json(const Darabonba::Json& j, JwtClaims& obj) { 
          DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(JTI, JTI_);
          DARABONBA_PTR_FROM_JSON(Subject, subject_);
        };
        JwtClaims() = default ;
        JwtClaims(const JwtClaims &) = default ;
        JwtClaims(JwtClaims &&) = default ;
        JwtClaims(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JwtClaims() = default ;
        JwtClaims& operator=(const JwtClaims &) = default ;
        JwtClaims& operator=(JwtClaims &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audiences_ == nullptr
        && this->issuer_ == nullptr && this->JTI_ == nullptr && this->subject_ == nullptr; };
        // audiences Field Functions 
        bool hasAudiences() const { return this->audiences_ != nullptr;};
        void deleteAudiences() { this->audiences_ = nullptr;};
        inline string getAudiences() const { DARABONBA_PTR_GET_DEFAULT(audiences_, "") };
        inline JwtClaims& setAudiences(string audiences) { DARABONBA_PTR_SET_VALUE(audiences_, audiences) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline JwtClaims& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // JTI Field Functions 
        bool hasJTI() const { return this->JTI_ != nullptr;};
        void deleteJTI() { this->JTI_ = nullptr;};
        inline string getJTI() const { DARABONBA_PTR_GET_DEFAULT(JTI_, "") };
        inline JwtClaims& setJTI(string JTI) { DARABONBA_PTR_SET_VALUE(JTI_, JTI) };


        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline JwtClaims& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      protected:
        shared_ptr<string> audiences_ {};
        shared_ptr<string> issuer_ {};
        shared_ptr<string> JTI_ {};
        shared_ptr<string> subject_ {};
      };

      virtual bool empty() const override { return this->jwtClaims_ == nullptr; };
      // jwtClaims Field Functions 
      bool hasJwtClaims() const { return this->jwtClaims_ != nullptr;};
      void deleteJwtClaims() { this->jwtClaims_ = nullptr;};
      inline const UserContext::JwtClaims & getJwtClaims() const { DARABONBA_PTR_GET_CONST(jwtClaims_, UserContext::JwtClaims) };
      inline UserContext::JwtClaims getJwtClaims() { DARABONBA_PTR_GET(jwtClaims_, UserContext::JwtClaims) };
      inline UserContext& setJwtClaims(const UserContext::JwtClaims & jwtClaims) { DARABONBA_PTR_SET_VALUE(jwtClaims_, jwtClaims) };
      inline UserContext& setJwtClaims(UserContext::JwtClaims && jwtClaims) { DARABONBA_PTR_SET_RVALUE(jwtClaims_, jwtClaims) };


    protected:
      shared_ptr<UserContext::JwtClaims> jwtClaims_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userContext_ == nullptr && this->workloadAccessToken_ == nullptr && this->workloadIdentityArn_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkloadAccessTokenForJWTResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userContext Field Functions 
    bool hasUserContext() const { return this->userContext_ != nullptr;};
    void deleteUserContext() { this->userContext_ = nullptr;};
    inline const GetWorkloadAccessTokenForJWTResponseBody::UserContext & getUserContext() const { DARABONBA_PTR_GET_CONST(userContext_, GetWorkloadAccessTokenForJWTResponseBody::UserContext) };
    inline GetWorkloadAccessTokenForJWTResponseBody::UserContext getUserContext() { DARABONBA_PTR_GET(userContext_, GetWorkloadAccessTokenForJWTResponseBody::UserContext) };
    inline GetWorkloadAccessTokenForJWTResponseBody& setUserContext(const GetWorkloadAccessTokenForJWTResponseBody::UserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
    inline GetWorkloadAccessTokenForJWTResponseBody& setUserContext(GetWorkloadAccessTokenForJWTResponseBody::UserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string getWorkloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetWorkloadAccessTokenForJWTResponseBody& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


    // workloadIdentityArn Field Functions 
    bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
    void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
    inline string getWorkloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
    inline GetWorkloadAccessTokenForJWTResponseBody& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetWorkloadAccessTokenForJWTResponseBody::UserContext> userContext_ {};
    shared_ptr<string> workloadAccessToken_ {};
    shared_ptr<string> workloadIdentityArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
