// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(browser_info, browserInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(browser_info, browserInfo_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserInfo_ == nullptr; };
    // browserInfo Field Functions 
    bool hasBrowserInfo() const { return this->browserInfo_ != nullptr;};
    void deleteBrowserInfo() { this->browserInfo_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo> & browserInfo() const { DARABONBA_PTR_GET_CONST(browserInfo_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo> browserInfo() { DARABONBA_PTR_GET(browserInfo_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& setBrowserInfo(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo> & browserInfo) { DARABONBA_PTR_SET_VALUE(browserInfo_, browserInfo) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfo& setBrowserInfo(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo> && browserInfo) { DARABONBA_PTR_SET_RVALUE(browserInfo_, browserInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserInfoBrowserInfo>> browserInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
