// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODY_HPP_
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
  class GetExchangeErrorByTaskIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeErrorByTaskIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetExchangeErrorByTaskIdResponseBody() = default ;
    GetExchangeErrorByTaskIdResponseBody(const GetExchangeErrorByTaskIdResponseBody &) = default ;
    GetExchangeErrorByTaskIdResponseBody(GetExchangeErrorByTaskIdResponseBody &&) = default ;
    GetExchangeErrorByTaskIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeErrorByTaskIdResponseBody() = default ;
    GetExchangeErrorByTaskIdResponseBody& operator=(const GetExchangeErrorByTaskIdResponseBody &) = default ;
    GetExchangeErrorByTaskIdResponseBody& operator=(GetExchangeErrorByTaskIdResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ExchangeErrorDO, exchangeErrorDO_);
        };
        friend void from_json(const Darabonba::Json& j, VoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ExchangeErrorDO, exchangeErrorDO_);
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
        class ExchangeErrorDO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExchangeErrorDO& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(ExchangeName, exchangeName_);
            DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
          };
          friend void from_json(const Darabonba::Json& j, ExchangeErrorDO& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(ExchangeName, exchangeName_);
            DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
          };
          ExchangeErrorDO() = default ;
          ExchangeErrorDO(const ExchangeErrorDO &) = default ;
          ExchangeErrorDO(ExchangeErrorDO &&) = default ;
          ExchangeErrorDO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExchangeErrorDO() = default ;
          ExchangeErrorDO& operator=(const ExchangeErrorDO &) = default ;
          ExchangeErrorDO& operator=(ExchangeErrorDO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->exchangeName_ == nullptr && this->exchangeType_ == nullptr && this->taskId_ == nullptr && this->vhostName_ == nullptr; };
          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline int32_t getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, 0) };
          inline ExchangeErrorDO& setErrorMessage(int32_t errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // exchangeName Field Functions 
          bool hasExchangeName() const { return this->exchangeName_ != nullptr;};
          void deleteExchangeName() { this->exchangeName_ = nullptr;};
          inline string getExchangeName() const { DARABONBA_PTR_GET_DEFAULT(exchangeName_, "") };
          inline ExchangeErrorDO& setExchangeName(string exchangeName) { DARABONBA_PTR_SET_VALUE(exchangeName_, exchangeName) };


          // exchangeType Field Functions 
          bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
          void deleteExchangeType() { this->exchangeType_ = nullptr;};
          inline string getExchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
          inline ExchangeErrorDO& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline ExchangeErrorDO& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // vhostName Field Functions 
          bool hasVhostName() const { return this->vhostName_ != nullptr;};
          void deleteVhostName() { this->vhostName_ = nullptr;};
          inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
          inline ExchangeErrorDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


        protected:
          shared_ptr<int32_t> errorMessage_ {};
          shared_ptr<string> exchangeName_ {};
          shared_ptr<string> exchangeType_ {};
          shared_ptr<int64_t> taskId_ {};
          shared_ptr<string> vhostName_ {};
        };

        virtual bool empty() const override { return this->exchangeErrorDO_ == nullptr; };
        // exchangeErrorDO Field Functions 
        bool hasExchangeErrorDO() const { return this->exchangeErrorDO_ != nullptr;};
        void deleteExchangeErrorDO() { this->exchangeErrorDO_ = nullptr;};
        inline const vector<VoList::ExchangeErrorDO> & getExchangeErrorDO() const { DARABONBA_PTR_GET_CONST(exchangeErrorDO_, vector<VoList::ExchangeErrorDO>) };
        inline vector<VoList::ExchangeErrorDO> getExchangeErrorDO() { DARABONBA_PTR_GET(exchangeErrorDO_, vector<VoList::ExchangeErrorDO>) };
        inline VoList& setExchangeErrorDO(const vector<VoList::ExchangeErrorDO> & exchangeErrorDO) { DARABONBA_PTR_SET_VALUE(exchangeErrorDO_, exchangeErrorDO) };
        inline VoList& setExchangeErrorDO(vector<VoList::ExchangeErrorDO> && exchangeErrorDO) { DARABONBA_PTR_SET_RVALUE(exchangeErrorDO_, exchangeErrorDO) };


      protected:
        shared_ptr<vector<VoList::ExchangeErrorDO>> exchangeErrorDO_ {};
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
    inline GetExchangeErrorByTaskIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetExchangeErrorByTaskIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetExchangeErrorByTaskIdResponseBody::Data) };
    inline GetExchangeErrorByTaskIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetExchangeErrorByTaskIdResponseBody::Data) };
    inline GetExchangeErrorByTaskIdResponseBody& setData(const GetExchangeErrorByTaskIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetExchangeErrorByTaskIdResponseBody& setData(GetExchangeErrorByTaskIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetExchangeErrorByTaskIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExchangeErrorByTaskIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetExchangeErrorByTaskIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetExchangeErrorByTaskIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
