// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCAMPAIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCAMPAIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class GetCampaignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCampaignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCampaignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCampaignResponseBody() = default ;
    GetCampaignResponseBody(const GetCampaignResponseBody &) = default ;
    GetCampaignResponseBody(GetCampaignResponseBody &&) = default ;
    GetCampaignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCampaignResponseBody() = default ;
    GetCampaignResponseBody& operator=(const GetCampaignResponseBody &) = default ;
    GetCampaignResponseBody& operator=(GetCampaignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
        DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
        DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
        DARABONBA_PTR_TO_JSON(CasesAborted, casesAborted_);
        DARABONBA_PTR_TO_JSON(CasesConnected, casesConnected_);
        DARABONBA_PTR_TO_JSON(CasesUncompleted, casesUncompleted_);
        DARABONBA_PTR_TO_JSON(CasesUncompletedAfterAttempted, casesUncompletedAfterAttempted_);
        DARABONBA_PTR_TO_JSON(CompletedRate, completedRate_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(FixedQuota, fixedQuota_);
        DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
        DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Numbers, numbers_);
        DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
        DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
        DARABONBA_PTR_TO_JSON(RunUntilEndTime, runUntilEndTime_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TotalCases, totalCases_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
        DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
        DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
        DARABONBA_PTR_FROM_JSON(CasesAborted, casesAborted_);
        DARABONBA_PTR_FROM_JSON(CasesConnected, casesConnected_);
        DARABONBA_PTR_FROM_JSON(CasesUncompleted, casesUncompleted_);
        DARABONBA_PTR_FROM_JSON(CasesUncompletedAfterAttempted, casesUncompletedAfterAttempted_);
        DARABONBA_PTR_FROM_JSON(CompletedRate, completedRate_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(FixedQuota, fixedQuota_);
        DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
        DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
        DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
        DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
        DARABONBA_PTR_FROM_JSON(RunUntilEndTime, runUntilEndTime_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TotalCases, totalCases_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
      virtual bool empty() const override { return this->actualEndTime_ == nullptr
        && this->actualStartTime_ == nullptr && this->campaignId_ == nullptr && this->casesAborted_ == nullptr && this->casesConnected_ == nullptr && this->casesUncompleted_ == nullptr
        && this->casesUncompletedAfterAttempted_ == nullptr && this->completedRate_ == nullptr && this->createdTime_ == nullptr && this->fixedQuota_ == nullptr && this->maxAttemptCount_ == nullptr
        && this->minAttemptInterval_ == nullptr && this->name_ == nullptr && this->numbers_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr
        && this->runUntilEndTime_ == nullptr && this->scriptId_ == nullptr && this->state_ == nullptr && this->totalCases_ == nullptr && this->updatedTime_ == nullptr
        && this->weight_ == nullptr; };
      // actualEndTime Field Functions 
      bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
      void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
      inline int64_t getActualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, 0L) };
      inline Data& setActualEndTime(int64_t actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


      // actualStartTime Field Functions 
      bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
      void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
      inline int64_t getActualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
      inline Data& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


      // campaignId Field Functions 
      bool hasCampaignId() const { return this->campaignId_ != nullptr;};
      void deleteCampaignId() { this->campaignId_ = nullptr;};
      inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
      inline Data& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


      // casesAborted Field Functions 
      bool hasCasesAborted() const { return this->casesAborted_ != nullptr;};
      void deleteCasesAborted() { this->casesAborted_ = nullptr;};
      inline int32_t getCasesAborted() const { DARABONBA_PTR_GET_DEFAULT(casesAborted_, 0) };
      inline Data& setCasesAborted(int32_t casesAborted) { DARABONBA_PTR_SET_VALUE(casesAborted_, casesAborted) };


      // casesConnected Field Functions 
      bool hasCasesConnected() const { return this->casesConnected_ != nullptr;};
      void deleteCasesConnected() { this->casesConnected_ = nullptr;};
      inline int32_t getCasesConnected() const { DARABONBA_PTR_GET_DEFAULT(casesConnected_, 0) };
      inline Data& setCasesConnected(int32_t casesConnected) { DARABONBA_PTR_SET_VALUE(casesConnected_, casesConnected) };


      // casesUncompleted Field Functions 
      bool hasCasesUncompleted() const { return this->casesUncompleted_ != nullptr;};
      void deleteCasesUncompleted() { this->casesUncompleted_ = nullptr;};
      inline int32_t getCasesUncompleted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompleted_, 0) };
      inline Data& setCasesUncompleted(int32_t casesUncompleted) { DARABONBA_PTR_SET_VALUE(casesUncompleted_, casesUncompleted) };


      // casesUncompletedAfterAttempted Field Functions 
      bool hasCasesUncompletedAfterAttempted() const { return this->casesUncompletedAfterAttempted_ != nullptr;};
      void deleteCasesUncompletedAfterAttempted() { this->casesUncompletedAfterAttempted_ = nullptr;};
      inline int32_t getCasesUncompletedAfterAttempted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompletedAfterAttempted_, 0) };
      inline Data& setCasesUncompletedAfterAttempted(int32_t casesUncompletedAfterAttempted) { DARABONBA_PTR_SET_VALUE(casesUncompletedAfterAttempted_, casesUncompletedAfterAttempted) };


      // completedRate Field Functions 
      bool hasCompletedRate() const { return this->completedRate_ != nullptr;};
      void deleteCompletedRate() { this->completedRate_ = nullptr;};
      inline double getCompletedRate() const { DARABONBA_PTR_GET_DEFAULT(completedRate_, 0.0) };
      inline Data& setCompletedRate(double completedRate) { DARABONBA_PTR_SET_VALUE(completedRate_, completedRate) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Data& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // fixedQuota Field Functions 
      bool hasFixedQuota() const { return this->fixedQuota_ != nullptr;};
      void deleteFixedQuota() { this->fixedQuota_ = nullptr;};
      inline int32_t getFixedQuota() const { DARABONBA_PTR_GET_DEFAULT(fixedQuota_, 0) };
      inline Data& setFixedQuota(int32_t fixedQuota) { DARABONBA_PTR_SET_VALUE(fixedQuota_, fixedQuota) };


      // maxAttemptCount Field Functions 
      bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
      void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
      inline int32_t getMaxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0) };
      inline Data& setMaxAttemptCount(int32_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


      // minAttemptInterval Field Functions 
      bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
      void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
      inline int32_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0) };
      inline Data& setMinAttemptInterval(int32_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // numbers Field Functions 
      bool hasNumbers() const { return this->numbers_ != nullptr;};
      void deleteNumbers() { this->numbers_ = nullptr;};
      inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
      inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
      inline Data& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
      inline Data& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


      // plannedEndTime Field Functions 
      bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
      void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
      inline int64_t getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, 0L) };
      inline Data& setPlannedEndTime(int64_t plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


      // plannedStartTime Field Functions 
      bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
      void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
      inline int64_t getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, 0L) };
      inline Data& setPlannedStartTime(int64_t plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


      // runUntilEndTime Field Functions 
      bool hasRunUntilEndTime() const { return this->runUntilEndTime_ != nullptr;};
      void deleteRunUntilEndTime() { this->runUntilEndTime_ = nullptr;};
      inline bool getRunUntilEndTime() const { DARABONBA_PTR_GET_DEFAULT(runUntilEndTime_, false) };
      inline Data& setRunUntilEndTime(bool runUntilEndTime) { DARABONBA_PTR_SET_VALUE(runUntilEndTime_, runUntilEndTime) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Data& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // totalCases Field Functions 
      bool hasTotalCases() const { return this->totalCases_ != nullptr;};
      void deleteTotalCases() { this->totalCases_ = nullptr;};
      inline int32_t getTotalCases() const { DARABONBA_PTR_GET_DEFAULT(totalCases_, 0) };
      inline Data& setTotalCases(int32_t totalCases) { DARABONBA_PTR_SET_VALUE(totalCases_, totalCases) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Data& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The actual end time.
      shared_ptr<int64_t> actualEndTime_ {};
      // The actual start time.
      shared_ptr<int64_t> actualStartTime_ {};
      // The campaign ID.
      shared_ptr<string> campaignId_ {};
      // The number of aborted cases.
      shared_ptr<int32_t> casesAborted_ {};
      // The number of connected cases.
      shared_ptr<int32_t> casesConnected_ {};
      // The number of uncompleted cases.
      shared_ptr<int32_t> casesUncompleted_ {};
      // The number of cases that were attempted but not completed.
      shared_ptr<int32_t> casesUncompletedAfterAttempted_ {};
      // The completion rate.
      shared_ptr<double> completedRate_ {};
      // The time when the campaign was created.
      shared_ptr<int64_t> createdTime_ {};
      // The fixed number of concurrent calls.
      shared_ptr<int32_t> fixedQuota_ {};
      // The maximum number of retries.
      shared_ptr<int32_t> maxAttemptCount_ {};
      // The minimum retry interval.
      shared_ptr<int32_t> minAttemptInterval_ {};
      // The campaign name.
      shared_ptr<string> name_ {};
      // The list of caller numbers.
      shared_ptr<vector<string>> numbers_ {};
      // The planned end time.
      shared_ptr<int64_t> plannedEndTime_ {};
      // The planned start time.
      shared_ptr<int64_t> plannedStartTime_ {};
      // Indicates whether the campaign continues to run until the planned end time after all contacts have been called.
      shared_ptr<bool> runUntilEndTime_ {};
      // The scenario ID.
      shared_ptr<string> scriptId_ {};
      // The campaign state.
      shared_ptr<string> state_ {};
      // The total number of cases.
      shared_ptr<int32_t> totalCases_ {};
      // The time when the campaign was last updated.
      shared_ptr<int64_t> updatedTime_ {};
      // The campaign weight.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCampaignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCampaignResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCampaignResponseBody::Data) };
    inline GetCampaignResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCampaignResponseBody::Data) };
    inline GetCampaignResponseBody& setData(const GetCampaignResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCampaignResponseBody& setData(GetCampaignResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCampaignResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCampaignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetCampaignResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetCampaignResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCampaignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCampaignResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code.
    shared_ptr<string> code_ {};
    // The details of the outbound campaign.
    shared_ptr<GetCampaignResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The list of error message parameters.
    shared_ptr<vector<string>> params_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
