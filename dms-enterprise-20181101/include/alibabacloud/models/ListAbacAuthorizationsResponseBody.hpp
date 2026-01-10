// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABACAUTHORIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAbacAuthorizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbacAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationList, authorizationList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbacAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationList, authorizationList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAbacAuthorizationsResponseBody() = default ;
    ListAbacAuthorizationsResponseBody(const ListAbacAuthorizationsResponseBody &) = default ;
    ListAbacAuthorizationsResponseBody(ListAbacAuthorizationsResponseBody &&) = default ;
    ListAbacAuthorizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbacAuthorizationsResponseBody() = default ;
    ListAbacAuthorizationsResponseBody& operator=(const ListAbacAuthorizationsResponseBody &) = default ;
    ListAbacAuthorizationsResponseBody& operator=(ListAbacAuthorizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
        DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
        DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicySource, policySource_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
        DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
        DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
        DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicySource, policySource_);
      };
      AuthorizationList() = default ;
      AuthorizationList(const AuthorizationList &) = default ;
      AuthorizationList(AuthorizationList &&) = default ;
      AuthorizationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationList() = default ;
      AuthorizationList& operator=(const AuthorizationList &) = default ;
      AuthorizationList& operator=(AuthorizationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->identityId_ == nullptr && this->identityName_ == nullptr && this->identityType_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr
        && this->policySource_ == nullptr; };
      // authorizationId Field Functions 
      bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
      void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
      inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
      inline AuthorizationList& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


      // identityId Field Functions 
      bool hasIdentityId() const { return this->identityId_ != nullptr;};
      void deleteIdentityId() { this->identityId_ = nullptr;};
      inline int64_t getIdentityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, 0L) };
      inline AuthorizationList& setIdentityId(int64_t identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


      // identityName Field Functions 
      bool hasIdentityName() const { return this->identityName_ != nullptr;};
      void deleteIdentityName() { this->identityName_ = nullptr;};
      inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
      inline AuthorizationList& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


      // identityType Field Functions 
      bool hasIdentityType() const { return this->identityType_ != nullptr;};
      void deleteIdentityType() { this->identityType_ = nullptr;};
      inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
      inline AuthorizationList& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline AuthorizationList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline AuthorizationList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policySource Field Functions 
      bool hasPolicySource() const { return this->policySource_ != nullptr;};
      void deletePolicySource() { this->policySource_ = nullptr;};
      inline string getPolicySource() const { DARABONBA_PTR_GET_DEFAULT(policySource_, "") };
      inline AuthorizationList& setPolicySource(string policySource) { DARABONBA_PTR_SET_VALUE(policySource_, policySource) };


    protected:
      // The authorization ID.
      shared_ptr<int64_t> authorizationId_ {};
      // The ID of the object to which the policy is attached.
      shared_ptr<int64_t> identityId_ {};
      // The name of the object to which the policy is attached.
      shared_ptr<string> identityName_ {};
      // The type of the object to which the policy is attached.
      shared_ptr<string> identityType_ {};
      // The ID of the policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The source of the policy.
      shared_ptr<string> policySource_ {};
    };

    virtual bool empty() const override { return this->authorizationList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // authorizationList Field Functions 
    bool hasAuthorizationList() const { return this->authorizationList_ != nullptr;};
    void deleteAuthorizationList() { this->authorizationList_ = nullptr;};
    inline const vector<ListAbacAuthorizationsResponseBody::AuthorizationList> & getAuthorizationList() const { DARABONBA_PTR_GET_CONST(authorizationList_, vector<ListAbacAuthorizationsResponseBody::AuthorizationList>) };
    inline vector<ListAbacAuthorizationsResponseBody::AuthorizationList> getAuthorizationList() { DARABONBA_PTR_GET(authorizationList_, vector<ListAbacAuthorizationsResponseBody::AuthorizationList>) };
    inline ListAbacAuthorizationsResponseBody& setAuthorizationList(const vector<ListAbacAuthorizationsResponseBody::AuthorizationList> & authorizationList) { DARABONBA_PTR_SET_VALUE(authorizationList_, authorizationList) };
    inline ListAbacAuthorizationsResponseBody& setAuthorizationList(vector<ListAbacAuthorizationsResponseBody::AuthorizationList> && authorizationList) { DARABONBA_PTR_SET_RVALUE(authorizationList_, authorizationList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAbacAuthorizationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAbacAuthorizationsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAbacAuthorizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAbacAuthorizationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAbacAuthorizationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of users to which the specified policy is attached.
    shared_ptr<vector<ListAbacAuthorizationsResponseBody::AuthorizationList>> authorizationList_ {};
    // The error code that is returned when the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned when the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The number of objects to which the policy is attached.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
