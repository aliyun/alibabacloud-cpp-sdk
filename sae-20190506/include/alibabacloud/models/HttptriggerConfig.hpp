// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AclConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class HTTPTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HTTPTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aclConfig, aclConfig_);
      DARABONBA_ANY_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_TO_JSON(safeMode, safeMode_);
    };
    friend void from_json(const Darabonba::Json& j, HTTPTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aclConfig, aclConfig_);
      DARABONBA_ANY_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_FROM_JSON(safeMode, safeMode_);
    };
    HTTPTriggerConfig() = default ;
    HTTPTriggerConfig(const HTTPTriggerConfig &) = default ;
    HTTPTriggerConfig(HTTPTriggerConfig &&) = default ;
    HTTPTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HTTPTriggerConfig() = default ;
    HTTPTriggerConfig& operator=(const HTTPTriggerConfig &) = default ;
    HTTPTriggerConfig& operator=(HTTPTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclConfig_ != nullptr
        && this->authConfig_ != nullptr && this->authType_ != nullptr && this->disableURLInternet_ != nullptr && this->safeMode_ != nullptr; };
    // aclConfig Field Functions 
    bool hasAclConfig() const { return this->aclConfig_ != nullptr;};
    void deleteAclConfig() { this->aclConfig_ = nullptr;};
    inline const AclConfig & aclConfig() const { DARABONBA_PTR_GET_CONST(aclConfig_, AclConfig) };
    inline AclConfig aclConfig() { DARABONBA_PTR_GET(aclConfig_, AclConfig) };
    inline HTTPTriggerConfig& setAclConfig(const AclConfig & aclConfig) { DARABONBA_PTR_SET_VALUE(aclConfig_, aclConfig) };
    inline HTTPTriggerConfig& setAclConfig(AclConfig && aclConfig) { DARABONBA_PTR_SET_RVALUE(aclConfig_, aclConfig) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline     const Darabonba::Json & authConfig() const { DARABONBA_GET(authConfig_) };
    Darabonba::Json & authConfig() { DARABONBA_GET(authConfig_) };
    inline HTTPTriggerConfig& setAuthConfig(const Darabonba::Json & authConfig) { DARABONBA_SET_VALUE(authConfig_, authConfig) };
    inline HTTPTriggerConfig& setAuthConfig(Darabonba::Json & authConfig) { DARABONBA_SET_RVALUE(authConfig_, authConfig) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline HTTPTriggerConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // disableURLInternet Field Functions 
    bool hasDisableURLInternet() const { return this->disableURLInternet_ != nullptr;};
    void deleteDisableURLInternet() { this->disableURLInternet_ = nullptr;};
    inline bool disableURLInternet() const { DARABONBA_PTR_GET_DEFAULT(disableURLInternet_, false) };
    inline HTTPTriggerConfig& setDisableURLInternet(bool disableURLInternet) { DARABONBA_PTR_SET_VALUE(disableURLInternet_, disableURLInternet) };


    // safeMode Field Functions 
    bool hasSafeMode() const { return this->safeMode_ != nullptr;};
    void deleteSafeMode() { this->safeMode_ = nullptr;};
    inline bool safeMode() const { DARABONBA_PTR_GET_DEFAULT(safeMode_, false) };
    inline HTTPTriggerConfig& setSafeMode(bool safeMode) { DARABONBA_PTR_SET_VALUE(safeMode_, safeMode) };


  protected:
    std::shared_ptr<AclConfig> aclConfig_ = nullptr;
    Darabonba::Json authConfig_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<bool> disableURLInternet_ = nullptr;
    std::shared_ptr<bool> safeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
