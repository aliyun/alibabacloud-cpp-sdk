// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTPRECHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataExportPreCheckDetailResponseBodyPreCheckResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportPreCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportPreCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataExportPreCheckDetailResponseBody() = default ;
    GetDataExportPreCheckDetailResponseBody(const GetDataExportPreCheckDetailResponseBody &) = default ;
    GetDataExportPreCheckDetailResponseBody(GetDataExportPreCheckDetailResponseBody &&) = default ;
    GetDataExportPreCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportPreCheckDetailResponseBody() = default ;
    GetDataExportPreCheckDetailResponseBody& operator=(const GetDataExportPreCheckDetailResponseBody &) = default ;
    GetDataExportPreCheckDetailResponseBody& operator=(GetDataExportPreCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->preCheckResult_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline const GetDataExportPreCheckDetailResponseBodyPreCheckResult & preCheckResult() const { DARABONBA_PTR_GET_CONST(preCheckResult_, GetDataExportPreCheckDetailResponseBodyPreCheckResult) };
    inline GetDataExportPreCheckDetailResponseBodyPreCheckResult preCheckResult() { DARABONBA_PTR_GET(preCheckResult_, GetDataExportPreCheckDetailResponseBodyPreCheckResult) };
    inline GetDataExportPreCheckDetailResponseBody& setPreCheckResult(const GetDataExportPreCheckDetailResponseBodyPreCheckResult & preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };
    inline GetDataExportPreCheckDetailResponseBody& setPreCheckResult(GetDataExportPreCheckDetailResponseBodyPreCheckResult && preCheckResult) { DARABONBA_PTR_SET_RVALUE(preCheckResult_, preCheckResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataExportPreCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataExportPreCheckDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates the result of the precheck task.
    std::shared_ptr<GetDataExportPreCheckDetailResponseBodyPreCheckResult> preCheckResult_ = nullptr;
    // The ID of the request.
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
