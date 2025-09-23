// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHealthCheckListResponseBodyListenersHealthCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckListResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeHealthCheckListResponseBodyListeners() = default ;
    DescribeHealthCheckListResponseBodyListeners(const DescribeHealthCheckListResponseBodyListeners &) = default ;
    DescribeHealthCheckListResponseBodyListeners(DescribeHealthCheckListResponseBodyListeners &&) = default ;
    DescribeHealthCheckListResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBodyListeners() = default ;
    DescribeHealthCheckListResponseBodyListeners& operator=(const DescribeHealthCheckListResponseBodyListeners &) = default ;
    DescribeHealthCheckListResponseBodyListeners& operator=(DescribeHealthCheckListResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frontendPort_ != nullptr
        && this->healthCheck_ != nullptr && this->instanceId_ != nullptr && this->protocol_ != nullptr; };
    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeHealthCheckListResponseBodyListeners& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const Models::DescribeHealthCheckListResponseBodyListenersHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Models::DescribeHealthCheckListResponseBodyListenersHealthCheck) };
    inline Models::DescribeHealthCheckListResponseBodyListenersHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, Models::DescribeHealthCheckListResponseBodyListenersHealthCheck) };
    inline DescribeHealthCheckListResponseBodyListeners& setHealthCheck(const Models::DescribeHealthCheckListResponseBodyListenersHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline DescribeHealthCheckListResponseBodyListeners& setHealthCheck(Models::DescribeHealthCheckListResponseBodyListenersHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHealthCheckListResponseBodyListeners& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeHealthCheckListResponseBodyListeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    std::shared_ptr<Models::DescribeHealthCheckListResponseBodyListenersHealthCheck> healthCheck_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
