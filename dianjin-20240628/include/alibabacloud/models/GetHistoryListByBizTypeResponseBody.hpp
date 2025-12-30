// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORYLISTBYBIZTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetHistoryListByBizTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoryListByBizTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoryListByBizTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetHistoryListByBizTypeResponseBody() = default ;
    GetHistoryListByBizTypeResponseBody(const GetHistoryListByBizTypeResponseBody &) = default ;
    GetHistoryListByBizTypeResponseBody(GetHistoryListByBizTypeResponseBody &&) = default ;
    GetHistoryListByBizTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoryListByBizTypeResponseBody() = default ;
    GetHistoryListByBizTypeResponseBody& operator=(const GetHistoryListByBizTypeResponseBody &) = default ;
    GetHistoryListByBizTypeResponseBody& operator=(GetHistoryListByBizTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(records, records_);
        DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
        DARABONBA_PTR_TO_JSON(totalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(records, records_);
        DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
        DARABONBA_PTR_FROM_JSON(totalRecords, totalRecords_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(bizId, bizId_);
          DARABONBA_PTR_TO_JSON(bizType, bizType_);
          DARABONBA_ANY_TO_JSON(extraMessage, extraMessage_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(llmAnswer, llmAnswer_);
          DARABONBA_PTR_TO_JSON(llmPrompt, llmPrompt_);
          DARABONBA_PTR_TO_JSON(llmType, llmType_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(userQuery, userQuery_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(bizId, bizId_);
          DARABONBA_PTR_FROM_JSON(bizType, bizType_);
          DARABONBA_ANY_FROM_JSON(extraMessage, extraMessage_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(llmAnswer, llmAnswer_);
          DARABONBA_PTR_FROM_JSON(llmPrompt, llmPrompt_);
          DARABONBA_PTR_FROM_JSON(llmType, llmType_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(userQuery, userQuery_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->extraMessage_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->llmAnswer_ == nullptr && this->llmPrompt_ == nullptr && this->llmType_ == nullptr && this->sessionId_ == nullptr && this->userQuery_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline Records& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline Records& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // extraMessage Field Functions 
        bool hasExtraMessage() const { return this->extraMessage_ != nullptr;};
        void deleteExtraMessage() { this->extraMessage_ = nullptr;};
        inline         const Darabonba::Json & getExtraMessage() const { DARABONBA_GET(extraMessage_) };
        Darabonba::Json & getExtraMessage() { DARABONBA_GET(extraMessage_) };
        inline Records& setExtraMessage(const Darabonba::Json & extraMessage) { DARABONBA_SET_VALUE(extraMessage_, extraMessage) };
        inline Records& setExtraMessage(Darabonba::Json && extraMessage) { DARABONBA_SET_RVALUE(extraMessage_, extraMessage) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Records& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Records& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Records& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // llmAnswer Field Functions 
        bool hasLlmAnswer() const { return this->llmAnswer_ != nullptr;};
        void deleteLlmAnswer() { this->llmAnswer_ = nullptr;};
        inline string getLlmAnswer() const { DARABONBA_PTR_GET_DEFAULT(llmAnswer_, "") };
        inline Records& setLlmAnswer(string llmAnswer) { DARABONBA_PTR_SET_VALUE(llmAnswer_, llmAnswer) };


        // llmPrompt Field Functions 
        bool hasLlmPrompt() const { return this->llmPrompt_ != nullptr;};
        void deleteLlmPrompt() { this->llmPrompt_ = nullptr;};
        inline string getLlmPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmPrompt_, "") };
        inline Records& setLlmPrompt(string llmPrompt) { DARABONBA_PTR_SET_VALUE(llmPrompt_, llmPrompt) };


        // llmType Field Functions 
        bool hasLlmType() const { return this->llmType_ != nullptr;};
        void deleteLlmType() { this->llmType_ = nullptr;};
        inline string getLlmType() const { DARABONBA_PTR_GET_DEFAULT(llmType_, "") };
        inline Records& setLlmType(string llmType) { DARABONBA_PTR_SET_VALUE(llmType_, llmType) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Records& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // userQuery Field Functions 
        bool hasUserQuery() const { return this->userQuery_ != nullptr;};
        void deleteUserQuery() { this->userQuery_ = nullptr;};
        inline string getUserQuery() const { DARABONBA_PTR_GET_DEFAULT(userQuery_, "") };
        inline Records& setUserQuery(string userQuery) { DARABONBA_PTR_SET_VALUE(userQuery_, userQuery) };


      protected:
        shared_ptr<string> bizId_ {};
        shared_ptr<string> bizType_ {};
        Darabonba::Json extraMessage_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> llmAnswer_ {};
        shared_ptr<string> llmPrompt_ {};
        shared_ptr<string> llmType_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> userQuery_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalPages_ == nullptr && this->totalRecords_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      shared_ptr<int64_t> currentPage_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int64_t> totalPages_ {};
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetHistoryListByBizTypeResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHistoryListByBizTypeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHistoryListByBizTypeResponseBody::Data) };
    inline GetHistoryListByBizTypeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHistoryListByBizTypeResponseBody::Data) };
    inline GetHistoryListByBizTypeResponseBody& setData(const GetHistoryListByBizTypeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHistoryListByBizTypeResponseBody& setData(GetHistoryListByBizTypeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetHistoryListByBizTypeResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetHistoryListByBizTypeResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHistoryListByBizTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHistoryListByBizTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHistoryListByBizTypeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetHistoryListByBizTypeResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetHistoryListByBizTypeResponseBody::Data> data_ {};
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
