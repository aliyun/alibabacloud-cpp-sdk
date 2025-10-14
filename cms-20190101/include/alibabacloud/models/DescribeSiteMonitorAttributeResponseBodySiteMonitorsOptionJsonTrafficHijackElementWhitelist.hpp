// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONTRAFFICHIJACKELEMENTWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONTRAFFICHIJACKELEMENTWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(traffic_hijack_element_whitelist, trafficHijackElementWhitelist_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trafficHijackElementWhitelist_ == nullptr; };
    // trafficHijackElementWhitelist Field Functions 
    bool hasTrafficHijackElementWhitelist() const { return this->trafficHijackElementWhitelist_ != nullptr;};
    void deleteTrafficHijackElementWhitelist() { this->trafficHijackElementWhitelist_ = nullptr;};
    inline const vector<string> & trafficHijackElementWhitelist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementWhitelist_, vector<string>) };
    inline vector<string> trafficHijackElementWhitelist() { DARABONBA_PTR_GET(trafficHijackElementWhitelist_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& setTrafficHijackElementWhitelist(const vector<string> & trafficHijackElementWhitelist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementWhitelist& setTrafficHijackElementWhitelist(vector<string> && trafficHijackElementWhitelist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementWhitelist_, trafficHijackElementWhitelist) };


  protected:
    std::shared_ptr<vector<string>> trafficHijackElementWhitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
