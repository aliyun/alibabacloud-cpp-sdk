// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueErrorByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueueErrorByTaskIdResponseBody() = default ;
    GetQueueErrorByTaskIdResponseBody(const GetQueueErrorByTaskIdResponseBody &) = default ;
    GetQueueErrorByTaskIdResponseBody(GetQueueErrorByTaskIdResponseBody &&) = default ;
    GetQueueErrorByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueErrorByTaskIdResponseBody() = default ;
    GetQueueErrorByTaskIdResponseBody& operator=(const GetQueueErrorByTaskIdResponseBody &) = default ;
    GetQueueErrorByTaskIdResponseBody& operator=(GetQueueErrorByTaskIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(VoList, voList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(VoList, voList_);
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
      class VoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VoList& obj) { 
          DARABONBA_PTR_TO_JSON(QueueErrorDO, queueErrorDO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(QueueErrorDO, queueErrorDO_);
        };
        VoList() = default ;
        VoList(const VoList &) = default ;
        VoList(VoList &&) = default ;
        VoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VoList() = default ;
        VoList& operator=(const VoList &) = default ;
        VoList& operator=(VoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueueErrorDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueErrorDO& obj) { 
            DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_TO_JSON(Durable, durable_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(QueueName, queueName_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, QueueErrorDO& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
            DARABONBA_PTR_FROM_JSON(Durable, durable_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          QueueErrorDO() = default ;
          QueueErrorDO(const QueueErrorDO &) = default ;
          QueueErrorDO(QueueErrorDO &&) = default ;
          QueueErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueErrorDO() = default ;
          QueueErrorDO& operator=(const QueueErrorDO &) = default ;
          QueueErrorDO& operator=(QueueErrorDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoDelete_ == nullptr
        && this->durable_ == nullptr && this->errorMessage_ == nullptr && this->queueName_ == nullptr && this->taskId_ == nullptr && this->vhostName_ == nullptr; };
          // autoDelete Field Functions 
          bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
          void deleteAutoDelete() { this->autoDelete_ = nullptr;};
          inline bool getAutoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
          inline QueueErrorDO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


          // durable Field Functions 
          bool hasDurable() const { return this->durable_ != nullptr;};
          void deleteDurable() { this->durable_ = nullptr;};
          inline bool getDurable() const { DARABONBA_PTR_GET_DEFAULT(durable_, false) };
          inline QueueErrorDO& setDurable(bool durable) { DARABONBA_PTR_SET_VALUE(durable_, durable) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline int32_t getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
          inline QueueErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // queueName Field Functions 
          bool hasQueueName() const { return this->queueName_ != nullptr;};
          void deleteQueueName() { this->queueName_ = nullptr;};
          inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
          inline QueueErrorDO& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline QueueErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline QueueErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<bool> autoDelete_ {};
          shared_ptr<bool> durable_ {};
          shared_ptr<int32_t> errorMessage_ {};
          shared_ptr<string> queueName_ {};
          shared_ptr<int64_t> taskId_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->queueErrorDO_ == nullptr; };
        // queueErrorDO Field Functions 
        bool hasQueueErrorDO() const { return this->queueErrorDO_ != nullptr;};
        void deleteQueueErrorDO() { this->queueErrorDO_ = nullptr;};
        inline const vector<VoList::QueueErrorDO> & getQueueErrorDO() const { DARABONBA_PTR_GET_CONST(queueErrorDO_, vector<VoList::QueueErrorDO>) };
        inline vector<VoList::QueueErrorDO> getQueueErrorDO() { DARABONBA_PTR_GET(queueErrorDO_, vector<VoList::QueueErrorDO>) };
        inline VoList& setQueueErrorDO(const vector<VoList::QueueErrorDO> & queueErrorDO) { DARABONBA_PTR_SET_VALUE(queueErrorDO_, queueErrorDO) };
        inline VoList& setQueueErrorDO(vector<VoList::QueueErrorDO> && queueErrorDO) { DARABONBA_PTR_SET_RVALUE(queueErrorDO_, queueErrorDO) };


      protected:
        shared_ptr<vector<VoList::QueueErrorDO>> queueErrorDO_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->voList_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // voList Field Functions 
      bool hasVoList() const { return this->voList_ != nullptr;};
      void deleteVoList() { this->voList_ = nullptr;};
      inline const Data::VoList & getVoList() const { DARABONBA_PTR_GET_CONST(voList_, Data::VoList) };
      inline Data::VoList getVoList() { DARABONBA_PTR_GET(voList_, Data::VoList) };
      inline Data& setVoList(const Data::VoList & voList) { DARABONBA_PTR_SET_VALUE(voList_, voList) };
      inline Data& setVoList(Data::VoList && voList) { DARABONBA_PTR_SET_RVALUE(voList_, voList) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<Data::VoList> voList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetQueueErrorByTaskIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQueueErrorByTaskIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQueueErrorByTaskIdResponseBody::Data) };
    inline GetQueueErrorByTaskIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQueueErrorByTaskIdResponseBody::Data) };
    inline GetQueueErrorByTaskIdResponseBody& setData(const GetQueueErrorByTaskIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueueErrorByTaskIdResponseBody& setData(GetQueueErrorByTaskIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueueErrorByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueueErrorByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQueueErrorByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetQueueErrorByTaskIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
