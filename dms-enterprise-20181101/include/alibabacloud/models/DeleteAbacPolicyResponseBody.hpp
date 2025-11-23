// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEABACPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEABACPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteAbacPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAbacPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeletePolicyResult, deletePolicyResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAbacPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletePolicyResult, deletePolicyResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteAbacPolicyResponseBody() = default ;
    DeleteAbacPolicyResponseBody(const DeleteAbacPolicyResponseBody &) = default ;
    DeleteAbacPolicyResponseBody(DeleteAbacPolicyResponseBody &&) = default ;
    DeleteAbacPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAbacPolicyResponseBody() = default ;
    DeleteAbacPolicyResponseBody& operator=(const DeleteAbacPolicyResponseBody &) = default ;
    DeleteAbacPolicyResponseBody& operator=(DeleteAbacPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletePolicyResult_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // deletePolicyResult Field Functions 
    bool hasDeletePolicyResult() const { return this->deletePolicyResult_ != nullptr;};
    void deleteDeletePolicyResult() { this->deletePolicyResult_ = nullptr;};
    inline bool deletePolicyResult() const { DARABONBA_PTR_GET_DEFAULT(deletePolicyResult_, false) };
    inline DeleteAbacPolicyResponseBody& setDeletePolicyResult(bool deletePolicyResult) { DARABONBA_PTR_SET_VALUE(deletePolicyResult_, deletePolicyResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteAbacPolicyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DeleteAbacPolicyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAbacPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteAbacPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the policy is deleted.
    std::shared_ptr<bool> deletePolicyResult_ = nullptr;
    // The error code that is returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
