// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEINTENTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecognizeIntentionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeIntentionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeIntentionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RecognizeIntentionResponseBody() = default ;
    RecognizeIntentionResponseBody(const RecognizeIntentionResponseBody &) = default ;
    RecognizeIntentionResponseBody(RecognizeIntentionResponseBody &&) = default ;
    RecognizeIntentionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeIntentionResponseBody() = default ;
    RecognizeIntentionResponseBody& operator=(const RecognizeIntentionResponseBody &) = default ;
    RecognizeIntentionResponseBody& operator=(RecognizeIntentionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_TO_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_TO_JSON(intentionName, intentionName_);
        DARABONBA_PTR_TO_JSON(intentionScript, intentionScript_);
        DARABONBA_PTR_TO_JSON(recommendIntention, recommendIntention_);
        DARABONBA_PTR_TO_JSON(recommendScript, recommendScript_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(analysisProcess, analysisProcess_);
        DARABONBA_PTR_FROM_JSON(intentionCode, intentionCode_);
        DARABONBA_PTR_FROM_JSON(intentionName, intentionName_);
        DARABONBA_PTR_FROM_JSON(intentionScript, intentionScript_);
        DARABONBA_PTR_FROM_JSON(recommendIntention, recommendIntention_);
        DARABONBA_PTR_FROM_JSON(recommendScript, recommendScript_);
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
      virtual bool empty() const override { return this->analysisProcess_ == nullptr
        && this->intentionCode_ == nullptr && this->intentionName_ == nullptr && this->intentionScript_ == nullptr && this->recommendIntention_ == nullptr && this->recommendScript_ == nullptr; };
      // analysisProcess Field Functions 
      bool hasAnalysisProcess() const { return this->analysisProcess_ != nullptr;};
      void deleteAnalysisProcess() { this->analysisProcess_ = nullptr;};
      inline string getAnalysisProcess() const { DARABONBA_PTR_GET_DEFAULT(analysisProcess_, "") };
      inline Data& setAnalysisProcess(string analysisProcess) { DARABONBA_PTR_SET_VALUE(analysisProcess_, analysisProcess) };


      // intentionCode Field Functions 
      bool hasIntentionCode() const { return this->intentionCode_ != nullptr;};
      void deleteIntentionCode() { this->intentionCode_ = nullptr;};
      inline string getIntentionCode() const { DARABONBA_PTR_GET_DEFAULT(intentionCode_, "") };
      inline Data& setIntentionCode(string intentionCode) { DARABONBA_PTR_SET_VALUE(intentionCode_, intentionCode) };


      // intentionName Field Functions 
      bool hasIntentionName() const { return this->intentionName_ != nullptr;};
      void deleteIntentionName() { this->intentionName_ = nullptr;};
      inline string getIntentionName() const { DARABONBA_PTR_GET_DEFAULT(intentionName_, "") };
      inline Data& setIntentionName(string intentionName) { DARABONBA_PTR_SET_VALUE(intentionName_, intentionName) };


      // intentionScript Field Functions 
      bool hasIntentionScript() const { return this->intentionScript_ != nullptr;};
      void deleteIntentionScript() { this->intentionScript_ = nullptr;};
      inline string getIntentionScript() const { DARABONBA_PTR_GET_DEFAULT(intentionScript_, "") };
      inline Data& setIntentionScript(string intentionScript) { DARABONBA_PTR_SET_VALUE(intentionScript_, intentionScript) };


      // recommendIntention Field Functions 
      bool hasRecommendIntention() const { return this->recommendIntention_ != nullptr;};
      void deleteRecommendIntention() { this->recommendIntention_ = nullptr;};
      inline string getRecommendIntention() const { DARABONBA_PTR_GET_DEFAULT(recommendIntention_, "") };
      inline Data& setRecommendIntention(string recommendIntention) { DARABONBA_PTR_SET_VALUE(recommendIntention_, recommendIntention) };


      // recommendScript Field Functions 
      bool hasRecommendScript() const { return this->recommendScript_ != nullptr;};
      void deleteRecommendScript() { this->recommendScript_ = nullptr;};
      inline string getRecommendScript() const { DARABONBA_PTR_GET_DEFAULT(recommendScript_, "") };
      inline Data& setRecommendScript(string recommendScript) { DARABONBA_PTR_SET_VALUE(recommendScript_, recommendScript) };


    protected:
      shared_ptr<string> analysisProcess_ {};
      shared_ptr<string> intentionCode_ {};
      shared_ptr<string> intentionName_ {};
      shared_ptr<string> intentionScript_ {};
      shared_ptr<string> recommendIntention_ {};
      shared_ptr<string> recommendScript_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline RecognizeIntentionResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeIntentionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RecognizeIntentionResponseBody::Data) };
    inline RecognizeIntentionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RecognizeIntentionResponseBody::Data) };
    inline RecognizeIntentionResponseBody& setData(const RecognizeIntentionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeIntentionResponseBody& setData(RecognizeIntentionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline RecognizeIntentionResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline RecognizeIntentionResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RecognizeIntentionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeIntentionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RecognizeIntentionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RecognizeIntentionResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<RecognizeIntentionResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
