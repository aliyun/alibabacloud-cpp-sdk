// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHEALTHCHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHEALTHCHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyHealthCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHealthCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHealthCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyHealthCheckConfigRequest() = default ;
    ModifyHealthCheckConfigRequest(const ModifyHealthCheckConfigRequest &) = default ;
    ModifyHealthCheckConfigRequest(ModifyHealthCheckConfigRequest &&) = default ;
    ModifyHealthCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHealthCheckConfigRequest() = default ;
    ModifyHealthCheckConfigRequest& operator=(const ModifyHealthCheckConfigRequest &) = default ;
    ModifyHealthCheckConfigRequest& operator=(ModifyHealthCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardProtocol_ == nullptr
        && return this->frontendPort_ == nullptr && return this->healthCheck_ == nullptr && return this->instanceId_ == nullptr; };
    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string forwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline ModifyHealthCheckConfigRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline ModifyHealthCheckConfigRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline ModifyHealthCheckConfigRequest& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHealthCheckConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    // 
    // This parameter is required.
    std::shared_ptr<string> forwardProtocol_ = nullptr;
    // The forwarding port.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The details of the health check configuration. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **Type**: the protocol type. This field is required and must be of the STRING type. Valid values: **tcp** (Layer 4) and **http** (Layer 7).
    // 
    // *   **Domain**: the domain name, which must be of the STRING type.
    // 
    //     **
    // 
    //     **Note**This parameter is returned only when the Layer 7 health check configuration is queried.
    // 
    // *   **Uri**: the check path, which must be of the STRING type.
    // 
    //     **
    // 
    //     **Note**This parameter is returned only when the Layer 7 health check configuration is queried.
    // 
    // *   **Timeout**: the response timeout period, which must be of the INTEGER type. Valid values: **1** to **30**. Unit: seconds.
    // 
    // *   **Port**: the port on which you want to perform the health check, which must be of the INTEGER type.
    // 
    // *   **Interval**: the health check interval, which must be of the INTEGER type. Valid values: **1** to **30**. Unit: seconds.
    // 
    // *   **Up**: the number of consecutive successful health checks that must occur before declaring a port healthy, which must be of the INTEGER type. Valid values: **1** to **10**.
    // 
    // *   **Down**: the number of consecutive failed health checks that must occur before declaring a port unhealthy, which must be of the INTEGER type. Valid values: **1** to **10**.
    // 
    // This parameter is required.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
