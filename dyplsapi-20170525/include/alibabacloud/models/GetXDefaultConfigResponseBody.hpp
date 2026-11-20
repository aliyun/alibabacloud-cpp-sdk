// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETXDEFAULTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETXDEFAULTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetXDefaultConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetXDefaultConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetXDefaultConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetXDefaultConfigResponseBody() = default ;
    GetXDefaultConfigResponseBody(const GetXDefaultConfigResponseBody &) = default ;
    GetXDefaultConfigResponseBody(GetXDefaultConfigResponseBody &&) = default ;
    GetXDefaultConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetXDefaultConfigResponseBody() = default ;
    GetXDefaultConfigResponseBody& operator=(const GetXDefaultConfigResponseBody &) = default ;
    GetXDefaultConfigResponseBody& operator=(GetXDefaultConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallAbility, callAbility_);
        DARABONBA_PTR_TO_JSON(GNFlag, GNFlag_);
        DARABONBA_PTR_TO_JSON(ReachJson, reachJson_);
        DARABONBA_PTR_TO_JSON(SequenceCall, sequenceCall_);
        DARABONBA_PTR_TO_JSON(SequenceEndTime, sequenceEndTime_);
        DARABONBA_PTR_TO_JSON(SequenceStartTime, sequenceStartTime_);
        DARABONBA_PTR_TO_JSON(SmsAbility, smsAbility_);
        DARABONBA_PTR_TO_JSON(SmsSignMode, smsSignMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallAbility, callAbility_);
        DARABONBA_PTR_FROM_JSON(GNFlag, GNFlag_);
        DARABONBA_PTR_FROM_JSON(ReachJson, reachJson_);
        DARABONBA_PTR_FROM_JSON(SequenceCall, sequenceCall_);
        DARABONBA_PTR_FROM_JSON(SequenceEndTime, sequenceEndTime_);
        DARABONBA_PTR_FROM_JSON(SequenceStartTime, sequenceStartTime_);
        DARABONBA_PTR_FROM_JSON(SmsAbility, smsAbility_);
        DARABONBA_PTR_FROM_JSON(SmsSignMode, smsSignMode_);
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
      class SequenceCall : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SequenceCall& obj) { 
          DARABONBA_PTR_TO_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
          DARABONBA_PTR_TO_JSON(SequenceCalledNo, sequenceCalledNo_);
          DARABONBA_PTR_TO_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
        };
        friend void from_json(const Darabonba::Json& j, SequenceCall& obj) { 
          DARABONBA_PTR_FROM_JSON(SequenceCallNoPlayCode, sequenceCallNoPlayCode_);
          DARABONBA_PTR_FROM_JSON(SequenceCalledNo, sequenceCalledNo_);
          DARABONBA_PTR_FROM_JSON(SequenceCalledPlayCode, sequenceCalledPlayCode_);
        };
        SequenceCall() = default ;
        SequenceCall(const SequenceCall &) = default ;
        SequenceCall(SequenceCall &&) = default ;
        SequenceCall(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SequenceCall() = default ;
        SequenceCall& operator=(const SequenceCall &) = default ;
        SequenceCall& operator=(SequenceCall &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sequenceCallNoPlayCode_ == nullptr
        && this->sequenceCalledNo_ == nullptr && this->sequenceCalledPlayCode_ == nullptr; };
        // sequenceCallNoPlayCode Field Functions 
        bool hasSequenceCallNoPlayCode() const { return this->sequenceCallNoPlayCode_ != nullptr;};
        void deleteSequenceCallNoPlayCode() { this->sequenceCallNoPlayCode_ = nullptr;};
        inline string getSequenceCallNoPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCallNoPlayCode_, "") };
        inline SequenceCall& setSequenceCallNoPlayCode(string sequenceCallNoPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCallNoPlayCode_, sequenceCallNoPlayCode) };


        // sequenceCalledNo Field Functions 
        bool hasSequenceCalledNo() const { return this->sequenceCalledNo_ != nullptr;};
        void deleteSequenceCalledNo() { this->sequenceCalledNo_ = nullptr;};
        inline string getSequenceCalledNo() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledNo_, "") };
        inline SequenceCall& setSequenceCalledNo(string sequenceCalledNo) { DARABONBA_PTR_SET_VALUE(sequenceCalledNo_, sequenceCalledNo) };


        // sequenceCalledPlayCode Field Functions 
        bool hasSequenceCalledPlayCode() const { return this->sequenceCalledPlayCode_ != nullptr;};
        void deleteSequenceCalledPlayCode() { this->sequenceCalledPlayCode_ = nullptr;};
        inline string getSequenceCalledPlayCode() const { DARABONBA_PTR_GET_DEFAULT(sequenceCalledPlayCode_, "") };
        inline SequenceCall& setSequenceCalledPlayCode(string sequenceCalledPlayCode) { DARABONBA_PTR_SET_VALUE(sequenceCalledPlayCode_, sequenceCalledPlayCode) };


      protected:
        // The play code for the sequential ringing prompt tone. The format is the same as callNoPlayCode.
        shared_ptr<string> sequenceCallNoPlayCode_ {};
        // The callee number for sequential ringing.
        shared_ptr<string> sequenceCalledNo_ {};
        // The play code for the caller and callee after the call is connected. The format is the same as calledPlayCode.
        shared_ptr<string> sequenceCalledPlayCode_ {};
      };

      class ReachJson : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReachJson& obj) { 
          DARABONBA_PTR_TO_JSON(CallDir, callDir_);
          DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
          DARABONBA_PTR_TO_JSON(ReceiveDir, receiveDir_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
          DARABONBA_PTR_TO_JSON(TempId, tempId_);
        };
        friend void from_json(const Darabonba::Json& j, ReachJson& obj) { 
          DARABONBA_PTR_FROM_JSON(CallDir, callDir_);
          DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
          DARABONBA_PTR_FROM_JSON(ReceiveDir, receiveDir_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(TempId, tempId_);
        };
        ReachJson() = default ;
        ReachJson(const ReachJson &) = default ;
        ReachJson(ReachJson &&) = default ;
        ReachJson(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReachJson() = default ;
        ReachJson& operator=(const ReachJson &) = default ;
        ReachJson& operator=(ReachJson &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callDir_ == nullptr
        && this->callStatus_ == nullptr && this->receiveDir_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr
        && this->tempId_ == nullptr; };
        // callDir Field Functions 
        bool hasCallDir() const { return this->callDir_ != nullptr;};
        void deleteCallDir() { this->callDir_ = nullptr;};
        inline string getCallDir() const { DARABONBA_PTR_GET_DEFAULT(callDir_, "") };
        inline ReachJson& setCallDir(string callDir) { DARABONBA_PTR_SET_VALUE(callDir_, callDir) };


        // callStatus Field Functions 
        bool hasCallStatus() const { return this->callStatus_ != nullptr;};
        void deleteCallStatus() { this->callStatus_ = nullptr;};
        inline string getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
        inline ReachJson& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


        // receiveDir Field Functions 
        bool hasReceiveDir() const { return this->receiveDir_ != nullptr;};
        void deleteReceiveDir() { this->receiveDir_ = nullptr;};
        inline string getReceiveDir() const { DARABONBA_PTR_GET_DEFAULT(receiveDir_, "") };
        inline ReachJson& setReceiveDir(string receiveDir) { DARABONBA_PTR_SET_VALUE(receiveDir_, receiveDir) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline ReachJson& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ReachJson& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline ReachJson& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // tempId Field Functions 
        bool hasTempId() const { return this->tempId_ != nullptr;};
        void deleteTempId() { this->tempId_ = nullptr;};
        inline string getTempId() const { DARABONBA_PTR_GET_DEFAULT(tempId_, "") };
        inline ReachJson& setTempId(string tempId) { DARABONBA_PTR_SET_VALUE(tempId_, tempId) };


      protected:
        // The call direction. Valid values: 1: Employee B calls Customer A. 2: Customer A calls Employee B.
        shared_ptr<string> callDir_ {};
        // The call status. Valid values: 1: ringing. 2: before connection. 3: after connection. 4: call ended. 5: connected. 6: not connected.
        shared_ptr<string> callStatus_ {};
        // The receive direction. Valid values: 1: caller. 2: callee.
        shared_ptr<string> receiveDir_ {};
        // The rule ID.
        shared_ptr<string> ruleId_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule type. Valid values: 1: enterprise business card - SMS. 2: enterprise business card - flash SMS. 3: enterprise business card - video. 4: enterprise business card - audio.
        shared_ptr<string> ruleType_ {};
        // The template ID.
        shared_ptr<string> tempId_ {};
      };

      virtual bool empty() const override { return this->callAbility_ == nullptr
        && this->GNFlag_ == nullptr && this->reachJson_ == nullptr && this->sequenceCall_ == nullptr && this->sequenceEndTime_ == nullptr && this->sequenceStartTime_ == nullptr
        && this->smsAbility_ == nullptr && this->smsSignMode_ == nullptr; };
      // callAbility Field Functions 
      bool hasCallAbility() const { return this->callAbility_ != nullptr;};
      void deleteCallAbility() { this->callAbility_ = nullptr;};
      inline string getCallAbility() const { DARABONBA_PTR_GET_DEFAULT(callAbility_, "") };
      inline Data& setCallAbility(string callAbility) { DARABONBA_PTR_SET_VALUE(callAbility_, callAbility) };


      // GNFlag Field Functions 
      bool hasGNFlag() const { return this->GNFlag_ != nullptr;};
      void deleteGNFlag() { this->GNFlag_ = nullptr;};
      inline string getGNFlag() const { DARABONBA_PTR_GET_DEFAULT(GNFlag_, "") };
      inline Data& setGNFlag(string GNFlag) { DARABONBA_PTR_SET_VALUE(GNFlag_, GNFlag) };


      // reachJson Field Functions 
      bool hasReachJson() const { return this->reachJson_ != nullptr;};
      void deleteReachJson() { this->reachJson_ = nullptr;};
      inline const vector<Data::ReachJson> & getReachJson() const { DARABONBA_PTR_GET_CONST(reachJson_, vector<Data::ReachJson>) };
      inline vector<Data::ReachJson> getReachJson() { DARABONBA_PTR_GET(reachJson_, vector<Data::ReachJson>) };
      inline Data& setReachJson(const vector<Data::ReachJson> & reachJson) { DARABONBA_PTR_SET_VALUE(reachJson_, reachJson) };
      inline Data& setReachJson(vector<Data::ReachJson> && reachJson) { DARABONBA_PTR_SET_RVALUE(reachJson_, reachJson) };


      // sequenceCall Field Functions 
      bool hasSequenceCall() const { return this->sequenceCall_ != nullptr;};
      void deleteSequenceCall() { this->sequenceCall_ = nullptr;};
      inline const vector<Data::SequenceCall> & getSequenceCall() const { DARABONBA_PTR_GET_CONST(sequenceCall_, vector<Data::SequenceCall>) };
      inline vector<Data::SequenceCall> getSequenceCall() { DARABONBA_PTR_GET(sequenceCall_, vector<Data::SequenceCall>) };
      inline Data& setSequenceCall(const vector<Data::SequenceCall> & sequenceCall) { DARABONBA_PTR_SET_VALUE(sequenceCall_, sequenceCall) };
      inline Data& setSequenceCall(vector<Data::SequenceCall> && sequenceCall) { DARABONBA_PTR_SET_RVALUE(sequenceCall_, sequenceCall) };


      // sequenceEndTime Field Functions 
      bool hasSequenceEndTime() const { return this->sequenceEndTime_ != nullptr;};
      void deleteSequenceEndTime() { this->sequenceEndTime_ = nullptr;};
      inline string getSequenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceEndTime_, "") };
      inline Data& setSequenceEndTime(string sequenceEndTime) { DARABONBA_PTR_SET_VALUE(sequenceEndTime_, sequenceEndTime) };


      // sequenceStartTime Field Functions 
      bool hasSequenceStartTime() const { return this->sequenceStartTime_ != nullptr;};
      void deleteSequenceStartTime() { this->sequenceStartTime_ = nullptr;};
      inline string getSequenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(sequenceStartTime_, "") };
      inline Data& setSequenceStartTime(string sequenceStartTime) { DARABONBA_PTR_SET_VALUE(sequenceStartTime_, sequenceStartTime) };


      // smsAbility Field Functions 
      bool hasSmsAbility() const { return this->smsAbility_ != nullptr;};
      void deleteSmsAbility() { this->smsAbility_ = nullptr;};
      inline string getSmsAbility() const { DARABONBA_PTR_GET_DEFAULT(smsAbility_, "") };
      inline Data& setSmsAbility(string smsAbility) { DARABONBA_PTR_SET_VALUE(smsAbility_, smsAbility) };


      // smsSignMode Field Functions 
      bool hasSmsSignMode() const { return this->smsSignMode_ != nullptr;};
      void deleteSmsSignMode() { this->smsSignMode_ = nullptr;};
      inline string getSmsSignMode() const { DARABONBA_PTR_GET_DEFAULT(smsSignMode_, "") };
      inline Data& setSmsSignMode(string smsSignMode) { DARABONBA_PTR_SET_VALUE(smsSignMode_, smsSignMode) };


    protected:
      // The status of the call capability. Valid values: 0: disabled. 1: enabled.
      shared_ptr<string> callAbility_ {};
      // Specifies whether to pass through the caller ID to display the real caller. Valid values: 00: non-passthrough. The work number is displayed when calls are made to each other. 10: passthrough. When Customer A is the caller, the caller ID displayed to Employee B is the number of Customer A. When Employee B is the caller, the caller ID displayed to Customer A is the work number. Default value: 00.
      shared_ptr<string> GNFlag_ {};
      // The enterprise business card rule control parameters.
      shared_ptr<vector<Data::ReachJson>> reachJson_ {};
      // The sequential ringing control parameters.
      shared_ptr<vector<Data::SequenceCall>> sequenceCall_ {};
      // The end time of sequential ringing. Format: HH:mm:ss, such as 18:00:00.
      shared_ptr<string> sequenceEndTime_ {};
      // The start time of sequential ringing. Format: HH:mm:ss, such as 09:00:00.
      shared_ptr<string> sequenceStartTime_ {};
      // The status of the SMS feature. Valid values: 0: disabled. 1: enabled.
      shared_ptr<string> smsAbility_ {};
      // Specifies whether to pass through the caller ID to display the real caller. Valid values: 00: non-passthrough. The work number is displayed when calls are made to each other. 10: passthrough. When Customer A is the caller, the caller ID displayed to Employee B is the number of Customer A. When Employee B is the caller, the caller ID displayed to Customer A is the work number. Default value: 00.
      shared_ptr<string> smsSignMode_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetXDefaultConfigResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetXDefaultConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetXDefaultConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetXDefaultConfigResponseBody::Data) };
    inline GetXDefaultConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetXDefaultConfigResponseBody::Data) };
    inline GetXDefaultConfigResponseBody& setData(const GetXDefaultConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetXDefaultConfigResponseBody& setData(GetXDefaultConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetXDefaultConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetXDefaultConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code. Valid values:
    // 
    // - 0000: Success.
    // 
    // - Other values: Failure.
    shared_ptr<string> code_ {};
    // The default configurations of the work number.
    shared_ptr<GetXDefaultConfigResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // 
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
