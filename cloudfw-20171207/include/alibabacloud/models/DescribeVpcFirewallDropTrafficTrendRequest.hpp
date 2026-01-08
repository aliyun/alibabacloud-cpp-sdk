// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDropTrafficTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDropTrafficTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDropTrafficTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeVpcFirewallDropTrafficTrendRequest() = default ;
    DescribeVpcFirewallDropTrafficTrendRequest(const DescribeVpcFirewallDropTrafficTrendRequest &) = default ;
    DescribeVpcFirewallDropTrafficTrendRequest(DescribeVpcFirewallDropTrafficTrendRequest &&) = default ;
    DescribeVpcFirewallDropTrafficTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDropTrafficTrendRequest() = default ;
    DescribeVpcFirewallDropTrafficTrendRequest& operator=(const DescribeVpcFirewallDropTrafficTrendRequest &) = default ;
    DescribeVpcFirewallDropTrafficTrendRequest& operator=(DescribeVpcFirewallDropTrafficTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->order_ == nullptr && this->sort_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr && this->trafficTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline int64_t getTrafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendRequest& setTrafficTime(int64_t trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> sourceIp_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int64_t> trafficTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
