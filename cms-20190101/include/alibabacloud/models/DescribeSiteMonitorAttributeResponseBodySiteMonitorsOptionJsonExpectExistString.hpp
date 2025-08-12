// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONEXPECTEXISTSTRING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONEXPECTEXISTSTRING_HPP_
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
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& obj) { 
      DARABONBA_PTR_TO_JSON(expect_exist_string, expectExistString_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& obj) { 
      DARABONBA_PTR_FROM_JSON(expect_exist_string, expectExistString_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expectExistString_ != nullptr; };
    // expectExistString Field Functions 
    bool hasExpectExistString() const { return this->expectExistString_ != nullptr;};
    void deleteExpectExistString() { this->expectExistString_ = nullptr;};
    inline const vector<string> & expectExistString() const { DARABONBA_PTR_GET_CONST(expectExistString_, vector<string>) };
    inline vector<string> expectExistString() { DARABONBA_PTR_GET(expectExistString_, vector<string>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& setExpectExistString(const vector<string> & expectExistString) { DARABONBA_PTR_SET_VALUE(expectExistString_, expectExistString) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonExpectExistString& setExpectExistString(vector<string> && expectExistString) { DARABONBA_PTR_SET_RVALUE(expectExistString_, expectExistString) };


  protected:
    std::shared_ptr<vector<string>> expectExistString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
