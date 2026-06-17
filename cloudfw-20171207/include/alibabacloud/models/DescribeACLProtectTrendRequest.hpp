// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeACLProtectTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLProtectTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLProtectTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeACLProtectTrendRequest() = default ;
    DescribeACLProtectTrendRequest(const DescribeACLProtectTrendRequest &) = default ;
    DescribeACLProtectTrendRequest(DescribeACLProtectTrendRequest &&) = default ;
    DescribeACLProtectTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLProtectTrendRequest() = default ;
    DescribeACLProtectTrendRequest& operator=(const DescribeACLProtectTrendRequest &) = default ;
    DescribeACLProtectTrendRequest& operator=(DescribeACLProtectTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->firewallType_ == nullptr && this->interval_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeACLProtectTrendRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string getFirewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeACLProtectTrendRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeACLProtectTrendRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeACLProtectTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeACLProtectTrendRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeACLProtectTrendRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a timestamp in seconds.
    shared_ptr<string> endTime_ {};
    // The type of the firewall. Valid values:
    // 
    // - **internet** (default): internet firewall
    // 
    // - **vpc**: VPC firewall
    // 
    // - **nat**: NAT firewall
    shared_ptr<string> firewallType_ {};
    // The time granularity for aggregating trend data, in seconds. Valid values:
    // 
    // - **60**: 1 minute
    // 
    // - **1800**: 30 minutes
    // 
    // - **3600**: 1 hour
    // 
    // - **86400** (default): 1 day
    shared_ptr<int64_t> interval_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // This parameter is deprecated.
    shared_ptr<string> sourceIp_ {};
    // The beginning of the time range to query. The value is a timestamp in seconds.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
