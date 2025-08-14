// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UploadStreamByURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadStreamByURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceURL, sourceURL_);
    };
    friend void from_json(const Darabonba::Json& j, UploadStreamByURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceURL, sourceURL_);
    };
    UploadStreamByURLResponseBody() = default ;
    UploadStreamByURLResponseBody(const UploadStreamByURLResponseBody &) = default ;
    UploadStreamByURLResponseBody(UploadStreamByURLResponseBody &&) = default ;
    UploadStreamByURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadStreamByURLResponseBody() = default ;
    UploadStreamByURLResponseBody& operator=(const UploadStreamByURLResponseBody &) = default ;
    UploadStreamByURLResponseBody& operator=(UploadStreamByURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileURL_ != nullptr
        && this->jobId_ != nullptr && this->mediaId_ != nullptr && this->requestId_ != nullptr && this->sourceURL_ != nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline UploadStreamByURLResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UploadStreamByURLResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UploadStreamByURLResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadStreamByURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceURL Field Functions 
    bool hasSourceURL() const { return this->sourceURL_ != nullptr;};
    void deleteSourceURL() { this->sourceURL_ = nullptr;};
    inline string sourceURL() const { DARABONBA_PTR_GET_DEFAULT(sourceURL_, "") };
    inline UploadStreamByURLResponseBody& setSourceURL(string sourceURL) { DARABONBA_PTR_SET_VALUE(sourceURL_, sourceURL) };


  protected:
    // The OSS URL of the file.
    std::shared_ptr<string> fileURL_ = nullptr;
    // The ID of the upload job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The URL of the source file that is uploaded in the upload job.
    std::shared_ptr<string> sourceURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
