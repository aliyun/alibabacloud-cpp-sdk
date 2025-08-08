// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpLogResponseBodyOpLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOpLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OpLogDetails, opLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OpLogDetails, opLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetOpLogResponseBody() = default ;
    GetOpLogResponseBody(const GetOpLogResponseBody &) = default ;
    GetOpLogResponseBody(GetOpLogResponseBody &&) = default ;
    GetOpLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpLogResponseBody() = default ;
    GetOpLogResponseBody& operator=(const GetOpLogResponseBody &) = default ;
    GetOpLogResponseBody& operator=(GetOpLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->opLogDetails_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOpLogResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOpLogResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // opLogDetails Field Functions 
    bool hasOpLogDetails() const { return this->opLogDetails_ != nullptr;};
    void deleteOpLogDetails() { this->opLogDetails_ = nullptr;};
    inline const GetOpLogResponseBodyOpLogDetails & opLogDetails() const { DARABONBA_PTR_GET_CONST(opLogDetails_, GetOpLogResponseBodyOpLogDetails) };
    inline GetOpLogResponseBodyOpLogDetails opLogDetails() { DARABONBA_PTR_GET(opLogDetails_, GetOpLogResponseBodyOpLogDetails) };
    inline GetOpLogResponseBody& setOpLogDetails(const GetOpLogResponseBodyOpLogDetails & opLogDetails) { DARABONBA_PTR_SET_VALUE(opLogDetails_, opLogDetails) };
    inline GetOpLogResponseBody& setOpLogDetails(GetOpLogResponseBodyOpLogDetails && opLogDetails) { DARABONBA_PTR_SET_RVALUE(opLogDetails_, opLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOpLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOpLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetOpLogResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the operation log.
    std::shared_ptr<GetOpLogResponseBodyOpLogDetails> opLogDetails_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of operation logs that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
