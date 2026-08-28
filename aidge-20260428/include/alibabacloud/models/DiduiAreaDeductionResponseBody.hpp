// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIDUIAREADEDUCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class DiduiAreaDeductionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiduiAreaDeductionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DiduiAreaDeductionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DiduiAreaDeductionResponseBody() = default ;
    DiduiAreaDeductionResponseBody(const DiduiAreaDeductionResponseBody &) = default ;
    DiduiAreaDeductionResponseBody(DiduiAreaDeductionResponseBody &&) = default ;
    DiduiAreaDeductionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiduiAreaDeductionResponseBody() = default ;
    DiduiAreaDeductionResponseBody& operator=(const DiduiAreaDeductionResponseBody &) = default ;
    DiduiAreaDeductionResponseBody& operator=(DiduiAreaDeductionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Attempts, attempts_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_TO_JSON(LatencyMs, latencyMs_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModelRequestId, modelRequestId_);
        DARABONBA_PTR_TO_JSON(ReqId, reqId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HttpStatus, httpStatus_);
        DARABONBA_PTR_FROM_JSON(LatencyMs, latencyMs_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModelRequestId, modelRequestId_);
        DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Stage4AreaLabel, stage4AreaLabel_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Stage4AreaLabel, stage4AreaLabel_);
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
        class Stage4AreaLabel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Stage4AreaLabel& obj) { 
            DARABONBA_PTR_TO_JSON(AreaM2, areaM2_);
            DARABONBA_PTR_TO_JSON(LeftEdgeM, leftEdgeM_);
            DARABONBA_PTR_TO_JSON(RightEdgeM, rightEdgeM_);
          };
          friend void from_json(const Darabonba::Json& j, Stage4AreaLabel& obj) { 
            DARABONBA_PTR_FROM_JSON(AreaM2, areaM2_);
            DARABONBA_PTR_FROM_JSON(LeftEdgeM, leftEdgeM_);
            DARABONBA_PTR_FROM_JSON(RightEdgeM, rightEdgeM_);
          };
          Stage4AreaLabel() = default ;
          Stage4AreaLabel(const Stage4AreaLabel &) = default ;
          Stage4AreaLabel(Stage4AreaLabel &&) = default ;
          Stage4AreaLabel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Stage4AreaLabel() = default ;
          Stage4AreaLabel& operator=(const Stage4AreaLabel &) = default ;
          Stage4AreaLabel& operator=(Stage4AreaLabel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->areaM2_ == nullptr
        && this->leftEdgeM_ == nullptr && this->rightEdgeM_ == nullptr; };
          // areaM2 Field Functions 
          bool hasAreaM2() const { return this->areaM2_ != nullptr;};
          void deleteAreaM2() { this->areaM2_ = nullptr;};
          inline double getAreaM2() const { DARABONBA_PTR_GET_DEFAULT(areaM2_, 0.0) };
          inline Stage4AreaLabel& setAreaM2(double areaM2) { DARABONBA_PTR_SET_VALUE(areaM2_, areaM2) };


          // leftEdgeM Field Functions 
          bool hasLeftEdgeM() const { return this->leftEdgeM_ != nullptr;};
          void deleteLeftEdgeM() { this->leftEdgeM_ = nullptr;};
          inline double getLeftEdgeM() const { DARABONBA_PTR_GET_DEFAULT(leftEdgeM_, 0.0) };
          inline Stage4AreaLabel& setLeftEdgeM(double leftEdgeM) { DARABONBA_PTR_SET_VALUE(leftEdgeM_, leftEdgeM) };


          // rightEdgeM Field Functions 
          bool hasRightEdgeM() const { return this->rightEdgeM_ != nullptr;};
          void deleteRightEdgeM() { this->rightEdgeM_ = nullptr;};
          inline double getRightEdgeM() const { DARABONBA_PTR_GET_DEFAULT(rightEdgeM_, 0.0) };
          inline Stage4AreaLabel& setRightEdgeM(double rightEdgeM) { DARABONBA_PTR_SET_VALUE(rightEdgeM_, rightEdgeM) };


        protected:
          // The floor display area, in square meters.
          shared_ptr<double> areaM2_ {};
          // The left edge length, in meters.
          shared_ptr<double> leftEdgeM_ {};
          // The right edge length, in meters.
          shared_ptr<double> rightEdgeM_ {};
        };

        virtual bool empty() const override { return this->stage4AreaLabel_ == nullptr; };
        // stage4AreaLabel Field Functions 
        bool hasStage4AreaLabel() const { return this->stage4AreaLabel_ != nullptr;};
        void deleteStage4AreaLabel() { this->stage4AreaLabel_ = nullptr;};
        inline const Result::Stage4AreaLabel & getStage4AreaLabel() const { DARABONBA_PTR_GET_CONST(stage4AreaLabel_, Result::Stage4AreaLabel) };
        inline Result::Stage4AreaLabel getStage4AreaLabel() { DARABONBA_PTR_GET(stage4AreaLabel_, Result::Stage4AreaLabel) };
        inline Result& setStage4AreaLabel(const Result::Stage4AreaLabel & stage4AreaLabel) { DARABONBA_PTR_SET_VALUE(stage4AreaLabel_, stage4AreaLabel) };
        inline Result& setStage4AreaLabel(Result::Stage4AreaLabel && stage4AreaLabel) { DARABONBA_PTR_SET_RVALUE(stage4AreaLabel_, stage4AreaLabel) };


      protected:
        // The stage 4 area label.
        shared_ptr<Result::Stage4AreaLabel> stage4AreaLabel_ {};
      };

      virtual bool empty() const override { return this->attempts_ == nullptr
        && this->code_ == nullptr && this->httpStatus_ == nullptr && this->latencyMs_ == nullptr && this->message_ == nullptr && this->modelRequestId_ == nullptr
        && this->reqId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->usageMap_ == nullptr; };
      // attempts Field Functions 
      bool hasAttempts() const { return this->attempts_ != nullptr;};
      void deleteAttempts() { this->attempts_ = nullptr;};
      inline int32_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
      inline Data& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // httpStatus Field Functions 
      bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
      void deleteHttpStatus() { this->httpStatus_ = nullptr;};
      inline int32_t getHttpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, 0) };
      inline Data& setHttpStatus(int32_t httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


      // latencyMs Field Functions 
      bool hasLatencyMs() const { return this->latencyMs_ != nullptr;};
      void deleteLatencyMs() { this->latencyMs_ = nullptr;};
      inline int64_t getLatencyMs() const { DARABONBA_PTR_GET_DEFAULT(latencyMs_, 0L) };
      inline Data& setLatencyMs(int64_t latencyMs) { DARABONBA_PTR_SET_VALUE(latencyMs_, latencyMs) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modelRequestId Field Functions 
      bool hasModelRequestId() const { return this->modelRequestId_ != nullptr;};
      void deleteModelRequestId() { this->modelRequestId_ = nullptr;};
      inline string getModelRequestId() const { DARABONBA_PTR_GET_DEFAULT(modelRequestId_, "") };
      inline Data& setModelRequestId(string modelRequestId) { DARABONBA_PTR_SET_VALUE(modelRequestId_, modelRequestId) };


      // reqId Field Functions 
      bool hasReqId() const { return this->reqId_ != nullptr;};
      void deleteReqId() { this->reqId_ = nullptr;};
      inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
      inline Data& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The number of downstream call attempts.
      shared_ptr<int32_t> attempts_ {};
      // The workflow error code.
      shared_ptr<string> code_ {};
      // The downstream HTTP status code.
      shared_ptr<int32_t> httpStatus_ {};
      // The downstream call latency, in milliseconds.
      shared_ptr<int64_t> latencyMs_ {};
      // The workflow description message.
      shared_ptr<string> message_ {};
      // The model request ID.
      shared_ptr<string> modelRequestId_ {};
      // The business request ID.
      shared_ptr<string> reqId_ {};
      // The area calculation result.
      shared_ptr<Data::Result> result_ {};
      // The workflow status.
      shared_ptr<string> status_ {};
      // The workflow business status.
      shared_ptr<bool> success_ {};
      // The usage information.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DiduiAreaDeductionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DiduiAreaDeductionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DiduiAreaDeductionResponseBody::Data) };
    inline DiduiAreaDeductionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DiduiAreaDeductionResponseBody::Data) };
    inline DiduiAreaDeductionResponseBody& setData(const DiduiAreaDeductionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DiduiAreaDeductionResponseBody& setData(DiduiAreaDeductionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DiduiAreaDeductionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiduiAreaDeductionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DiduiAreaDeductionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The floor display area inference result.
    shared_ptr<DiduiAreaDeductionResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
