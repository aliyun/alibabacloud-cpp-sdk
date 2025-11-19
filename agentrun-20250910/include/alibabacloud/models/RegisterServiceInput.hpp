// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERSERVICEINPUT_HPP_
#define ALIBABACLOUD_MODELS_REGISTERSERVICEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RegisterServiceInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterServiceInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(serviceBackendEndpoint, serviceBackendEndpoint_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterServiceInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(serviceBackendEndpoint, serviceBackendEndpoint_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RegisterServiceInput() = default ;
    RegisterServiceInput(const RegisterServiceInput &) = default ;
    RegisterServiceInput(RegisterServiceInput &&) = default ;
    RegisterServiceInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterServiceInput() = default ;
    RegisterServiceInput& operator=(const RegisterServiceInput &) = default ;
    RegisterServiceInput& operator=(RegisterServiceInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && return this->protocol_ == nullptr && return this->resourceName_ == nullptr && return this->serviceBackendEndpoint_ == nullptr && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr
        && return this->tenantId_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline RegisterServiceInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline RegisterServiceInput& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline RegisterServiceInput& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // serviceBackendEndpoint Field Functions 
    bool hasServiceBackendEndpoint() const { return this->serviceBackendEndpoint_ != nullptr;};
    void deleteServiceBackendEndpoint() { this->serviceBackendEndpoint_ = nullptr;};
    inline string serviceBackendEndpoint() const { DARABONBA_PTR_GET_DEFAULT(serviceBackendEndpoint_, "") };
    inline RegisterServiceInput& setServiceBackendEndpoint(string serviceBackendEndpoint) { DARABONBA_PTR_SET_VALUE(serviceBackendEndpoint_, serviceBackendEndpoint) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline RegisterServiceInput& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline RegisterServiceInput& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RegisterServiceInput& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 关联的凭证ID，用于服务认证
    std::shared_ptr<string> credentialName_ = nullptr;
    // 服务的协议类型
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // 关联的资源名称
    std::shared_ptr<string> resourceName_ = nullptr;
    // 转发的下游服务端点URL，必须是有效的HTTP/HTTPS地址（这里是 FC trigger endpoint）
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceBackendEndpoint_ = nullptr;
    // 服务名称，在租户内唯一
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
    // 服务类型
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceType_ = nullptr;
    // 租户ID，用于多租户隔离
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
