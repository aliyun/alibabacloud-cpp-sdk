// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPXFSACCESSTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPXFSACCESSTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribePxfsAccessTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePxfsAccessTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePxfsAccessTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePxfsAccessTokensResponseBody() = default ;
    DescribePxfsAccessTokensResponseBody(const DescribePxfsAccessTokensResponseBody &) = default ;
    DescribePxfsAccessTokensResponseBody(DescribePxfsAccessTokensResponseBody &&) = default ;
    DescribePxfsAccessTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePxfsAccessTokensResponseBody() = default ;
    DescribePxfsAccessTokensResponseBody& operator=(const DescribePxfsAccessTokensResponseBody &) = default ;
    DescribePxfsAccessTokensResponseBody& operator=(DescribePxfsAccessTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTokens, accessTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTokens, accessTokens_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccessTokens : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessTokens& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
          DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TokenId, tokenId_);
        };
        friend void from_json(const Darabonba::Json& j, AccessTokens& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
          DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TokenId, tokenId_);
        };
        AccessTokens() = default ;
        AccessTokens(const AccessTokens &) = default ;
        AccessTokens(AccessTokens &&) = default ;
        AccessTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessTokens() = default ;
        AccessTokens& operator=(const AccessTokens &) = default ;
        AccessTokens& operator=(AccessTokens &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->expiresAt_ == nullptr && this->identityName_ == nullptr && this->label_ == nullptr && this->status_ == nullptr && this->tokenId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AccessTokens& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // expiresAt Field Functions 
        bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
        void deleteExpiresAt() { this->expiresAt_ = nullptr;};
        inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
        inline AccessTokens& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


        // identityName Field Functions 
        bool hasIdentityName() const { return this->identityName_ != nullptr;};
        void deleteIdentityName() { this->identityName_ = nullptr;};
        inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
        inline AccessTokens& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline AccessTokens& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AccessTokens& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tokenId Field Functions 
        bool hasTokenId() const { return this->tokenId_ != nullptr;};
        void deleteTokenId() { this->tokenId_ = nullptr;};
        inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
        inline AccessTokens& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


      protected:
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The expiration time.
        shared_ptr<string> expiresAt_ {};
        // The identity name.
        shared_ptr<string> identityName_ {};
        // The token label.
        shared_ptr<string> label_ {};
        // The status.
        shared_ptr<string> status_ {};
        // Token ID
        shared_ptr<string> tokenId_ {};
      };

      virtual bool empty() const override { return this->accessTokens_ == nullptr; };
      // accessTokens Field Functions 
      bool hasAccessTokens() const { return this->accessTokens_ != nullptr;};
      void deleteAccessTokens() { this->accessTokens_ = nullptr;};
      inline const vector<Data::AccessTokens> & getAccessTokens() const { DARABONBA_PTR_GET_CONST(accessTokens_, vector<Data::AccessTokens>) };
      inline vector<Data::AccessTokens> getAccessTokens() { DARABONBA_PTR_GET(accessTokens_, vector<Data::AccessTokens>) };
      inline Data& setAccessTokens(const vector<Data::AccessTokens> & accessTokens) { DARABONBA_PTR_SET_VALUE(accessTokens_, accessTokens) };
      inline Data& setAccessTokens(vector<Data::AccessTokens> && accessTokens) { DARABONBA_PTR_SET_RVALUE(accessTokens_, accessTokens) };


    protected:
      // The list of access tokens.
      shared_ptr<vector<Data::AccessTokens>> accessTokens_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The authorization action.
      shared_ptr<string> authAction_ {};
      // The identity used for authorization in the request.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authorization principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authorization principal.
      shared_ptr<string> authPrincipalType_ {};
      // The diagnostic information.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // NoPermissionType
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribePxfsAccessTokensResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribePxfsAccessTokensResponseBody::AccessDeniedDetail) };
    inline DescribePxfsAccessTokensResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribePxfsAccessTokensResponseBody::AccessDeniedDetail) };
    inline DescribePxfsAccessTokensResponseBody& setAccessDeniedDetail(const DescribePxfsAccessTokensResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribePxfsAccessTokensResponseBody& setAccessDeniedDetail(DescribePxfsAccessTokensResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePxfsAccessTokensResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePxfsAccessTokensResponseBody::Data) };
    inline DescribePxfsAccessTokensResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePxfsAccessTokensResponseBody::Data) };
    inline DescribePxfsAccessTokensResponseBody& setData(const DescribePxfsAccessTokensResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePxfsAccessTokensResponseBody& setData(DescribePxfsAccessTokensResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePxfsAccessTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed reason why access was denied.
    shared_ptr<DescribePxfsAccessTokensResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The response data.
    shared_ptr<DescribePxfsAccessTokensResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
