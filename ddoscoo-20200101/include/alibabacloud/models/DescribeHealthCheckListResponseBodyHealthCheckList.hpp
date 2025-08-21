// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYHEALTHCHECKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTRESPONSEBODYHEALTHCHECKLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckListResponseBodyHealthCheckList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListResponseBodyHealthCheckList& obj) { 
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListResponseBodyHealthCheckList& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeHealthCheckListResponseBodyHealthCheckList() = default ;
    DescribeHealthCheckListResponseBodyHealthCheckList(const DescribeHealthCheckListResponseBodyHealthCheckList &) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckList(DescribeHealthCheckListResponseBodyHealthCheckList &&) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListResponseBodyHealthCheckList() = default ;
    DescribeHealthCheckListResponseBodyHealthCheckList& operator=(const DescribeHealthCheckListResponseBodyHealthCheckList &) = default ;
    DescribeHealthCheckListResponseBodyHealthCheckList& operator=(DescribeHealthCheckListResponseBodyHealthCheckList &&) = default ;
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
    inline DescribeHealthCheckListResponseBodyHealthCheckList& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck) };
    inline Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck) };
    inline DescribeHealthCheckListResponseBodyHealthCheckList& setHealthCheck(const Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline DescribeHealthCheckListResponseBodyHealthCheckList& setHealthCheck(Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHealthCheckListResponseBodyHealthCheckList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeHealthCheckListResponseBodyHealthCheckList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The health check configuration.
    std::shared_ptr<Models::DescribeHealthCheckListResponseBodyHealthCheckListHealthCheck> healthCheck_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
