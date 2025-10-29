// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATARTCPARAMS_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODYDATARTCPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionResponseBodyDataRtcParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionResponseBodyDataRtcParams& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(avatarUserId, avatarUserId_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(clientUserId, clientUserId_);
      DARABONBA_PTR_TO_JSON(gslb, gslb_);
      DARABONBA_PTR_TO_JSON(nonce, nonce_);
      DARABONBA_PTR_TO_JSON(serverUserId, serverUserId_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionResponseBodyDataRtcParams& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(avatarUserId, avatarUserId_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(clientUserId, clientUserId_);
      DARABONBA_PTR_FROM_JSON(gslb, gslb_);
      DARABONBA_PTR_FROM_JSON(nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(serverUserId, serverUserId_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    CreateChatSessionResponseBodyDataRtcParams() = default ;
    CreateChatSessionResponseBodyDataRtcParams(const CreateChatSessionResponseBodyDataRtcParams &) = default ;
    CreateChatSessionResponseBodyDataRtcParams(CreateChatSessionResponseBodyDataRtcParams &&) = default ;
    CreateChatSessionResponseBodyDataRtcParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionResponseBodyDataRtcParams() = default ;
    CreateChatSessionResponseBodyDataRtcParams& operator=(const CreateChatSessionResponseBodyDataRtcParams &) = default ;
    CreateChatSessionResponseBodyDataRtcParams& operator=(CreateChatSessionResponseBodyDataRtcParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->avatarUserId_ == nullptr && return this->channel_ == nullptr && return this->clientUserId_ == nullptr && return this->gslb_ == nullptr && return this->nonce_ == nullptr
        && return this->serverUserId_ == nullptr && return this->timestamp_ == nullptr && return this->token_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // avatarUserId Field Functions 
    bool hasAvatarUserId() const { return this->avatarUserId_ != nullptr;};
    void deleteAvatarUserId() { this->avatarUserId_ = nullptr;};
    inline string avatarUserId() const { DARABONBA_PTR_GET_DEFAULT(avatarUserId_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setAvatarUserId(string avatarUserId) { DARABONBA_PTR_SET_VALUE(avatarUserId_, avatarUserId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // clientUserId Field Functions 
    bool hasClientUserId() const { return this->clientUserId_ != nullptr;};
    void deleteClientUserId() { this->clientUserId_ = nullptr;};
    inline string clientUserId() const { DARABONBA_PTR_GET_DEFAULT(clientUserId_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setClientUserId(string clientUserId) { DARABONBA_PTR_SET_VALUE(clientUserId_, clientUserId) };


    // gslb Field Functions 
    bool hasGslb() const { return this->gslb_ != nullptr;};
    void deleteGslb() { this->gslb_ = nullptr;};
    inline string gslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setGslb(string gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // serverUserId Field Functions 
    bool hasServerUserId() const { return this->serverUserId_ != nullptr;};
    void deleteServerUserId() { this->serverUserId_ = nullptr;};
    inline string serverUserId() const { DARABONBA_PTR_GET_DEFAULT(serverUserId_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setServerUserId(string serverUserId) { DARABONBA_PTR_SET_VALUE(serverUserId_, serverUserId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline CreateChatSessionResponseBodyDataRtcParams& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateChatSessionResponseBodyDataRtcParams& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> avatarUserId_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> clientUserId_ = nullptr;
    std::shared_ptr<string> gslb_ = nullptr;
    std::shared_ptr<string> nonce_ = nullptr;
    std::shared_ptr<string> serverUserId_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
