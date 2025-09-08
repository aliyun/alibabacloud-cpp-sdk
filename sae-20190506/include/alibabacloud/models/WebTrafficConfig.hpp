// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBTRAFFICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBTRAFFICCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/WebAclConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebTrafficConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebTrafficConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DisableInternetURL, disableInternetURL_);
      DARABONBA_PTR_TO_JSON(RevisionsTrafficWeight, revisionsTrafficWeight_);
      DARABONBA_PTR_TO_JSON(WebAclConfig, webAclConfig_);
    };
    friend void from_json(const Darabonba::Json& j, WebTrafficConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DisableInternetURL, disableInternetURL_);
      DARABONBA_PTR_FROM_JSON(RevisionsTrafficWeight, revisionsTrafficWeight_);
      DARABONBA_PTR_FROM_JSON(WebAclConfig, webAclConfig_);
    };
    WebTrafficConfig() = default ;
    WebTrafficConfig(const WebTrafficConfig &) = default ;
    WebTrafficConfig(WebTrafficConfig &&) = default ;
    WebTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebTrafficConfig() = default ;
    WebTrafficConfig& operator=(const WebTrafficConfig &) = default ;
    WebTrafficConfig& operator=(WebTrafficConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->disableInternetURL_ != nullptr && this->revisionsTrafficWeight_ != nullptr && this->webAclConfig_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline WebTrafficConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // disableInternetURL Field Functions 
    bool hasDisableInternetURL() const { return this->disableInternetURL_ != nullptr;};
    void deleteDisableInternetURL() { this->disableInternetURL_ = nullptr;};
    inline bool disableInternetURL() const { DARABONBA_PTR_GET_DEFAULT(disableInternetURL_, false) };
    inline WebTrafficConfig& setDisableInternetURL(bool disableInternetURL) { DARABONBA_PTR_SET_VALUE(disableInternetURL_, disableInternetURL) };


    // revisionsTrafficWeight Field Functions 
    bool hasRevisionsTrafficWeight() const { return this->revisionsTrafficWeight_ != nullptr;};
    void deleteRevisionsTrafficWeight() { this->revisionsTrafficWeight_ = nullptr;};
    inline const map<string, float> & revisionsTrafficWeight() const { DARABONBA_PTR_GET_CONST(revisionsTrafficWeight_, map<string, float>) };
    inline map<string, float> revisionsTrafficWeight() { DARABONBA_PTR_GET(revisionsTrafficWeight_, map<string, float>) };
    inline WebTrafficConfig& setRevisionsTrafficWeight(const map<string, float> & revisionsTrafficWeight) { DARABONBA_PTR_SET_VALUE(revisionsTrafficWeight_, revisionsTrafficWeight) };
    inline WebTrafficConfig& setRevisionsTrafficWeight(map<string, float> && revisionsTrafficWeight) { DARABONBA_PTR_SET_RVALUE(revisionsTrafficWeight_, revisionsTrafficWeight) };


    // webAclConfig Field Functions 
    bool hasWebAclConfig() const { return this->webAclConfig_ != nullptr;};
    void deleteWebAclConfig() { this->webAclConfig_ = nullptr;};
    inline const WebAclConfig & webAclConfig() const { DARABONBA_PTR_GET_CONST(webAclConfig_, WebAclConfig) };
    inline WebAclConfig webAclConfig() { DARABONBA_PTR_GET(webAclConfig_, WebAclConfig) };
    inline WebTrafficConfig& setWebAclConfig(const WebAclConfig & webAclConfig) { DARABONBA_PTR_SET_VALUE(webAclConfig_, webAclConfig) };
    inline WebTrafficConfig& setWebAclConfig(WebAclConfig && webAclConfig) { DARABONBA_PTR_SET_RVALUE(webAclConfig_, webAclConfig) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<bool> disableInternetURL_ = nullptr;
    std::shared_ptr<map<string, float>> revisionsTrafficWeight_ = nullptr;
    std::shared_ptr<WebAclConfig> webAclConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
