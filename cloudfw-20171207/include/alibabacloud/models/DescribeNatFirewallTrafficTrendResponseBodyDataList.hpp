// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTRAFFICTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallTrafficTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTrafficTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(MaxTotalBps, maxTotalBps_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeNatFirewallTrafficTrendResponseBodyDataList() = default ;
    DescribeNatFirewallTrafficTrendResponseBodyDataList(const DescribeNatFirewallTrafficTrendResponseBodyDataList &) = default ;
    DescribeNatFirewallTrafficTrendResponseBodyDataList(DescribeNatFirewallTrafficTrendResponseBodyDataList &&) = default ;
    DescribeNatFirewallTrafficTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTrafficTrendResponseBodyDataList() = default ;
    DescribeNatFirewallTrafficTrendResponseBodyDataList& operator=(const DescribeNatFirewallTrafficTrendResponseBodyDataList &) = default ;
    DescribeNatFirewallTrafficTrendResponseBodyDataList& operator=(DescribeNatFirewallTrafficTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxInBps_ == nullptr
        && return this->maxOutBps_ == nullptr && return this->maxTotalBps_ == nullptr && return this->trafficTime_ == nullptr; };
    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t maxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBodyDataList& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t maxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBodyDataList& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // maxTotalBps Field Functions 
    bool hasMaxTotalBps() const { return this->maxTotalBps_ != nullptr;};
    void deleteMaxTotalBps() { this->maxTotalBps_ = nullptr;};
    inline int64_t maxTotalBps() const { DARABONBA_PTR_GET_DEFAULT(maxTotalBps_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBodyDataList& setMaxTotalBps(int64_t maxTotalBps) { DARABONBA_PTR_SET_VALUE(maxTotalBps_, maxTotalBps) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline int64_t trafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, 0L) };
    inline DescribeNatFirewallTrafficTrendResponseBodyDataList& setTrafficTime(int64_t trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    // The maximum inbound network throughput, which indicates the maximum number of bits that are sent inbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxInBps_ = nullptr;
    // The maximum outbound network throughput, which indicates the maximum number of bits that are sent outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxOutBps_ = nullptr;
    // The total maximum inbound and outbound network throughput, which indicates the maximum number of bits that are sent inbound and outbound per second. Unit: bit/s.
    std::shared_ptr<int64_t> maxTotalBps_ = nullptr;
    // The time range to query. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> trafficTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
