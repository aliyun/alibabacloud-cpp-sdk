// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFORSTREAMACCESSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYFORSTREAMACCESSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ApplyForStreamAccessTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyForStreamAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamSecret, streamSecret_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyForStreamAccessTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamSecret, streamSecret_);
    };
    ApplyForStreamAccessTokenResponseBody() = default ;
    ApplyForStreamAccessTokenResponseBody(const ApplyForStreamAccessTokenResponseBody &) = default ;
    ApplyForStreamAccessTokenResponseBody(ApplyForStreamAccessTokenResponseBody &&) = default ;
    ApplyForStreamAccessTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyForStreamAccessTokenResponseBody() = default ;
    ApplyForStreamAccessTokenResponseBody& operator=(const ApplyForStreamAccessTokenResponseBody &) = default ;
    ApplyForStreamAccessTokenResponseBody& operator=(ApplyForStreamAccessTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->channelId_ == nullptr && return this->requestId_ == nullptr && return this->streamSecret_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ApplyForStreamAccessTokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ApplyForStreamAccessTokenResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyForStreamAccessTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamSecret Field Functions 
    bool hasStreamSecret() const { return this->streamSecret_ != nullptr;};
    void deleteStreamSecret() { this->streamSecret_ = nullptr;};
    inline string streamSecret() const { DARABONBA_PTR_GET_DEFAULT(streamSecret_, "") };
    inline ApplyForStreamAccessTokenResponseBody& setStreamSecret(string streamSecret) { DARABONBA_PTR_SET_VALUE(streamSecret_, streamSecret) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> streamSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
