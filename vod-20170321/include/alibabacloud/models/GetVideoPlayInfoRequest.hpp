// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ClientTS, clientTS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlaySign, playSign_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignVersion, signVersion_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ClientTS, clientTS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlaySign, playSign_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignVersion, signVersion_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetVideoPlayInfoRequest() = default ;
    GetVideoPlayInfoRequest(const GetVideoPlayInfoRequest &) = default ;
    GetVideoPlayInfoRequest(GetVideoPlayInfoRequest &&) = default ;
    GetVideoPlayInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayInfoRequest() = default ;
    GetVideoPlayInfoRequest& operator=(const GetVideoPlayInfoRequest &) = default ;
    GetVideoPlayInfoRequest& operator=(GetVideoPlayInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->clientTS_ != nullptr && this->clientVersion_ != nullptr && this->ownerId_ != nullptr && this->playSign_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->signVersion_ != nullptr && this->videoId_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetVideoPlayInfoRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // clientTS Field Functions 
    bool hasClientTS() const { return this->clientTS_ != nullptr;};
    void deleteClientTS() { this->clientTS_ = nullptr;};
    inline int64_t clientTS() const { DARABONBA_PTR_GET_DEFAULT(clientTS_, 0L) };
    inline GetVideoPlayInfoRequest& setClientTS(int64_t clientTS) { DARABONBA_PTR_SET_VALUE(clientTS_, clientTS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetVideoPlayInfoRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetVideoPlayInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // playSign Field Functions 
    bool hasPlaySign() const { return this->playSign_ != nullptr;};
    void deletePlaySign() { this->playSign_ = nullptr;};
    inline string playSign() const { DARABONBA_PTR_GET_DEFAULT(playSign_, "") };
    inline GetVideoPlayInfoRequest& setPlaySign(string playSign) { DARABONBA_PTR_SET_VALUE(playSign_, playSign) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetVideoPlayInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetVideoPlayInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signVersion Field Functions 
    bool hasSignVersion() const { return this->signVersion_ != nullptr;};
    void deleteSignVersion() { this->signVersion_ = nullptr;};
    inline string signVersion() const { DARABONBA_PTR_GET_DEFAULT(signVersion_, "") };
    inline GetVideoPlayInfoRequest& setSignVersion(string signVersion) { DARABONBA_PTR_SET_VALUE(signVersion_, signVersion) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetVideoPlayInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> clientTS_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientVersion_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> playSign_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
