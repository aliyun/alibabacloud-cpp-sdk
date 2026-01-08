// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallTimeTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTimeTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_TO_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTimeTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SrcPrivateIP, srcPrivateIP_);
      DARABONBA_PTR_FROM_JSON(SrcPublicIP, srcPublicIP_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeNatFirewallTimeTopRequest() = default ;
    DescribeNatFirewallTimeTopRequest(const DescribeNatFirewallTimeTopRequest &) = default ;
    DescribeNatFirewallTimeTopRequest(DescribeNatFirewallTimeTopRequest &&) = default ;
    DescribeNatFirewallTimeTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTimeTopRequest() = default ;
    DescribeNatFirewallTimeTopRequest& operator=(const DescribeNatFirewallTimeTopRequest &) = default ;
    DescribeNatFirewallTimeTopRequest& operator=(DescribeNatFirewallTimeTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interval_ == nullptr
        && this->lang_ == nullptr && this->limit_ == nullptr && this->natGatewayId_ == nullptr && this->sort_ == nullptr && this->srcPrivateIP_ == nullptr
        && this->srcPublicIP_ == nullptr && this->trafficTime_ == nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeNatFirewallTimeTopRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNatFirewallTimeTopRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline DescribeNatFirewallTimeTopRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallTimeTopRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeNatFirewallTimeTopRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // srcPrivateIP Field Functions 
    bool hasSrcPrivateIP() const { return this->srcPrivateIP_ != nullptr;};
    void deleteSrcPrivateIP() { this->srcPrivateIP_ = nullptr;};
    inline string getSrcPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(srcPrivateIP_, "") };
    inline DescribeNatFirewallTimeTopRequest& setSrcPrivateIP(string srcPrivateIP) { DARABONBA_PTR_SET_VALUE(srcPrivateIP_, srcPrivateIP) };


    // srcPublicIP Field Functions 
    bool hasSrcPublicIP() const { return this->srcPublicIP_ != nullptr;};
    void deleteSrcPublicIP() { this->srcPublicIP_ = nullptr;};
    inline string getSrcPublicIP() const { DARABONBA_PTR_GET_DEFAULT(srcPublicIP_, "") };
    inline DescribeNatFirewallTimeTopRequest& setSrcPublicIP(string srcPublicIP) { DARABONBA_PTR_SET_VALUE(srcPublicIP_, srcPublicIP) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline string getTrafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, "") };
    inline DescribeNatFirewallTimeTopRequest& setTrafficTime(string trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    shared_ptr<int64_t> interval_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> limit_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> srcPrivateIP_ {};
    shared_ptr<string> srcPublicIP_ {};
    // This parameter is required.
    shared_ptr<string> trafficTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
