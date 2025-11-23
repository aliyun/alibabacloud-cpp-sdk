// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERUPLOADFILEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserUploadFileJobResponseBodyUploadFileJobDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserUploadFileJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserUploadFileJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UploadFileJobDetail, uploadFileJobDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserUploadFileJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UploadFileJobDetail, uploadFileJobDetail_);
    };
    GetUserUploadFileJobResponseBody() = default ;
    GetUserUploadFileJobResponseBody(const GetUserUploadFileJobResponseBody &) = default ;
    GetUserUploadFileJobResponseBody(GetUserUploadFileJobResponseBody &&) = default ;
    GetUserUploadFileJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserUploadFileJobResponseBody() = default ;
    GetUserUploadFileJobResponseBody& operator=(const GetUserUploadFileJobResponseBody &) = default ;
    GetUserUploadFileJobResponseBody& operator=(GetUserUploadFileJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->uploadFileJobDetail_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetUserUploadFileJobResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetUserUploadFileJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserUploadFileJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserUploadFileJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uploadFileJobDetail Field Functions 
    bool hasUploadFileJobDetail() const { return this->uploadFileJobDetail_ != nullptr;};
    void deleteUploadFileJobDetail() { this->uploadFileJobDetail_ = nullptr;};
    inline const GetUserUploadFileJobResponseBodyUploadFileJobDetail & uploadFileJobDetail() const { DARABONBA_PTR_GET_CONST(uploadFileJobDetail_, GetUserUploadFileJobResponseBodyUploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBodyUploadFileJobDetail uploadFileJobDetail() { DARABONBA_PTR_GET(uploadFileJobDetail_, GetUserUploadFileJobResponseBodyUploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBody& setUploadFileJobDetail(const GetUserUploadFileJobResponseBodyUploadFileJobDetail & uploadFileJobDetail) { DARABONBA_PTR_SET_VALUE(uploadFileJobDetail_, uploadFileJobDetail) };
    inline GetUserUploadFileJobResponseBody& setUploadFileJobDetail(GetUserUploadFileJobResponseBodyUploadFileJobDetail && uploadFileJobDetail) { DARABONBA_PTR_SET_RVALUE(uploadFileJobDetail_, uploadFileJobDetail) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The details of the file upload task.
    std::shared_ptr<GetUserUploadFileJobResponseBodyUploadFileJobDetail> uploadFileJobDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
