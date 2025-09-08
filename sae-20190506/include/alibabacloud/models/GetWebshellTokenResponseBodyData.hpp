// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBSHELLTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWEBSHELLTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetWebshellTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebshellTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HttpUrl, httpUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(WebSocketUrl, webSocketUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebshellTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpUrl, httpUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(WebSocketUrl, webSocketUrl_);
    };
    GetWebshellTokenResponseBodyData() = default ;
    GetWebshellTokenResponseBodyData(const GetWebshellTokenResponseBodyData &) = default ;
    GetWebshellTokenResponseBodyData(GetWebshellTokenResponseBodyData &&) = default ;
    GetWebshellTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebshellTokenResponseBodyData() = default ;
    GetWebshellTokenResponseBodyData& operator=(const GetWebshellTokenResponseBodyData &) = default ;
    GetWebshellTokenResponseBodyData& operator=(GetWebshellTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpUrl_ != nullptr
        && this->token_ != nullptr && this->webSocketUrl_ != nullptr; };
    // httpUrl Field Functions 
    bool hasHttpUrl() const { return this->httpUrl_ != nullptr;};
    void deleteHttpUrl() { this->httpUrl_ = nullptr;};
    inline string httpUrl() const { DARABONBA_PTR_GET_DEFAULT(httpUrl_, "") };
    inline GetWebshellTokenResponseBodyData& setHttpUrl(string httpUrl) { DARABONBA_PTR_SET_VALUE(httpUrl_, httpUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetWebshellTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // webSocketUrl Field Functions 
    bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
    void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
    inline string webSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
    inline GetWebshellTokenResponseBodyData& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


  protected:
    std::shared_ptr<string> httpUrl_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> webSocketUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
