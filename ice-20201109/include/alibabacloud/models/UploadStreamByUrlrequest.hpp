// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADSTREAMBYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
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
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, UploadStreamByURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(FileExtension, fileExtension_);
      DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
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
    virtual bool empty() const override { this->definition_ != nullptr
        && this->fileExtension_ != nullptr && this->HDRType_ != nullptr && this->mediaId_ != nullptr && this->streamURL_ != nullptr && this->userData_ != nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline UploadStreamByURLRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // fileExtension Field Functions 
    bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
    void deleteFileExtension() { this->fileExtension_ = nullptr;};
    inline string fileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
    inline UploadStreamByURLRequest& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


    // HDRType Field Functions 
    bool hasHDRType() const { return this->HDRType_ != nullptr;};
    void deleteHDRType() { this->HDRType_ = nullptr;};
    inline string HDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
    inline UploadStreamByURLRequest& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UploadStreamByURLRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string streamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline UploadStreamByURLRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UploadStreamByURLRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The quality of the media stream. Valid values:
    // 
    // *   FD: low definition.
    // *   LD: standard definition.
    // *   SD: high definition.
    // *   HD: ultra-high definition.
    // *   OD: original quality.
    // *   2K: 2K resolution.
    // *   4K: 4K resolution.
    // *   SQ: standard sound quality.
    // *   HQ: high sound quality.
    std::shared_ptr<string> definition_ = nullptr;
    // The file name extension of the media stream.
    std::shared_ptr<string> fileExtension_ = nullptr;
    // The high dynamic range (HDR) format of the transcoded stream. Valid values:
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
    // *   The value is not case-sensitive,
    // 
    // *   You can leave this parameter empty for non-HDR streams.
    std::shared_ptr<string> HDRType_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the transcoded stream file.
    // 
    // If the URL of the transcoded stream requires authentication, you must specify the authentication parameters in the stream URL and make sure that the URL can be accessed over the Internet.
    std::shared_ptr<string> streamURL_ = nullptr;
    // The user data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
