// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MATERIALINSPECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MATERIALINSPECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class MaterialInspectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MaterialInspectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MaterialInspectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MaterialInspectionResponseBody() = default ;
    MaterialInspectionResponseBody(const MaterialInspectionResponseBody &) = default ;
    MaterialInspectionResponseBody(MaterialInspectionResponseBody &&) = default ;
    MaterialInspectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MaterialInspectionResponseBody() = default ;
    MaterialInspectionResponseBody& operator=(const MaterialInspectionResponseBody &) = default ;
    MaterialInspectionResponseBody& operator=(MaterialInspectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
          DARABONBA_PTR_TO_JSON(Evidence, evidence_);
          DARABONBA_PTR_TO_JSON(OverallResult, overallResult_);
          DARABONBA_PTR_TO_JSON(ReqId, reqId_);
          DARABONBA_PTR_TO_JSON(Steps, steps_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Evidence, evidence_);
          DARABONBA_PTR_FROM_JSON(OverallResult, overallResult_);
          DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
          DARABONBA_PTR_FROM_JSON(Steps, steps_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class Steps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Steps& obj) { 
            DARABONBA_PTR_TO_JSON(Result, result_);
            DARABONBA_PTR_TO_JSON(StepId, stepId_);
          };
          friend void from_json(const Darabonba::Json& j, Steps& obj) { 
            DARABONBA_PTR_FROM_JSON(Result, result_);
            DARABONBA_PTR_FROM_JSON(StepId, stepId_);
          };
          Steps() = default ;
          Steps(const Steps &) = default ;
          Steps(Steps &&) = default ;
          Steps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Steps() = default ;
          Steps& operator=(const Steps &) = default ;
          Steps& operator=(Steps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->result_ == nullptr
        && this->stepId_ == nullptr; };
          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline Steps& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


          // stepId Field Functions 
          bool hasStepId() const { return this->stepId_ != nullptr;};
          void deleteStepId() { this->stepId_ = nullptr;};
          inline string getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, "") };
          inline Steps& setStepId(string stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


        protected:
          // The step result. Valid values: PASS, FAIL, and UNABLE_TO_JUDGE.
          shared_ptr<string> result_ {};
          // The step ID.
          shared_ptr<string> stepId_ {};
        };

        virtual bool empty() const override { return this->evidence_ == nullptr
        && this->overallResult_ == nullptr && this->reqId_ == nullptr && this->steps_ == nullptr && this->type_ == nullptr; };
        // evidence Field Functions 
        bool hasEvidence() const { return this->evidence_ != nullptr;};
        void deleteEvidence() { this->evidence_ = nullptr;};
        inline string getEvidence() const { DARABONBA_PTR_GET_DEFAULT(evidence_, "") };
        inline Result& setEvidence(string evidence) { DARABONBA_PTR_SET_VALUE(evidence_, evidence) };


        // overallResult Field Functions 
        bool hasOverallResult() const { return this->overallResult_ != nullptr;};
        void deleteOverallResult() { this->overallResult_ = nullptr;};
        inline string getOverallResult() const { DARABONBA_PTR_GET_DEFAULT(overallResult_, "") };
        inline Result& setOverallResult(string overallResult) { DARABONBA_PTR_SET_VALUE(overallResult_, overallResult) };


        // reqId Field Functions 
        bool hasReqId() const { return this->reqId_ != nullptr;};
        void deleteReqId() { this->reqId_ = nullptr;};
        inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
        inline Result& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


        // steps Field Functions 
        bool hasSteps() const { return this->steps_ != nullptr;};
        void deleteSteps() { this->steps_ = nullptr;};
        inline const vector<Result::Steps> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Result::Steps>) };
        inline vector<Result::Steps> getSteps() { DARABONBA_PTR_GET(steps_, vector<Result::Steps>) };
        inline Result& setSteps(const vector<Result::Steps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
        inline Result& setSteps(vector<Result::Steps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The natural language summary, such as "1 rule: 1 PASS, all inspection items are compliant."
        shared_ptr<string> evidence_ {};
        // The overall result. Valid values: PASS and FAIL.
        shared_ptr<string> overallResult_ {};
        // The request ID returned as-is from the input.
        shared_ptr<string> reqId_ {};
        // The list of detection steps.
        shared_ptr<vector<Result::Steps>> steps_ {};
        // The detection type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->usageMap_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The inspection result.
      shared_ptr<Data::Result> result_ {};
      // The usage information. The key is the usage metric name and the value is the count.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MaterialInspectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MaterialInspectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MaterialInspectionResponseBody::Data) };
    inline MaterialInspectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MaterialInspectionResponseBody::Data) };
    inline MaterialInspectionResponseBody& setData(const MaterialInspectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MaterialInspectionResponseBody& setData(MaterialInspectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MaterialInspectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MaterialInspectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MaterialInspectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is not returned for successful calls.
    shared_ptr<string> code_ {};
    // The material display detection result.
    shared_ptr<MaterialInspectionResponseBody::Data> data_ {};
    // The error message. This parameter is not returned for successful calls.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values: true: The call was successful. false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
