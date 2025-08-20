// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERS_HPP_
#define ALIBABACLOUD_MODELS_FILTERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FiltersExecutionTimeRange.hpp>
#include <alibabacloud/models/FiltersSubmitTimeRange.hpp>
#include <alibabacloud/models/FiltersTermiatedTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class Filters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Filters& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdRegex, appIdRegex_);
      DARABONBA_PTR_TO_JSON(AppNameRegex, appNameRegex_);
      DARABONBA_PTR_TO_JSON(AppState, appState_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ExecutionTimeRange, executionTimeRange_);
      DARABONBA_PTR_TO_JSON(SubmitTimeRange, submitTimeRange_);
      DARABONBA_PTR_TO_JSON(TermiatedTimeRange, termiatedTimeRange_);
    };
    friend void from_json(const Darabonba::Json& j, Filters& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdRegex, appIdRegex_);
      DARABONBA_PTR_FROM_JSON(AppNameRegex, appNameRegex_);
      DARABONBA_PTR_FROM_JSON(AppState, appState_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ExecutionTimeRange, executionTimeRange_);
      DARABONBA_PTR_FROM_JSON(SubmitTimeRange, submitTimeRange_);
      DARABONBA_PTR_FROM_JSON(TermiatedTimeRange, termiatedTimeRange_);
    };
    Filters() = default ;
    Filters(const Filters &) = default ;
    Filters(Filters &&) = default ;
    Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Filters() = default ;
    Filters& operator=(const Filters &) = default ;
    Filters& operator=(Filters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdRegex_ != nullptr
        && this->appNameRegex_ != nullptr && this->appState_ != nullptr && this->appType_ != nullptr && this->executionTimeRange_ != nullptr && this->submitTimeRange_ != nullptr
        && this->termiatedTimeRange_ != nullptr; };
    // appIdRegex Field Functions 
    bool hasAppIdRegex() const { return this->appIdRegex_ != nullptr;};
    void deleteAppIdRegex() { this->appIdRegex_ = nullptr;};
    inline string appIdRegex() const { DARABONBA_PTR_GET_DEFAULT(appIdRegex_, "") };
    inline Filters& setAppIdRegex(string appIdRegex) { DARABONBA_PTR_SET_VALUE(appIdRegex_, appIdRegex) };


    // appNameRegex Field Functions 
    bool hasAppNameRegex() const { return this->appNameRegex_ != nullptr;};
    void deleteAppNameRegex() { this->appNameRegex_ = nullptr;};
    inline string appNameRegex() const { DARABONBA_PTR_GET_DEFAULT(appNameRegex_, "") };
    inline Filters& setAppNameRegex(string appNameRegex) { DARABONBA_PTR_SET_VALUE(appNameRegex_, appNameRegex) };


    // appState Field Functions 
    bool hasAppState() const { return this->appState_ != nullptr;};
    void deleteAppState() { this->appState_ = nullptr;};
    inline string appState() const { DARABONBA_PTR_GET_DEFAULT(appState_, "") };
    inline Filters& setAppState(string appState) { DARABONBA_PTR_SET_VALUE(appState_, appState) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline Filters& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // executionTimeRange Field Functions 
    bool hasExecutionTimeRange() const { return this->executionTimeRange_ != nullptr;};
    void deleteExecutionTimeRange() { this->executionTimeRange_ = nullptr;};
    inline const FiltersExecutionTimeRange & executionTimeRange() const { DARABONBA_PTR_GET_CONST(executionTimeRange_, FiltersExecutionTimeRange) };
    inline FiltersExecutionTimeRange executionTimeRange() { DARABONBA_PTR_GET(executionTimeRange_, FiltersExecutionTimeRange) };
    inline Filters& setExecutionTimeRange(const FiltersExecutionTimeRange & executionTimeRange) { DARABONBA_PTR_SET_VALUE(executionTimeRange_, executionTimeRange) };
    inline Filters& setExecutionTimeRange(FiltersExecutionTimeRange && executionTimeRange) { DARABONBA_PTR_SET_RVALUE(executionTimeRange_, executionTimeRange) };


    // submitTimeRange Field Functions 
    bool hasSubmitTimeRange() const { return this->submitTimeRange_ != nullptr;};
    void deleteSubmitTimeRange() { this->submitTimeRange_ = nullptr;};
    inline const FiltersSubmitTimeRange & submitTimeRange() const { DARABONBA_PTR_GET_CONST(submitTimeRange_, FiltersSubmitTimeRange) };
    inline FiltersSubmitTimeRange submitTimeRange() { DARABONBA_PTR_GET(submitTimeRange_, FiltersSubmitTimeRange) };
    inline Filters& setSubmitTimeRange(const FiltersSubmitTimeRange & submitTimeRange) { DARABONBA_PTR_SET_VALUE(submitTimeRange_, submitTimeRange) };
    inline Filters& setSubmitTimeRange(FiltersSubmitTimeRange && submitTimeRange) { DARABONBA_PTR_SET_RVALUE(submitTimeRange_, submitTimeRange) };


    // termiatedTimeRange Field Functions 
    bool hasTermiatedTimeRange() const { return this->termiatedTimeRange_ != nullptr;};
    void deleteTermiatedTimeRange() { this->termiatedTimeRange_ = nullptr;};
    inline const FiltersTermiatedTimeRange & termiatedTimeRange() const { DARABONBA_PTR_GET_CONST(termiatedTimeRange_, FiltersTermiatedTimeRange) };
    inline FiltersTermiatedTimeRange termiatedTimeRange() { DARABONBA_PTR_GET(termiatedTimeRange_, FiltersTermiatedTimeRange) };
    inline Filters& setTermiatedTimeRange(const FiltersTermiatedTimeRange & termiatedTimeRange) { DARABONBA_PTR_SET_VALUE(termiatedTimeRange_, termiatedTimeRange) };
    inline Filters& setTermiatedTimeRange(FiltersTermiatedTimeRange && termiatedTimeRange) { DARABONBA_PTR_SET_RVALUE(termiatedTimeRange_, termiatedTimeRange) };


  protected:
    std::shared_ptr<string> appIdRegex_ = nullptr;
    std::shared_ptr<string> appNameRegex_ = nullptr;
    std::shared_ptr<string> appState_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<FiltersExecutionTimeRange> executionTimeRange_ = nullptr;
    std::shared_ptr<FiltersSubmitTimeRange> submitTimeRange_ = nullptr;
    std::shared_ptr<FiltersTermiatedTimeRange> termiatedTimeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
