// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMEROLEFORWORKLOADIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class AssumeRoleForWorkloadIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeRoleForWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadContextInfo, workloadContextInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeRoleForWorkloadIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumedRoleUser, assumedRoleUser_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadContextInfo, workloadContextInfo_);
    };
    AssumeRoleForWorkloadIdentityResponseBody() = default ;
    AssumeRoleForWorkloadIdentityResponseBody(const AssumeRoleForWorkloadIdentityResponseBody &) = default ;
    AssumeRoleForWorkloadIdentityResponseBody(AssumeRoleForWorkloadIdentityResponseBody &&) = default ;
    AssumeRoleForWorkloadIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeRoleForWorkloadIdentityResponseBody() = default ;
    AssumeRoleForWorkloadIdentityResponseBody& operator=(const AssumeRoleForWorkloadIdentityResponseBody &) = default ;
    AssumeRoleForWorkloadIdentityResponseBody& operator=(AssumeRoleForWorkloadIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkloadContextInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkloadContextInfo& obj) { 
        DARABONBA_PTR_TO_JSON(UserContext, userContext_);
        DARABONBA_PTR_TO_JSON(WorkloadIdentityArn, workloadIdentityArn_);
      };
      friend void from_json(const Darabonba::Json& j, WorkloadContextInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(UserContext, userContext_);
        DARABONBA_PTR_FROM_JSON(WorkloadIdentityArn, workloadIdentityArn_);
      };
      WorkloadContextInfo() = default ;
      WorkloadContextInfo(const WorkloadContextInfo &) = default ;
      WorkloadContextInfo(WorkloadContextInfo &&) = default ;
      WorkloadContextInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkloadContextInfo() = default ;
      WorkloadContextInfo& operator=(const WorkloadContextInfo &) = default ;
      WorkloadContextInfo& operator=(WorkloadContextInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserContext& obj) { 
          DARABONBA_PTR_TO_JSON(JwtClaims, jwtClaims_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserContext& obj) { 
          DARABONBA_PTR_FROM_JSON(JwtClaims, jwtClaims_);
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
        class JwtClaims : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const JwtClaims& obj) { 
            DARABONBA_PTR_TO_JSON(Audiences, audiences_);
            DARABONBA_PTR_TO_JSON(Issuer, issuer_);
            DARABONBA_PTR_TO_JSON(Subject, subject_);
          };
          friend void from_json(const Darabonba::Json& j, JwtClaims& obj) { 
            DARABONBA_PTR_FROM_JSON(Audiences, audiences_);
            DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
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
        && this->issuer_ == nullptr && this->subject_ == nullptr; };
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


          // subject Field Functions 
          bool hasSubject() const { return this->subject_ != nullptr;};
          void deleteSubject() { this->subject_ = nullptr;};
          inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
          inline JwtClaims& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


        protected:
          shared_ptr<string> audiences_ {};
          shared_ptr<string> issuer_ {};
          shared_ptr<string> subject_ {};
        };

        virtual bool empty() const override { return this->jwtClaims_ == nullptr
        && this->userId_ == nullptr; };
        // jwtClaims Field Functions 
        bool hasJwtClaims() const { return this->jwtClaims_ != nullptr;};
        void deleteJwtClaims() { this->jwtClaims_ = nullptr;};
        inline const UserContext::JwtClaims & getJwtClaims() const { DARABONBA_PTR_GET_CONST(jwtClaims_, UserContext::JwtClaims) };
        inline UserContext::JwtClaims getJwtClaims() { DARABONBA_PTR_GET(jwtClaims_, UserContext::JwtClaims) };
        inline UserContext& setJwtClaims(const UserContext::JwtClaims & jwtClaims) { DARABONBA_PTR_SET_VALUE(jwtClaims_, jwtClaims) };
        inline UserContext& setJwtClaims(UserContext::JwtClaims && jwtClaims) { DARABONBA_PTR_SET_RVALUE(jwtClaims_, jwtClaims) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserContext& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<UserContext::JwtClaims> jwtClaims_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->userContext_ == nullptr
        && this->workloadIdentityArn_ == nullptr; };
      // userContext Field Functions 
      bool hasUserContext() const { return this->userContext_ != nullptr;};
      void deleteUserContext() { this->userContext_ = nullptr;};
      inline const WorkloadContextInfo::UserContext & getUserContext() const { DARABONBA_PTR_GET_CONST(userContext_, WorkloadContextInfo::UserContext) };
      inline WorkloadContextInfo::UserContext getUserContext() { DARABONBA_PTR_GET(userContext_, WorkloadContextInfo::UserContext) };
      inline WorkloadContextInfo& setUserContext(const WorkloadContextInfo::UserContext & userContext) { DARABONBA_PTR_SET_VALUE(userContext_, userContext) };
      inline WorkloadContextInfo& setUserContext(WorkloadContextInfo::UserContext && userContext) { DARABONBA_PTR_SET_RVALUE(userContext_, userContext) };


      // workloadIdentityArn Field Functions 
      bool hasWorkloadIdentityArn() const { return this->workloadIdentityArn_ != nullptr;};
      void deleteWorkloadIdentityArn() { this->workloadIdentityArn_ = nullptr;};
      inline string getWorkloadIdentityArn() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityArn_, "") };
      inline WorkloadContextInfo& setWorkloadIdentityArn(string workloadIdentityArn) { DARABONBA_PTR_SET_VALUE(workloadIdentityArn_, workloadIdentityArn) };


    protected:
      shared_ptr<WorkloadContextInfo::UserContext> userContext_ {};
      shared_ptr<string> workloadIdentityArn_ {};
    };

    class Credentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(Expiration, expiration_);
        DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      };
      friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
        DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      };
      Credentials() = default ;
      Credentials(const Credentials &) = default ;
      Credentials(Credentials &&) = default ;
      Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Credentials() = default ;
      Credentials& operator=(const Credentials &) = default ;
      Credentials& operator=(Credentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->expiration_ == nullptr && this->securityToken_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline Credentials& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline Credentials& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // expiration Field Functions 
      bool hasExpiration() const { return this->expiration_ != nullptr;};
      void deleteExpiration() { this->expiration_ = nullptr;};
      inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
      inline Credentials& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


      // securityToken Field Functions 
      bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
      void deleteSecurityToken() { this->securityToken_ = nullptr;};
      inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
      inline Credentials& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    protected:
      shared_ptr<string> accessKeyId_ {};
      shared_ptr<string> accessKeySecret_ {};
      shared_ptr<string> expiration_ {};
      shared_ptr<string> securityToken_ {};
    };

    class AssumedRoleUser : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssumedRoleUser& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AssumedRoleId, assumedRoleId_);
      };
      friend void from_json(const Darabonba::Json& j, AssumedRoleUser& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AssumedRoleId, assumedRoleId_);
      };
      AssumedRoleUser() = default ;
      AssumedRoleUser(const AssumedRoleUser &) = default ;
      AssumedRoleUser(AssumedRoleUser &&) = default ;
      AssumedRoleUser(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssumedRoleUser() = default ;
      AssumedRoleUser& operator=(const AssumedRoleUser &) = default ;
      AssumedRoleUser& operator=(AssumedRoleUser &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->assumedRoleId_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline AssumedRoleUser& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // assumedRoleId Field Functions 
      bool hasAssumedRoleId() const { return this->assumedRoleId_ != nullptr;};
      void deleteAssumedRoleId() { this->assumedRoleId_ = nullptr;};
      inline string getAssumedRoleId() const { DARABONBA_PTR_GET_DEFAULT(assumedRoleId_, "") };
      inline AssumedRoleUser& setAssumedRoleId(string assumedRoleId) { DARABONBA_PTR_SET_VALUE(assumedRoleId_, assumedRoleId) };


    protected:
      shared_ptr<string> arn_ {};
      shared_ptr<string> assumedRoleId_ {};
    };

    virtual bool empty() const override { return this->assumedRoleUser_ == nullptr
        && this->credentials_ == nullptr && this->requestId_ == nullptr && this->workloadContextInfo_ == nullptr; };
    // assumedRoleUser Field Functions 
    bool hasAssumedRoleUser() const { return this->assumedRoleUser_ != nullptr;};
    void deleteAssumedRoleUser() { this->assumedRoleUser_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser & getAssumedRoleUser() const { DARABONBA_PTR_GET_CONST(assumedRoleUser_, AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser getAssumedRoleUser() { DARABONBA_PTR_GET(assumedRoleUser_, AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setAssumedRoleUser(const AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser & assumedRoleUser) { DARABONBA_PTR_SET_VALUE(assumedRoleUser_, assumedRoleUser) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setAssumedRoleUser(AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser && assumedRoleUser) { DARABONBA_PTR_SET_RVALUE(assumedRoleUser_, assumedRoleUser) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBody::Credentials & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, AssumeRoleForWorkloadIdentityResponseBody::Credentials) };
    inline AssumeRoleForWorkloadIdentityResponseBody::Credentials getCredentials() { DARABONBA_PTR_GET(credentials_, AssumeRoleForWorkloadIdentityResponseBody::Credentials) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setCredentials(const AssumeRoleForWorkloadIdentityResponseBody::Credentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setCredentials(AssumeRoleForWorkloadIdentityResponseBody::Credentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeRoleForWorkloadIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadContextInfo Field Functions 
    bool hasWorkloadContextInfo() const { return this->workloadContextInfo_ != nullptr;};
    void deleteWorkloadContextInfo() { this->workloadContextInfo_ = nullptr;};
    inline const AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo & getWorkloadContextInfo() const { DARABONBA_PTR_GET_CONST(workloadContextInfo_, AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo getWorkloadContextInfo() { DARABONBA_PTR_GET(workloadContextInfo_, AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setWorkloadContextInfo(const AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo & workloadContextInfo) { DARABONBA_PTR_SET_VALUE(workloadContextInfo_, workloadContextInfo) };
    inline AssumeRoleForWorkloadIdentityResponseBody& setWorkloadContextInfo(AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo && workloadContextInfo) { DARABONBA_PTR_SET_RVALUE(workloadContextInfo_, workloadContextInfo) };


  protected:
    shared_ptr<AssumeRoleForWorkloadIdentityResponseBody::AssumedRoleUser> assumedRoleUser_ {};
    shared_ptr<AssumeRoleForWorkloadIdentityResponseBody::Credentials> credentials_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<AssumeRoleForWorkloadIdentityResponseBody::WorkloadContextInfo> workloadContextInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
