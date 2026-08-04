// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckAndDoVoipCallForHotelResponseBody() = default ;
    CheckAndDoVoipCallForHotelResponseBody(const CheckAndDoVoipCallForHotelResponseBody &) = default ;
    CheckAndDoVoipCallForHotelResponseBody(CheckAndDoVoipCallForHotelResponseBody &&) = default ;
    CheckAndDoVoipCallForHotelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelResponseBody() = default ;
    CheckAndDoVoipCallForHotelResponseBody& operator=(const CheckAndDoVoipCallForHotelResponseBody &) = default ;
    CheckAndDoVoipCallForHotelResponseBody& operator=(CheckAndDoVoipCallForHotelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceTargets, deviceTargets_);
        DARABONBA_PTR_TO_JSON(IsStartCall, isStartCall_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(StartCallResult, startCallResult_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceTargets, deviceTargets_);
        DARABONBA_PTR_FROM_JSON(IsStartCall, isStartCall_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(StartCallResult, startCallResult_);
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
      class StartCallResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StartCallResult& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RetCode, retCode_);
          DARABONBA_PTR_TO_JSON(RetValue, retValue_);
          DARABONBA_PTR_TO_JSON(Success, success_);
          DARABONBA_PTR_TO_JSON(TraceId, traceId_);
        };
        friend void from_json(const Darabonba::Json& j, StartCallResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
          DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
          DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
        };
        StartCallResult() = default ;
        StartCallResult(const StartCallResult &) = default ;
        StartCallResult(StartCallResult &&) = default ;
        StartCallResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StartCallResult() = default ;
        StartCallResult& operator=(const StartCallResult &) = default ;
        StartCallResult& operator=(StartCallResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->message_ == nullptr
        && this->retCode_ == nullptr && this->retValue_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline StartCallResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // retCode Field Functions 
        bool hasRetCode() const { return this->retCode_ != nullptr;};
        void deleteRetCode() { this->retCode_ = nullptr;};
        inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
        inline StartCallResult& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


        // retValue Field Functions 
        bool hasRetValue() const { return this->retValue_ != nullptr;};
        void deleteRetValue() { this->retValue_ = nullptr;};
        inline string getRetValue() const { DARABONBA_PTR_GET_DEFAULT(retValue_, "") };
        inline StartCallResult& setRetValue(string retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline StartCallResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline StartCallResult& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      protected:
        shared_ptr<string> message_ {};
        shared_ptr<int32_t> retCode_ {};
        shared_ptr<string> retValue_ {};
        shared_ptr<bool> success_ {};
        shared_ptr<string> traceId_ {};
      };

      class DeviceTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceTargets& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
        };
        DeviceTargets() = default ;
        DeviceTargets(const DeviceTargets &) = default ;
        DeviceTargets(DeviceTargets &&) = default ;
        DeviceTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceTargets() = default ;
        DeviceTargets& operator=(const DeviceTargets &) = default ;
        DeviceTargets& operator=(DeviceTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(DeviceIcon, deviceIcon_);
            DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
            DARABONBA_PTR_TO_JSON(Online, online_);
            DARABONBA_PTR_TO_JSON(Uuid, uuid_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(DeviceIcon, deviceIcon_);
            DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
            DARABONBA_PTR_FROM_JSON(Online, online_);
            DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
          virtual bool empty() const override { return this->deviceIcon_ == nullptr
        && this->deviceName_ == nullptr && this->deviceType_ == nullptr && this->online_ == nullptr && this->uuid_ == nullptr; };
          // deviceIcon Field Functions 
          bool hasDeviceIcon() const { return this->deviceIcon_ != nullptr;};
          void deleteDeviceIcon() { this->deviceIcon_ = nullptr;};
          inline string getDeviceIcon() const { DARABONBA_PTR_GET_DEFAULT(deviceIcon_, "") };
          inline Data& setDeviceIcon(string deviceIcon) { DARABONBA_PTR_SET_VALUE(deviceIcon_, deviceIcon) };


          // deviceName Field Functions 
          bool hasDeviceName() const { return this->deviceName_ != nullptr;};
          void deleteDeviceName() { this->deviceName_ = nullptr;};
          inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
          inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


          // deviceType Field Functions 
          bool hasDeviceType() const { return this->deviceType_ != nullptr;};
          void deleteDeviceType() { this->deviceType_ = nullptr;};
          inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
          inline Data& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


          // online Field Functions 
          bool hasOnline() const { return this->online_ != nullptr;};
          void deleteOnline() { this->online_ = nullptr;};
          inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
          inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        protected:
          shared_ptr<string> deviceIcon_ {};
          shared_ptr<string> deviceName_ {};
          shared_ptr<string> deviceType_ {};
          shared_ptr<bool> online_ {};
          shared_ptr<string> uuid_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline DeviceTargets& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<DeviceTargets::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DeviceTargets::Data>) };
        inline vector<DeviceTargets::Data> getData() { DARABONBA_PTR_GET(data_, vector<DeviceTargets::Data>) };
        inline DeviceTargets& setData(const vector<DeviceTargets::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline DeviceTargets& setData(vector<DeviceTargets::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline DeviceTargets& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      protected:
        shared_ptr<int32_t> code_ {};
        shared_ptr<vector<DeviceTargets::Data>> data_ {};
        shared_ptr<string> msg_ {};
      };

      virtual bool empty() const override { return this->deviceTargets_ == nullptr
        && this->isStartCall_ == nullptr && this->passed_ == nullptr && this->startCallResult_ == nullptr; };
      // deviceTargets Field Functions 
      bool hasDeviceTargets() const { return this->deviceTargets_ != nullptr;};
      void deleteDeviceTargets() { this->deviceTargets_ = nullptr;};
      inline const Result::DeviceTargets & getDeviceTargets() const { DARABONBA_PTR_GET_CONST(deviceTargets_, Result::DeviceTargets) };
      inline Result::DeviceTargets getDeviceTargets() { DARABONBA_PTR_GET(deviceTargets_, Result::DeviceTargets) };
      inline Result& setDeviceTargets(const Result::DeviceTargets & deviceTargets) { DARABONBA_PTR_SET_VALUE(deviceTargets_, deviceTargets) };
      inline Result& setDeviceTargets(Result::DeviceTargets && deviceTargets) { DARABONBA_PTR_SET_RVALUE(deviceTargets_, deviceTargets) };


      // isStartCall Field Functions 
      bool hasIsStartCall() const { return this->isStartCall_ != nullptr;};
      void deleteIsStartCall() { this->isStartCall_ = nullptr;};
      inline bool getIsStartCall() const { DARABONBA_PTR_GET_DEFAULT(isStartCall_, false) };
      inline Result& setIsStartCall(bool isStartCall) { DARABONBA_PTR_SET_VALUE(isStartCall_, isStartCall) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline bool getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
      inline Result& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // startCallResult Field Functions 
      bool hasStartCallResult() const { return this->startCallResult_ != nullptr;};
      void deleteStartCallResult() { this->startCallResult_ = nullptr;};
      inline const Result::StartCallResult & getStartCallResult() const { DARABONBA_PTR_GET_CONST(startCallResult_, Result::StartCallResult) };
      inline Result::StartCallResult getStartCallResult() { DARABONBA_PTR_GET(startCallResult_, Result::StartCallResult) };
      inline Result& setStartCallResult(const Result::StartCallResult & startCallResult) { DARABONBA_PTR_SET_VALUE(startCallResult_, startCallResult) };
      inline Result& setStartCallResult(Result::StartCallResult && startCallResult) { DARABONBA_PTR_SET_RVALUE(startCallResult_, startCallResult) };


    protected:
      shared_ptr<Result::DeviceTargets> deviceTargets_ {};
      shared_ptr<bool> isStartCall_ {};
      shared_ptr<bool> passed_ {};
      shared_ptr<Result::StartCallResult> startCallResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CheckAndDoVoipCallForHotelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAndDoVoipCallForHotelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAndDoVoipCallForHotelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CheckAndDoVoipCallForHotelResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CheckAndDoVoipCallForHotelResponseBody::Result) };
    inline CheckAndDoVoipCallForHotelResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CheckAndDoVoipCallForHotelResponseBody::Result) };
    inline CheckAndDoVoipCallForHotelResponseBody& setResult(const CheckAndDoVoipCallForHotelResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CheckAndDoVoipCallForHotelResponseBody& setResult(CheckAndDoVoipCallForHotelResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CheckAndDoVoipCallForHotelResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
