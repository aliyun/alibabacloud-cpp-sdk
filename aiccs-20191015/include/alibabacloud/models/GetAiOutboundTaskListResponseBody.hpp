// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAiOutboundTaskListResponseBody() = default ;
    GetAiOutboundTaskListResponseBody(const GetAiOutboundTaskListResponseBody &) = default ;
    GetAiOutboundTaskListResponseBody(GetAiOutboundTaskListResponseBody &&) = default ;
    GetAiOutboundTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskListResponseBody() = default ;
    GetAiOutboundTaskListResponseBody& operator=(const GetAiOutboundTaskListResponseBody &) = default ;
    GetAiOutboundTaskListResponseBody& operator=(GetAiOutboundTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(HasNextPage, hasNextPage_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
          DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
          DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
          DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
          DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->finishCount_ == nullptr && this->finishRate_ == nullptr && this->handlerId_ == nullptr
        && this->handlerName_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->taskId_ == nullptr
        && this->totalCount_ == nullptr; };
        // concurrentRate Field Functions 
        bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
        void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
        inline int32_t getConcurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
        inline List& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // finishCount Field Functions 
        bool hasFinishCount() const { return this->finishCount_ != nullptr;};
        void deleteFinishCount() { this->finishCount_ = nullptr;};
        inline int32_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
        inline List& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


        // finishRate Field Functions 
        bool hasFinishRate() const { return this->finishRate_ != nullptr;};
        void deleteFinishRate() { this->finishRate_ = nullptr;};
        inline float getFinishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
        inline List& setFinishRate(float finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


        // handlerId Field Functions 
        bool hasHandlerId() const { return this->handlerId_ != nullptr;};
        void deleteHandlerId() { this->handlerId_ = nullptr;};
        inline int64_t getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
        inline List& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


        // handlerName Field Functions 
        bool hasHandlerName() const { return this->handlerName_ != nullptr;};
        void deleteHandlerName() { this->handlerName_ = nullptr;};
        inline string getHandlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
        inline List& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline List& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline List& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline List& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<int32_t> concurrentRate_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> finishCount_ {};
        shared_ptr<float> finishRate_ {};
        shared_ptr<int64_t> handlerId_ {};
        shared_ptr<string> handlerName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<int64_t> taskId_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hasNextPage_ == nullptr && this->list_ == nullptr && this->pageSize_ == nullptr && this->totalResults_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // hasNextPage Field Functions 
      bool hasHasNextPage() const { return this->hasNextPage_ != nullptr;};
      void deleteHasNextPage() { this->hasNextPage_ = nullptr;};
      inline bool getHasNextPage() const { DARABONBA_PTR_GET_DEFAULT(hasNextPage_, false) };
      inline Data& setHasNextPage(bool hasNextPage) { DARABONBA_PTR_SET_VALUE(hasNextPage_, hasNextPage) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalResults Field Functions 
      bool hasTotalResults() const { return this->totalResults_ != nullptr;};
      void deleteTotalResults() { this->totalResults_ = nullptr;};
      inline int32_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
      inline Data& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<bool> hasNextPage_ {};
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiOutboundTaskListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiOutboundTaskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiOutboundTaskListResponseBody::Data) };
    inline GetAiOutboundTaskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiOutboundTaskListResponseBody::Data) };
    inline GetAiOutboundTaskListResponseBody& setData(const GetAiOutboundTaskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiOutboundTaskListResponseBody& setData(GetAiOutboundTaskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiOutboundTaskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiOutboundTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiOutboundTaskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAiOutboundTaskListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
