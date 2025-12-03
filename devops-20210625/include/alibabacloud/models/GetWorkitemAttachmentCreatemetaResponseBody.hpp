// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTCREATEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTCREATEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemAttachmentCreatemetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemAttachmentCreatemetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(uploadInfo, uploadInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemAttachmentCreatemetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(uploadInfo, uploadInfo_);
    };
    GetWorkitemAttachmentCreatemetaResponseBody() = default ;
    GetWorkitemAttachmentCreatemetaResponseBody(const GetWorkitemAttachmentCreatemetaResponseBody &) = default ;
    GetWorkitemAttachmentCreatemetaResponseBody(GetWorkitemAttachmentCreatemetaResponseBody &&) = default ;
    GetWorkitemAttachmentCreatemetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemAttachmentCreatemetaResponseBody() = default ;
    GetWorkitemAttachmentCreatemetaResponseBody& operator=(const GetWorkitemAttachmentCreatemetaResponseBody &) = default ;
    GetWorkitemAttachmentCreatemetaResponseBody& operator=(GetWorkitemAttachmentCreatemetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->uploadInfo_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // uploadInfo Field Functions 
    bool hasUploadInfo() const { return this->uploadInfo_ != nullptr;};
    void deleteUploadInfo() { this->uploadInfo_ = nullptr;};
    inline const GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo & uploadInfo() const { DARABONBA_PTR_GET_CONST(uploadInfo_, GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo) };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo uploadInfo() { DARABONBA_PTR_GET(uploadInfo_, GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo) };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setUploadInfo(const GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo & uploadInfo) { DARABONBA_PTR_SET_VALUE(uploadInfo_, uploadInfo) };
    inline GetWorkitemAttachmentCreatemetaResponseBody& setUploadInfo(GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo && uploadInfo) { DARABONBA_PTR_SET_RVALUE(uploadInfo_, uploadInfo) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo> uploadInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
