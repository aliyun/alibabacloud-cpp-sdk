// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorListResponseBodySiteMonitors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBodySiteMonitors& obj) { 
      DARABONBA_PTR_TO_JSON(SiteMonitor, siteMonitor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBodySiteMonitors& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteMonitor, siteMonitor_);
    };
    DescribeSiteMonitorListResponseBodySiteMonitors() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitors(const DescribeSiteMonitorListResponseBodySiteMonitors &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitors(DescribeSiteMonitorListResponseBodySiteMonitors &&) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBodySiteMonitors() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitors& operator=(const DescribeSiteMonitorListResponseBodySiteMonitors &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitors& operator=(DescribeSiteMonitorListResponseBodySiteMonitors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteMonitor_ == nullptr; };
    // siteMonitor Field Functions 
    bool hasSiteMonitor() const { return this->siteMonitor_ != nullptr;};
    void deleteSiteMonitor() { this->siteMonitor_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor> & siteMonitor() const { DARABONBA_PTR_GET_CONST(siteMonitor_, vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor>) };
    inline vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor> siteMonitor() { DARABONBA_PTR_GET(siteMonitor_, vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor>) };
    inline DescribeSiteMonitorListResponseBodySiteMonitors& setSiteMonitor(const vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor> & siteMonitor) { DARABONBA_PTR_SET_VALUE(siteMonitor_, siteMonitor) };
    inline DescribeSiteMonitorListResponseBodySiteMonitors& setSiteMonitor(vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor> && siteMonitor) { DARABONBA_PTR_SET_RVALUE(siteMonitor_, siteMonitor) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitor>> siteMonitor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
