// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateChatSessionResponseBody() = default ;
    CreateChatSessionResponseBody(const CreateChatSessionResponseBody &) = default ;
    CreateChatSessionResponseBody(CreateChatSessionResponseBody &&) = default ;
    CreateChatSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatSessionResponseBody() = default ;
    CreateChatSessionResponseBody& operator=(const CreateChatSessionResponseBody &) = default ;
    CreateChatSessionResponseBody& operator=(CreateChatSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(avatarAssets, avatarAssets_);
        DARABONBA_PTR_TO_JSON(rtcParams, rtcParams_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(avatarAssets, avatarAssets_);
        DARABONBA_PTR_FROM_JSON(rtcParams, rtcParams_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RtcParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RtcParams& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RtcParams& obj) { 
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
        RtcParams() = default ;
        RtcParams(const RtcParams &) = default ;
        RtcParams(RtcParams &&) = default ;
        RtcParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RtcParams() = default ;
        RtcParams& operator=(const RtcParams &) = default ;
        RtcParams& operator=(RtcParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->avatarUserId_ == nullptr && this->channel_ == nullptr && this->clientUserId_ == nullptr && this->gslb_ == nullptr && this->nonce_ == nullptr
        && this->serverUserId_ == nullptr && this->timestamp_ == nullptr && this->token_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline RtcParams& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // avatarUserId Field Functions 
        bool hasAvatarUserId() const { return this->avatarUserId_ != nullptr;};
        void deleteAvatarUserId() { this->avatarUserId_ = nullptr;};
        inline string getAvatarUserId() const { DARABONBA_PTR_GET_DEFAULT(avatarUserId_, "") };
        inline RtcParams& setAvatarUserId(string avatarUserId) { DARABONBA_PTR_SET_VALUE(avatarUserId_, avatarUserId) };


        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline RtcParams& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // clientUserId Field Functions 
        bool hasClientUserId() const { return this->clientUserId_ != nullptr;};
        void deleteClientUserId() { this->clientUserId_ = nullptr;};
        inline string getClientUserId() const { DARABONBA_PTR_GET_DEFAULT(clientUserId_, "") };
        inline RtcParams& setClientUserId(string clientUserId) { DARABONBA_PTR_SET_VALUE(clientUserId_, clientUserId) };


        // gslb Field Functions 
        bool hasGslb() const { return this->gslb_ != nullptr;};
        void deleteGslb() { this->gslb_ = nullptr;};
        inline string getGslb() const { DARABONBA_PTR_GET_DEFAULT(gslb_, "") };
        inline RtcParams& setGslb(string gslb) { DARABONBA_PTR_SET_VALUE(gslb_, gslb) };


        // nonce Field Functions 
        bool hasNonce() const { return this->nonce_ != nullptr;};
        void deleteNonce() { this->nonce_ = nullptr;};
        inline string getNonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
        inline RtcParams& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


        // serverUserId Field Functions 
        bool hasServerUserId() const { return this->serverUserId_ != nullptr;};
        void deleteServerUserId() { this->serverUserId_ = nullptr;};
        inline string getServerUserId() const { DARABONBA_PTR_GET_DEFAULT(serverUserId_, "") };
        inline RtcParams& setServerUserId(string serverUserId) { DARABONBA_PTR_SET_VALUE(serverUserId_, serverUserId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline RtcParams& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // token Field Functions 
        bool hasToken() const { return this->token_ != nullptr;};
        void deleteToken() { this->token_ = nullptr;};
        inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
        inline RtcParams& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      protected:
        // 应用id。
        shared_ptr<string> appId_ {};
        // 数字人侧用户ID。
        shared_ptr<string> avatarUserId_ {};
        // RTC通道ID。
        shared_ptr<string> channel_ {};
        // 客户端侧用户ID。
        shared_ptr<string> clientUserId_ {};
        // RTC服务地址。
        shared_ptr<string> gslb_ {};
        // 随机串。
        shared_ptr<string> nonce_ {};
        // 服务端侧用户ID。
        shared_ptr<string> serverUserId_ {};
        // 过期时间戳。
        shared_ptr<int64_t> timestamp_ {};
        // 访问凭证token。
        shared_ptr<string> token_ {};
      };

      class AvatarAssets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvatarAssets& obj) { 
          DARABONBA_PTR_TO_JSON(md5, md5_);
          DARABONBA_PTR_TO_JSON(minRequiredVersion, minRequiredVersion_);
          DARABONBA_PTR_TO_JSON(secret, secret_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, AvatarAssets& obj) { 
          DARABONBA_PTR_FROM_JSON(md5, md5_);
          DARABONBA_PTR_FROM_JSON(minRequiredVersion, minRequiredVersion_);
          DARABONBA_PTR_FROM_JSON(secret, secret_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        AvatarAssets() = default ;
        AvatarAssets(const AvatarAssets &) = default ;
        AvatarAssets(AvatarAssets &&) = default ;
        AvatarAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvatarAssets() = default ;
        AvatarAssets& operator=(const AvatarAssets &) = default ;
        AvatarAssets& operator=(AvatarAssets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->md5_ == nullptr
        && this->minRequiredVersion_ == nullptr && this->secret_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline AvatarAssets& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // minRequiredVersion Field Functions 
        bool hasMinRequiredVersion() const { return this->minRequiredVersion_ != nullptr;};
        void deleteMinRequiredVersion() { this->minRequiredVersion_ = nullptr;};
        inline string getMinRequiredVersion() const { DARABONBA_PTR_GET_DEFAULT(minRequiredVersion_, "") };
        inline AvatarAssets& setMinRequiredVersion(string minRequiredVersion) { DARABONBA_PTR_SET_VALUE(minRequiredVersion_, minRequiredVersion) };


        // secret Field Functions 
        bool hasSecret() const { return this->secret_ != nullptr;};
        void deleteSecret() { this->secret_ = nullptr;};
        inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
        inline AvatarAssets& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AvatarAssets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline AvatarAssets& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // 资产MD5值。
        shared_ptr<string> md5_ {};
        // 支持的SDK最低版本。
        shared_ptr<string> minRequiredVersion_ {};
        // SDK使用的密钥。
        shared_ptr<string> secret_ {};
        // 资产类型。
        shared_ptr<string> type_ {};
        // 资产下载链接。
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->avatarAssets_ == nullptr
        && this->rtcParams_ == nullptr && this->sessionId_ == nullptr; };
      // avatarAssets Field Functions 
      bool hasAvatarAssets() const { return this->avatarAssets_ != nullptr;};
      void deleteAvatarAssets() { this->avatarAssets_ = nullptr;};
      inline const Data::AvatarAssets & getAvatarAssets() const { DARABONBA_PTR_GET_CONST(avatarAssets_, Data::AvatarAssets) };
      inline Data::AvatarAssets getAvatarAssets() { DARABONBA_PTR_GET(avatarAssets_, Data::AvatarAssets) };
      inline Data& setAvatarAssets(const Data::AvatarAssets & avatarAssets) { DARABONBA_PTR_SET_VALUE(avatarAssets_, avatarAssets) };
      inline Data& setAvatarAssets(Data::AvatarAssets && avatarAssets) { DARABONBA_PTR_SET_RVALUE(avatarAssets_, avatarAssets) };


      // rtcParams Field Functions 
      bool hasRtcParams() const { return this->rtcParams_ != nullptr;};
      void deleteRtcParams() { this->rtcParams_ = nullptr;};
      inline const Data::RtcParams & getRtcParams() const { DARABONBA_PTR_GET_CONST(rtcParams_, Data::RtcParams) };
      inline Data::RtcParams getRtcParams() { DARABONBA_PTR_GET(rtcParams_, Data::RtcParams) };
      inline Data& setRtcParams(const Data::RtcParams & rtcParams) { DARABONBA_PTR_SET_VALUE(rtcParams_, rtcParams) };
      inline Data& setRtcParams(Data::RtcParams && rtcParams) { DARABONBA_PTR_SET_RVALUE(rtcParams_, rtcParams) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // 端渲染数字人资产信息。
      shared_ptr<Data::AvatarAssets> avatarAssets_ {};
      // RTC入参。
      shared_ptr<Data::RtcParams> rtcParams_ {};
      // 会话ID
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateChatSessionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateChatSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateChatSessionResponseBody::Data) };
    inline CreateChatSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateChatSessionResponseBody::Data) };
    inline CreateChatSessionResponseBody& setData(const CreateChatSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateChatSessionResponseBody& setData(CreateChatSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline CreateChatSessionResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateChatSessionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChatSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateChatSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 响应码。
    shared_ptr<string> code_ {};
    // 响应数据。
    shared_ptr<CreateChatSessionResponseBody::Data> data_ {};
    // http响应码
    shared_ptr<int64_t> httpStatusCode_ {};
    // 状态码描述。
    shared_ptr<string> message_ {};
    // 请求ID
    shared_ptr<string> requestId_ {};
    // 请求是否成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
