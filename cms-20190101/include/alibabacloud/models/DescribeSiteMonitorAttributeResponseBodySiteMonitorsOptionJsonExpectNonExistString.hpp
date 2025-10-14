// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONEXPECTNONEXISTSTRING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONEXPECTNONEXISTSTRING_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& obj) { 
      DARABONBA_PTR_TO_JSON(expect_non_exist_string, expectNonExistString_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& obj) { 
      DARABONBA_PTR_FROM_JSON(expect_non_exist_string, expectNonExistString_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectNonExistString_ == nullptr; };
    // expectNonExistString Field Functions 
    bool hasExpectNonExistString() const { return this->expectNonExistString_ != nullptr;};
    void deleteExpectNonExistString() { this->expectNonExistString_ = nullptr;};
    inline const vector<string> & expectNonExistString() const { DARABONBA_PTR_GET_CONST(expectNonExistString_, vector<string>) };
    inline vector<string> expectNonExistString() { DARABONBA_PTR_GET(expectNonExistString_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& setExpectNonExistString(const vector<string> & expectNonExistString) { DARABONBA_PTR_SET_VALUE(expectNonExistString_, expectNonExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectNonExistString& setExpectNonExistString(vector<string> && expectNonExistString) { DARABONBA_PTR_SET_RVALUE(expectNonExistString_, expectNonExistString) };


  protected:
    std::shared_ptr<vector<string>> expectNonExistString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
