// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSUSAGEBYDAYRESPONSEBODYUSAGEBYDAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsUsageByDayResponseBodyUsageByDays : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsUsageByDayResponseBodyUsageByDays& obj) { 
      DARABONBA_PTR_TO_JSON(UsageByDay, usageByDay_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsUsageByDayResponseBodyUsageByDays& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageByDay, usageByDay_);
    };
    DescribeDomainsUsageByDayResponseBodyUsageByDays() = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDays(const DescribeDomainsUsageByDayResponseBodyUsageByDays &) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDays(DescribeDomainsUsageByDayResponseBodyUsageByDays &&) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDays(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsUsageByDayResponseBodyUsageByDays() = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDays& operator=(const DescribeDomainsUsageByDayResponseBodyUsageByDays &) = default ;
    DescribeDomainsUsageByDayResponseBodyUsageByDays& operator=(DescribeDomainsUsageByDayResponseBodyUsageByDays &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageByDay_ == nullptr; };
    // usageByDay Field Functions 
    bool hasUsageByDay() const { return this->usageByDay_ != nullptr;};
    void deleteUsageByDay() { this->usageByDay_ = nullptr;};
    inline const vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> & usageByDay() const { DARABONBA_PTR_GET_CONST(usageByDay_, vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>) };
    inline vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> usageByDay() { DARABONBA_PTR_GET(usageByDay_, vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>) };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDays& setUsageByDay(const vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> & usageByDay) { DARABONBA_PTR_SET_VALUE(usageByDay_, usageByDay) };
    inline DescribeDomainsUsageByDayResponseBodyUsageByDays& setUsageByDay(vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay> && usageByDay) { DARABONBA_PTR_SET_RVALUE(usageByDay_, usageByDay) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainsUsageByDayResponseBodyUsageByDaysUsageByDay>> usageByDay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
