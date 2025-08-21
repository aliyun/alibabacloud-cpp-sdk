// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServerLoadBalancerListenMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerLoadBalancerListenMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VPort, VPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerLoadBalancerListenMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VPort, VPort_);
    };
    DescribeServerLoadBalancerListenMonitorRequest() = default ;
    DescribeServerLoadBalancerListenMonitorRequest(const DescribeServerLoadBalancerListenMonitorRequest &) = default ;
    DescribeServerLoadBalancerListenMonitorRequest(DescribeServerLoadBalancerListenMonitorRequest &&) = default ;
    DescribeServerLoadBalancerListenMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerLoadBalancerListenMonitorRequest() = default ;
    DescribeServerLoadBalancerListenMonitorRequest& operator=(const DescribeServerLoadBalancerListenMonitorRequest &) = default ;
    DescribeServerLoadBalancerListenMonitorRequest& operator=(DescribeServerLoadBalancerListenMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->loadBalancerId_ != nullptr && this->proto_ != nullptr && this->startTime_ != nullptr && this->VPort_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeServerLoadBalancerListenMonitorRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeServerLoadBalancerListenMonitorRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeServerLoadBalancerListenMonitorRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeServerLoadBalancerListenMonitorRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // VPort Field Functions 
    bool hasVPort() const { return this->VPort_ != nullptr;};
    void deleteVPort() { this->VPort_ = nullptr;};
    inline string VPort() const { DARABONBA_PTR_GET_DEFAULT(VPort_, "") };
    inline DescribeServerLoadBalancerListenMonitorRequest& setVPort(string VPort) { DARABONBA_PTR_SET_VALUE(VPort_, VPort) };


  protected:
    // The end of the time range to query. The maximum range between StartTime and EndTime is 24 hours.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the ELB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request protocol, such as http, https, or tcp.
    std::shared_ptr<string> proto_ = nullptr;
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The virtual IP address (VIP) port, such as 80, 8080, or 443.
    std::shared_ptr<string> VPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
