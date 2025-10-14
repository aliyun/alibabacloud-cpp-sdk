// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORQUOTARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORQUOTARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorQuotaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorQuotaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SecondMonitor, secondMonitor_);
      DARABONBA_PTR_TO_JSON(SiteMonitorIdcQuota, siteMonitorIdcQuota_);
      DARABONBA_PTR_TO_JSON(SiteMonitorOperatorQuotaQuota, siteMonitorOperatorQuotaQuota_);
      DARABONBA_PTR_TO_JSON(SiteMonitorQuotaTaskUsed, siteMonitorQuotaTaskUsed_);
      DARABONBA_PTR_TO_JSON(SiteMonitorTaskQuota, siteMonitorTaskQuota_);
      DARABONBA_PTR_TO_JSON(SiteMonitorVersion, siteMonitorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorQuotaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecondMonitor, secondMonitor_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorIdcQuota, siteMonitorIdcQuota_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorOperatorQuotaQuota, siteMonitorOperatorQuotaQuota_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorQuotaTaskUsed, siteMonitorQuotaTaskUsed_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorTaskQuota, siteMonitorTaskQuota_);
      DARABONBA_PTR_FROM_JSON(SiteMonitorVersion, siteMonitorVersion_);
    };
    DescribeSiteMonitorQuotaResponseBodyData() = default ;
    DescribeSiteMonitorQuotaResponseBodyData(const DescribeSiteMonitorQuotaResponseBodyData &) = default ;
    DescribeSiteMonitorQuotaResponseBodyData(DescribeSiteMonitorQuotaResponseBodyData &&) = default ;
    DescribeSiteMonitorQuotaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorQuotaResponseBodyData() = default ;
    DescribeSiteMonitorQuotaResponseBodyData& operator=(const DescribeSiteMonitorQuotaResponseBodyData &) = default ;
    DescribeSiteMonitorQuotaResponseBodyData& operator=(DescribeSiteMonitorQuotaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secondMonitor_ == nullptr
        && return this->siteMonitorIdcQuota_ == nullptr && return this->siteMonitorOperatorQuotaQuota_ == nullptr && return this->siteMonitorQuotaTaskUsed_ == nullptr && return this->siteMonitorTaskQuota_ == nullptr && return this->siteMonitorVersion_ == nullptr; };
    // secondMonitor Field Functions 
    bool hasSecondMonitor() const { return this->secondMonitor_ != nullptr;};
    void deleteSecondMonitor() { this->secondMonitor_ = nullptr;};
    inline bool secondMonitor() const { DARABONBA_PTR_GET_DEFAULT(secondMonitor_, false) };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSecondMonitor(bool secondMonitor) { DARABONBA_PTR_SET_VALUE(secondMonitor_, secondMonitor) };


    // siteMonitorIdcQuota Field Functions 
    bool hasSiteMonitorIdcQuota() const { return this->siteMonitorIdcQuota_ != nullptr;};
    void deleteSiteMonitorIdcQuota() { this->siteMonitorIdcQuota_ = nullptr;};
    inline int32_t siteMonitorIdcQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorIdcQuota_, 0) };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSiteMonitorIdcQuota(int32_t siteMonitorIdcQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorIdcQuota_, siteMonitorIdcQuota) };


    // siteMonitorOperatorQuotaQuota Field Functions 
    bool hasSiteMonitorOperatorQuotaQuota() const { return this->siteMonitorOperatorQuotaQuota_ != nullptr;};
    void deleteSiteMonitorOperatorQuotaQuota() { this->siteMonitorOperatorQuotaQuota_ = nullptr;};
    inline int32_t siteMonitorOperatorQuotaQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorOperatorQuotaQuota_, 0) };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSiteMonitorOperatorQuotaQuota(int32_t siteMonitorOperatorQuotaQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorOperatorQuotaQuota_, siteMonitorOperatorQuotaQuota) };


    // siteMonitorQuotaTaskUsed Field Functions 
    bool hasSiteMonitorQuotaTaskUsed() const { return this->siteMonitorQuotaTaskUsed_ != nullptr;};
    void deleteSiteMonitorQuotaTaskUsed() { this->siteMonitorQuotaTaskUsed_ = nullptr;};
    inline int32_t siteMonitorQuotaTaskUsed() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorQuotaTaskUsed_, 0) };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSiteMonitorQuotaTaskUsed(int32_t siteMonitorQuotaTaskUsed) { DARABONBA_PTR_SET_VALUE(siteMonitorQuotaTaskUsed_, siteMonitorQuotaTaskUsed) };


    // siteMonitorTaskQuota Field Functions 
    bool hasSiteMonitorTaskQuota() const { return this->siteMonitorTaskQuota_ != nullptr;};
    void deleteSiteMonitorTaskQuota() { this->siteMonitorTaskQuota_ = nullptr;};
    inline int32_t siteMonitorTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorTaskQuota_, 0) };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSiteMonitorTaskQuota(int32_t siteMonitorTaskQuota) { DARABONBA_PTR_SET_VALUE(siteMonitorTaskQuota_, siteMonitorTaskQuota) };


    // siteMonitorVersion Field Functions 
    bool hasSiteMonitorVersion() const { return this->siteMonitorVersion_ != nullptr;};
    void deleteSiteMonitorVersion() { this->siteMonitorVersion_ = nullptr;};
    inline string siteMonitorVersion() const { DARABONBA_PTR_GET_DEFAULT(siteMonitorVersion_, "") };
    inline DescribeSiteMonitorQuotaResponseBodyData& setSiteMonitorVersion(string siteMonitorVersion) { DARABONBA_PTR_SET_VALUE(siteMonitorVersion_, siteMonitorVersion) };


  protected:
    // Indicates whether second-level monitoring is enabled. Valid values:
    // 
    // *   true: Second-level monitoring is enabled.
    // *   false: Second-level monitoring is disabled.
    std::shared_ptr<bool> secondMonitor_ = nullptr;
    // The quota of detection points that are provided by Alibaba Cloud. Five detection points are provided for free.
    std::shared_ptr<int32_t> siteMonitorIdcQuota_ = nullptr;
    // The quota of detection points that are not provided by Alibaba Cloud. Default value: 0.
    std::shared_ptr<int32_t> siteMonitorOperatorQuotaQuota_ = nullptr;
    // The used quota of site monitoring tasks.
    std::shared_ptr<int32_t> siteMonitorQuotaTaskUsed_ = nullptr;
    // The quota of site monitoring tasks.
    std::shared_ptr<int32_t> siteMonitorTaskQuota_ = nullptr;
    // The version of site monitoring. Valid values:
    // 
    // *   V1
    // *   V2
    std::shared_ptr<string> siteMonitorVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
