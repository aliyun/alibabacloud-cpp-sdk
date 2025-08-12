// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSONASSERTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSONASSERTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& obj) { 
      DARABONBA_PTR_TO_JSON(assertions, assertions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& obj) { 
      DARABONBA_PTR_FROM_JSON(assertions, assertions_);
    };
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions &&) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& operator=(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& operator=(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assertions_ != nullptr; };
    // assertions Field Functions 
    bool hasAssertions() const { return this->assertions_ != nullptr;};
    void deleteAssertions() { this->assertions_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions> & assertions() const { DARABONBA_PTR_GET_CONST(assertions_, vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions>) };
    inline vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions> assertions() { DARABONBA_PTR_GET(assertions_, vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions>) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& setAssertions(const vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions> & assertions) { DARABONBA_PTR_SET_VALUE(assertions_, assertions) };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertions& setAssertions(vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions> && assertions) { DARABONBA_PTR_SET_RVALUE(assertions_, assertions) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions>> assertions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
