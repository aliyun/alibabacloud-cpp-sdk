// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadCdsFileResponseBodyDownloadFileModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DownloadCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadFileModel, downloadFileModel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadFileModel, downloadFileModel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DownloadCdsFileResponseBody() = default ;
    DownloadCdsFileResponseBody(const DownloadCdsFileResponseBody &) = default ;
    DownloadCdsFileResponseBody(DownloadCdsFileResponseBody &&) = default ;
    DownloadCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadCdsFileResponseBody() = default ;
    DownloadCdsFileResponseBody& operator=(const DownloadCdsFileResponseBody &) = default ;
    DownloadCdsFileResponseBody& operator=(DownloadCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadFileModel_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // downloadFileModel Field Functions 
    bool hasDownloadFileModel() const { return this->downloadFileModel_ != nullptr;};
    void deleteDownloadFileModel() { this->downloadFileModel_ = nullptr;};
    inline const DownloadCdsFileResponseBodyDownloadFileModel & downloadFileModel() const { DARABONBA_PTR_GET_CONST(downloadFileModel_, DownloadCdsFileResponseBodyDownloadFileModel) };
    inline DownloadCdsFileResponseBodyDownloadFileModel downloadFileModel() { DARABONBA_PTR_GET(downloadFileModel_, DownloadCdsFileResponseBodyDownloadFileModel) };
    inline DownloadCdsFileResponseBody& setDownloadFileModel(const DownloadCdsFileResponseBodyDownloadFileModel & downloadFileModel) { DARABONBA_PTR_SET_VALUE(downloadFileModel_, downloadFileModel) };
    inline DownloadCdsFileResponseBody& setDownloadFileModel(DownloadCdsFileResponseBodyDownloadFileModel && downloadFileModel) { DARABONBA_PTR_SET_RVALUE(downloadFileModel_, downloadFileModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DownloadCdsFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DownloadCdsFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the file.
    std::shared_ptr<DownloadCdsFileResponseBodyDownloadFileModel> downloadFileModel_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
