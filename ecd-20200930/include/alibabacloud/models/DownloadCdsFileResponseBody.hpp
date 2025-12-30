// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class DownloadFileModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DownloadFileModel& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadType, downloadType_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ExpirationSecond, expirationSecond_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DownloadFileModel& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadType, downloadType_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ExpirationSecond, expirationSecond_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      };
      DownloadFileModel() = default ;
      DownloadFileModel(const DownloadFileModel &) = default ;
      DownloadFileModel(DownloadFileModel &&) = default ;
      DownloadFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DownloadFileModel() = default ;
      DownloadFileModel& operator=(const DownloadFileModel &) = default ;
      DownloadFileModel& operator=(DownloadFileModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadType_ == nullptr
        && this->downloadUrl_ == nullptr && this->expirationSecond_ == nullptr && this->expirationTime_ == nullptr && this->fileId_ == nullptr && this->size_ == nullptr
        && this->streamUrl_ == nullptr; };
      // downloadType Field Functions 
      bool hasDownloadType() const { return this->downloadType_ != nullptr;};
      void deleteDownloadType() { this->downloadType_ = nullptr;};
      inline string getDownloadType() const { DARABONBA_PTR_GET_DEFAULT(downloadType_, "") };
      inline DownloadFileModel& setDownloadType(string downloadType) { DARABONBA_PTR_SET_VALUE(downloadType_, downloadType) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline DownloadFileModel& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // expirationSecond Field Functions 
      bool hasExpirationSecond() const { return this->expirationSecond_ != nullptr;};
      void deleteExpirationSecond() { this->expirationSecond_ = nullptr;};
      inline string getExpirationSecond() const { DARABONBA_PTR_GET_DEFAULT(expirationSecond_, "") };
      inline DownloadFileModel& setExpirationSecond(string expirationSecond) { DARABONBA_PTR_SET_VALUE(expirationSecond_, expirationSecond) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline DownloadFileModel& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline DownloadFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline DownloadFileModel& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // streamUrl Field Functions 
      bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
      void deleteStreamUrl() { this->streamUrl_ = nullptr;};
      inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
      inline DownloadFileModel& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


    protected:
      // This parameter is deprecated.
      shared_ptr<string> downloadType_ {};
      // The download URL.
      shared_ptr<string> downloadUrl_ {};
      // This parameter is deprecated.
      shared_ptr<string> expirationSecond_ {};
      // The validity period of the download URL.
      shared_ptr<string> expirationTime_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // The size of the file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // This parameter is deprecated.
      shared_ptr<string> streamUrl_ {};
    };

    virtual bool empty() const override { return this->downloadFileModel_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // downloadFileModel Field Functions 
    bool hasDownloadFileModel() const { return this->downloadFileModel_ != nullptr;};
    void deleteDownloadFileModel() { this->downloadFileModel_ = nullptr;};
    inline const DownloadCdsFileResponseBody::DownloadFileModel & getDownloadFileModel() const { DARABONBA_PTR_GET_CONST(downloadFileModel_, DownloadCdsFileResponseBody::DownloadFileModel) };
    inline DownloadCdsFileResponseBody::DownloadFileModel getDownloadFileModel() { DARABONBA_PTR_GET(downloadFileModel_, DownloadCdsFileResponseBody::DownloadFileModel) };
    inline DownloadCdsFileResponseBody& setDownloadFileModel(const DownloadCdsFileResponseBody::DownloadFileModel & downloadFileModel) { DARABONBA_PTR_SET_VALUE(downloadFileModel_, downloadFileModel) };
    inline DownloadCdsFileResponseBody& setDownloadFileModel(DownloadCdsFileResponseBody::DownloadFileModel && downloadFileModel) { DARABONBA_PTR_SET_RVALUE(downloadFileModel_, downloadFileModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DownloadCdsFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DownloadCdsFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The download URL of the file.
    shared_ptr<DownloadCdsFileResponseBody::DownloadFileModel> downloadFileModel_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
