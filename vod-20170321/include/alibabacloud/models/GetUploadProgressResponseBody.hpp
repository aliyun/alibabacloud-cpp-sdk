// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUploadProgressResponseBodyUploadProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadProgress, uploadProgress_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadProgress, uploadProgress_);
    };
    GetUploadProgressResponseBody() = default ;
    GetUploadProgressResponseBody(const GetUploadProgressResponseBody &) = default ;
    GetUploadProgressResponseBody(GetUploadProgressResponseBody &&) = default ;
    GetUploadProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadProgressResponseBody() = default ;
    GetUploadProgressResponseBody& operator=(const GetUploadProgressResponseBody &) = default ;
    GetUploadProgressResponseBody& operator=(GetUploadProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->uploadProgress_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadProgress Field Functions 
    bool hasUploadProgress() const { return this->uploadProgress_ != nullptr;};
    void deleteUploadProgress() { this->uploadProgress_ = nullptr;};
    inline const GetUploadProgressResponseBodyUploadProgress & uploadProgress() const { DARABONBA_PTR_GET_CONST(uploadProgress_, GetUploadProgressResponseBodyUploadProgress) };
    inline GetUploadProgressResponseBodyUploadProgress uploadProgress() { DARABONBA_PTR_GET(uploadProgress_, GetUploadProgressResponseBodyUploadProgress) };
    inline GetUploadProgressResponseBody& setUploadProgress(const GetUploadProgressResponseBodyUploadProgress & uploadProgress) { DARABONBA_PTR_SET_VALUE(uploadProgress_, uploadProgress) };
    inline GetUploadProgressResponseBody& setUploadProgress(GetUploadProgressResponseBodyUploadProgress && uploadProgress) { DARABONBA_PTR_SET_RVALUE(uploadProgress_, uploadProgress) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetUploadProgressResponseBodyUploadProgress> uploadProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
