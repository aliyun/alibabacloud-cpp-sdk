// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSCUSTOMSCHEDULEDAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSCUSTOMSCHEDULEDAYS_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& obj) { 
      DARABONBA_PTR_TO_JSON(days, days_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& obj) { 
      DARABONBA_PTR_FROM_JSON(days, days_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays(DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->days_ == nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<int32_t> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<int32_t>) };
    inline vector<int32_t> days() { DARABONBA_PTR_GET(days_, vector<int32_t>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& setDays(const vector<int32_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsCustomScheduleDays& setDays(vector<int32_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


  protected:
    std::shared_ptr<vector<int32_t>> days_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
