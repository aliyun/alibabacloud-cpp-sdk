// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UploadStreamByURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadStreamByURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceURL, sourceURL_);
      DARABONBA_PTR_TO_JSON(StreamJobId, streamJobId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadStreamByURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceURL, sourceURL_);
      DARABONBA_PTR_FROM_JSON(StreamJobId, streamJobId_);
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
    virtual bool empty() const override { return this->fileURL_ == nullptr
        && this->requestId_ == nullptr && this->sourceURL_ == nullptr && this->streamJobId_ == nullptr; };
    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline UploadStreamByURLResponseBody& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadStreamByURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceURL Field Functions 
    bool hasSourceURL() const { return this->sourceURL_ != nullptr;};
    void deleteSourceURL() { this->sourceURL_ = nullptr;};
    inline string getSourceURL() const { DARABONBA_PTR_GET_DEFAULT(sourceURL_, "") };
    inline UploadStreamByURLResponseBody& setSourceURL(string sourceURL) { DARABONBA_PTR_SET_VALUE(sourceURL_, sourceURL) };


    // streamJobId Field Functions 
    bool hasStreamJobId() const { return this->streamJobId_ != nullptr;};
    void deleteStreamJobId() { this->streamJobId_ = nullptr;};
    inline string getStreamJobId() const { DARABONBA_PTR_GET_DEFAULT(streamJobId_, "") };
    inline UploadStreamByURLResponseBody& setStreamJobId(string streamJobId) { DARABONBA_PTR_SET_VALUE(streamJobId_, streamJobId) };


  protected:
    // The URL of the OSS object.
    shared_ptr<string> fileURL_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The URL of the input stream. This parameter is used when you call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
    shared_ptr<string> sourceURL_ {};
    // The ID of the stream upload job. This parameter is used when you call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
    // 
    // In ApsaraVideo VOD, you can upload only one transcoded stream in an upload job. For more information, see the PlayInfo: the playback information about a video stream section in [Basic structures](https://help.aliyun.com/document_detail/52839.html).
    shared_ptr<string> streamJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
