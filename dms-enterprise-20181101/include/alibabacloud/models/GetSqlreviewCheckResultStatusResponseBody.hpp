// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResultStatus, checkResultStatus_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSQLReviewCheckResultStatusResponseBody() = default ;
    GetSQLReviewCheckResultStatusResponseBody(const GetSQLReviewCheckResultStatusResponseBody &) = default ;
    GetSQLReviewCheckResultStatusResponseBody(GetSQLReviewCheckResultStatusResponseBody &&) = default ;
    GetSQLReviewCheckResultStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusResponseBody() = default ;
    GetSQLReviewCheckResultStatusResponseBody& operator=(const GetSQLReviewCheckResultStatusResponseBody &) = default ;
    GetSQLReviewCheckResultStatusResponseBody& operator=(GetSQLReviewCheckResultStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkResultStatus_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // checkResultStatus Field Functions 
    bool hasCheckResultStatus() const { return this->checkResultStatus_ != nullptr;};
    void deleteCheckResultStatus() { this->checkResultStatus_ = nullptr;};
    inline const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus & checkResultStatus() const { DARABONBA_PTR_GET_CONST(checkResultStatus_, GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus checkResultStatus() { DARABONBA_PTR_GET(checkResultStatus_, GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBody& setCheckResultStatus(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus & checkResultStatus) { DARABONBA_PTR_SET_VALUE(checkResultStatus_, checkResultStatus) };
    inline GetSQLReviewCheckResultStatusResponseBody& setCheckResultStatus(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus && checkResultStatus) { DARABONBA_PTR_SET_RVALUE(checkResultStatus_, checkResultStatus) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSQLReviewCheckResultStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSQLReviewCheckResultStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the SQL review.
    std::shared_ptr<GetSQLReviewCheckResultStatusResponseBodyCheckResultStatus> checkResultStatus_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
