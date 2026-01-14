// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class DetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DetailsResponseBody() = default ;
    DetailsResponseBody(const DetailsResponseBody &) = default ;
    DetailsResponseBody(DetailsResponseBody &&) = default ;
    DetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetailsResponseBody() = default ;
    DetailsResponseBody& operator=(const DetailsResponseBody &) = default ;
    DetailsResponseBody& operator=(DetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BatchId, batchId_);
          DARABONBA_PTR_TO_JSON(CallDesc, callDesc_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(ImportTime, importTime_);
          DARABONBA_PTR_TO_JSON(InterceptReason, interceptReason_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(NumberDesc, numberDesc_);
          DARABONBA_PTR_TO_JSON(NumberMD5, numberMD5_);
          DARABONBA_PTR_TO_JSON(NumberStatus, numberStatus_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
          DARABONBA_PTR_FROM_JSON(CallDesc, callDesc_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(ImportTime, importTime_);
          DARABONBA_PTR_FROM_JSON(InterceptReason, interceptReason_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(NumberDesc, numberDesc_);
          DARABONBA_PTR_FROM_JSON(NumberMD5, numberMD5_);
          DARABONBA_PTR_FROM_JSON(NumberStatus, numberStatus_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchId_ == nullptr
        && this->callDesc_ == nullptr && this->callId_ == nullptr && this->callStatus_ == nullptr && this->callType_ == nullptr && this->importTime_ == nullptr
        && this->interceptReason_ == nullptr && this->number_ == nullptr && this->numberDesc_ == nullptr && this->numberMD5_ == nullptr && this->numberStatus_ == nullptr
        && this->tag_ == nullptr && this->taskId_ == nullptr; };
        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
        inline List& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // callDesc Field Functions 
        bool hasCallDesc() const { return this->callDesc_ != nullptr;};
        void deleteCallDesc() { this->callDesc_ = nullptr;};
        inline string getCallDesc() const { DARABONBA_PTR_GET_DEFAULT(callDesc_, "") };
        inline List& setCallDesc(string callDesc) { DARABONBA_PTR_SET_VALUE(callDesc_, callDesc) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline List& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callStatus Field Functions 
        bool hasCallStatus() const { return this->callStatus_ != nullptr;};
        void deleteCallStatus() { this->callStatus_ = nullptr;};
        inline int64_t getCallStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, 0L) };
        inline List& setCallStatus(int64_t callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int64_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0L) };
        inline List& setCallType(int64_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // importTime Field Functions 
        bool hasImportTime() const { return this->importTime_ != nullptr;};
        void deleteImportTime() { this->importTime_ = nullptr;};
        inline string getImportTime() const { DARABONBA_PTR_GET_DEFAULT(importTime_, "") };
        inline List& setImportTime(string importTime) { DARABONBA_PTR_SET_VALUE(importTime_, importTime) };


        // interceptReason Field Functions 
        bool hasInterceptReason() const { return this->interceptReason_ != nullptr;};
        void deleteInterceptReason() { this->interceptReason_ = nullptr;};
        inline string getInterceptReason() const { DARABONBA_PTR_GET_DEFAULT(interceptReason_, "") };
        inline List& setInterceptReason(string interceptReason) { DARABONBA_PTR_SET_VALUE(interceptReason_, interceptReason) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // numberDesc Field Functions 
        bool hasNumberDesc() const { return this->numberDesc_ != nullptr;};
        void deleteNumberDesc() { this->numberDesc_ = nullptr;};
        inline string getNumberDesc() const { DARABONBA_PTR_GET_DEFAULT(numberDesc_, "") };
        inline List& setNumberDesc(string numberDesc) { DARABONBA_PTR_SET_VALUE(numberDesc_, numberDesc) };


        // numberMD5 Field Functions 
        bool hasNumberMD5() const { return this->numberMD5_ != nullptr;};
        void deleteNumberMD5() { this->numberMD5_ = nullptr;};
        inline string getNumberMD5() const { DARABONBA_PTR_GET_DEFAULT(numberMD5_, "") };
        inline List& setNumberMD5(string numberMD5) { DARABONBA_PTR_SET_VALUE(numberMD5_, numberMD5) };


        // numberStatus Field Functions 
        bool hasNumberStatus() const { return this->numberStatus_ != nullptr;};
        void deleteNumberStatus() { this->numberStatus_ = nullptr;};
        inline int64_t getNumberStatus() const { DARABONBA_PTR_GET_DEFAULT(numberStatus_, 0L) };
        inline List& setNumberStatus(int64_t numberStatus) { DARABONBA_PTR_SET_VALUE(numberStatus_, numberStatus) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline List& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline List& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // 批次号
        shared_ptr<int64_t> batchId_ {};
        // 呼叫状态描述
        shared_ptr<string> callDesc_ {};
        // 外呼ID
        shared_ptr<string> callId_ {};
        // 呼叫状态
        shared_ptr<int64_t> callStatus_ {};
        // 外呼类型
        shared_ptr<int64_t> callType_ {};
        // 导入时间
        shared_ptr<string> importTime_ {};
        // 拦截原因
        shared_ptr<string> interceptReason_ {};
        // 外呼号码
        shared_ptr<string> number_ {};
        // 号码状态描述
        shared_ptr<string> numberDesc_ {};
        // 外呼号码MD5
        shared_ptr<string> numberMD5_ {};
        // 号码状态
        shared_ptr<int64_t> numberStatus_ {};
        // 用户自定义标签
        shared_ptr<string> tag_ {};
        // 任务ID
        shared_ptr<int64_t> taskId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Model::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Model::List>) };
      inline vector<Model::List> getList() { DARABONBA_PTR_GET(list_, vector<Model::List>) };
      inline Model& setList(const vector<Model::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Model& setList(vector<Model::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Model& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline float getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0.0) };
      inline Model& setTotalPage(float totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<vector<Model::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<float> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DetailsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const DetailsResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, DetailsResponseBody::Model) };
    inline DetailsResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, DetailsResponseBody::Model) };
    inline DetailsResponseBody& setModel(const DetailsResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline DetailsResponseBody& setModel(DetailsResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DetailsResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<DetailsResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
