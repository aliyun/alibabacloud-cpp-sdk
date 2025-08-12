// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPSSTEPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSOPTIONJSONSTEPSSTEPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& obj) { 
      DARABONBA_PTR_TO_JSON(allow_failure, allowFailure_);
      DARABONBA_PTR_TO_JSON(auto_extract_cookie, autoExtractCookie_);
      DARABONBA_PTR_TO_JSON(extracted_variables, extractedVariables_);
      DARABONBA_PTR_TO_JSON(is_critical, isCritical_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(option, option_);
      DARABONBA_PTR_TO_JSON(step_name, stepName_);
      DARABONBA_PTR_TO_JSON(step_type, stepType_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(use_generated_cookie, useGeneratedCookie_);
      DARABONBA_PTR_TO_JSON(wait_time_in_secs, waitTimeInSecs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(allow_failure, allowFailure_);
      DARABONBA_PTR_FROM_JSON(auto_extract_cookie, autoExtractCookie_);
      DARABONBA_PTR_FROM_JSON(extracted_variables, extractedVariables_);
      DARABONBA_PTR_FROM_JSON(is_critical, isCritical_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(option, option_);
      DARABONBA_PTR_FROM_JSON(step_name, stepName_);
      DARABONBA_PTR_FROM_JSON(step_type, stepType_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(use_generated_cookie, useGeneratedCookie_);
      DARABONBA_PTR_FROM_JSON(wait_time_in_secs, waitTimeInSecs_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowFailure_ != nullptr
        && this->autoExtractCookie_ != nullptr && this->extractedVariables_ != nullptr && this->isCritical_ != nullptr && this->name_ != nullptr && this->option_ != nullptr
        && this->stepName_ != nullptr && this->stepType_ != nullptr && this->url_ != nullptr && this->useGeneratedCookie_ != nullptr && this->waitTimeInSecs_ != nullptr; };
    // allowFailure Field Functions 
    bool hasAllowFailure() const { return this->allowFailure_ != nullptr;};
    void deleteAllowFailure() { this->allowFailure_ = nullptr;};
    inline bool allowFailure() const { DARABONBA_PTR_GET_DEFAULT(allowFailure_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setAllowFailure(bool allowFailure) { DARABONBA_PTR_SET_VALUE(allowFailure_, allowFailure) };


    // autoExtractCookie Field Functions 
    bool hasAutoExtractCookie() const { return this->autoExtractCookie_ != nullptr;};
    void deleteAutoExtractCookie() { this->autoExtractCookie_ = nullptr;};
    inline bool autoExtractCookie() const { DARABONBA_PTR_GET_DEFAULT(autoExtractCookie_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setAutoExtractCookie(bool autoExtractCookie) { DARABONBA_PTR_SET_VALUE(autoExtractCookie_, autoExtractCookie) };


    // extractedVariables Field Functions 
    bool hasExtractedVariables() const { return this->extractedVariables_ != nullptr;};
    void deleteExtractedVariables() { this->extractedVariables_ = nullptr;};
    inline const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables & extractedVariables() const { DARABONBA_PTR_GET_CONST(extractedVariables_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables) };
    inline Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables extractedVariables() { DARABONBA_PTR_GET(extractedVariables_, Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setExtractedVariables(const Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables & extractedVariables) { DARABONBA_PTR_SET_VALUE(extractedVariables_, extractedVariables) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setExtractedVariables(Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables && extractedVariables) { DARABONBA_PTR_SET_RVALUE(extractedVariables_, extractedVariables) };


    // isCritical Field Functions 
    bool hasIsCritical() const { return this->isCritical_ != nullptr;};
    void deleteIsCritical() { this->isCritical_ = nullptr;};
    inline bool isCritical() const { DARABONBA_PTR_GET_DEFAULT(isCritical_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setIsCritical(bool isCritical) { DARABONBA_PTR_SET_VALUE(isCritical_, isCritical) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // useGeneratedCookie Field Functions 
    bool hasUseGeneratedCookie() const { return this->useGeneratedCookie_ != nullptr;};
    void deleteUseGeneratedCookie() { this->useGeneratedCookie_ = nullptr;};
    inline bool useGeneratedCookie() const { DARABONBA_PTR_GET_DEFAULT(useGeneratedCookie_, false) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setUseGeneratedCookie(bool useGeneratedCookie) { DARABONBA_PTR_SET_VALUE(useGeneratedCookie_, useGeneratedCookie) };


    // waitTimeInSecs Field Functions 
    bool hasWaitTimeInSecs() const { return this->waitTimeInSecs_ != nullptr;};
    void deleteWaitTimeInSecs() { this->waitTimeInSecs_ = nullptr;};
    inline int32_t waitTimeInSecs() const { DARABONBA_PTR_GET_DEFAULT(waitTimeInSecs_, 0) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsSteps& setWaitTimeInSecs(int32_t waitTimeInSecs) { DARABONBA_PTR_SET_VALUE(waitTimeInSecs_, waitTimeInSecs) };


  protected:
    std::shared_ptr<bool> allowFailure_ = nullptr;
    std::shared_ptr<bool> autoExtractCookie_ = nullptr;
    std::shared_ptr<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsOptionJsonStepsStepsExtractedVariables> extractedVariables_ = nullptr;
    std::shared_ptr<bool> isCritical_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> option_ = nullptr;
    std::shared_ptr<string> stepName_ = nullptr;
    std::shared_ptr<string> stepType_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<bool> useGeneratedCookie_ = nullptr;
    std::shared_ptr<int32_t> waitTimeInSecs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
