// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCRIPTTRENDINGREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCRIPTTRENDINGREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetScriptTrendingReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScriptTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScriptTrendingReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetScriptTrendingReportResponseBody() = default ;
    GetScriptTrendingReportResponseBody(const GetScriptTrendingReportResponseBody &) = default ;
    GetScriptTrendingReportResponseBody(GetScriptTrendingReportResponseBody &&) = default ;
    GetScriptTrendingReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScriptTrendingReportResponseBody() = default ;
    GetScriptTrendingReportResponseBody& operator=(const GetScriptTrendingReportResponseBody &) = default ;
    GetScriptTrendingReportResponseBody& operator=(GetScriptTrendingReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallsHandled, callsHandled_);
        DARABONBA_PTR_TO_JSON(CallsOffered, callsOffered_);
        DARABONBA_PTR_TO_JSON(CallsRejected, callsRejected_);
        DARABONBA_PTR_TO_JSON(CallsResolved, callsResolved_);
        DARABONBA_PTR_TO_JSON(ConfiguredConcurrency, configuredConcurrency_);
        DARABONBA_PTR_TO_JSON(LabelBreakDown, labelBreakDown_);
        DARABONBA_PTR_TO_JSON(MaxTalkTime, maxTalkTime_);
        DARABONBA_PTR_TO_JSON(RejectionBreakdown, rejectionBreakdown_);
        DARABONBA_PTR_TO_JSON(ReleaseReasonBreakdown, releaseReasonBreakdown_);
        DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
        DARABONBA_PTR_TO_JSON(TalkTurnsDistribution, talkTurnsDistribution_);
        DARABONBA_PTR_TO_JSON(TotalInputTokens, totalInputTokens_);
        DARABONBA_PTR_TO_JSON(TotalOutputTokens, totalOutputTokens_);
        DARABONBA_PTR_TO_JSON(TotalTalkTime, totalTalkTime_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(UsedConcurrency, usedConcurrency_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallsHandled, callsHandled_);
        DARABONBA_PTR_FROM_JSON(CallsOffered, callsOffered_);
        DARABONBA_PTR_FROM_JSON(CallsRejected, callsRejected_);
        DARABONBA_PTR_FROM_JSON(CallsResolved, callsResolved_);
        DARABONBA_PTR_FROM_JSON(ConfiguredConcurrency, configuredConcurrency_);
        DARABONBA_PTR_FROM_JSON(LabelBreakDown, labelBreakDown_);
        DARABONBA_PTR_FROM_JSON(MaxTalkTime, maxTalkTime_);
        DARABONBA_PTR_FROM_JSON(RejectionBreakdown, rejectionBreakdown_);
        DARABONBA_PTR_FROM_JSON(ReleaseReasonBreakdown, releaseReasonBreakdown_);
        DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
        DARABONBA_PTR_FROM_JSON(TalkTurnsDistribution, talkTurnsDistribution_);
        DARABONBA_PTR_FROM_JSON(TotalInputTokens, totalInputTokens_);
        DARABONBA_PTR_FROM_JSON(TotalOutputTokens, totalOutputTokens_);
        DARABONBA_PTR_FROM_JSON(TotalTalkTime, totalTalkTime_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_FROM_JSON(UsedConcurrency, usedConcurrency_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callsHandled_ == nullptr
        && this->callsOffered_ == nullptr && this->callsRejected_ == nullptr && this->callsResolved_ == nullptr && this->configuredConcurrency_ == nullptr && this->labelBreakDown_ == nullptr
        && this->maxTalkTime_ == nullptr && this->rejectionBreakdown_ == nullptr && this->releaseReasonBreakdown_ == nullptr && this->statsTime_ == nullptr && this->talkTurnsDistribution_ == nullptr
        && this->totalInputTokens_ == nullptr && this->totalOutputTokens_ == nullptr && this->totalTalkTime_ == nullptr && this->totalTokens_ == nullptr && this->usedConcurrency_ == nullptr; };
      // callsHandled Field Functions 
      bool hasCallsHandled() const { return this->callsHandled_ != nullptr;};
      void deleteCallsHandled() { this->callsHandled_ = nullptr;};
      inline int64_t getCallsHandled() const { DARABONBA_PTR_GET_DEFAULT(callsHandled_, 0L) };
      inline Data& setCallsHandled(int64_t callsHandled) { DARABONBA_PTR_SET_VALUE(callsHandled_, callsHandled) };


      // callsOffered Field Functions 
      bool hasCallsOffered() const { return this->callsOffered_ != nullptr;};
      void deleteCallsOffered() { this->callsOffered_ = nullptr;};
      inline int64_t getCallsOffered() const { DARABONBA_PTR_GET_DEFAULT(callsOffered_, 0L) };
      inline Data& setCallsOffered(int64_t callsOffered) { DARABONBA_PTR_SET_VALUE(callsOffered_, callsOffered) };


      // callsRejected Field Functions 
      bool hasCallsRejected() const { return this->callsRejected_ != nullptr;};
      void deleteCallsRejected() { this->callsRejected_ = nullptr;};
      inline int64_t getCallsRejected() const { DARABONBA_PTR_GET_DEFAULT(callsRejected_, 0L) };
      inline Data& setCallsRejected(int64_t callsRejected) { DARABONBA_PTR_SET_VALUE(callsRejected_, callsRejected) };


      // callsResolved Field Functions 
      bool hasCallsResolved() const { return this->callsResolved_ != nullptr;};
      void deleteCallsResolved() { this->callsResolved_ = nullptr;};
      inline int64_t getCallsResolved() const { DARABONBA_PTR_GET_DEFAULT(callsResolved_, 0L) };
      inline Data& setCallsResolved(int64_t callsResolved) { DARABONBA_PTR_SET_VALUE(callsResolved_, callsResolved) };


      // configuredConcurrency Field Functions 
      bool hasConfiguredConcurrency() const { return this->configuredConcurrency_ != nullptr;};
      void deleteConfiguredConcurrency() { this->configuredConcurrency_ = nullptr;};
      inline int64_t getConfiguredConcurrency() const { DARABONBA_PTR_GET_DEFAULT(configuredConcurrency_, 0L) };
      inline Data& setConfiguredConcurrency(int64_t configuredConcurrency) { DARABONBA_PTR_SET_VALUE(configuredConcurrency_, configuredConcurrency) };


      // labelBreakDown Field Functions 
      bool hasLabelBreakDown() const { return this->labelBreakDown_ != nullptr;};
      void deleteLabelBreakDown() { this->labelBreakDown_ = nullptr;};
      inline string getLabelBreakDown() const { DARABONBA_PTR_GET_DEFAULT(labelBreakDown_, "") };
      inline Data& setLabelBreakDown(string labelBreakDown) { DARABONBA_PTR_SET_VALUE(labelBreakDown_, labelBreakDown) };


      // maxTalkTime Field Functions 
      bool hasMaxTalkTime() const { return this->maxTalkTime_ != nullptr;};
      void deleteMaxTalkTime() { this->maxTalkTime_ = nullptr;};
      inline int64_t getMaxTalkTime() const { DARABONBA_PTR_GET_DEFAULT(maxTalkTime_, 0L) };
      inline Data& setMaxTalkTime(int64_t maxTalkTime) { DARABONBA_PTR_SET_VALUE(maxTalkTime_, maxTalkTime) };


      // rejectionBreakdown Field Functions 
      bool hasRejectionBreakdown() const { return this->rejectionBreakdown_ != nullptr;};
      void deleteRejectionBreakdown() { this->rejectionBreakdown_ = nullptr;};
      inline string getRejectionBreakdown() const { DARABONBA_PTR_GET_DEFAULT(rejectionBreakdown_, "") };
      inline Data& setRejectionBreakdown(string rejectionBreakdown) { DARABONBA_PTR_SET_VALUE(rejectionBreakdown_, rejectionBreakdown) };


      // releaseReasonBreakdown Field Functions 
      bool hasReleaseReasonBreakdown() const { return this->releaseReasonBreakdown_ != nullptr;};
      void deleteReleaseReasonBreakdown() { this->releaseReasonBreakdown_ = nullptr;};
      inline string getReleaseReasonBreakdown() const { DARABONBA_PTR_GET_DEFAULT(releaseReasonBreakdown_, "") };
      inline Data& setReleaseReasonBreakdown(string releaseReasonBreakdown) { DARABONBA_PTR_SET_VALUE(releaseReasonBreakdown_, releaseReasonBreakdown) };


      // statsTime Field Functions 
      bool hasStatsTime() const { return this->statsTime_ != nullptr;};
      void deleteStatsTime() { this->statsTime_ = nullptr;};
      inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
      inline Data& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


      // talkTurnsDistribution Field Functions 
      bool hasTalkTurnsDistribution() const { return this->talkTurnsDistribution_ != nullptr;};
      void deleteTalkTurnsDistribution() { this->talkTurnsDistribution_ = nullptr;};
      inline string getTalkTurnsDistribution() const { DARABONBA_PTR_GET_DEFAULT(talkTurnsDistribution_, "") };
      inline Data& setTalkTurnsDistribution(string talkTurnsDistribution) { DARABONBA_PTR_SET_VALUE(talkTurnsDistribution_, talkTurnsDistribution) };


      // totalInputTokens Field Functions 
      bool hasTotalInputTokens() const { return this->totalInputTokens_ != nullptr;};
      void deleteTotalInputTokens() { this->totalInputTokens_ = nullptr;};
      inline int64_t getTotalInputTokens() const { DARABONBA_PTR_GET_DEFAULT(totalInputTokens_, 0L) };
      inline Data& setTotalInputTokens(int64_t totalInputTokens) { DARABONBA_PTR_SET_VALUE(totalInputTokens_, totalInputTokens) };


      // totalOutputTokens Field Functions 
      bool hasTotalOutputTokens() const { return this->totalOutputTokens_ != nullptr;};
      void deleteTotalOutputTokens() { this->totalOutputTokens_ = nullptr;};
      inline int64_t getTotalOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(totalOutputTokens_, 0L) };
      inline Data& setTotalOutputTokens(int64_t totalOutputTokens) { DARABONBA_PTR_SET_VALUE(totalOutputTokens_, totalOutputTokens) };


      // totalTalkTime Field Functions 
      bool hasTotalTalkTime() const { return this->totalTalkTime_ != nullptr;};
      void deleteTotalTalkTime() { this->totalTalkTime_ = nullptr;};
      inline int64_t getTotalTalkTime() const { DARABONBA_PTR_GET_DEFAULT(totalTalkTime_, 0L) };
      inline Data& setTotalTalkTime(int64_t totalTalkTime) { DARABONBA_PTR_SET_VALUE(totalTalkTime_, totalTalkTime) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
      inline Data& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // usedConcurrency Field Functions 
      bool hasUsedConcurrency() const { return this->usedConcurrency_ != nullptr;};
      void deleteUsedConcurrency() { this->usedConcurrency_ = nullptr;};
      inline int64_t getUsedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(usedConcurrency_, 0L) };
      inline Data& setUsedConcurrency(int64_t usedConcurrency) { DARABONBA_PTR_SET_VALUE(usedConcurrency_, usedConcurrency) };


    protected:
      shared_ptr<int64_t> callsHandled_ {};
      shared_ptr<int64_t> callsOffered_ {};
      shared_ptr<int64_t> callsRejected_ {};
      shared_ptr<int64_t> callsResolved_ {};
      shared_ptr<int64_t> configuredConcurrency_ {};
      shared_ptr<string> labelBreakDown_ {};
      shared_ptr<int64_t> maxTalkTime_ {};
      shared_ptr<string> rejectionBreakdown_ {};
      shared_ptr<string> releaseReasonBreakdown_ {};
      shared_ptr<int64_t> statsTime_ {};
      shared_ptr<string> talkTurnsDistribution_ {};
      shared_ptr<int64_t> totalInputTokens_ {};
      shared_ptr<int64_t> totalOutputTokens_ {};
      shared_ptr<int64_t> totalTalkTime_ {};
      shared_ptr<int64_t> totalTokens_ {};
      shared_ptr<int64_t> usedConcurrency_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScriptTrendingReportResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetScriptTrendingReportResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetScriptTrendingReportResponseBody::Data>) };
    inline vector<GetScriptTrendingReportResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetScriptTrendingReportResponseBody::Data>) };
    inline GetScriptTrendingReportResponseBody& setData(const vector<GetScriptTrendingReportResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScriptTrendingReportResponseBody& setData(vector<GetScriptTrendingReportResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetScriptTrendingReportResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScriptTrendingReportResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetScriptTrendingReportResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetScriptTrendingReportResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScriptTrendingReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetScriptTrendingReportResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
