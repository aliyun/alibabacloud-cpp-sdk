// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& obj) { 
      DARABONBA_PTR_TO_JSON(steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(steps, steps_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->steps_ == nullptr; };
    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& setSteps(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonSteps& setSteps(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
