// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONTRAFFICHIJACKELEMENTBLACKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONTRAFFICHIJACKELEMENTBLACKLIST_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& obj) { 
      DARABONBA_PTR_TO_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& obj) { 
      DARABONBA_PTR_FROM_JSON(traffic_hijack_element_blacklist, trafficHijackElementBlacklist_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trafficHijackElementBlacklist_ != nullptr; };
    // trafficHijackElementBlacklist Field Functions 
    bool hasTrafficHijackElementBlacklist() const { return this->trafficHijackElementBlacklist_ != nullptr;};
    void deleteTrafficHijackElementBlacklist() { this->trafficHijackElementBlacklist_ = nullptr;};
    inline const vector<string> & trafficHijackElementBlacklist() const { DARABONBA_PTR_GET_CONST(trafficHijackElementBlacklist_, vector<string>) };
    inline vector<string> trafficHijackElementBlacklist() { DARABONBA_PTR_GET(trafficHijackElementBlacklist_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& setTrafficHijackElementBlacklist(const vector<string> & trafficHijackElementBlacklist) { DARABONBA_PTR_SET_VALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonTrafficHijackElementBlacklist& setTrafficHijackElementBlacklist(vector<string> && trafficHijackElementBlacklist) { DARABONBA_PTR_SET_RVALUE(trafficHijackElementBlacklist_, trafficHijackElementBlacklist) };


  protected:
    std::shared_ptr<vector<string>> trafficHijackElementBlacklist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
