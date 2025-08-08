// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWOPTIMIZEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewOptimizeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewOptimizeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OptimizeDetail, optimizeDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewOptimizeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OptimizeDetail, optimizeDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSQLReviewOptimizeDetailResponseBody() = default ;
    GetSQLReviewOptimizeDetailResponseBody(const GetSQLReviewOptimizeDetailResponseBody &) = default ;
    GetSQLReviewOptimizeDetailResponseBody(GetSQLReviewOptimizeDetailResponseBody &&) = default ;
    GetSQLReviewOptimizeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewOptimizeDetailResponseBody() = default ;
    GetSQLReviewOptimizeDetailResponseBody& operator=(const GetSQLReviewOptimizeDetailResponseBody &) = default ;
    GetSQLReviewOptimizeDetailResponseBody& operator=(GetSQLReviewOptimizeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->optimizeDetail_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // optimizeDetail Field Functions 
    bool hasOptimizeDetail() const { return this->optimizeDetail_ != nullptr;};
    void deleteOptimizeDetail() { this->optimizeDetail_ = nullptr;};
    inline const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail & optimizeDetail() const { DARABONBA_PTR_GET_CONST(optimizeDetail_, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail optimizeDetail() { DARABONBA_PTR_GET(optimizeDetail_, GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBody& setOptimizeDetail(const GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail & optimizeDetail) { DARABONBA_PTR_SET_VALUE(optimizeDetail_, optimizeDetail) };
    inline GetSQLReviewOptimizeDetailResponseBody& setOptimizeDetail(GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail && optimizeDetail) { DARABONBA_PTR_SET_RVALUE(optimizeDetail_, optimizeDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSQLReviewOptimizeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSQLReviewOptimizeDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of optimization suggestions for SQL statements.
    std::shared_ptr<GetSQLReviewOptimizeDetailResponseBodyOptimizeDetail> optimizeDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
