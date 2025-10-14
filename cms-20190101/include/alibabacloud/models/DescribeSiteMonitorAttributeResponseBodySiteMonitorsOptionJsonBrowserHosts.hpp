// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERHOSTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERHOSTS_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& obj) { 
      DARABONBA_PTR_TO_JSON(browser_hosts, browserHosts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(browser_hosts, browserHosts_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserHosts_ == nullptr; };
    // browserHosts Field Functions 
    bool hasBrowserHosts() const { return this->browserHosts_ != nullptr;};
    void deleteBrowserHosts() { this->browserHosts_ = nullptr;};
    inline const vector<string> & browserHosts() const { DARABONBA_PTR_GET_CONST(browserHosts_, vector<string>) };
    inline vector<string> browserHosts() { DARABONBA_PTR_GET(browserHosts_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& setBrowserHosts(const vector<string> & browserHosts) { DARABONBA_PTR_SET_VALUE(browserHosts_, browserHosts) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHosts& setBrowserHosts(vector<string> && browserHosts) { DARABONBA_PTR_SET_RVALUE(browserHosts_, browserHosts) };


  protected:
    std::shared_ptr<vector<string>> browserHosts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
