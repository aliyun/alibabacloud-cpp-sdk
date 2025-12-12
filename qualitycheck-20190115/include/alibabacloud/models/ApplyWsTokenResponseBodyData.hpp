// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYWSTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYWSTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ApplyWsTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyWsTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(WsEndpoint, wsEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyWsTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(WsEndpoint, wsEndpoint_);
    };
    ApplyWsTokenResponseBodyData() = default ;
    ApplyWsTokenResponseBodyData(const ApplyWsTokenResponseBodyData &) = default ;
    ApplyWsTokenResponseBodyData(ApplyWsTokenResponseBodyData &&) = default ;
    ApplyWsTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyWsTokenResponseBodyData() = default ;
    ApplyWsTokenResponseBodyData& operator=(const ApplyWsTokenResponseBodyData &) = default ;
    ApplyWsTokenResponseBodyData& operator=(ApplyWsTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && return this->token_ == nullptr && return this->wsEndpoint_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ApplyWsTokenResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ApplyWsTokenResponseBodyData& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // wsEndpoint Field Functions 
    bool hasWsEndpoint() const { return this->wsEndpoint_ != nullptr;};
    void deleteWsEndpoint() { this->wsEndpoint_ = nullptr;};
    inline string wsEndpoint() const { DARABONBA_PTR_GET_DEFAULT(wsEndpoint_, "") };
    inline ApplyWsTokenResponseBodyData& setWsEndpoint(string wsEndpoint) { DARABONBA_PTR_SET_VALUE(wsEndpoint_, wsEndpoint) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> wsEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
