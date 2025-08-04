// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODYDOWNLOADFILEMODEL_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADCDSFILERESPONSEBODYDOWNLOADFILEMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DownloadCdsFileResponseBodyDownloadFileModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadCdsFileResponseBodyDownloadFileModel& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadType, downloadType_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ExpirationSecond, expirationSecond_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadCdsFileResponseBodyDownloadFileModel& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadType, downloadType_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ExpirationSecond, expirationSecond_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    DownloadCdsFileResponseBodyDownloadFileModel() = default ;
    DownloadCdsFileResponseBodyDownloadFileModel(const DownloadCdsFileResponseBodyDownloadFileModel &) = default ;
    DownloadCdsFileResponseBodyDownloadFileModel(DownloadCdsFileResponseBodyDownloadFileModel &&) = default ;
    DownloadCdsFileResponseBodyDownloadFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadCdsFileResponseBodyDownloadFileModel() = default ;
    DownloadCdsFileResponseBodyDownloadFileModel& operator=(const DownloadCdsFileResponseBodyDownloadFileModel &) = default ;
    DownloadCdsFileResponseBodyDownloadFileModel& operator=(DownloadCdsFileResponseBodyDownloadFileModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadType_ != nullptr
        && this->downloadUrl_ != nullptr && this->expirationSecond_ != nullptr && this->expirationTime_ != nullptr && this->fileId_ != nullptr && this->size_ != nullptr
        && this->streamUrl_ != nullptr; };
    // downloadType Field Functions 
    bool hasDownloadType() const { return this->downloadType_ != nullptr;};
    void deleteDownloadType() { this->downloadType_ = nullptr;};
    inline string downloadType() const { DARABONBA_PTR_GET_DEFAULT(downloadType_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setDownloadType(string downloadType) { DARABONBA_PTR_SET_VALUE(downloadType_, downloadType) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // expirationSecond Field Functions 
    bool hasExpirationSecond() const { return this->expirationSecond_ != nullptr;};
    void deleteExpirationSecond() { this->expirationSecond_ = nullptr;};
    inline string expirationSecond() const { DARABONBA_PTR_GET_DEFAULT(expirationSecond_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setExpirationSecond(string expirationSecond) { DARABONBA_PTR_SET_VALUE(expirationSecond_, expirationSecond) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DownloadCdsFileResponseBodyDownloadFileModel& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> downloadType_ = nullptr;
    // The download URL.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> expirationSecond_ = nullptr;
    // The validity period of the download URL.
    std::shared_ptr<string> expirationTime_ = nullptr;
    // The file ID.
    std::shared_ptr<string> fileId_ = nullptr;
    // The size of the file. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
