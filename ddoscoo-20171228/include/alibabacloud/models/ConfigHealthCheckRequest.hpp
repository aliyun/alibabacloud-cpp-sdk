// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGHEALTHCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGHEALTHCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigHealthCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigHealthCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigHealthCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ConfigHealthCheckRequest() = default ;
    ConfigHealthCheckRequest(const ConfigHealthCheckRequest &) = default ;
    ConfigHealthCheckRequest(ConfigHealthCheckRequest &&) = default ;
    ConfigHealthCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigHealthCheckRequest() = default ;
    ConfigHealthCheckRequest& operator=(const ConfigHealthCheckRequest &) = default ;
    ConfigHealthCheckRequest& operator=(ConfigHealthCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardProtocol_ != nullptr
        && this->frontendPort_ != nullptr && this->healthCheck_ != nullptr && this->instanceId_ != nullptr; };
    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string forwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline ConfigHealthCheckRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline ConfigHealthCheckRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline ConfigHealthCheckRequest& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigHealthCheckRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> forwardProtocol_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
