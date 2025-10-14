// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONCONFIGVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONCONFIGVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& obj) { 
      DARABONBA_PTR_TO_JSON(config_variables, configVariables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(config_variables, configVariables_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configVariables_ == nullptr; };
    // configVariables Field Functions 
    bool hasConfigVariables() const { return this->configVariables_ != nullptr;};
    void deleteConfigVariables() { this->configVariables_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables> & configVariables() const { DARABONBA_PTR_GET_CONST(configVariables_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables> configVariables() { DARABONBA_PTR_GET(configVariables_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& setConfigVariables(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables> & configVariables) { DARABONBA_PTR_SET_VALUE(configVariables_, configVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariables& setConfigVariables(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables> && configVariables) { DARABONBA_PTR_SET_RVALUE(configVariables_, configVariables) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonConfigVariablesConfigVariables>> configVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
