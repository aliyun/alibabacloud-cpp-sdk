// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSPECTPROXYACCESSSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSPECTPROXYACCESSSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class InspectProxyAccessSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InspectProxyAccessSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessSecret, accessSecret_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InspectProxyAccessSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessSecret, accessSecret_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InspectProxyAccessSecretResponseBody() = default ;
    InspectProxyAccessSecretResponseBody(const InspectProxyAccessSecretResponseBody &) = default ;
    InspectProxyAccessSecretResponseBody(InspectProxyAccessSecretResponseBody &&) = default ;
    InspectProxyAccessSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InspectProxyAccessSecretResponseBody() = default ;
    InspectProxyAccessSecretResponseBody& operator=(const InspectProxyAccessSecretResponseBody &) = default ;
    InspectProxyAccessSecretResponseBody& operator=(InspectProxyAccessSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessSecret_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // accessSecret Field Functions 
    bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
    void deleteAccessSecret() { this->accessSecret_ = nullptr;};
    inline string accessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
    inline InspectProxyAccessSecretResponseBody& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline InspectProxyAccessSecretResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline InspectProxyAccessSecretResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InspectProxyAccessSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InspectProxyAccessSecretResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The authorization password of the security protection agent.
    std::shared_ptr<string> accessSecret_ = nullptr;
    // The error code returned to the query task.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
