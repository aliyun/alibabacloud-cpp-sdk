// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTHTTPTRIGGERTRIGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTHTTPTRIGGERTRIGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputHttpTriggerTriggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputHttpTriggerTriggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_TO_JSON(dsableURLInternet, dsableURLInternet_);
      DARABONBA_PTR_TO_JSON(methods, methods_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputHttpTriggerTriggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(disableURLInternet, disableURLInternet_);
      DARABONBA_PTR_FROM_JSON(dsableURLInternet, dsableURLInternet_);
      DARABONBA_PTR_FROM_JSON(methods, methods_);
    };
    DeployCustomContainerInputHttpTriggerTriggerConfig() = default ;
    DeployCustomContainerInputHttpTriggerTriggerConfig(const DeployCustomContainerInputHttpTriggerTriggerConfig &) = default ;
    DeployCustomContainerInputHttpTriggerTriggerConfig(DeployCustomContainerInputHttpTriggerTriggerConfig &&) = default ;
    DeployCustomContainerInputHttpTriggerTriggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputHttpTriggerTriggerConfig() = default ;
    DeployCustomContainerInputHttpTriggerTriggerConfig& operator=(const DeployCustomContainerInputHttpTriggerTriggerConfig &) = default ;
    DeployCustomContainerInputHttpTriggerTriggerConfig& operator=(DeployCustomContainerInputHttpTriggerTriggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConfig_ != nullptr
        && this->authType_ != nullptr && this->disableURLInternet_ != nullptr && this->dsableURLInternet_ != nullptr && this->methods_ != nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline string authConfig() const { DARABONBA_PTR_GET_DEFAULT(authConfig_, "") };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setAuthConfig(string authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // disableURLInternet Field Functions 
    bool hasDisableURLInternet() const { return this->disableURLInternet_ != nullptr;};
    void deleteDisableURLInternet() { this->disableURLInternet_ = nullptr;};
    inline bool disableURLInternet() const { DARABONBA_PTR_GET_DEFAULT(disableURLInternet_, false) };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setDisableURLInternet(bool disableURLInternet) { DARABONBA_PTR_SET_VALUE(disableURLInternet_, disableURLInternet) };


    // dsableURLInternet Field Functions 
    bool hasDsableURLInternet() const { return this->dsableURLInternet_ != nullptr;};
    void deleteDsableURLInternet() { this->dsableURLInternet_ = nullptr;};
    inline bool dsableURLInternet() const { DARABONBA_PTR_GET_DEFAULT(dsableURLInternet_, false) };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setDsableURLInternet(bool dsableURLInternet) { DARABONBA_PTR_SET_VALUE(dsableURLInternet_, dsableURLInternet) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<string> & methods() const { DARABONBA_PTR_GET_CONST(methods_, vector<string>) };
    inline vector<string> methods() { DARABONBA_PTR_GET(methods_, vector<string>) };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setMethods(const vector<string> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline DeployCustomContainerInputHttpTriggerTriggerConfig& setMethods(vector<string> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


  protected:
    std::shared_ptr<string> authConfig_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<bool> disableURLInternet_ = nullptr;
    std::shared_ptr<bool> dsableURLInternet_ = nullptr;
    std::shared_ptr<vector<string>> methods_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
