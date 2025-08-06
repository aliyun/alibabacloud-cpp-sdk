// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainsUsageByDayResponseBodyUsageByDays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainsUsageByDayResponseBodyUsageByDays& obj) { 
      DARABONBA_PTR_TO_JSON(UsageByDay, usageByDay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainsUsageByDayResponseBodyUsageByDays& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageByDay, usageByDay_);
    };
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays() = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays(const DescribeVodDomainsUsageByDayResponseBodyUsageByDays &) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays(DescribeVodDomainsUsageByDayResponseBodyUsageByDays &&) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainsUsageByDayResponseBodyUsageByDays() = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays& operator=(const DescribeVodDomainsUsageByDayResponseBodyUsageByDays &) = default ;
    DescribeVodDomainsUsageByDayResponseBodyUsageByDays& operator=(DescribeVodDomainsUsageByDayResponseBodyUsageByDays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageByDay_ != nullptr; };
    // usageByDay Field Functions 
    bool hasUsageByDay() const { return this->usageByDay_ != nullptr;};
    void deleteUsageByDay() { this->usageByDay_ = nullptr;};
    inline const vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> & usageByDay() const { DARABONBA_PTR_GET_CONST(usageByDay_, vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>) };
    inline vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> usageByDay() { DARABONBA_PTR_GET(usageByDay_, vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>) };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageByDays& setUsageByDay(const vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> & usageByDay) { DARABONBA_PTR_SET_VALUE(usageByDay_, usageByDay) };
    inline DescribeVodDomainsUsageByDayResponseBodyUsageByDays& setUsageByDay(vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> && usageByDay) { DARABONBA_PTR_SET_RVALUE(usageByDay_, usageByDay) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>> usageByDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
