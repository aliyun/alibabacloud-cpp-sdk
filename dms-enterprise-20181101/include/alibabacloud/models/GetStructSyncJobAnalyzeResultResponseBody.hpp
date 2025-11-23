// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobAnalyzeResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncJobAnalyzeResult, structSyncJobAnalyzeResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobAnalyzeResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncJobAnalyzeResult, structSyncJobAnalyzeResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncJobAnalyzeResultResponseBody() = default ;
    GetStructSyncJobAnalyzeResultResponseBody(const GetStructSyncJobAnalyzeResultResponseBody &) = default ;
    GetStructSyncJobAnalyzeResultResponseBody(GetStructSyncJobAnalyzeResultResponseBody &&) = default ;
    GetStructSyncJobAnalyzeResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobAnalyzeResultResponseBody() = default ;
    GetStructSyncJobAnalyzeResultResponseBody& operator=(const GetStructSyncJobAnalyzeResultResponseBody &) = default ;
    GetStructSyncJobAnalyzeResultResponseBody& operator=(GetStructSyncJobAnalyzeResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->structSyncJobAnalyzeResult_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncJobAnalyzeResult Field Functions 
    bool hasStructSyncJobAnalyzeResult() const { return this->structSyncJobAnalyzeResult_ != nullptr;};
    void deleteStructSyncJobAnalyzeResult() { this->structSyncJobAnalyzeResult_ = nullptr;};
    inline const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult & structSyncJobAnalyzeResult() const { DARABONBA_PTR_GET_CONST(structSyncJobAnalyzeResult_, GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult structSyncJobAnalyzeResult() { DARABONBA_PTR_GET(structSyncJobAnalyzeResult_, GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult & structSyncJobAnalyzeResult) { DARABONBA_PTR_SET_VALUE(structSyncJobAnalyzeResult_, structSyncJobAnalyzeResult) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setStructSyncJobAnalyzeResult(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult && structSyncJobAnalyzeResult) { DARABONBA_PTR_SET_RVALUE(structSyncJobAnalyzeResult_, structSyncJobAnalyzeResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncJobAnalyzeResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The analysis result of the schema synchronization task.
    std::shared_ptr<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult> structSyncJobAnalyzeResult_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
