// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalIntentNum, globalIntentNum_);
      DARABONBA_PTR_TO_JSON(GlobalIntents, globalIntents_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentsAfterNoAnswer, intentsAfterNoAnswer_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProcessIntentNum, processIntentNum_);
      DARABONBA_PTR_TO_JSON(ProcessIntents, processIntents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalIntentNum, globalIntentNum_);
      DARABONBA_PTR_FROM_JSON(GlobalIntents, globalIntents_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentsAfterNoAnswer, intentsAfterNoAnswer_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProcessIntentNum, processIntentNum_);
      DARABONBA_PTR_FROM_JSON(ProcessIntents, processIntents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeIntentStatisticsResponseBody() = default ;
    DescribeIntentStatisticsResponseBody(const DescribeIntentStatisticsResponseBody &) = default ;
    DescribeIntentStatisticsResponseBody(DescribeIntentStatisticsResponseBody &&) = default ;
    DescribeIntentStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentStatisticsResponseBody() = default ;
    DescribeIntentStatisticsResponseBody& operator=(const DescribeIntentStatisticsResponseBody &) = default ;
    DescribeIntentStatisticsResponseBody& operator=(DescribeIntentStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProcessIntents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProcessIntents& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_TO_JSON(HitNum, hitNum_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
        DARABONBA_PTR_TO_JSON(RateDisplay, rateDisplay_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ProcessIntents& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_FROM_JSON(HitNum, hitNum_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
        DARABONBA_PTR_FROM_JSON(RateDisplay, rateDisplay_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ProcessIntents() = default ;
      ProcessIntents(const ProcessIntents &) = default ;
      ProcessIntents(ProcessIntents &&) = default ;
      ProcessIntents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProcessIntents() = default ;
      ProcessIntents& operator=(const ProcessIntents &) = default ;
      ProcessIntents& operator=(ProcessIntents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hitAfterNoAnswer_ == nullptr && this->hitNum_ == nullptr && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr
        && this->rateDisplay_ == nullptr && this->type_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline ProcessIntents& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // hitAfterNoAnswer Field Functions 
      bool hasHitAfterNoAnswer() const { return this->hitAfterNoAnswer_ != nullptr;};
      void deleteHitAfterNoAnswer() { this->hitAfterNoAnswer_ = nullptr;};
      inline int32_t getHitAfterNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(hitAfterNoAnswer_, 0) };
      inline ProcessIntents& setHitAfterNoAnswer(int32_t hitAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(hitAfterNoAnswer_, hitAfterNoAnswer) };


      // hitNum Field Functions 
      bool hasHitNum() const { return this->hitNum_ != nullptr;};
      void deleteHitNum() { this->hitNum_ = nullptr;};
      inline int32_t getHitNum() const { DARABONBA_PTR_GET_DEFAULT(hitNum_, 0) };
      inline ProcessIntents& setHitNum(int32_t hitNum) { DARABONBA_PTR_SET_VALUE(hitNum_, hitNum) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ProcessIntents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
      inline ProcessIntents& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline ProcessIntents& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


      // rateDisplay Field Functions 
      bool hasRateDisplay() const { return this->rateDisplay_ != nullptr;};
      void deleteRateDisplay() { this->rateDisplay_ = nullptr;};
      inline string getRateDisplay() const { DARABONBA_PTR_GET_DEFAULT(rateDisplay_, "") };
      inline ProcessIntents& setRateDisplay(string rateDisplay) { DARABONBA_PTR_SET_VALUE(rateDisplay_, rateDisplay) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProcessIntents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<int32_t> hitAfterNoAnswer_ {};
      shared_ptr<int32_t> hitNum_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> intentId_ {};
      shared_ptr<string> intentName_ {};
      shared_ptr<string> rateDisplay_ {};
      shared_ptr<string> type_ {};
    };

    class IntentsAfterNoAnswer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IntentsAfterNoAnswer& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      };
      friend void from_json(const Darabonba::Json& j, IntentsAfterNoAnswer& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      };
      IntentsAfterNoAnswer() = default ;
      IntentsAfterNoAnswer(const IntentsAfterNoAnswer &) = default ;
      IntentsAfterNoAnswer(IntentsAfterNoAnswer &&) = default ;
      IntentsAfterNoAnswer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IntentsAfterNoAnswer() = default ;
      IntentsAfterNoAnswer& operator=(const IntentsAfterNoAnswer &) = default ;
      IntentsAfterNoAnswer& operator=(IntentsAfterNoAnswer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hitAfterNoAnswer_ == nullptr && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline IntentsAfterNoAnswer& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // hitAfterNoAnswer Field Functions 
      bool hasHitAfterNoAnswer() const { return this->hitAfterNoAnswer_ != nullptr;};
      void deleteHitAfterNoAnswer() { this->hitAfterNoAnswer_ = nullptr;};
      inline int32_t getHitAfterNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(hitAfterNoAnswer_, 0) };
      inline IntentsAfterNoAnswer& setHitAfterNoAnswer(int32_t hitAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(hitAfterNoAnswer_, hitAfterNoAnswer) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline IntentsAfterNoAnswer& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
      inline IntentsAfterNoAnswer& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline IntentsAfterNoAnswer& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<int32_t> hitAfterNoAnswer_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> intentId_ {};
      shared_ptr<string> intentName_ {};
    };

    class GlobalIntents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalIntents& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_TO_JSON(HitNum, hitNum_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalIntents& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HitAfterNoAnswer, hitAfterNoAnswer_);
        DARABONBA_PTR_FROM_JSON(HitNum, hitNum_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      GlobalIntents() = default ;
      GlobalIntents(const GlobalIntents &) = default ;
      GlobalIntents(GlobalIntents &&) = default ;
      GlobalIntents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalIntents() = default ;
      GlobalIntents& operator=(const GlobalIntents &) = default ;
      GlobalIntents& operator=(GlobalIntents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hitAfterNoAnswer_ == nullptr && this->hitNum_ == nullptr && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr
        && this->type_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline GlobalIntents& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // hitAfterNoAnswer Field Functions 
      bool hasHitAfterNoAnswer() const { return this->hitAfterNoAnswer_ != nullptr;};
      void deleteHitAfterNoAnswer() { this->hitAfterNoAnswer_ = nullptr;};
      inline int32_t getHitAfterNoAnswer() const { DARABONBA_PTR_GET_DEFAULT(hitAfterNoAnswer_, 0) };
      inline GlobalIntents& setHitAfterNoAnswer(int32_t hitAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(hitAfterNoAnswer_, hitAfterNoAnswer) };


      // hitNum Field Functions 
      bool hasHitNum() const { return this->hitNum_ != nullptr;};
      void deleteHitNum() { this->hitNum_ = nullptr;};
      inline int32_t getHitNum() const { DARABONBA_PTR_GET_DEFAULT(hitNum_, 0) };
      inline GlobalIntents& setHitNum(int32_t hitNum) { DARABONBA_PTR_SET_VALUE(hitNum_, hitNum) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline GlobalIntents& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
      inline GlobalIntents& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline GlobalIntents& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GlobalIntents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<int32_t> hitAfterNoAnswer_ {};
      shared_ptr<int32_t> hitNum_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> intentId_ {};
      shared_ptr<string> intentName_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->globalIntentNum_ == nullptr && this->globalIntents_ == nullptr && this->groupId_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr
        && this->intentsAfterNoAnswer_ == nullptr && this->message_ == nullptr && this->processIntentNum_ == nullptr && this->processIntents_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeIntentStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalIntentNum Field Functions 
    bool hasGlobalIntentNum() const { return this->globalIntentNum_ != nullptr;};
    void deleteGlobalIntentNum() { this->globalIntentNum_ = nullptr;};
    inline int32_t getGlobalIntentNum() const { DARABONBA_PTR_GET_DEFAULT(globalIntentNum_, 0) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntentNum(int32_t globalIntentNum) { DARABONBA_PTR_SET_VALUE(globalIntentNum_, globalIntentNum) };


    // globalIntents Field Functions 
    bool hasGlobalIntents() const { return this->globalIntents_ != nullptr;};
    void deleteGlobalIntents() { this->globalIntents_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBody::GlobalIntents> & getGlobalIntents() const { DARABONBA_PTR_GET_CONST(globalIntents_, vector<DescribeIntentStatisticsResponseBody::GlobalIntents>) };
    inline vector<DescribeIntentStatisticsResponseBody::GlobalIntents> getGlobalIntents() { DARABONBA_PTR_GET(globalIntents_, vector<DescribeIntentStatisticsResponseBody::GlobalIntents>) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntents(const vector<DescribeIntentStatisticsResponseBody::GlobalIntents> & globalIntents) { DARABONBA_PTR_SET_VALUE(globalIntents_, globalIntents) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntents(vector<DescribeIntentStatisticsResponseBody::GlobalIntents> && globalIntents) { DARABONBA_PTR_SET_RVALUE(globalIntents_, globalIntents) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeIntentStatisticsResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeIntentStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIntentStatisticsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentsAfterNoAnswer Field Functions 
    bool hasIntentsAfterNoAnswer() const { return this->intentsAfterNoAnswer_ != nullptr;};
    void deleteIntentsAfterNoAnswer() { this->intentsAfterNoAnswer_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer> & getIntentsAfterNoAnswer() const { DARABONBA_PTR_GET_CONST(intentsAfterNoAnswer_, vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer>) };
    inline vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer> getIntentsAfterNoAnswer() { DARABONBA_PTR_GET(intentsAfterNoAnswer_, vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer>) };
    inline DescribeIntentStatisticsResponseBody& setIntentsAfterNoAnswer(const vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer> & intentsAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(intentsAfterNoAnswer_, intentsAfterNoAnswer) };
    inline DescribeIntentStatisticsResponseBody& setIntentsAfterNoAnswer(vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer> && intentsAfterNoAnswer) { DARABONBA_PTR_SET_RVALUE(intentsAfterNoAnswer_, intentsAfterNoAnswer) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeIntentStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // processIntentNum Field Functions 
    bool hasProcessIntentNum() const { return this->processIntentNum_ != nullptr;};
    void deleteProcessIntentNum() { this->processIntentNum_ = nullptr;};
    inline int32_t getProcessIntentNum() const { DARABONBA_PTR_GET_DEFAULT(processIntentNum_, 0) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntentNum(int32_t processIntentNum) { DARABONBA_PTR_SET_VALUE(processIntentNum_, processIntentNum) };


    // processIntents Field Functions 
    bool hasProcessIntents() const { return this->processIntents_ != nullptr;};
    void deleteProcessIntents() { this->processIntents_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBody::ProcessIntents> & getProcessIntents() const { DARABONBA_PTR_GET_CONST(processIntents_, vector<DescribeIntentStatisticsResponseBody::ProcessIntents>) };
    inline vector<DescribeIntentStatisticsResponseBody::ProcessIntents> getProcessIntents() { DARABONBA_PTR_GET(processIntents_, vector<DescribeIntentStatisticsResponseBody::ProcessIntents>) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntents(const vector<DescribeIntentStatisticsResponseBody::ProcessIntents> & processIntents) { DARABONBA_PTR_SET_VALUE(processIntents_, processIntents) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntents(vector<DescribeIntentStatisticsResponseBody::ProcessIntents> && processIntents) { DARABONBA_PTR_SET_RVALUE(processIntents_, processIntents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntentStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeIntentStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> globalIntentNum_ {};
    shared_ptr<vector<DescribeIntentStatisticsResponseBody::GlobalIntents>> globalIntents_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<DescribeIntentStatisticsResponseBody::IntentsAfterNoAnswer>> intentsAfterNoAnswer_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> processIntentNum_ {};
    shared_ptr<vector<DescribeIntentStatisticsResponseBody::ProcessIntents>> processIntents_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
