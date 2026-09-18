// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWORKSPACEACRRAMAUTHORIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWORKSPACEACRRAMAUTHORIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyWorkspaceAcrRamAuthorizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWorkspaceAcrRamAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWorkspaceAcrRamAuthorizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    VerifyWorkspaceAcrRamAuthorizationResponseBody() = default ;
    VerifyWorkspaceAcrRamAuthorizationResponseBody(const VerifyWorkspaceAcrRamAuthorizationResponseBody &) = default ;
    VerifyWorkspaceAcrRamAuthorizationResponseBody(VerifyWorkspaceAcrRamAuthorizationResponseBody &&) = default ;
    VerifyWorkspaceAcrRamAuthorizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWorkspaceAcrRamAuthorizationResponseBody() = default ;
    VerifyWorkspaceAcrRamAuthorizationResponseBody& operator=(const VerifyWorkspaceAcrRamAuthorizationResponseBody &) = default ;
    VerifyWorkspaceAcrRamAuthorizationResponseBody& operator=(VerifyWorkspaceAcrRamAuthorizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_TO_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_TO_JSON(eligibilityStatus, eligibilityStatus_);
        DARABONBA_PTR_TO_JSON(reasonCode, reasonCode_);
        DARABONBA_PTR_TO_JSON(reasonMessage, reasonMessage_);
        DARABONBA_PTR_TO_JSON(roleName, roleName_);
        DARABONBA_PTR_TO_JSON(roleSource, roleSource_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
        DARABONBA_PTR_FROM_JSON(authorizationStatus, authorizationStatus_);
        DARABONBA_PTR_FROM_JSON(eligibilityStatus, eligibilityStatus_);
        DARABONBA_PTR_FROM_JSON(reasonCode, reasonCode_);
        DARABONBA_PTR_FROM_JSON(reasonMessage, reasonMessage_);
        DARABONBA_PTR_FROM_JSON(roleName, roleName_);
        DARABONBA_PTR_FROM_JSON(roleSource, roleSource_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->authorizationStatus_ == nullptr && this->eligibilityStatus_ == nullptr && this->reasonCode_ == nullptr && this->reasonMessage_ == nullptr && this->roleName_ == nullptr
        && this->roleSource_ == nullptr && this->workspaceId_ == nullptr; };
      // acrInstanceId Field Functions 
      bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
      void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
      inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
      inline Data& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


      // authorizationStatus Field Functions 
      bool hasAuthorizationStatus() const { return this->authorizationStatus_ != nullptr;};
      void deleteAuthorizationStatus() { this->authorizationStatus_ = nullptr;};
      inline string getAuthorizationStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizationStatus_, "") };
      inline Data& setAuthorizationStatus(string authorizationStatus) { DARABONBA_PTR_SET_VALUE(authorizationStatus_, authorizationStatus) };


      // eligibilityStatus Field Functions 
      bool hasEligibilityStatus() const { return this->eligibilityStatus_ != nullptr;};
      void deleteEligibilityStatus() { this->eligibilityStatus_ = nullptr;};
      inline string getEligibilityStatus() const { DARABONBA_PTR_GET_DEFAULT(eligibilityStatus_, "") };
      inline Data& setEligibilityStatus(string eligibilityStatus) { DARABONBA_PTR_SET_VALUE(eligibilityStatus_, eligibilityStatus) };


      // reasonCode Field Functions 
      bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
      void deleteReasonCode() { this->reasonCode_ = nullptr;};
      inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
      inline Data& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


      // reasonMessage Field Functions 
      bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
      void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
      inline string getReasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
      inline Data& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // roleSource Field Functions 
      bool hasRoleSource() const { return this->roleSource_ != nullptr;};
      void deleteRoleSource() { this->roleSource_ = nullptr;};
      inline string getRoleSource() const { DARABONBA_PTR_GET_DEFAULT(roleSource_, "") };
      inline Data& setRoleSource(string roleSource) { DARABONBA_PTR_SET_VALUE(roleSource_, roleSource) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The ACR Enterprise instance ID.
      shared_ptr<string> acrInstanceId_ {};
      // The policy attachment status for the target repository.
      shared_ptr<string> authorizationStatus_ {};
      // The prerequisite status for access. This is not the Secret Ready status.
      shared_ptr<string> eligibilityStatus_ {};
      // The stable reason code for unauthorized or unmet conditions. This field is omitted when no reason exists.
      shared_ptr<string> reasonCode_ {};
      // The human-readable reason. This field is omitted when no reason exists.
      shared_ptr<string> reasonMessage_ {};
      // The shared role name selected by the backend. This value is not editable on the frontend.
      shared_ptr<string> roleName_ {};
      // The source of the shared role. This does not indicate that authorization is complete.
      shared_ptr<string> roleSource_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyWorkspaceAcrRamAuthorizationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyWorkspaceAcrRamAuthorizationResponseBody::Data) };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyWorkspaceAcrRamAuthorizationResponseBody::Data) };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setData(const VerifyWorkspaceAcrRamAuthorizationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setData(VerifyWorkspaceAcrRamAuthorizationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyWorkspaceAcrRamAuthorizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<VerifyWorkspaceAcrRamAuthorizationResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
