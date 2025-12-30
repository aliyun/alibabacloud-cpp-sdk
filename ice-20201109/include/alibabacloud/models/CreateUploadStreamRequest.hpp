// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateUploadStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(FileExtension, fileExtension_);
      DARABONBA_PTR_TO_JSON(HDRType, HDRType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(FileExtension, fileExtension_);
      DARABONBA_PTR_FROM_JSON(HDRType, HDRType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateUploadStreamRequest() = default ;
    CreateUploadStreamRequest(const CreateUploadStreamRequest &) = default ;
    CreateUploadStreamRequest(CreateUploadStreamRequest &&) = default ;
    CreateUploadStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadStreamRequest() = default ;
    CreateUploadStreamRequest& operator=(const CreateUploadStreamRequest &) = default ;
    CreateUploadStreamRequest& operator=(CreateUploadStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && this->fileExtension_ == nullptr && this->HDRType_ == nullptr && this->mediaId_ == nullptr && this->userData_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline CreateUploadStreamRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // fileExtension Field Functions 
    bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
    void deleteFileExtension() { this->fileExtension_ = nullptr;};
    inline string getFileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
    inline CreateUploadStreamRequest& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


    // HDRType Field Functions 
    bool hasHDRType() const { return this->HDRType_ != nullptr;};
    void deleteHDRType() { this->HDRType_ = nullptr;};
    inline string getHDRType() const { DARABONBA_PTR_GET_DEFAULT(HDRType_, "") };
    inline CreateUploadStreamRequest& setHDRType(string HDRType) { DARABONBA_PTR_SET_VALUE(HDRType_, HDRType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateUploadStreamRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateUploadStreamRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


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
    shared_ptr<string> definition_ {};
    // The file name extension of the media stream.
    shared_ptr<string> fileExtension_ {};
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
    shared_ptr<string> HDRType_ {};
    // The ID of the media asset.
    shared_ptr<string> mediaId_ {};
    // The user data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
