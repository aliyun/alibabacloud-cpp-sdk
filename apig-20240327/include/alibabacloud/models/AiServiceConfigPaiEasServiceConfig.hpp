// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISERVICECONFIGPAIEASSERVICECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AISERVICECONFIGPAIEASSERVICECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiServiceConfigPaiEASServiceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiServiceConfigPaiEASServiceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(endpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AiServiceConfigPaiEASServiceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    AiServiceConfigPaiEASServiceConfig() = default ;
    AiServiceConfigPaiEASServiceConfig(const AiServiceConfigPaiEASServiceConfig &) = default ;
    AiServiceConfigPaiEASServiceConfig(AiServiceConfigPaiEASServiceConfig &&) = default ;
    AiServiceConfigPaiEASServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiServiceConfigPaiEASServiceConfig() = default ;
    AiServiceConfigPaiEASServiceConfig& operator=(const AiServiceConfigPaiEASServiceConfig &) = default ;
    AiServiceConfigPaiEASServiceConfig& operator=(AiServiceConfigPaiEASServiceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpointType_ == nullptr
        && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->workspaceId_ == nullptr; };
    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string endpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline AiServiceConfigPaiEASServiceConfig& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline AiServiceConfigPaiEASServiceConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline AiServiceConfigPaiEASServiceConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AiServiceConfigPaiEASServiceConfig& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> endpointType_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
