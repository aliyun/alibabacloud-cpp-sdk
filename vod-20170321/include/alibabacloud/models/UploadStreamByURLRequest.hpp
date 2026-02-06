// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UploadStreamByURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadStreamByURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(FileExtension, fileExtension_);
      DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(UploadMetadata, uploadMetadata_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UploadStreamByURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(FileExtension, fileExtension_);
      DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(UploadMetadata, uploadMetadata_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    UploadStreamByURLRequest() = default ;
    UploadStreamByURLRequest(const UploadStreamByURLRequest &) = default ;
    UploadStreamByURLRequest(UploadStreamByURLRequest &&) = default ;
    UploadStreamByURLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadStreamByURLRequest() = default ;
    UploadStreamByURLRequest& operator=(const UploadStreamByURLRequest &) = default ;
    UploadStreamByURLRequest& operator=(UploadStreamByURLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && this->fileExtension_ == nullptr && this->HDRType_ == nullptr && this->mediaId_ == nullptr && this->streamURL_ == nullptr && this->uploadMetadata_ == nullptr
        && this->userData_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline UploadStreamByURLRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // fileExtension Field Functions 
    bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
    void deleteFileExtension() { this->fileExtension_ = nullptr;};
    inline string getFileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
    inline UploadStreamByURLRequest& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


    // HDRType Field Functions 
    bool hasHDRType() const { return this->HDRType_ != nullptr;};
    void deleteHDRType() { this->HDRType_ = nullptr;};
    inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
    inline UploadStreamByURLRequest& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UploadStreamByURLRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string getStreamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline UploadStreamByURLRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // uploadMetadata Field Functions 
    bool hasUploadMetadata() const { return this->uploadMetadata_ != nullptr;};
    void deleteUploadMetadata() { this->uploadMetadata_ = nullptr;};
    inline string getUploadMetadata() const { DARABONBA_PTR_GET_DEFAULT(uploadMetadata_, "") };
    inline UploadStreamByURLRequest& setUploadMetadata(string uploadMetadata) { DARABONBA_PTR_SET_VALUE(uploadMetadata_, uploadMetadata) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UploadStreamByURLRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The quality of the video stream.
    // 
    // For more information about valid values of this parameter, see [Parameters for media assets](https://help.aliyun.com/document_detail/124671.html).
    // 
    // This parameter is required.
    shared_ptr<string> definition_ {};
    // The file name extension of the transcoded stream.
    // 
    // For more information, see the Supported media file formats section in [Overview](https://help.aliyun.com/document_detail/55396.html).
    // 
    // If you set a value for this parameter, the file name extension specified in StreamURL is overwritten.
    // 
    // >  This parameter is required if you do not specify a file name extension in StreamURL.
    shared_ptr<string> fileExtension_ {};
    // The HDR type of the transcoded stream. Valid values:
    // 
    // *   HDR
    // *   HDR10
    // *   HLG
    // *   DolbyVision
    // *   HDRVivid
    // *   SDR+
    // 
    // > 
    // 
    // *   The HDR type of the transcoded stream is not case-sensitive.
    // 
    // *   You can leave this parameter empty for non-HDR streams.
    shared_ptr<string> HDRType_ {};
    // The media ID in ApsaraVideo VOD.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
    // The URL of the transcoded stream.
    // 
    // If URL authentication is required, you must pass authentication information in this parameter and make sure that the URL can be accessed over the Internet.
    // 
    // This parameter is required.
    shared_ptr<string> streamURL_ {};
    // Metadata information for uploading media files, in JSON string format.
    // 
    // For more information, please refer to the table below for UploadMetadata.
    shared_ptr<string> uploadMetadata_ {};
    // The user-defined parameter. For more information, see the "UserData: specifies the custom configurations for media upload" section of the [Request parameters](https://help.aliyun.com/document_detail/86952.html) topic.
    // 
    // >  The callback configurations you specify for this parameter take effect only after you specify the HTTP callback URL and select specific callback events in the ApsaraVideo VOD console. For more information about how to configure HTTP callback settings in the ApsaraVideo VOD console, see [Configure callback settings](https://help.aliyun.com/document_detail/86071.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
