// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIGPOLICYCONFIGSAIFALLBACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(serviceIds, serviceIds_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfigPolicyConfigsAiFallbackConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceIds, serviceIds_);
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
    virtual bool empty() const override { this->serviceIds_ != nullptr; };
    // serviceIds Field Functions 
    bool hasServiceIds() const { return this->serviceIds_ != nullptr;};
    void deleteServiceIds() { this->serviceIds_ = nullptr;};
    inline const vector<string> & serviceIds() const { DARABONBA_PTR_GET_CONST(serviceIds_, vector<string>) };
    inline vector<string> serviceIds() { DARABONBA_PTR_GET(serviceIds_, vector<string>) };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfig& setServiceIds(const vector<string> & serviceIds) { DARABONBA_PTR_SET_VALUE(serviceIds_, serviceIds) };
    inline HttpApiDeployConfigPolicyConfigsAiFallbackConfig& setServiceIds(vector<string> && serviceIds) { DARABONBA_PTR_SET_RVALUE(serviceIds_, serviceIds) };


  protected:
    std::shared_ptr<vector<string>> serviceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
