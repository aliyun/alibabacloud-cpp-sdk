// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiDeployConfigPolicyConfigsAiFallbackConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiDeployConfigPolicyConfigsAiFallbackConfig& obj) { 
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfigPolicyConfigsAiFallbackConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
    };
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig() = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig(const HttpApiDeployConfigPolicyConfigsAiFallbackConfig &) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig(HttpApiDeployConfigPolicyConfigsAiFallbackConfig &&) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiDeployConfigPolicyConfigsAiFallbackConfig() = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig& operator=(const HttpApiDeployConfigPolicyConfigsAiFallbackConfig &) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfig& operator=(HttpApiDeployConfigPolicyConfigsAiFallbackConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceConfigs_ == nullptr; };
    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs>) };
    inline vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs>) };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfig& setServiceConfigs(const vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfig& setServiceConfigs(vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


  protected:
    std::shared_ptr<vector<Models::HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs>> serviceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
