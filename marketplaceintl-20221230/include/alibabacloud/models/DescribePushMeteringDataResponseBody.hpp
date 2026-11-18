// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUSHMETERINGDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class DescribePushMeteringDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePushMeteringDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePushMeteringDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ForceFatal, forceFatal_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePushMeteringDataResponseBody() = default ;
    DescribePushMeteringDataResponseBody(const DescribePushMeteringDataResponseBody &) = default ;
    DescribePushMeteringDataResponseBody(DescribePushMeteringDataResponseBody &&) = default ;
    DescribePushMeteringDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePushMeteringDataResponseBody() = default ;
    DescribePushMeteringDataResponseBody& operator=(const DescribePushMeteringDataResponseBody &) = default ;
    DescribePushMeteringDataResponseBody& operator=(DescribePushMeteringDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsPushBilling, isPushBilling_);
        DARABONBA_PTR_TO_JSON(MeteringAssist, meteringAssist_);
        DARABONBA_PTR_TO_JSON(MeteringEntity, meteringEntity_);
        DARABONBA_PTR_TO_JSON(PushOrderBizId, pushOrderBizId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsPushBilling, isPushBilling_);
        DARABONBA_PTR_FROM_JSON(MeteringAssist, meteringAssist_);
        DARABONBA_PTR_FROM_JSON(MeteringEntity, meteringEntity_);
        DARABONBA_PTR_FROM_JSON(PushOrderBizId, pushOrderBizId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->isPushBilling_ == nullptr && this->meteringAssist_ == nullptr && this->meteringEntity_ == nullptr && this->pushOrderBizId_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isPushBilling Field Functions 
      bool hasIsPushBilling() const { return this->isPushBilling_ != nullptr;};
      void deleteIsPushBilling() { this->isPushBilling_ = nullptr;};
      inline bool getIsPushBilling() const { DARABONBA_PTR_GET_DEFAULT(isPushBilling_, false) };
      inline Result& setIsPushBilling(bool isPushBilling) { DARABONBA_PTR_SET_VALUE(isPushBilling_, isPushBilling) };


      // meteringAssist Field Functions 
      bool hasMeteringAssist() const { return this->meteringAssist_ != nullptr;};
      void deleteMeteringAssist() { this->meteringAssist_ = nullptr;};
      inline string getMeteringAssist() const { DARABONBA_PTR_GET_DEFAULT(meteringAssist_, "") };
      inline Result& setMeteringAssist(string meteringAssist) { DARABONBA_PTR_SET_VALUE(meteringAssist_, meteringAssist) };


      // meteringEntity Field Functions 
      bool hasMeteringEntity() const { return this->meteringEntity_ != nullptr;};
      void deleteMeteringEntity() { this->meteringEntity_ = nullptr;};
      inline string getMeteringEntity() const { DARABONBA_PTR_GET_DEFAULT(meteringEntity_, "") };
      inline Result& setMeteringEntity(string meteringEntity) { DARABONBA_PTR_SET_VALUE(meteringEntity_, meteringEntity) };


      // pushOrderBizId Field Functions 
      bool hasPushOrderBizId() const { return this->pushOrderBizId_ != nullptr;};
      void deletePushOrderBizId() { this->pushOrderBizId_ = nullptr;};
      inline string getPushOrderBizId() const { DARABONBA_PTR_GET_DEFAULT(pushOrderBizId_, "") };
      inline Result& setPushOrderBizId(string pushOrderBizId) { DARABONBA_PTR_SET_VALUE(pushOrderBizId_, pushOrderBizId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Result& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<bool> isPushBilling_ {};
      shared_ptr<string> meteringAssist_ {};
      shared_ptr<string> meteringEntity_ {};
      shared_ptr<string> pushOrderBizId_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dynamicMessage_ == nullptr && this->forceFatal_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePushMeteringDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribePushMeteringDataResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // forceFatal Field Functions 
    bool hasForceFatal() const { return this->forceFatal_ != nullptr;};
    void deleteForceFatal() { this->forceFatal_ = nullptr;};
    inline bool getForceFatal() const { DARABONBA_PTR_GET_DEFAULT(forceFatal_, false) };
    inline DescribePushMeteringDataResponseBody& setForceFatal(bool forceFatal) { DARABONBA_PTR_SET_VALUE(forceFatal_, forceFatal) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePushMeteringDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePushMeteringDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribePushMeteringDataResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribePushMeteringDataResponseBody::Result) };
    inline DescribePushMeteringDataResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribePushMeteringDataResponseBody::Result) };
    inline DescribePushMeteringDataResponseBody& setResult(const DescribePushMeteringDataResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribePushMeteringDataResponseBody& setResult(DescribePushMeteringDataResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePushMeteringDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<bool> forceFatal_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribePushMeteringDataResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
