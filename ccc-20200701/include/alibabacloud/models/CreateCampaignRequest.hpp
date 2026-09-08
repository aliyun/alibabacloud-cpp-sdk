// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECAMPAIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCampaignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCampaignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_TO_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_TO_JSON(CaseList, caseList_);
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_TO_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_TO_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(Simulation, simulation_);
      DARABONBA_PTR_TO_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCampaignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallableTime, callableTime_);
      DARABONBA_PTR_FROM_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_FROM_JSON(CaseList, caseList_);
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutingUntilTimeout, executingUntilTimeout_);
      DARABONBA_PTR_FROM_JSON(FlashSmsParameters, flashSmsParameters_);
      DARABONBA_PTR_FROM_JSON(InstGroupId, instGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(Simulation, simulation_);
      DARABONBA_PTR_FROM_JSON(SimulationParameters, simulationParameters_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StrategyParameters, strategyParameters_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
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
    class CaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CaseList& obj) { 
        DARABONBA_PTR_TO_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      };
      friend void from_json(const Darabonba::Json& j, CaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomVariables, customVariables_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      };
      CaseList() = default ;
      CaseList(const CaseList &) = default ;
      CaseList(CaseList &&) = default ;
      CaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CaseList() = default ;
      CaseList& operator=(const CaseList &) = default ;
      CaseList& operator=(CaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customVariables_ == nullptr
        && this->phoneNumber_ == nullptr && this->referenceId_ == nullptr; };
      // customVariables Field Functions 
      bool hasCustomVariables() const { return this->customVariables_ != nullptr;};
      void deleteCustomVariables() { this->customVariables_ = nullptr;};
      inline string getCustomVariables() const { DARABONBA_PTR_GET_DEFAULT(customVariables_, "") };
      inline CaseList& setCustomVariables(string customVariables) { DARABONBA_PTR_SET_VALUE(customVariables_, customVariables) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline CaseList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // referenceId Field Functions 
      bool hasReferenceId() const { return this->referenceId_ != nullptr;};
      void deleteReferenceId() { this->referenceId_ = nullptr;};
      inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
      inline CaseList& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    protected:
      // Customer-defined custom variables in JSON object format. The object can contain up to 10 properties, each with a name and value defined by the customer.
      shared_ptr<string> customVariables_ {};
      // Contact phone number.
      shared_ptr<string> phoneNumber_ {};
      // Business ID, an identifier from the Customer\\"s Operational System, used in integration scenarios.
      shared_ptr<string> referenceId_ {};
    };

    virtual bool empty() const override { return this->callableTime_ == nullptr
        && this->caseFileKey_ == nullptr && this->caseList_ == nullptr && this->contactFlowId_ == nullptr && this->endTime_ == nullptr && this->executingUntilTimeout_ == nullptr
        && this->flashSmsParameters_ == nullptr && this->instGroupId_ == nullptr && this->instanceId_ == nullptr && this->maxAttemptCount_ == nullptr && this->minAttemptInterval_ == nullptr
        && this->name_ == nullptr && this->numberList_ == nullptr && this->queueId_ == nullptr && this->simulation_ == nullptr && this->simulationParameters_ == nullptr
        && this->startTime_ == nullptr && this->strategyParameters_ == nullptr && this->strategyType_ == nullptr; };
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


    // caseList Field Functions 
    bool hasCaseList() const { return this->caseList_ != nullptr;};
    void deleteCaseList() { this->caseList_ = nullptr;};
    inline const vector<CreateCampaignRequest::CaseList> & getCaseList() const { DARABONBA_PTR_GET_CONST(caseList_, vector<CreateCampaignRequest::CaseList>) };
    inline vector<CreateCampaignRequest::CaseList> getCaseList() { DARABONBA_PTR_GET(caseList_, vector<CreateCampaignRequest::CaseList>) };
    inline CreateCampaignRequest& setCaseList(const vector<CreateCampaignRequest::CaseList> & caseList) { DARABONBA_PTR_SET_VALUE(caseList_, caseList) };
    inline CreateCampaignRequest& setCaseList(vector<CreateCampaignRequest::CaseList> && caseList) { DARABONBA_PTR_SET_RVALUE(caseList_, caseList) };


    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string getContactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline CreateCampaignRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateCampaignRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executingUntilTimeout Field Functions 
    bool hasExecutingUntilTimeout() const { return this->executingUntilTimeout_ != nullptr;};
    void deleteExecutingUntilTimeout() { this->executingUntilTimeout_ = nullptr;};
    inline bool getExecutingUntilTimeout() const { DARABONBA_PTR_GET_DEFAULT(executingUntilTimeout_, false) };
    inline CreateCampaignRequest& setExecutingUntilTimeout(bool executingUntilTimeout) { DARABONBA_PTR_SET_VALUE(executingUntilTimeout_, executingUntilTimeout) };


    // flashSmsParameters Field Functions 
    bool hasFlashSmsParameters() const { return this->flashSmsParameters_ != nullptr;};
    void deleteFlashSmsParameters() { this->flashSmsParameters_ = nullptr;};
    inline string getFlashSmsParameters() const { DARABONBA_PTR_GET_DEFAULT(flashSmsParameters_, "") };
    inline CreateCampaignRequest& setFlashSmsParameters(string flashSmsParameters) { DARABONBA_PTR_SET_VALUE(flashSmsParameters_, flashSmsParameters) };


    // instGroupId Field Functions 
    bool hasInstGroupId() const { return this->instGroupId_ != nullptr;};
    void deleteInstGroupId() { this->instGroupId_ = nullptr;};
    inline string getInstGroupId() const { DARABONBA_PTR_GET_DEFAULT(instGroupId_, "") };
    inline CreateCampaignRequest& setInstGroupId(string instGroupId) { DARABONBA_PTR_SET_VALUE(instGroupId_, instGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCampaignRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t getMaxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline CreateCampaignRequest& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline CreateCampaignRequest& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCampaignRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<string> & getNumberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<string>) };
    inline vector<string> getNumberList() { DARABONBA_PTR_GET(numberList_, vector<string>) };
    inline CreateCampaignRequest& setNumberList(const vector<string> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline CreateCampaignRequest& setNumberList(vector<string> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline CreateCampaignRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // simulation Field Functions 
    bool hasSimulation() const { return this->simulation_ != nullptr;};
    void deleteSimulation() { this->simulation_ = nullptr;};
    inline bool getSimulation() const { DARABONBA_PTR_GET_DEFAULT(simulation_, false) };
    inline CreateCampaignRequest& setSimulation(bool simulation) { DARABONBA_PTR_SET_VALUE(simulation_, simulation) };


    // simulationParameters Field Functions 
    bool hasSimulationParameters() const { return this->simulationParameters_ != nullptr;};
    void deleteSimulationParameters() { this->simulationParameters_ = nullptr;};
    inline string getSimulationParameters() const { DARABONBA_PTR_GET_DEFAULT(simulationParameters_, "") };
    inline CreateCampaignRequest& setSimulationParameters(string simulationParameters) { DARABONBA_PTR_SET_VALUE(simulationParameters_, simulationParameters) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateCampaignRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // strategyParameters Field Functions 
    bool hasStrategyParameters() const { return this->strategyParameters_ != nullptr;};
    void deleteStrategyParameters() { this->strategyParameters_ = nullptr;};
    inline string getStrategyParameters() const { DARABONBA_PTR_GET_DEFAULT(strategyParameters_, "") };
    inline CreateCampaignRequest& setStrategyParameters(string strategyParameters) { DARABONBA_PTR_SET_VALUE(strategyParameters_, strategyParameters) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline CreateCampaignRequest& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


  protected:
    // The callable time window for the predictive outbound dialing activity, formatted as a JSON object containing two properties: beginTime and endTime. Example: [{"beginTime":"00:00:00","endTime":"23:00:00"}].
    // 
    // This parameter is required.
    shared_ptr<string> callableTime_ {};
    // Predictive outbound dialing contact file, specified as the key of an OSS object. Obtain this key by calling the GetCaseFileUploadUrl API.
    shared_ptr<string> caseFileKey_ {};
    // List of predictive outbound dialing contacts. This parameter cannot be used together with CaseFileKey (import from file). You must choose either file import or list import.
    shared_ptr<vector<CreateCampaignRequest::CaseList>> caseList_ {};
    // The contact flow ID associated with the predictive outbound dialing activity.
    // 
    // This parameter is required.
    shared_ptr<string> contactFlowId_ {};
    // The end time of the predictive outbound calling activity, formatted as a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // Whether to keep the activity in the executing state until it expires. The default value is false. If false, the activity automatically transitions to the completed state after all contacts have been called. If true, the activity remains in the executing state even after all contacts have been called, allowing you to append additional contacts and continue dialing until the activity expires or is manually stopped.
    shared_ptr<bool> executingUntilTimeout_ {};
    // Flash SMS parameters
    shared_ptr<string> flashSmsParameters_ {};
    // Phone number collection ID
    shared_ptr<string> instGroupId_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of attempts for the predictive outbound calling activity. This specifies how many times a number can be redialed if the initial call fails.
    // 
    // This parameter is required.
    shared_ptr<int64_t> maxAttemptCount_ {};
    // The minimum redial interval for the predictive outbound calling activity, which specifies the minimum time interval between redial attempts after a failed call, in minutes.
    // 
    // This parameter is required.
    shared_ptr<int64_t> minAttemptInterval_ {};
    // Name of the predictive outbound dialing activity.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // List of caller numbers
    shared_ptr<vector<string>> numberList_ {};
    // The skill group ID associated with the predictive outbound dialing activity.
    // 
    // This parameter is required.
    shared_ptr<string> queueId_ {};
    // Indicates whether this is a simulation activity used for testing. Regular customers do not need to concern themselves with this.
    shared_ptr<bool> simulation_ {};
    // Simulation parameters used for testing. Regular customers do not need to concern themselves with this.
    shared_ptr<string> simulationParameters_ {};
    // The start time of the predictive outbound dialing activity, in Unix timestamp format with millisecond precision.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // Strategy parameters for the predictive outbound dialing activity. For PID strategy, an example format is: {"abandonRate":"5","historicalConnectedRate":"35"}. For PACING strategy, an example format is: {"ratio":1}. abandonRate represents the desired abandonment rate, historicalConnectedRate represents the historical reference connection rate, and ratio represents the fixed dialing ratio.
    // 
    // This parameter is required.
    shared_ptr<string> strategyParameters_ {};
    // The strategy pattern for the predictive outbound calling activity.
    // 
    // This parameter is required.
    shared_ptr<string> strategyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
