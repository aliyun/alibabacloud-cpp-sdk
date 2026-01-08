// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeImageModerationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageModerationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageModerationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageModerationResultResponseBody() = default ;
    DescribeImageModerationResultResponseBody(const DescribeImageModerationResultResponseBody &) = default ;
    DescribeImageModerationResultResponseBody(DescribeImageModerationResultResponseBody &&) = default ;
    DescribeImageModerationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageModerationResultResponseBody() = default ;
    DescribeImageModerationResultResponseBody& operator=(const DescribeImageModerationResultResponseBody &) = default ;
    DescribeImageModerationResultResponseBody& operator=(DescribeImageModerationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Frame, frame_);
        DARABONBA_PTR_TO_JSON(FrameNum, frameNum_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(ReqId, reqId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Frame, frame_);
        DARABONBA_PTR_FROM_JSON(FrameNum, frameNum_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
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
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
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
        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr && this->riskLevel_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Result& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
        shared_ptr<float> confidence_ {};
        // The description of the result.
        shared_ptr<string> description_ {};
        // The labels returned after the image moderation.
        shared_ptr<string> label_ {};
        // Risk Level
        shared_ptr<string> riskLevel_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dataId_ == nullptr && this->frame_ == nullptr && this->frameNum_ == nullptr && this->manualTaskId_ == nullptr && this->reqId_ == nullptr
        && this->result_ == nullptr && this->riskLevel_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // frame Field Functions 
      bool hasFrame() const { return this->frame_ != nullptr;};
      void deleteFrame() { this->frame_ = nullptr;};
      inline string getFrame() const { DARABONBA_PTR_GET_DEFAULT(frame_, "") };
      inline Data& setFrame(string frame) { DARABONBA_PTR_SET_VALUE(frame_, frame) };


      // frameNum Field Functions 
      bool hasFrameNum() const { return this->frameNum_ != nullptr;};
      void deleteFrameNum() { this->frameNum_ = nullptr;};
      inline int32_t getFrameNum() const { DARABONBA_PTR_GET_DEFAULT(frameNum_, 0) };
      inline Data& setFrameNum(int32_t frameNum) { DARABONBA_PTR_SET_VALUE(frameNum_, frameNum) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // reqId Field Functions 
      bool hasReqId() const { return this->reqId_ != nullptr;};
      void deleteReqId() { this->reqId_ = nullptr;};
      inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
      inline Data& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      shared_ptr<string> accountId_ {};
      // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, this field is not available in the response.
      shared_ptr<string> dataId_ {};
      // The information about the captured frames.
      shared_ptr<string> frame_ {};
      // The number of frames.
      shared_ptr<int32_t> frameNum_ {};
      shared_ptr<string> manualTaskId_ {};
      // The reqId field returned by the Image Async Moderation API.
      shared_ptr<string> reqId_ {};
      // The results of image moderation parameters such as the label parameter and the confidence parameter.
      shared_ptr<vector<Data::Result>> result_ {};
      // Risk Level.
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeImageModerationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageModerationResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageModerationResultResponseBody::Data) };
    inline DescribeImageModerationResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageModerationResultResponseBody::Data) };
    inline DescribeImageModerationResultResponseBody& setData(const DescribeImageModerationResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageModerationResultResponseBody& setData(DescribeImageModerationResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeImageModerationResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageModerationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The image moderation results.
    shared_ptr<DescribeImageModerationResultResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
