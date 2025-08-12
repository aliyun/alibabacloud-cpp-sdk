// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONASSERTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONASSERTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& obj) { 
      DARABONBA_PTR_TO_JSON(assertions, assertions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& obj) { 
      DARABONBA_PTR_FROM_JSON(assertions, assertions_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assertions_ != nullptr; };
    // assertions Field Functions 
    bool hasAssertions() const { return this->assertions_ != nullptr;};
    void deleteAssertions() { this->assertions_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions> & assertions() const { DARABONBA_PTR_GET_CONST(assertions_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions> assertions() { DARABONBA_PTR_GET(assertions_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& setAssertions(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions> & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertions& setAssertions(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions> && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonAssertionsAssertions>> assertions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
