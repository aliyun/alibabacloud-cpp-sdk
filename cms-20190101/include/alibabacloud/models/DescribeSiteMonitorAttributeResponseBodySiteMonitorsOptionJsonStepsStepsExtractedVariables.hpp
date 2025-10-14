// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPSSTEPSEXTRACTEDVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPSSTEPSEXTRACTEDVARIABLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& obj) { 
      DARABONBA_PTR_TO_JSON(extracted_variables, extractedVariables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(extracted_variables, extractedVariables_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extractedVariables_ == nullptr; };
    // extractedVariables Field Functions 
    bool hasExtractedVariables() const { return this->extractedVariables_ != nullptr;};
    void deleteExtractedVariables() { this->extractedVariables_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables> & extractedVariables() const { DARABONBA_PTR_GET_CONST(extractedVariables_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables> extractedVariables() { DARABONBA_PTR_GET(extractedVariables_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& setExtractedVariables(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables> & extractedVariables) { DARABONBA_PTR_SET_VALUE(extractedVariables_, extractedVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables& setExtractedVariables(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables> && extractedVariables) { DARABONBA_PTR_SET_RVALUE(extractedVariables_, extractedVariables) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariablesExtractedVariables>> extractedVariables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
