// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALLNUMBERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CALLNUMBERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class CallNumberDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CallNumberDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, CallNumberDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    CallNumberDetailResponseBody() = default ;
    CallNumberDetailResponseBody(const CallNumberDetailResponseBody &) = default ;
    CallNumberDetailResponseBody(CallNumberDetailResponseBody &&) = default ;
    CallNumberDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CallNumberDetailResponseBody() = default ;
    CallNumberDetailResponseBody& operator=(const CallNumberDetailResponseBody &) = default ;
    CallNumberDetailResponseBody& operator=(CallNumberDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(Bill, bill_);
        DARABONBA_PTR_TO_JSON(CallId, callId_);
        DARABONBA_PTR_TO_JSON(CallType, callType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IntentTag, intentTag_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(NumberMd5, numberMd5_);
        DARABONBA_PTR_TO_JSON(PersonalityTag, personalityTag_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TransferStatus, transferStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(Bill, bill_);
        DARABONBA_PTR_FROM_JSON(CallId, callId_);
        DARABONBA_PTR_FROM_JSON(CallType, callType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IntentTag, intentTag_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(NumberMd5, numberMd5_);
        DARABONBA_PTR_FROM_JSON(PersonalityTag, personalityTag_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TransferStatus, transferStatus_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->bill_ == nullptr && this->callId_ == nullptr && this->callType_ == nullptr && this->id_ == nullptr && this->intentTag_ == nullptr
        && this->keywords_ == nullptr && this->number_ == nullptr && this->numberMd5_ == nullptr && this->personalityTag_ == nullptr && this->statusCode_ == nullptr
        && this->tag_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->transferStatus_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Model& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // bill Field Functions 
      bool hasBill() const { return this->bill_ != nullptr;};
      void deleteBill() { this->bill_ = nullptr;};
      inline int64_t getBill() const { DARABONBA_PTR_GET_DEFAULT(bill_, 0L) };
      inline Model& setBill(int64_t bill) { DARABONBA_PTR_SET_VALUE(bill_, bill) };


      // callId Field Functions 
      bool hasCallId() const { return this->callId_ != nullptr;};
      void deleteCallId() { this->callId_ = nullptr;};
      inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
      inline Model& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


      // callType Field Functions 
      bool hasCallType() const { return this->callType_ != nullptr;};
      void deleteCallType() { this->callType_ = nullptr;};
      inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
      inline Model& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Model& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intentTag Field Functions 
      bool hasIntentTag() const { return this->intentTag_ != nullptr;};
      void deleteIntentTag() { this->intentTag_ = nullptr;};
      inline string getIntentTag() const { DARABONBA_PTR_GET_DEFAULT(intentTag_, "") };
      inline Model& setIntentTag(string intentTag) { DARABONBA_PTR_SET_VALUE(intentTag_, intentTag) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
      inline Model& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Model& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // numberMd5 Field Functions 
      bool hasNumberMd5() const { return this->numberMd5_ != nullptr;};
      void deleteNumberMd5() { this->numberMd5_ = nullptr;};
      inline string getNumberMd5() const { DARABONBA_PTR_GET_DEFAULT(numberMd5_, "") };
      inline Model& setNumberMd5(string numberMd5) { DARABONBA_PTR_SET_VALUE(numberMd5_, numberMd5) };


      // personalityTag Field Functions 
      bool hasPersonalityTag() const { return this->personalityTag_ != nullptr;};
      void deletePersonalityTag() { this->personalityTag_ = nullptr;};
      inline string getPersonalityTag() const { DARABONBA_PTR_GET_DEFAULT(personalityTag_, "") };
      inline Model& setPersonalityTag(string personalityTag) { DARABONBA_PTR_SET_VALUE(personalityTag_, personalityTag) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
      inline Model& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Model& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Model& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Model& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // transferStatus Field Functions 
      bool hasTransferStatus() const { return this->transferStatus_ != nullptr;};
      void deleteTransferStatus() { this->transferStatus_ = nullptr;};
      inline int64_t getTransferStatus() const { DARABONBA_PTR_GET_DEFAULT(transferStatus_, 0L) };
      inline Model& setTransferStatus(int64_t transferStatus) { DARABONBA_PTR_SET_VALUE(transferStatus_, transferStatus) };


    protected:
      // 导入号码时返回的批次号
      shared_ptr<string> batchId_ {};
      // 通话时长，单位为毫秒，实际计费需向上取整转换为秒
      shared_ptr<int64_t> bill_ {};
      // 每次呼叫的唯一标识
      shared_ptr<string> callId_ {};
      // 可选项 1-AI外呼，6-语音通知
      shared_ptr<int64_t> callType_ {};
      // 号码编号
      shared_ptr<int64_t> id_ {};
      // 意向标签
      shared_ptr<string> intentTag_ {};
      // 回复关键词
      shared_ptr<string> keywords_ {};
      // 外呼号码
      shared_ptr<string> number_ {};
      // 外呼号码MD5
      shared_ptr<string> numberMd5_ {};
      // 个性标签
      shared_ptr<string> personalityTag_ {};
      // 外呼状态编码
      shared_ptr<int64_t> statusCode_ {};
      // 用户自定义标签
      shared_ptr<string> tag_ {};
      // 任务ID
      shared_ptr<int64_t> taskId_ {};
      // 外呼使用的模板ID
      shared_ptr<int64_t> templateId_ {};
      // 转人工状态 0-未触发,
      shared_ptr<int64_t> transferStatus_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->timestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CallNumberDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline CallNumberDetailResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CallNumberDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const CallNumberDetailResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, CallNumberDetailResponseBody::Model) };
    inline CallNumberDetailResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, CallNumberDetailResponseBody::Model) };
    inline CallNumberDetailResponseBody& setModel(const CallNumberDetailResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline CallNumberDetailResponseBody& setModel(CallNumberDetailResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CallNumberDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CallNumberDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline CallNumberDetailResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CallNumberDetailResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
