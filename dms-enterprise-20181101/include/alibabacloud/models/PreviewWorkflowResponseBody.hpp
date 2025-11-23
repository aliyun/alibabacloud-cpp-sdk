// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreviewWorkflowResponseBodyWorkflowDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PreviewWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkflowDetail, workflowDetail_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkflowDetail, workflowDetail_);
    };
    PreviewWorkflowResponseBody() = default ;
    PreviewWorkflowResponseBody(const PreviewWorkflowResponseBody &) = default ;
    PreviewWorkflowResponseBody(PreviewWorkflowResponseBody &&) = default ;
    PreviewWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBody() = default ;
    PreviewWorkflowResponseBody& operator=(const PreviewWorkflowResponseBody &) = default ;
    PreviewWorkflowResponseBody& operator=(PreviewWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workflowDetail_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline PreviewWorkflowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PreviewWorkflowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreviewWorkflowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workflowDetail Field Functions 
    bool hasWorkflowDetail() const { return this->workflowDetail_ != nullptr;};
    void deleteWorkflowDetail() { this->workflowDetail_ = nullptr;};
    inline const PreviewWorkflowResponseBodyWorkflowDetail & workflowDetail() const { DARABONBA_PTR_GET_CONST(workflowDetail_, PreviewWorkflowResponseBodyWorkflowDetail) };
    inline PreviewWorkflowResponseBodyWorkflowDetail workflowDetail() { DARABONBA_PTR_GET(workflowDetail_, PreviewWorkflowResponseBodyWorkflowDetail) };
    inline PreviewWorkflowResponseBody& setWorkflowDetail(const PreviewWorkflowResponseBodyWorkflowDetail & workflowDetail) { DARABONBA_PTR_SET_VALUE(workflowDetail_, workflowDetail) };
    inline PreviewWorkflowResponseBody& setWorkflowDetail(PreviewWorkflowResponseBodyWorkflowDetail && workflowDetail) { DARABONBA_PTR_SET_RVALUE(workflowDetail_, workflowDetail) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The details of the workflow.
    std::shared_ptr<PreviewWorkflowResponseBodyWorkflowDetail> workflowDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
