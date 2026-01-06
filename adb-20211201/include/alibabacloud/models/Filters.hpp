// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERS_HPP_
#define ALIBABACLOUD_MODELS_FILTERS_HPP_
#include <darabonba/Core.hpp>
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
    class TermiatedTimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TermiatedTimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(MaxTimeInMills, maxTimeInMills_);
        DARABONBA_PTR_TO_JSON(MinTimeInMills, minTimeInMills_);
      };
      friend void from_json(const Darabonba::Json& j, TermiatedTimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxTimeInMills, maxTimeInMills_);
        DARABONBA_PTR_FROM_JSON(MinTimeInMills, minTimeInMills_);
      };
      TermiatedTimeRange() = default ;
      TermiatedTimeRange(const TermiatedTimeRange &) = default ;
      TermiatedTimeRange(TermiatedTimeRange &&) = default ;
      TermiatedTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TermiatedTimeRange() = default ;
      TermiatedTimeRange& operator=(const TermiatedTimeRange &) = default ;
      TermiatedTimeRange& operator=(TermiatedTimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxTimeInMills_ == nullptr
        && this->minTimeInMills_ == nullptr; };
      // maxTimeInMills Field Functions 
      bool hasMaxTimeInMills() const { return this->maxTimeInMills_ != nullptr;};
      void deleteMaxTimeInMills() { this->maxTimeInMills_ = nullptr;};
      inline int64_t getMaxTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(maxTimeInMills_, 0L) };
      inline TermiatedTimeRange& setMaxTimeInMills(int64_t maxTimeInMills) { DARABONBA_PTR_SET_VALUE(maxTimeInMills_, maxTimeInMills) };


      // minTimeInMills Field Functions 
      bool hasMinTimeInMills() const { return this->minTimeInMills_ != nullptr;};
      void deleteMinTimeInMills() { this->minTimeInMills_ = nullptr;};
      inline int64_t getMinTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(minTimeInMills_, 0L) };
      inline TermiatedTimeRange& setMinTimeInMills(int64_t minTimeInMills) { DARABONBA_PTR_SET_VALUE(minTimeInMills_, minTimeInMills) };


    protected:
      shared_ptr<int64_t> maxTimeInMills_ {};
      shared_ptr<int64_t> minTimeInMills_ {};
    };

    class SubmitTimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitTimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(MaxTimeInMills, maxTimeInMills_);
        DARABONBA_PTR_TO_JSON(MinTimeInMills, minTimeInMills_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitTimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxTimeInMills, maxTimeInMills_);
        DARABONBA_PTR_FROM_JSON(MinTimeInMills, minTimeInMills_);
      };
      SubmitTimeRange() = default ;
      SubmitTimeRange(const SubmitTimeRange &) = default ;
      SubmitTimeRange(SubmitTimeRange &&) = default ;
      SubmitTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitTimeRange() = default ;
      SubmitTimeRange& operator=(const SubmitTimeRange &) = default ;
      SubmitTimeRange& operator=(SubmitTimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxTimeInMills_ == nullptr
        && this->minTimeInMills_ == nullptr; };
      // maxTimeInMills Field Functions 
      bool hasMaxTimeInMills() const { return this->maxTimeInMills_ != nullptr;};
      void deleteMaxTimeInMills() { this->maxTimeInMills_ = nullptr;};
      inline int64_t getMaxTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(maxTimeInMills_, 0L) };
      inline SubmitTimeRange& setMaxTimeInMills(int64_t maxTimeInMills) { DARABONBA_PTR_SET_VALUE(maxTimeInMills_, maxTimeInMills) };


      // minTimeInMills Field Functions 
      bool hasMinTimeInMills() const { return this->minTimeInMills_ != nullptr;};
      void deleteMinTimeInMills() { this->minTimeInMills_ = nullptr;};
      inline int64_t getMinTimeInMills() const { DARABONBA_PTR_GET_DEFAULT(minTimeInMills_, 0L) };
      inline SubmitTimeRange& setMinTimeInMills(int64_t minTimeInMills) { DARABONBA_PTR_SET_VALUE(minTimeInMills_, minTimeInMills) };


    protected:
      shared_ptr<int64_t> maxTimeInMills_ {};
      shared_ptr<int64_t> minTimeInMills_ {};
    };

    class ExecutionTimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutionTimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(MaxTimeInSeconds, maxTimeInSeconds_);
        DARABONBA_PTR_TO_JSON(MinTimeInSeconds, minTimeInSeconds_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutionTimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxTimeInSeconds, maxTimeInSeconds_);
        DARABONBA_PTR_FROM_JSON(MinTimeInSeconds, minTimeInSeconds_);
      };
      ExecutionTimeRange() = default ;
      ExecutionTimeRange(const ExecutionTimeRange &) = default ;
      ExecutionTimeRange(ExecutionTimeRange &&) = default ;
      ExecutionTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutionTimeRange() = default ;
      ExecutionTimeRange& operator=(const ExecutionTimeRange &) = default ;
      ExecutionTimeRange& operator=(ExecutionTimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxTimeInSeconds_ == nullptr
        && this->minTimeInSeconds_ == nullptr; };
      // maxTimeInSeconds Field Functions 
      bool hasMaxTimeInSeconds() const { return this->maxTimeInSeconds_ != nullptr;};
      void deleteMaxTimeInSeconds() { this->maxTimeInSeconds_ = nullptr;};
      inline int64_t getMaxTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxTimeInSeconds_, 0L) };
      inline ExecutionTimeRange& setMaxTimeInSeconds(int64_t maxTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxTimeInSeconds_, maxTimeInSeconds) };


      // minTimeInSeconds Field Functions 
      bool hasMinTimeInSeconds() const { return this->minTimeInSeconds_ != nullptr;};
      void deleteMinTimeInSeconds() { this->minTimeInSeconds_ = nullptr;};
      inline int64_t getMinTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(minTimeInSeconds_, 0L) };
      inline ExecutionTimeRange& setMinTimeInSeconds(int64_t minTimeInSeconds) { DARABONBA_PTR_SET_VALUE(minTimeInSeconds_, minTimeInSeconds) };


    protected:
      shared_ptr<int64_t> maxTimeInSeconds_ {};
      shared_ptr<int64_t> minTimeInSeconds_ {};
    };

    virtual bool empty() const override { return this->appIdRegex_ == nullptr
        && this->appNameRegex_ == nullptr && this->appState_ == nullptr && this->appType_ == nullptr && this->executionTimeRange_ == nullptr && this->submitTimeRange_ == nullptr
        && this->termiatedTimeRange_ == nullptr; };
    // appIdRegex Field Functions 
    bool hasAppIdRegex() const { return this->appIdRegex_ != nullptr;};
    void deleteAppIdRegex() { this->appIdRegex_ = nullptr;};
    inline string getAppIdRegex() const { DARABONBA_PTR_GET_DEFAULT(appIdRegex_, "") };
    inline Filters& setAppIdRegex(string appIdRegex) { DARABONBA_PTR_SET_VALUE(appIdRegex_, appIdRegex) };


    // appNameRegex Field Functions 
    bool hasAppNameRegex() const { return this->appNameRegex_ != nullptr;};
    void deleteAppNameRegex() { this->appNameRegex_ = nullptr;};
    inline string getAppNameRegex() const { DARABONBA_PTR_GET_DEFAULT(appNameRegex_, "") };
    inline Filters& setAppNameRegex(string appNameRegex) { DARABONBA_PTR_SET_VALUE(appNameRegex_, appNameRegex) };


    // appState Field Functions 
    bool hasAppState() const { return this->appState_ != nullptr;};
    void deleteAppState() { this->appState_ = nullptr;};
    inline string getAppState() const { DARABONBA_PTR_GET_DEFAULT(appState_, "") };
    inline Filters& setAppState(string appState) { DARABONBA_PTR_SET_VALUE(appState_, appState) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline Filters& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // executionTimeRange Field Functions 
    bool hasExecutionTimeRange() const { return this->executionTimeRange_ != nullptr;};
    void deleteExecutionTimeRange() { this->executionTimeRange_ = nullptr;};
    inline const Filters::ExecutionTimeRange & getExecutionTimeRange() const { DARABONBA_PTR_GET_CONST(executionTimeRange_, Filters::ExecutionTimeRange) };
    inline Filters::ExecutionTimeRange getExecutionTimeRange() { DARABONBA_PTR_GET(executionTimeRange_, Filters::ExecutionTimeRange) };
    inline Filters& setExecutionTimeRange(const Filters::ExecutionTimeRange & executionTimeRange) { DARABONBA_PTR_SET_VALUE(executionTimeRange_, executionTimeRange) };
    inline Filters& setExecutionTimeRange(Filters::ExecutionTimeRange && executionTimeRange) { DARABONBA_PTR_SET_RVALUE(executionTimeRange_, executionTimeRange) };


    // submitTimeRange Field Functions 
    bool hasSubmitTimeRange() const { return this->submitTimeRange_ != nullptr;};
    void deleteSubmitTimeRange() { this->submitTimeRange_ = nullptr;};
    inline const Filters::SubmitTimeRange & getSubmitTimeRange() const { DARABONBA_PTR_GET_CONST(submitTimeRange_, Filters::SubmitTimeRange) };
    inline Filters::SubmitTimeRange getSubmitTimeRange() { DARABONBA_PTR_GET(submitTimeRange_, Filters::SubmitTimeRange) };
    inline Filters& setSubmitTimeRange(const Filters::SubmitTimeRange & submitTimeRange) { DARABONBA_PTR_SET_VALUE(submitTimeRange_, submitTimeRange) };
    inline Filters& setSubmitTimeRange(Filters::SubmitTimeRange && submitTimeRange) { DARABONBA_PTR_SET_RVALUE(submitTimeRange_, submitTimeRange) };


    // termiatedTimeRange Field Functions 
    bool hasTermiatedTimeRange() const { return this->termiatedTimeRange_ != nullptr;};
    void deleteTermiatedTimeRange() { this->termiatedTimeRange_ = nullptr;};
    inline const Filters::TermiatedTimeRange & getTermiatedTimeRange() const { DARABONBA_PTR_GET_CONST(termiatedTimeRange_, Filters::TermiatedTimeRange) };
    inline Filters::TermiatedTimeRange getTermiatedTimeRange() { DARABONBA_PTR_GET(termiatedTimeRange_, Filters::TermiatedTimeRange) };
    inline Filters& setTermiatedTimeRange(const Filters::TermiatedTimeRange & termiatedTimeRange) { DARABONBA_PTR_SET_VALUE(termiatedTimeRange_, termiatedTimeRange) };
    inline Filters& setTermiatedTimeRange(Filters::TermiatedTimeRange && termiatedTimeRange) { DARABONBA_PTR_SET_RVALUE(termiatedTimeRange_, termiatedTimeRange) };


  protected:
    shared_ptr<string> appIdRegex_ {};
    shared_ptr<string> appNameRegex_ {};
    shared_ptr<string> appState_ {};
    shared_ptr<string> appType_ {};
    shared_ptr<Filters::ExecutionTimeRange> executionTimeRange_ {};
    shared_ptr<Filters::SubmitTimeRange> submitTimeRange_ {};
    shared_ptr<Filters::TermiatedTimeRange> termiatedTimeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
