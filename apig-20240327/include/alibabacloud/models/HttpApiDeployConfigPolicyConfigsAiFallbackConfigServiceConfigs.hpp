// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIGSERVICECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIGSERVICECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(targetModelName, targetModelName_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(targetModelName, targetModelName_);
    };
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs() = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs(const HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs &) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs(HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs &&) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs() = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& operator=(const HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs &) = default ;
    HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& operator=(HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceId_ != nullptr
        && this->targetModelName_ != nullptr; };
    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // targetModelName Field Functions 
    bool hasTargetModelName() const { return this->targetModelName_ != nullptr;};
    void deleteTargetModelName() { this->targetModelName_ = nullptr;};
    inline string targetModelName() const { DARABONBA_PTR_GET_DEFAULT(targetModelName_, "") };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfigServiceConfigs& setTargetModelName(string targetModelName) { DARABONBA_PTR_SET_VALUE(targetModelName_, targetModelName) };


  protected:
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> targetModelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
