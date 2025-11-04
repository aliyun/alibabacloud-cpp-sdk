// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSLIVENESSPROBEHTTPGET_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSLIVENESSPROBEHTTPGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
    };
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet() = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet(const ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet &) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet(ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet &&) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet() = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& operator=(const ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet &) = default ;
    ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& operator=(ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && return this->port_ == nullptr && return this->scheme_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline ModifyEciScalingConfigurationRequestContainersLivenessProbeHttpGet& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> scheme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
