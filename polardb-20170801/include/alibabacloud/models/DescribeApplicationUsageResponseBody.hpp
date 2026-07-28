// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DailyUsage, dailyUsage_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ModelUsage, modelUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionSummary, sessionSummary_);
      DARABONBA_PTR_TO_JSON(SkillUsage, skillUsage_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DailyUsage, dailyUsage_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ModelUsage, modelUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionSummary, sessionSummary_);
      DARABONBA_PTR_FROM_JSON(SkillUsage, skillUsage_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    DescribeApplicationUsageResponseBody() = default ;
    DescribeApplicationUsageResponseBody(const DescribeApplicationUsageResponseBody &) = default ;
    DescribeApplicationUsageResponseBody(DescribeApplicationUsageResponseBody &&) = default ;
    DescribeApplicationUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationUsageResponseBody() = default ;
    DescribeApplicationUsageResponseBody& operator=(const DescribeApplicationUsageResponseBody &) = default ;
    DescribeApplicationUsageResponseBody& operator=(DescribeApplicationUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(APICalls, APICalls_);
        DARABONBA_PTR_TO_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(APICalls, APICalls_);
        DARABONBA_PTR_FROM_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->APICalls_ == nullptr
        && this->cacheReadTokens_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->reasoningTokens_ == nullptr && this->sessions_ == nullptr; };
      // APICalls Field Functions 
      bool hasAPICalls() const { return this->APICalls_ != nullptr;};
      void deleteAPICalls() { this->APICalls_ = nullptr;};
      inline int64_t getAPICalls() const { DARABONBA_PTR_GET_DEFAULT(APICalls_, 0L) };
      inline Summary& setAPICalls(int64_t APICalls) { DARABONBA_PTR_SET_VALUE(APICalls_, APICalls) };


      // cacheReadTokens Field Functions 
      bool hasCacheReadTokens() const { return this->cacheReadTokens_ != nullptr;};
      void deleteCacheReadTokens() { this->cacheReadTokens_ = nullptr;};
      inline int64_t getCacheReadTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheReadTokens_, 0L) };
      inline Summary& setCacheReadTokens(int64_t cacheReadTokens) { DARABONBA_PTR_SET_VALUE(cacheReadTokens_, cacheReadTokens) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline Summary& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline Summary& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // reasoningTokens Field Functions 
      bool hasReasoningTokens() const { return this->reasoningTokens_ != nullptr;};
      void deleteReasoningTokens() { this->reasoningTokens_ = nullptr;};
      inline int64_t getReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningTokens_, 0L) };
      inline Summary& setReasoningTokens(int64_t reasoningTokens) { DARABONBA_PTR_SET_VALUE(reasoningTokens_, reasoningTokens) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline int64_t getSessions() const { DARABONBA_PTR_GET_DEFAULT(sessions_, 0L) };
      inline Summary& setSessions(int64_t sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };


    protected:
      // The number of model API calls.
      shared_ptr<int64_t> APICalls_ {};
      // The number of tokens served from cache hits.
      shared_ptr<int64_t> cacheReadTokens_ {};
      // The number of input tokens.
      shared_ptr<int64_t> inputTokens_ {};
      // The number of output tokens.
      shared_ptr<int64_t> outputTokens_ {};
      // The number of reasoning tokens.
      shared_ptr<int64_t> reasoningTokens_ {};
      // The number of sessions.
      shared_ptr<int64_t> sessions_ {};
    };

    class SkillUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillUsage& obj) { 
        DARABONBA_PTR_TO_JSON(DistinctSkills, distinctSkills_);
        DARABONBA_PTR_TO_JSON(TotalActions, totalActions_);
        DARABONBA_PTR_TO_JSON(TotalEdits, totalEdits_);
        DARABONBA_PTR_TO_JSON(TotalLoads, totalLoads_);
      };
      friend void from_json(const Darabonba::Json& j, SkillUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(DistinctSkills, distinctSkills_);
        DARABONBA_PTR_FROM_JSON(TotalActions, totalActions_);
        DARABONBA_PTR_FROM_JSON(TotalEdits, totalEdits_);
        DARABONBA_PTR_FROM_JSON(TotalLoads, totalLoads_);
      };
      SkillUsage() = default ;
      SkillUsage(const SkillUsage &) = default ;
      SkillUsage(SkillUsage &&) = default ;
      SkillUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillUsage() = default ;
      SkillUsage& operator=(const SkillUsage &) = default ;
      SkillUsage& operator=(SkillUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->distinctSkills_ == nullptr
        && this->totalActions_ == nullptr && this->totalEdits_ == nullptr && this->totalLoads_ == nullptr; };
      // distinctSkills Field Functions 
      bool hasDistinctSkills() const { return this->distinctSkills_ != nullptr;};
      void deleteDistinctSkills() { this->distinctSkills_ = nullptr;};
      inline int64_t getDistinctSkills() const { DARABONBA_PTR_GET_DEFAULT(distinctSkills_, 0L) };
      inline SkillUsage& setDistinctSkills(int64_t distinctSkills) { DARABONBA_PTR_SET_VALUE(distinctSkills_, distinctSkills) };


      // totalActions Field Functions 
      bool hasTotalActions() const { return this->totalActions_ != nullptr;};
      void deleteTotalActions() { this->totalActions_ = nullptr;};
      inline int64_t getTotalActions() const { DARABONBA_PTR_GET_DEFAULT(totalActions_, 0L) };
      inline SkillUsage& setTotalActions(int64_t totalActions) { DARABONBA_PTR_SET_VALUE(totalActions_, totalActions) };


      // totalEdits Field Functions 
      bool hasTotalEdits() const { return this->totalEdits_ != nullptr;};
      void deleteTotalEdits() { this->totalEdits_ = nullptr;};
      inline int64_t getTotalEdits() const { DARABONBA_PTR_GET_DEFAULT(totalEdits_, 0L) };
      inline SkillUsage& setTotalEdits(int64_t totalEdits) { DARABONBA_PTR_SET_VALUE(totalEdits_, totalEdits) };


      // totalLoads Field Functions 
      bool hasTotalLoads() const { return this->totalLoads_ != nullptr;};
      void deleteTotalLoads() { this->totalLoads_ = nullptr;};
      inline int64_t getTotalLoads() const { DARABONBA_PTR_GET_DEFAULT(totalLoads_, 0L) };
      inline SkillUsage& setTotalLoads(int64_t totalLoads) { DARABONBA_PTR_SET_VALUE(totalLoads_, totalLoads) };


    protected:
      // The number of distinct skills that have activity records.
      shared_ptr<int64_t> distinctSkills_ {};
      // The total number of skill-related operations.
      shared_ptr<int64_t> totalActions_ {};
      // The number of times skills were edited or managed.
      shared_ptr<int64_t> totalEdits_ {};
      // The number of times skills were loaded or viewed.
      shared_ptr<int64_t> totalLoads_ {};
    };

    class SessionSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionSummary& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveSessions, activeSessions_);
        DARABONBA_PTR_TO_JSON(StoredSessions, storedSessions_);
      };
      friend void from_json(const Darabonba::Json& j, SessionSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveSessions, activeSessions_);
        DARABONBA_PTR_FROM_JSON(StoredSessions, storedSessions_);
      };
      SessionSummary() = default ;
      SessionSummary(const SessionSummary &) = default ;
      SessionSummary(SessionSummary &&) = default ;
      SessionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionSummary() = default ;
      SessionSummary& operator=(const SessionSummary &) = default ;
      SessionSummary& operator=(SessionSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeSessions_ == nullptr
        && this->storedSessions_ == nullptr; };
      // activeSessions Field Functions 
      bool hasActiveSessions() const { return this->activeSessions_ != nullptr;};
      void deleteActiveSessions() { this->activeSessions_ = nullptr;};
      inline int64_t getActiveSessions() const { DARABONBA_PTR_GET_DEFAULT(activeSessions_, 0L) };
      inline SessionSummary& setActiveSessions(int64_t activeSessions) { DARABONBA_PTR_SET_VALUE(activeSessions_, activeSessions) };


      // storedSessions Field Functions 
      bool hasStoredSessions() const { return this->storedSessions_ != nullptr;};
      void deleteStoredSessions() { this->storedSessions_ = nullptr;};
      inline int64_t getStoredSessions() const { DARABONBA_PTR_GET_DEFAULT(storedSessions_, 0L) };
      inline SessionSummary& setStoredSessions(int64_t storedSessions) { DARABONBA_PTR_SET_VALUE(storedSessions_, storedSessions) };


    protected:
      // The number of currently active sessions.
      shared_ptr<int64_t> activeSessions_ {};
      // The total number of sessions in session storage.
      shared_ptr<int64_t> storedSessions_ {};
    };

    class ModelUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelUsage& obj) { 
        DARABONBA_PTR_TO_JSON(APICalls, APICalls_);
        DARABONBA_PTR_TO_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      };
      friend void from_json(const Darabonba::Json& j, ModelUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(APICalls, APICalls_);
        DARABONBA_PTR_FROM_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      };
      ModelUsage() = default ;
      ModelUsage(const ModelUsage &) = default ;
      ModelUsage(ModelUsage &&) = default ;
      ModelUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelUsage() = default ;
      ModelUsage& operator=(const ModelUsage &) = default ;
      ModelUsage& operator=(ModelUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->APICalls_ == nullptr
        && this->cacheReadTokens_ == nullptr && this->inputTokens_ == nullptr && this->model_ == nullptr && this->outputTokens_ == nullptr && this->provider_ == nullptr
        && this->reasoningTokens_ == nullptr && this->sessions_ == nullptr; };
      // APICalls Field Functions 
      bool hasAPICalls() const { return this->APICalls_ != nullptr;};
      void deleteAPICalls() { this->APICalls_ = nullptr;};
      inline int64_t getAPICalls() const { DARABONBA_PTR_GET_DEFAULT(APICalls_, 0L) };
      inline ModelUsage& setAPICalls(int64_t APICalls) { DARABONBA_PTR_SET_VALUE(APICalls_, APICalls) };


      // cacheReadTokens Field Functions 
      bool hasCacheReadTokens() const { return this->cacheReadTokens_ != nullptr;};
      void deleteCacheReadTokens() { this->cacheReadTokens_ = nullptr;};
      inline int64_t getCacheReadTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheReadTokens_, 0L) };
      inline ModelUsage& setCacheReadTokens(int64_t cacheReadTokens) { DARABONBA_PTR_SET_VALUE(cacheReadTokens_, cacheReadTokens) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline ModelUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline ModelUsage& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline ModelUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ModelUsage& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // reasoningTokens Field Functions 
      bool hasReasoningTokens() const { return this->reasoningTokens_ != nullptr;};
      void deleteReasoningTokens() { this->reasoningTokens_ = nullptr;};
      inline int64_t getReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningTokens_, 0L) };
      inline ModelUsage& setReasoningTokens(int64_t reasoningTokens) { DARABONBA_PTR_SET_VALUE(reasoningTokens_, reasoningTokens) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline int64_t getSessions() const { DARABONBA_PTR_GET_DEFAULT(sessions_, 0L) };
      inline ModelUsage& setSessions(int64_t sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };


    protected:
      // The number of API calls for this model.
      shared_ptr<int64_t> APICalls_ {};
      // The number of tokens served from cache hits for this model.
      shared_ptr<int64_t> cacheReadTokens_ {};
      // The number of input tokens consumed by this model.
      shared_ptr<int64_t> inputTokens_ {};
      // The model identifier.
      shared_ptr<string> model_ {};
      // The number of output tokens generated by this model.
      shared_ptr<int64_t> outputTokens_ {};
      // The model provider.
      shared_ptr<string> provider_ {};
      // The number of reasoning tokens generated by this model.
      shared_ptr<int64_t> reasoningTokens_ {};
      // The number of sessions that used this model.
      shared_ptr<int64_t> sessions_ {};
    };

    class DailyUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DailyUsage& obj) { 
        DARABONBA_PTR_TO_JSON(APICalls, APICalls_);
        DARABONBA_PTR_TO_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
      };
      friend void from_json(const Darabonba::Json& j, DailyUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(APICalls, APICalls_);
        DARABONBA_PTR_FROM_JSON(CacheReadTokens, cacheReadTokens_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(ReasoningTokens, reasoningTokens_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
      };
      DailyUsage() = default ;
      DailyUsage(const DailyUsage &) = default ;
      DailyUsage(DailyUsage &&) = default ;
      DailyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DailyUsage() = default ;
      DailyUsage& operator=(const DailyUsage &) = default ;
      DailyUsage& operator=(DailyUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->APICalls_ == nullptr
        && this->cacheReadTokens_ == nullptr && this->date_ == nullptr && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->reasoningTokens_ == nullptr
        && this->sessions_ == nullptr; };
      // APICalls Field Functions 
      bool hasAPICalls() const { return this->APICalls_ != nullptr;};
      void deleteAPICalls() { this->APICalls_ = nullptr;};
      inline int64_t getAPICalls() const { DARABONBA_PTR_GET_DEFAULT(APICalls_, 0L) };
      inline DailyUsage& setAPICalls(int64_t APICalls) { DARABONBA_PTR_SET_VALUE(APICalls_, APICalls) };


      // cacheReadTokens Field Functions 
      bool hasCacheReadTokens() const { return this->cacheReadTokens_ != nullptr;};
      void deleteCacheReadTokens() { this->cacheReadTokens_ = nullptr;};
      inline int64_t getCacheReadTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheReadTokens_, 0L) };
      inline DailyUsage& setCacheReadTokens(int64_t cacheReadTokens) { DARABONBA_PTR_SET_VALUE(cacheReadTokens_, cacheReadTokens) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline DailyUsage& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline DailyUsage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline DailyUsage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // reasoningTokens Field Functions 
      bool hasReasoningTokens() const { return this->reasoningTokens_ != nullptr;};
      void deleteReasoningTokens() { this->reasoningTokens_ = nullptr;};
      inline int64_t getReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningTokens_, 0L) };
      inline DailyUsage& setReasoningTokens(int64_t reasoningTokens) { DARABONBA_PTR_SET_VALUE(reasoningTokens_, reasoningTokens) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline int64_t getSessions() const { DARABONBA_PTR_GET_DEFAULT(sessions_, 0L) };
      inline DailyUsage& setSessions(int64_t sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };


    protected:
      // The number of model API calls for the day.
      shared_ptr<int64_t> APICalls_ {};
      // The number of tokens served from cache hits for the day.
      shared_ptr<int64_t> cacheReadTokens_ {};
      // The UTC date.
      shared_ptr<string> date_ {};
      // The number of input tokens for the day.
      shared_ptr<int64_t> inputTokens_ {};
      // The number of output tokens for the day.
      shared_ptr<int64_t> outputTokens_ {};
      // The number of reasoning tokens for the day.
      shared_ptr<int64_t> reasoningTokens_ {};
      // The number of sessions for the day.
      shared_ptr<int64_t> sessions_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->dailyUsage_ == nullptr && this->days_ == nullptr && this->message_ == nullptr && this->modelUsage_ == nullptr
        && this->requestId_ == nullptr && this->sessionSummary_ == nullptr && this->skillUsage_ == nullptr && this->summary_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationUsageResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeApplicationUsageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dailyUsage Field Functions 
    bool hasDailyUsage() const { return this->dailyUsage_ != nullptr;};
    void deleteDailyUsage() { this->dailyUsage_ = nullptr;};
    inline const vector<DescribeApplicationUsageResponseBody::DailyUsage> & getDailyUsage() const { DARABONBA_PTR_GET_CONST(dailyUsage_, vector<DescribeApplicationUsageResponseBody::DailyUsage>) };
    inline vector<DescribeApplicationUsageResponseBody::DailyUsage> getDailyUsage() { DARABONBA_PTR_GET(dailyUsage_, vector<DescribeApplicationUsageResponseBody::DailyUsage>) };
    inline DescribeApplicationUsageResponseBody& setDailyUsage(const vector<DescribeApplicationUsageResponseBody::DailyUsage> & dailyUsage) { DARABONBA_PTR_SET_VALUE(dailyUsage_, dailyUsage) };
    inline DescribeApplicationUsageResponseBody& setDailyUsage(vector<DescribeApplicationUsageResponseBody::DailyUsage> && dailyUsage) { DARABONBA_PTR_SET_RVALUE(dailyUsage_, dailyUsage) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline DescribeApplicationUsageResponseBody& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApplicationUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // modelUsage Field Functions 
    bool hasModelUsage() const { return this->modelUsage_ != nullptr;};
    void deleteModelUsage() { this->modelUsage_ = nullptr;};
    inline const vector<DescribeApplicationUsageResponseBody::ModelUsage> & getModelUsage() const { DARABONBA_PTR_GET_CONST(modelUsage_, vector<DescribeApplicationUsageResponseBody::ModelUsage>) };
    inline vector<DescribeApplicationUsageResponseBody::ModelUsage> getModelUsage() { DARABONBA_PTR_GET(modelUsage_, vector<DescribeApplicationUsageResponseBody::ModelUsage>) };
    inline DescribeApplicationUsageResponseBody& setModelUsage(const vector<DescribeApplicationUsageResponseBody::ModelUsage> & modelUsage) { DARABONBA_PTR_SET_VALUE(modelUsage_, modelUsage) };
    inline DescribeApplicationUsageResponseBody& setModelUsage(vector<DescribeApplicationUsageResponseBody::ModelUsage> && modelUsage) { DARABONBA_PTR_SET_RVALUE(modelUsage_, modelUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionSummary Field Functions 
    bool hasSessionSummary() const { return this->sessionSummary_ != nullptr;};
    void deleteSessionSummary() { this->sessionSummary_ = nullptr;};
    inline const DescribeApplicationUsageResponseBody::SessionSummary & getSessionSummary() const { DARABONBA_PTR_GET_CONST(sessionSummary_, DescribeApplicationUsageResponseBody::SessionSummary) };
    inline DescribeApplicationUsageResponseBody::SessionSummary getSessionSummary() { DARABONBA_PTR_GET(sessionSummary_, DescribeApplicationUsageResponseBody::SessionSummary) };
    inline DescribeApplicationUsageResponseBody& setSessionSummary(const DescribeApplicationUsageResponseBody::SessionSummary & sessionSummary) { DARABONBA_PTR_SET_VALUE(sessionSummary_, sessionSummary) };
    inline DescribeApplicationUsageResponseBody& setSessionSummary(DescribeApplicationUsageResponseBody::SessionSummary && sessionSummary) { DARABONBA_PTR_SET_RVALUE(sessionSummary_, sessionSummary) };


    // skillUsage Field Functions 
    bool hasSkillUsage() const { return this->skillUsage_ != nullptr;};
    void deleteSkillUsage() { this->skillUsage_ = nullptr;};
    inline const DescribeApplicationUsageResponseBody::SkillUsage & getSkillUsage() const { DARABONBA_PTR_GET_CONST(skillUsage_, DescribeApplicationUsageResponseBody::SkillUsage) };
    inline DescribeApplicationUsageResponseBody::SkillUsage getSkillUsage() { DARABONBA_PTR_GET(skillUsage_, DescribeApplicationUsageResponseBody::SkillUsage) };
    inline DescribeApplicationUsageResponseBody& setSkillUsage(const DescribeApplicationUsageResponseBody::SkillUsage & skillUsage) { DARABONBA_PTR_SET_VALUE(skillUsage_, skillUsage) };
    inline DescribeApplicationUsageResponseBody& setSkillUsage(DescribeApplicationUsageResponseBody::SkillUsage && skillUsage) { DARABONBA_PTR_SET_RVALUE(skillUsage_, skillUsage) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const DescribeApplicationUsageResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, DescribeApplicationUsageResponseBody::Summary) };
    inline DescribeApplicationUsageResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, DescribeApplicationUsageResponseBody::Summary) };
    inline DescribeApplicationUsageResponseBody& setSummary(const DescribeApplicationUsageResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline DescribeApplicationUsageResponseBody& setSummary(DescribeApplicationUsageResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The Hermes application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The usage statistics grouped by UTC date.
    shared_ptr<vector<DescribeApplicationUsageResponseBody::DailyUsage>> dailyUsage_ {};
    // The number of days covered by this statistical period.
    shared_ptr<int32_t> days_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The usage statistics grouped by model.
    shared_ptr<vector<DescribeApplicationUsageResponseBody::ModelUsage>> modelUsage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The current session runtime and storage statistics.
    shared_ptr<DescribeApplicationUsageResponseBody::SessionSummary> sessionSummary_ {};
    // The aggregated statistics of skill activities.
    shared_ptr<DescribeApplicationUsageResponseBody::SkillUsage> skillUsage_ {};
    // The aggregated usage within the query period.
    shared_ptr<DescribeApplicationUsageResponseBody::Summary> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
