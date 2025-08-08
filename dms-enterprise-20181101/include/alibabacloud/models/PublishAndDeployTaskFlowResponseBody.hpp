// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHANDDEPLOYTASKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHANDDEPLOYTASKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PublishAndDeployTaskFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAndDeployTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAndDeployTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PublishAndDeployTaskFlowResponseBody() = default ;
    PublishAndDeployTaskFlowResponseBody(const PublishAndDeployTaskFlowResponseBody &) = default ;
    PublishAndDeployTaskFlowResponseBody(PublishAndDeployTaskFlowResponseBody &&) = default ;
    PublishAndDeployTaskFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAndDeployTaskFlowResponseBody() = default ;
    PublishAndDeployTaskFlowResponseBody& operator=(const PublishAndDeployTaskFlowResponseBody &) = default ;
    PublishAndDeployTaskFlowResponseBody& operator=(PublishAndDeployTaskFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployId_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline int64_t deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
    inline PublishAndDeployTaskFlowResponseBody& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PublishAndDeployTaskFlowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PublishAndDeployTaskFlowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishAndDeployTaskFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PublishAndDeployTaskFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the deployment record.
    std::shared_ptr<int64_t> deployId_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
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
