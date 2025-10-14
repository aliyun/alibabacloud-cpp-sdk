// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBROWSERHEADERS_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(browser_headers, browserHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(browser_headers, browserHeaders_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserHeaders_ == nullptr; };
    // browserHeaders Field Functions 
    bool hasBrowserHeaders() const { return this->browserHeaders_ != nullptr;};
    void deleteBrowserHeaders() { this->browserHeaders_ = nullptr;};
    inline const vector<Darabonba::Json> & browserHeaders() const { DARABONBA_PTR_GET_CONST(browserHeaders_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> browserHeaders() { DARABONBA_PTR_GET(browserHeaders_, vector<Darabonba::Json>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& setBrowserHeaders(const vector<Darabonba::Json> & browserHeaders) { DARABONBA_PTR_SET_VALUE(browserHeaders_, browserHeaders) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBrowserHeaders& setBrowserHeaders(vector<Darabonba::Json> && browserHeaders) { DARABONBA_PTR_SET_RVALUE(browserHeaders_, browserHeaders) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> browserHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
