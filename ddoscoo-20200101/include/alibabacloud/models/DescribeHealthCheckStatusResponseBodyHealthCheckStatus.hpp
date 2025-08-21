// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODYHEALTHCHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODYHEALTHCHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckStatusResponseBodyHealthCheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusResponseBodyHealthCheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RealServerStatusList, realServerStatusList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusResponseBodyHealthCheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RealServerStatusList, realServerStatusList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus() = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus(const DescribeHealthCheckStatusResponseBodyHealthCheckStatus &) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus(DescribeHealthCheckStatusResponseBodyHealthCheckStatus &&) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusResponseBodyHealthCheckStatus() = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus& operator=(const DescribeHealthCheckStatusResponseBodyHealthCheckStatus &) = default ;
    DescribeHealthCheckStatusResponseBodyHealthCheckStatus& operator=(DescribeHealthCheckStatusResponseBodyHealthCheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frontendPort_ != nullptr
        && this->instanceId_ != nullptr && this->protocol_ != nullptr && this->realServerStatusList_ != nullptr && this->status_ != nullptr; };
    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // realServerStatusList Field Functions 
    bool hasRealServerStatusList() const { return this->realServerStatusList_ != nullptr;};
    void deleteRealServerStatusList() { this->realServerStatusList_ = nullptr;};
    inline const vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList> & realServerStatusList() const { DARABONBA_PTR_GET_CONST(realServerStatusList_, vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList>) };
    inline vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList> realServerStatusList() { DARABONBA_PTR_GET(realServerStatusList_, vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList>) };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setRealServerStatusList(const vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList> & realServerStatusList) { DARABONBA_PTR_SET_VALUE(realServerStatusList_, realServerStatusList) };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setRealServerStatusList(vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList> && realServerStatusList) { DARABONBA_PTR_SET_RVALUE(realServerStatusList_, realServerStatusList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthCheckStatusResponseBodyHealthCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> protocol_ = nullptr;
    // An array that consists of the health states of the IP addresses of the origin server.
    std::shared_ptr<vector<Models::DescribeHealthCheckStatusResponseBodyHealthCheckStatusRealServerStatusList>> realServerStatusList_ = nullptr;
    // The health status of the origin server. Valid values:
    // 
    // *   **normal**: healthy
    // *   **abnormal**: unhealthy
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
