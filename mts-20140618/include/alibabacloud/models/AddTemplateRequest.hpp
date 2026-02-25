// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    AddTemplateRequest() = default ;
    AddTemplateRequest(const AddTemplateRequest &) = default ;
    AddTemplateRequest(AddTemplateRequest &&) = default ;
    AddTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateRequest() = default ;
    AddTemplateRequest& operator=(const AddTemplateRequest &) = default ;
    AddTemplateRequest& operator=(AddTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->muxConfig_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->transConfig_ == nullptr && this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline string getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, "") };
    inline AddTemplateRequest& setAudio(string audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline AddTemplateRequest& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline string getMuxConfig() const { DARABONBA_PTR_GET_DEFAULT(muxConfig_, "") };
    inline AddTemplateRequest& setMuxConfig(string muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddTemplateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline string getTransConfig() const { DARABONBA_PTR_GET_DEFAULT(transConfig_, "") };
    inline AddTemplateRequest& setTransConfig(string transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string getVideo() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline AddTemplateRequest& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    // The audio stream settings. The value must be a JSON object. For more information, see [Audio](https://help.aliyun.com/document_detail/29253.html).
    // 
    // > If you do not specify this parameter, output files do not contain audio streams. This parameter is required if you want to retain the audio streams.
    shared_ptr<string> audio_ {};
    // The container format. The value must be a JSON object that contains the Format parameter. If you do not specify this parameter, the transcoded media file is in MP4 format by default. This parameter is required if you want to use the transcoding template to generate media files in other formats. For more information, see [Container](https://help.aliyun.com/document_detail/29253.html).
    // 
    // *   Default value: MP4.
    // *   Video transcoding supports the following formats: FLV, MP4, HLS (M3U8 + TS), and MPEG-DASH (MPD + fMP4).
    // 
    // > If the container format is FLV, the video codec cannot be set to H.265.
    // 
    // *   Audio transcoding supports the following formats: MP3, MP4, OGG, FLAC, and M4A.
    // *   Image transcoding supports the GIF and WebP formats.
    // 
    // > 
    // 
    // *   If the container format is GIF, the video codec must be set to GIF.
    // 
    // *   If the container format is WebP, the video codec must be set to WebP.
    shared_ptr<string> container_ {};
    // The segment settings. The value must be a JSON object. For more information, see [MuxConfig](https://help.aliyun.com/document_detail/29253.html). If you do not specify this parameter, media segment files are not generated. This parameter is required if you want to generate media segment files.
    shared_ptr<string> muxConfig_ {};
    // The name of the transcoding template. The name can be up to 128 bytes in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The general transcoding settings. The value must be a JSON object. For more information, see [TransConfig](https://help.aliyun.com/document_detail/29253.html). If you do not specify this parameter, the default settings are used. This parameter is required if the default settings cannot meet your business requirements.
    shared_ptr<string> transConfig_ {};
    // The video stream settings. The value must be a JSON object. For more information, see [Video](https://help.aliyun.com/document_detail/29253.html).
    // 
    // > If you do not specify this parameter, output files do not contain video streams. This parameter is required if you want to retain the video streams.
    shared_ptr<string> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
