// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallTrafficTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTrafficTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_TO_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTrafficTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_FROM_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeNatFirewallTrafficTrendRequest() = default ;
    DescribeNatFirewallTrafficTrendRequest(const DescribeNatFirewallTrafficTrendRequest &) = default ;
    DescribeNatFirewallTrafficTrendRequest(DescribeNatFirewallTrafficTrendRequest &&) = default ;
    DescribeNatFirewallTrafficTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTrafficTrendRequest() = default ;
    DescribeNatFirewallTrafficTrendRequest& operator=(const DescribeNatFirewallTrafficTrendRequest &) = default ;
    DescribeNatFirewallTrafficTrendRequest& operator=(DescribeNatFirewallTrafficTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->natGatewayId_ == nullptr && this->srcPrivateIP_ == nullptr && this->srcPublicIP_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeNatFirewallTrafficTrendRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeNatFirewallTrafficTrendRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallTrafficTrendRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string getSrcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeNatFirewallTrafficTrendRequest& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcPublicIP Field Functions 
    bool hasSrcPublicIP() const { return this->srcPublicIP_ != nullptr;};
    void deleteSrcPublicIP() { this->srcPublicIP_ = nullptr;};
    inline string getSrcPublicIP() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIP_, "") };
    inline DescribeNatFirewallTrafficTrendRequest& setSrcPublicIP(string srcPublicIP) { DARABONBA_PTR_SET_VALUE(srcPublicIP_, srcPublicIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeNatFirewallTrafficTrendRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a UNIX timestamp that is accurate to seconds.
    shared_ptr<int64_t> endTime_ {};
    // The time interval between the data entries to return. Unit: seconds. Valid values:
    // 
    // *   **60**: 1 minute
    // *   **1800**: 30 minutes
    shared_ptr<int64_t> interval_ {};
    // The ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The private IP address of the source.
    shared_ptr<string> srcPrivateIP_ {};
    // The public IP address of the source.
    shared_ptr<string> srcPublicIP_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
