// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
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
  class CreateCampaignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCampaignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptOrder, attemptOrder_);
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_TO_JSON(Cases, cases_);
      DARABONBA_PTR_TO_JSON(DialingTimeoutSeconds, dialingTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FixedQuota, fixedQuota_);
      DARABONBA_PTR_TO_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_TO_JSON(HolidayRestricted, holidayRestricted_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Numbers, numbers_);
      DARABONBA_PTR_TO_JSON(RedialRestrictions, redialRestrictions_);
      DARABONBA_PTR_TO_JSON(RunUntilEndTime, runUntilEndTime_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCampaignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptOrder, attemptOrder_);
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_FROM_JSON(Cases, cases_);
      DARABONBA_PTR_FROM_JSON(DialingTimeoutSeconds, dialingTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FixedQuota, fixedQuota_);
      DARABONBA_PTR_FROM_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_FROM_JSON(HolidayRestricted, holidayRestricted_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbers_);
      DARABONBA_PTR_FROM_JSON(RedialRestrictions, redialRestrictions_);
      DARABONBA_PTR_FROM_JSON(RunUntilEndTime, runUntilEndTime_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateCampaignRequest() = default ;
    CreateCampaignRequest(const CreateCampaignRequest &) = default ;
    CreateCampaignRequest(CreateCampaignRequest &&) = default ;
    CreateCampaignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCampaignRequest() = default ;
    CreateCampaignRequest& operator=(const CreateCampaignRequest &) = default ;
    CreateCampaignRequest& operator=(CreateCampaignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cases& obj) { 
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, Cases& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      };
      Cases() = default ;
      Cases(const Cases &) = default ;
      Cases(Cases &&) = default ;
      Cases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cases() = default ;
      Cases& operator=(const Cases &) = default ;
      Cases& operator=(Cases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customVariables_ == nullptr
        && this->phoneNumber_ == nullptr && this->priority_ == nullptr && this->referenceId_ == nullptr; };
      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline Cases& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline Cases& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
      inline Cases& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline Cases& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      // The custom variables defined by the customer. The value is a JSON object that contains up to 10 properties. The name and value of each property are defined by the customer.
      shared_ptr<string> customVariables_ {};
      // The phone number of the contact.
      shared_ptr<string> phoneNumber_ {};
      // The priority of the contact. Default value: 1.
      shared_ptr<string> priority_ {};
      // The business ID of the contact.
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->attemptOrder_ == nullptr
        && this->callableTime_ == nullptr && this->caseFileKey_ == nullptr && this->cases_ == nullptr && this->dialingTimeoutSeconds_ == nullptr && this->endTime_ == nullptr
        && this->fixedQuota_ == nullptr && this->flashSmsParameters_ == nullptr && this->holidayRestricted_ == nullptr && this->instanceId_ == nullptr && this->maxAttemptCount_ == nullptr
        && this->minAttemptInterval_ == nullptr && this->name_ == nullptr && this->numbers_ == nullptr && this->redialRestrictions_ == nullptr && this->runUntilEndTime_ == nullptr
        && this->scriptId_ == nullptr && this->startTime_ == nullptr && this->weight_ == nullptr; };
    // attemptOrder Field Functions 
    bool hasAttemptOrder() const { return this->attemptOrder_ != nullptr;};
    void deleteAttemptOrder() { this->attemptOrder_ = nullptr;};
    inline string getAttemptOrder() const { DARABONBA_PTR_GET_DEFAULT(attemptOrder_, "") };
    inline CreateCampaignRequest& setAttemptOrder(string attemptOrder) { DARABONBA_PTR_SET_VALUE(attemptOrder_, attemptOrder) };


    // callableTime Field Functions 
    bool hasCallableTime() const { return this->callableTime_ != nullptr;};
    void deleteCallableTime() { this->callableTime_ = nullptr;};
    inline string getCallableTime() const { DARABONBA_PTR_GET_DEFAULT(callableTime_, "") };
    inline CreateCampaignRequest& setCallableTime(string callableTime) { DARABONBA_PTR_SET_VALUE(callableTime_, callableTime) };


    // caseFileKey Field Functions 
    bool hasCaseFileKey() const { return this->caseFileKey_ != nullptr;};
    void deleteCaseFileKey() { this->caseFileKey_ = nullptr;};
    inline string getCaseFileKey() const { DARABONBA_PTR_GET_DEFAULT(caseFileKey_, "") };
    inline CreateCampaignRequest& setCaseFileKey(string caseFileKey) { DARABONBA_PTR_SET_VALUE(caseFileKey_, caseFileKey) };


    // cases Field Functions 
    bool hasCases() const { return this->cases_ != nullptr;};
    void deleteCases() { this->cases_ = nullptr;};
    inline const vector<CreateCampaignRequest::Cases> & getCases() const { DARABONBA_PTR_GET_CONST(cases_, vector<CreateCampaignRequest::Cases>) };
    inline vector<CreateCampaignRequest::Cases> getCases() { DARABONBA_PTR_GET(cases_, vector<CreateCampaignRequest::Cases>) };
    inline CreateCampaignRequest& setCases(const vector<CreateCampaignRequest::Cases> & cases) { DARABONBA_PTR_SET_VALUE(cases_, cases) };
    inline CreateCampaignRequest& setCases(vector<CreateCampaignRequest::Cases> && cases) { DARABONBA_PTR_SET_RVALUE(cases_, cases) };


    // dialingTimeoutSeconds Field Functions 
    bool hasDialingTimeoutSeconds() const { return this->dialingTimeoutSeconds_ != nullptr;};
    void deleteDialingTimeoutSeconds() { this->dialingTimeoutSeconds_ = nullptr;};
    inline int32_t getDialingTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(dialingTimeoutSeconds_, 0) };
    inline CreateCampaignRequest& setDialingTimeoutSeconds(int32_t dialingTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(dialingTimeoutSeconds_, dialingTimeoutSeconds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateCampaignRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fixedQuota Field Functions 
    bool hasFixedQuota() const { return this->fixedQuota_ != nullptr;};
    void deleteFixedQuota() { this->fixedQuota_ = nullptr;};
    inline int32_t getFixedQuota() const { DARABONBA_PTR_GET_DEFAULT(fixedQuota_, 0) };
    inline CreateCampaignRequest& setFixedQuota(int32_t fixedQuota) { DARABONBA_PTR_SET_VALUE(fixedQuota_, fixedQuota) };


    // flashSmsParameters Field Functions 
    bool hasFlashSmsParameters() const { return this->flashSmsParameters_ != nullptr;};
    void deleteFlashSmsParameters() { this->flashSmsParameters_ = nullptr;};
    inline string getFlashSmsParameters() const { DARABONBA_PTR_GET_DEFAULT(flashSmsParameters_, "") };
    inline CreateCampaignRequest& setFlashSmsParameters(string flashSmsParameters) { DARABONBA_PTR_SET_VALUE(flashSmsParameters_, flashSmsParameters) };


    // holidayRestricted Field Functions 
    bool hasHolidayRestricted() const { return this->holidayRestricted_ != nullptr;};
    void deleteHolidayRestricted() { this->holidayRestricted_ = nullptr;};
    inline bool getHolidayRestricted() const { DARABONBA_PTR_GET_DEFAULT(holidayRestricted_, false) };
    inline CreateCampaignRequest& setHolidayRestricted(bool holidayRestricted) { DARABONBA_PTR_SET_VALUE(holidayRestricted_, holidayRestricted) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCampaignRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int32_t getMaxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0) };
    inline CreateCampaignRequest& setMaxAttemptCount(int32_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int32_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0) };
    inline CreateCampaignRequest& setMinAttemptInterval(int32_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCampaignRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numbers Field Functions 
    bool hasNumbers() const { return this->numbers_ != nullptr;};
    void deleteNumbers() { this->numbers_ = nullptr;};
    inline const vector<string> & getNumbers() const { DARABONBA_PTR_GET_CONST(numbers_, vector<string>) };
    inline vector<string> getNumbers() { DARABONBA_PTR_GET(numbers_, vector<string>) };
    inline CreateCampaignRequest& setNumbers(const vector<string> & numbers) { DARABONBA_PTR_SET_VALUE(numbers_, numbers) };
    inline CreateCampaignRequest& setNumbers(vector<string> && numbers) { DARABONBA_PTR_SET_RVALUE(numbers_, numbers) };


    // redialRestrictions Field Functions 
    bool hasRedialRestrictions() const { return this->redialRestrictions_ != nullptr;};
    void deleteRedialRestrictions() { this->redialRestrictions_ = nullptr;};
    inline string getRedialRestrictions() const { DARABONBA_PTR_GET_DEFAULT(redialRestrictions_, "") };
    inline CreateCampaignRequest& setRedialRestrictions(string redialRestrictions) { DARABONBA_PTR_SET_VALUE(redialRestrictions_, redialRestrictions) };


    // runUntilEndTime Field Functions 
    bool hasRunUntilEndTime() const { return this->runUntilEndTime_ != nullptr;};
    void deleteRunUntilEndTime() { this->runUntilEndTime_ = nullptr;};
    inline bool getRunUntilEndTime() const { DARABONBA_PTR_GET_DEFAULT(runUntilEndTime_, false) };
    inline CreateCampaignRequest& setRunUntilEndTime(bool runUntilEndTime) { DARABONBA_PTR_SET_VALUE(runUntilEndTime_, runUntilEndTime) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateCampaignRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateCampaignRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateCampaignRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The call execution order. Default value: MIN_ATTEMPT_FIRST. Valid values:
    // - PRIORITY_FIRST: priority first.
    // - MIN_ATTEMPT_FIRST: minimum attempt count first.
    shared_ptr<string> attemptOrder_ {};
    // The callable time range for the task. The value is a JSON object that contains two properties: beginTime and EndTime.
    // 
    // This parameter is required.
    shared_ptr<string> callableTime_ {};
    // The task contact list, which is an OSS object key obtained through the GenerateFileUploadParams operation. You can also leave this parameter empty and append contacts later through the AppendCases operation.
    shared_ptr<string> caseFileKey_ {};
    // The contact list. You can also leave this parameter empty and append contacts later through the AppendCases operation.
    shared_ptr<vector<CreateCampaignRequest::Cases>> cases_ {};
    // The dialing timeout period, in seconds. Default value: 25.
    shared_ptr<int32_t> dialingTimeoutSeconds_ {};
    // The task end time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The minimum concurrency for the task. A value of 0 indicates no guaranteed minimum, and resources are allocated by weight.
    // 
    // If multiple tasks have a minimum concurrency configured:
    // 
    // - If the total concurrency is less than the instance total concurrency, the minimum concurrency of each task is satisfied first, and the remaining resources are allocated proportionally by weight.
    // 
    // - If the total concurrency exceeds the instance total concurrency, the minimum concurrency no longer serves as a guaranteed minimum but is used as a weight factor in the calculation.
    shared_ptr<int32_t> fixedQuota_ {};
    // The flash SMS parameters.
    shared_ptr<string> flashSmsParameters_ {};
    // Specifies whether to prohibit outbound calls on holidays.
    shared_ptr<bool> holidayRestricted_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of attempts. This specifies the maximum number of times a number is called when the call fails.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxAttemptCount_ {};
    // The interval between attempts.
    // 
    // This parameter is required.
    shared_ptr<int32_t> minAttemptInterval_ {};
    // The task name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The list of caller numbers for the outbound task.
    shared_ptr<vector<string>> numbers_ {};
    // The list of redial restriction conditions. If this parameter is not specified, no restrictions are applied. Valid values:
    // - CALLEE_NOT_EXISTS: Do not call nonexistent numbers.
    // - OUT_OF_SERVICE: Do not call numbers that are out of service.
    shared_ptr<string> redialRestrictions_ {};
    // Specifies whether to keep the scheduling state until the task end time after all contacts are called. Default value: false. Valid values:
    // - true: The task remains in the scheduling state, and you can continue to append contacts.
    // - false: The task changes to completed, and you cannot append contacts.
    shared_ptr<bool> runUntilEndTime_ {};
    // The scenario ID.
    // 
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // The task start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The weight. The value is an integer in the range of 0 to 100. A larger value indicates more concurrency allocated during scheduling.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
