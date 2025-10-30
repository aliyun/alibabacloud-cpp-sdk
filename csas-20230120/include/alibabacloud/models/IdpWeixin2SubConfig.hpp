// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPWEIXIN2SUBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPWEIXIN2SUBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpWeixin2SubConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpWeixin2SubConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AppSchema, appSchema_);
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_TO_JSON(EventVerifyToken, eventVerifyToken_);
      DARABONBA_PTR_TO_JSON(RedirectUri, redirectUri_);
    };
    friend void from_json(const Darabonba::Json& j, IdpWeixin2SubConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AppSchema, appSchema_);
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(EventAesKey, eventAesKey_);
      DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
      DARABONBA_PTR_FROM_JSON(EventVerifyToken, eventVerifyToken_);
      DARABONBA_PTR_FROM_JSON(RedirectUri, redirectUri_);
    };
    IdpWeixin2SubConfig() = default ;
    IdpWeixin2SubConfig(const IdpWeixin2SubConfig &) = default ;
    IdpWeixin2SubConfig(IdpWeixin2SubConfig &&) = default ;
    IdpWeixin2SubConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpWeixin2SubConfig() = default ;
    IdpWeixin2SubConfig& operator=(const IdpWeixin2SubConfig &) = default ;
    IdpWeixin2SubConfig& operator=(IdpWeixin2SubConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->appSchema_ == nullptr && return this->appSecret_ == nullptr && return this->corpId_ == nullptr && return this->eventAesKey_ == nullptr && return this->eventLabel_ == nullptr
        && return this->eventVerifyToken_ == nullptr && return this->redirectUri_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline IdpWeixin2SubConfig& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // appSchema Field Functions 
    bool hasAppSchema() const { return this->appSchema_ != nullptr;};
    void deleteAppSchema() { this->appSchema_ = nullptr;};
    inline string appSchema() const { DARABONBA_PTR_GET_DEFAULT(appSchema_, "") };
    inline IdpWeixin2SubConfig& setAppSchema(string appSchema) { DARABONBA_PTR_SET_VALUE(appSchema_, appSchema) };


    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline IdpWeixin2SubConfig& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline IdpWeixin2SubConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // eventAesKey Field Functions 
    bool hasEventAesKey() const { return this->eventAesKey_ != nullptr;};
    void deleteEventAesKey() { this->eventAesKey_ = nullptr;};
    inline string eventAesKey() const { DARABONBA_PTR_GET_DEFAULT(eventAesKey_, "") };
    inline IdpWeixin2SubConfig& setEventAesKey(string eventAesKey) { DARABONBA_PTR_SET_VALUE(eventAesKey_, eventAesKey) };


    // eventLabel Field Functions 
    bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
    void deleteEventLabel() { this->eventLabel_ = nullptr;};
    inline string eventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
    inline IdpWeixin2SubConfig& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


    // eventVerifyToken Field Functions 
    bool hasEventVerifyToken() const { return this->eventVerifyToken_ != nullptr;};
    void deleteEventVerifyToken() { this->eventVerifyToken_ = nullptr;};
    inline string eventVerifyToken() const { DARABONBA_PTR_GET_DEFAULT(eventVerifyToken_, "") };
    inline IdpWeixin2SubConfig& setEventVerifyToken(string eventVerifyToken) { DARABONBA_PTR_SET_VALUE(eventVerifyToken_, eventVerifyToken) };


    // redirectUri Field Functions 
    bool hasRedirectUri() const { return this->redirectUri_ != nullptr;};
    void deleteRedirectUri() { this->redirectUri_ = nullptr;};
    inline string redirectUri() const { DARABONBA_PTR_GET_DEFAULT(redirectUri_, "") };
    inline IdpWeixin2SubConfig& setRedirectUri(string redirectUri) { DARABONBA_PTR_SET_VALUE(redirectUri_, redirectUri) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> appSchema_ = nullptr;
    std::shared_ptr<string> appSecret_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> eventAesKey_ = nullptr;
    std::shared_ptr<string> eventLabel_ = nullptr;
    std::shared_ptr<string> eventVerifyToken_ = nullptr;
    std::shared_ptr<string> redirectUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
