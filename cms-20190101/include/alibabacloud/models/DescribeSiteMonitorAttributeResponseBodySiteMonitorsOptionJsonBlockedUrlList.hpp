// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBLOCKEDURLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONBLOCKEDURLLIST_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(blocked_url_list, blockedUrlList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(blocked_url_list, blockedUrlList_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockedUrlList_ != nullptr; };
    // blockedUrlList Field Functions 
    bool hasBlockedUrlList() const { return this->blockedUrlList_ != nullptr;};
    void deleteBlockedUrlList() { this->blockedUrlList_ = nullptr;};
    inline const vector<string> & blockedUrlList() const { DARABONBA_PTR_GET_CONST(blockedUrlList_, vector<string>) };
    inline vector<string> blockedUrlList() { DARABONBA_PTR_GET(blockedUrlList_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& setBlockedUrlList(const vector<string> & blockedUrlList) { DARABONBA_PTR_SET_VALUE(blockedUrlList_, blockedUrlList) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonBlockedUrlList& setBlockedUrlList(vector<string> && blockedUrlList) { DARABONBA_PTR_SET_RVALUE(blockedUrlList_, blockedUrlList) };


  protected:
    std::shared_ptr<vector<string>> blockedUrlList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
