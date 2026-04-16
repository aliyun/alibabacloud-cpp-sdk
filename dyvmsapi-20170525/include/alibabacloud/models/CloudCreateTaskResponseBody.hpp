// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateTaskResponseBody() = default ;
    CloudCreateTaskResponseBody(const CloudCreateTaskResponseBody &) = default ;
    CloudCreateTaskResponseBody(CloudCreateTaskResponseBody &&) = default ;
    CloudCreateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateTaskResponseBody() = default ;
    CloudCreateTaskResponseBody& operator=(const CloudCreateTaskResponseBody &) = default ;
    CloudCreateTaskResponseBody& operator=(CloudCreateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentTimeout, agentTimeout_);
        DARABONBA_PTR_TO_JSON(AnswerRate, answerRate_);
        DARABONBA_PTR_TO_JSON(AutoComplete, autoComplete_);
        DARABONBA_PTR_TO_JSON(AutoStart, autoStart_);
        DARABONBA_PTR_TO_JSON(AutoStartDay, autoStartDay_);
        DARABONBA_PTR_TO_JSON(AutoStartTime, autoStartTime_);
        DARABONBA_PTR_TO_JSON(AutoStop, autoStop_);
        DARABONBA_PTR_TO_JSON(AutoStopDay, autoStopDay_);
        DARABONBA_PTR_TO_JSON(AutoStopTime, autoStopTime_);
        DARABONBA_PTR_TO_JSON(Cnos, cnos_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomerClids, customerClids_);
        DARABONBA_PTR_TO_JSON(CustomerMoh, customerMoh_);
        DARABONBA_PTR_TO_JSON(CustomerTimeout, customerTimeout_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsRandom, isRandom_);
        DARABONBA_PTR_TO_JSON(IvrId, ivrId_);
        DARABONBA_PTR_TO_JSON(MaxWaitTime, maxWaitTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OverTime, overTime_);
        DARABONBA_PTR_TO_JSON(PredictAdjust, predictAdjust_);
        DARABONBA_PTR_TO_JSON(Quotiety, quotiety_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserFields, userFields_);
        DARABONBA_PTR_TO_JSON(Wrapup, wrapup_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentTimeout, agentTimeout_);
        DARABONBA_PTR_FROM_JSON(AnswerRate, answerRate_);
        DARABONBA_PTR_FROM_JSON(AutoComplete, autoComplete_);
        DARABONBA_PTR_FROM_JSON(AutoStart, autoStart_);
        DARABONBA_PTR_FROM_JSON(AutoStartDay, autoStartDay_);
        DARABONBA_PTR_FROM_JSON(AutoStartTime, autoStartTime_);
        DARABONBA_PTR_FROM_JSON(AutoStop, autoStop_);
        DARABONBA_PTR_FROM_JSON(AutoStopDay, autoStopDay_);
        DARABONBA_PTR_FROM_JSON(AutoStopTime, autoStopTime_);
        DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomerClids, customerClids_);
        DARABONBA_PTR_FROM_JSON(CustomerMoh, customerMoh_);
        DARABONBA_PTR_FROM_JSON(CustomerTimeout, customerTimeout_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsRandom, isRandom_);
        DARABONBA_PTR_FROM_JSON(IvrId, ivrId_);
        DARABONBA_PTR_FROM_JSON(MaxWaitTime, maxWaitTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OverTime, overTime_);
        DARABONBA_PTR_FROM_JSON(PredictAdjust, predictAdjust_);
        DARABONBA_PTR_FROM_JSON(Quotiety, quotiety_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserFields, userFields_);
        DARABONBA_PTR_FROM_JSON(Wrapup, wrapup_);
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
      virtual bool empty() const override { return this->agentTimeout_ == nullptr
        && this->answerRate_ == nullptr && this->autoComplete_ == nullptr && this->autoStart_ == nullptr && this->autoStartDay_ == nullptr && this->autoStartTime_ == nullptr
        && this->autoStop_ == nullptr && this->autoStopDay_ == nullptr && this->autoStopTime_ == nullptr && this->cnos_ == nullptr && this->concurrency_ == nullptr
        && this->createTime_ == nullptr && this->customerClids_ == nullptr && this->customerMoh_ == nullptr && this->customerTimeout_ == nullptr && this->description_ == nullptr
        && this->enterpriseId_ == nullptr && this->id_ == nullptr && this->isRandom_ == nullptr && this->ivrId_ == nullptr && this->maxWaitTime_ == nullptr
        && this->name_ == nullptr && this->overTime_ == nullptr && this->predictAdjust_ == nullptr && this->quotiety_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->userFields_ == nullptr && this->wrapup_ == nullptr; };
      // agentTimeout Field Functions 
      bool hasAgentTimeout() const { return this->agentTimeout_ != nullptr;};
      void deleteAgentTimeout() { this->agentTimeout_ = nullptr;};
      inline string getAgentTimeout() const { DARABONBA_PTR_GET_DEFAULT(agentTimeout_, "") };
      inline Data& setAgentTimeout(string agentTimeout) { DARABONBA_PTR_SET_VALUE(agentTimeout_, agentTimeout) };


      // answerRate Field Functions 
      bool hasAnswerRate() const { return this->answerRate_ != nullptr;};
      void deleteAnswerRate() { this->answerRate_ = nullptr;};
      inline string getAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(answerRate_, "") };
      inline Data& setAnswerRate(string answerRate) { DARABONBA_PTR_SET_VALUE(answerRate_, answerRate) };


      // autoComplete Field Functions 
      bool hasAutoComplete() const { return this->autoComplete_ != nullptr;};
      void deleteAutoComplete() { this->autoComplete_ = nullptr;};
      inline int64_t getAutoComplete() const { DARABONBA_PTR_GET_DEFAULT(autoComplete_, 0L) };
      inline Data& setAutoComplete(int64_t autoComplete) { DARABONBA_PTR_SET_VALUE(autoComplete_, autoComplete) };


      // autoStart Field Functions 
      bool hasAutoStart() const { return this->autoStart_ != nullptr;};
      void deleteAutoStart() { this->autoStart_ = nullptr;};
      inline string getAutoStart() const { DARABONBA_PTR_GET_DEFAULT(autoStart_, "") };
      inline Data& setAutoStart(string autoStart) { DARABONBA_PTR_SET_VALUE(autoStart_, autoStart) };


      // autoStartDay Field Functions 
      bool hasAutoStartDay() const { return this->autoStartDay_ != nullptr;};
      void deleteAutoStartDay() { this->autoStartDay_ = nullptr;};
      inline string getAutoStartDay() const { DARABONBA_PTR_GET_DEFAULT(autoStartDay_, "") };
      inline Data& setAutoStartDay(string autoStartDay) { DARABONBA_PTR_SET_VALUE(autoStartDay_, autoStartDay) };


      // autoStartTime Field Functions 
      bool hasAutoStartTime() const { return this->autoStartTime_ != nullptr;};
      void deleteAutoStartTime() { this->autoStartTime_ = nullptr;};
      inline string getAutoStartTime() const { DARABONBA_PTR_GET_DEFAULT(autoStartTime_, "") };
      inline Data& setAutoStartTime(string autoStartTime) { DARABONBA_PTR_SET_VALUE(autoStartTime_, autoStartTime) };


      // autoStop Field Functions 
      bool hasAutoStop() const { return this->autoStop_ != nullptr;};
      void deleteAutoStop() { this->autoStop_ = nullptr;};
      inline string getAutoStop() const { DARABONBA_PTR_GET_DEFAULT(autoStop_, "") };
      inline Data& setAutoStop(string autoStop) { DARABONBA_PTR_SET_VALUE(autoStop_, autoStop) };


      // autoStopDay Field Functions 
      bool hasAutoStopDay() const { return this->autoStopDay_ != nullptr;};
      void deleteAutoStopDay() { this->autoStopDay_ = nullptr;};
      inline string getAutoStopDay() const { DARABONBA_PTR_GET_DEFAULT(autoStopDay_, "") };
      inline Data& setAutoStopDay(string autoStopDay) { DARABONBA_PTR_SET_VALUE(autoStopDay_, autoStopDay) };


      // autoStopTime Field Functions 
      bool hasAutoStopTime() const { return this->autoStopTime_ != nullptr;};
      void deleteAutoStopTime() { this->autoStopTime_ = nullptr;};
      inline string getAutoStopTime() const { DARABONBA_PTR_GET_DEFAULT(autoStopTime_, "") };
      inline Data& setAutoStopTime(string autoStopTime) { DARABONBA_PTR_SET_VALUE(autoStopTime_, autoStopTime) };


      // cnos Field Functions 
      bool hasCnos() const { return this->cnos_ != nullptr;};
      void deleteCnos() { this->cnos_ = nullptr;};
      inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
      inline Data& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline string getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, "") };
      inline Data& setConcurrency(string concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customerClids Field Functions 
      bool hasCustomerClids() const { return this->customerClids_ != nullptr;};
      void deleteCustomerClids() { this->customerClids_ = nullptr;};
      inline string getCustomerClids() const { DARABONBA_PTR_GET_DEFAULT(customerClids_, "") };
      inline Data& setCustomerClids(string customerClids) { DARABONBA_PTR_SET_VALUE(customerClids_, customerClids) };


      // customerMoh Field Functions 
      bool hasCustomerMoh() const { return this->customerMoh_ != nullptr;};
      void deleteCustomerMoh() { this->customerMoh_ = nullptr;};
      inline string getCustomerMoh() const { DARABONBA_PTR_GET_DEFAULT(customerMoh_, "") };
      inline Data& setCustomerMoh(string customerMoh) { DARABONBA_PTR_SET_VALUE(customerMoh_, customerMoh) };


      // customerTimeout Field Functions 
      bool hasCustomerTimeout() const { return this->customerTimeout_ != nullptr;};
      void deleteCustomerTimeout() { this->customerTimeout_ = nullptr;};
      inline string getCustomerTimeout() const { DARABONBA_PTR_GET_DEFAULT(customerTimeout_, "") };
      inline Data& setCustomerTimeout(string customerTimeout) { DARABONBA_PTR_SET_VALUE(customerTimeout_, customerTimeout) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
      inline Data& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isRandom Field Functions 
      bool hasIsRandom() const { return this->isRandom_ != nullptr;};
      void deleteIsRandom() { this->isRandom_ = nullptr;};
      inline string getIsRandom() const { DARABONBA_PTR_GET_DEFAULT(isRandom_, "") };
      inline Data& setIsRandom(string isRandom) { DARABONBA_PTR_SET_VALUE(isRandom_, isRandom) };


      // ivrId Field Functions 
      bool hasIvrId() const { return this->ivrId_ != nullptr;};
      void deleteIvrId() { this->ivrId_ = nullptr;};
      inline string getIvrId() const { DARABONBA_PTR_GET_DEFAULT(ivrId_, "") };
      inline Data& setIvrId(string ivrId) { DARABONBA_PTR_SET_VALUE(ivrId_, ivrId) };


      // maxWaitTime Field Functions 
      bool hasMaxWaitTime() const { return this->maxWaitTime_ != nullptr;};
      void deleteMaxWaitTime() { this->maxWaitTime_ = nullptr;};
      inline string getMaxWaitTime() const { DARABONBA_PTR_GET_DEFAULT(maxWaitTime_, "") };
      inline Data& setMaxWaitTime(string maxWaitTime) { DARABONBA_PTR_SET_VALUE(maxWaitTime_, maxWaitTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // overTime Field Functions 
      bool hasOverTime() const { return this->overTime_ != nullptr;};
      void deleteOverTime() { this->overTime_ = nullptr;};
      inline string getOverTime() const { DARABONBA_PTR_GET_DEFAULT(overTime_, "") };
      inline Data& setOverTime(string overTime) { DARABONBA_PTR_SET_VALUE(overTime_, overTime) };


      // predictAdjust Field Functions 
      bool hasPredictAdjust() const { return this->predictAdjust_ != nullptr;};
      void deletePredictAdjust() { this->predictAdjust_ = nullptr;};
      inline string getPredictAdjust() const { DARABONBA_PTR_GET_DEFAULT(predictAdjust_, "") };
      inline Data& setPredictAdjust(string predictAdjust) { DARABONBA_PTR_SET_VALUE(predictAdjust_, predictAdjust) };


      // quotiety Field Functions 
      bool hasQuotiety() const { return this->quotiety_ != nullptr;};
      void deleteQuotiety() { this->quotiety_ = nullptr;};
      inline string getQuotiety() const { DARABONBA_PTR_GET_DEFAULT(quotiety_, "") };
      inline Data& setQuotiety(string quotiety) { DARABONBA_PTR_SET_VALUE(quotiety_, quotiety) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userFields Field Functions 
      bool hasUserFields() const { return this->userFields_ != nullptr;};
      void deleteUserFields() { this->userFields_ = nullptr;};
      inline string getUserFields() const { DARABONBA_PTR_GET_DEFAULT(userFields_, "") };
      inline Data& setUserFields(string userFields) { DARABONBA_PTR_SET_VALUE(userFields_, userFields) };


      // wrapup Field Functions 
      bool hasWrapup() const { return this->wrapup_ != nullptr;};
      void deleteWrapup() { this->wrapup_ = nullptr;};
      inline string getWrapup() const { DARABONBA_PTR_GET_DEFAULT(wrapup_, "") };
      inline Data& setWrapup(string wrapup) { DARABONBA_PTR_SET_VALUE(wrapup_, wrapup) };


    protected:
      shared_ptr<string> agentTimeout_ {};
      shared_ptr<string> answerRate_ {};
      shared_ptr<int64_t> autoComplete_ {};
      shared_ptr<string> autoStart_ {};
      shared_ptr<string> autoStartDay_ {};
      shared_ptr<string> autoStartTime_ {};
      shared_ptr<string> autoStop_ {};
      shared_ptr<string> autoStopDay_ {};
      shared_ptr<string> autoStopTime_ {};
      shared_ptr<string> cnos_ {};
      shared_ptr<string> concurrency_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> customerClids_ {};
      shared_ptr<string> customerMoh_ {};
      shared_ptr<string> customerTimeout_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> enterpriseId_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> isRandom_ {};
      shared_ptr<string> ivrId_ {};
      shared_ptr<string> maxWaitTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> overTime_ {};
      shared_ptr<string> predictAdjust_ {};
      shared_ptr<string> quotiety_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userFields_ {};
      shared_ptr<string> wrapup_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateTaskResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateTaskResponseBody::Data) };
    inline CloudCreateTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateTaskResponseBody::Data) };
    inline CloudCreateTaskResponseBody& setData(const CloudCreateTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateTaskResponseBody& setData(CloudCreateTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
