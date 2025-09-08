// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONTRAFFICCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONTRAFFICCONFIGINPUT_HPP_
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
  class UpdateWebApplicationTrafficConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebApplicationTrafficConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DisableURLInternet, disableURLInternet_);
      DARABONBA_PTR_TO_JSON(RevisionsTrafficWeight, revisionsTrafficWeight_);
      DARABONBA_PTR_TO_JSON(WebAclConfig, webAclConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebApplicationTrafficConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DisableURLInternet, disableURLInternet_);
      DARABONBA_PTR_FROM_JSON(RevisionsTrafficWeight, revisionsTrafficWeight_);
      DARABONBA_PTR_FROM_JSON(WebAclConfig, webAclConfig_);
    };
    UpdateWebApplicationTrafficConfigInput() = default ;
    UpdateWebApplicationTrafficConfigInput(const UpdateWebApplicationTrafficConfigInput &) = default ;
    UpdateWebApplicationTrafficConfigInput(UpdateWebApplicationTrafficConfigInput &&) = default ;
    UpdateWebApplicationTrafficConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebApplicationTrafficConfigInput() = default ;
    UpdateWebApplicationTrafficConfigInput& operator=(const UpdateWebApplicationTrafficConfigInput &) = default ;
    UpdateWebApplicationTrafficConfigInput& operator=(UpdateWebApplicationTrafficConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->disableURLInternet_ != nullptr && this->revisionsTrafficWeight_ != nullptr && this->webAclConfig_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline UpdateWebApplicationTrafficConfigInput& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // disableURLInternet Field Functions 
    bool hasDisableURLInternet() const { return this->disableURLInternet_ != nullptr;};
    void deleteDisableURLInternet() { this->disableURLInternet_ = nullptr;};
    inline bool disableURLInternet() const { DARABONBA_PTR_GET_DEFAULT(disableURLInternet_, false) };
    inline UpdateWebApplicationTrafficConfigInput& setDisableURLInternet(bool disableURLInternet) { DARABONBA_PTR_SET_VALUE(disableURLInternet_, disableURLInternet) };


    // revisionsTrafficWeight Field Functions 
    bool hasRevisionsTrafficWeight() const { return this->revisionsTrafficWeight_ != nullptr;};
    void deleteRevisionsTrafficWeight() { this->revisionsTrafficWeight_ = nullptr;};
    inline const map<string, float> & revisionsTrafficWeight() const { DARABONBA_PTR_GET_CONST(revisionsTrafficWeight_, map<string, float>) };
    inline map<string, float> revisionsTrafficWeight() { DARABONBA_PTR_GET(revisionsTrafficWeight_, map<string, float>) };
    inline UpdateWebApplicationTrafficConfigInput& setRevisionsTrafficWeight(const map<string, float> & revisionsTrafficWeight) { DARABONBA_PTR_SET_VALUE(revisionsTrafficWeight_, revisionsTrafficWeight) };
    inline UpdateWebApplicationTrafficConfigInput& setRevisionsTrafficWeight(map<string, float> && revisionsTrafficWeight) { DARABONBA_PTR_SET_RVALUE(revisionsTrafficWeight_, revisionsTrafficWeight) };


    // webAclConfig Field Functions 
    bool hasWebAclConfig() const { return this->webAclConfig_ != nullptr;};
    void deleteWebAclConfig() { this->webAclConfig_ = nullptr;};
    inline const WebAclConfig & webAclConfig() const { DARABONBA_PTR_GET_CONST(webAclConfig_, WebAclConfig) };
    inline WebAclConfig webAclConfig() { DARABONBA_PTR_GET(webAclConfig_, WebAclConfig) };
    inline UpdateWebApplicationTrafficConfigInput& setWebAclConfig(const WebAclConfig & webAclConfig) { DARABONBA_PTR_SET_VALUE(webAclConfig_, webAclConfig) };
    inline UpdateWebApplicationTrafficConfigInput& setWebAclConfig(WebAclConfig && webAclConfig) { DARABONBA_PTR_SET_RVALUE(webAclConfig_, webAclConfig) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<bool> disableURLInternet_ = nullptr;
    std::shared_ptr<map<string, float>> revisionsTrafficWeight_ = nullptr;
    std::shared_ptr<WebAclConfig> webAclConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
