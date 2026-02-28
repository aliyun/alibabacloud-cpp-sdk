// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYQUEUEEVENTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYQUEUEEVENTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyQueueEventLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyQueueEventLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyQueueEventLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLegacyQueueEventLogsResponseBody() = default ;
    ListLegacyQueueEventLogsResponseBody(const ListLegacyQueueEventLogsResponseBody &) = default ;
    ListLegacyQueueEventLogsResponseBody(ListLegacyQueueEventLogsResponseBody &&) = default ;
    ListLegacyQueueEventLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyQueueEventLogsResponseBody() = default ;
    ListLegacyQueueEventLogsResponseBody& operator=(const ListLegacyQueueEventLogsResponseBody &) = default ;
    ListLegacyQueueEventLogsResponseBody& operator=(ListLegacyQueueEventLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(Acid, acid_);
          DARABONBA_PTR_TO_JSON(Ani, ani_);
          DARABONBA_PTR_TO_JSON(AnswerPhone, answerPhone_);
          DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_TO_JSON(Cause, cause_);
          DARABONBA_PTR_TO_JSON(Dnis, dnis_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Vq, vq_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Acid, acid_);
          DARABONBA_PTR_FROM_JSON(Ani, ani_);
          DARABONBA_PTR_FROM_JSON(AnswerPhone, answerPhone_);
          DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
          DARABONBA_PTR_FROM_JSON(Cause, cause_);
          DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Vq, vq_);
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
        virtual bool empty() const override { return this->acid_ == nullptr
        && this->ani_ == nullptr && this->answerPhone_ == nullptr && this->answerTime_ == nullptr && this->cause_ == nullptr && this->dnis_ == nullptr
        && this->id_ == nullptr && this->queueTime_ == nullptr && this->statisticDate_ == nullptr && this->tenantId_ == nullptr && this->vq_ == nullptr; };
        // acid Field Functions 
        bool hasAcid() const { return this->acid_ != nullptr;};
        void deleteAcid() { this->acid_ = nullptr;};
        inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
        inline List& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


        // ani Field Functions 
        bool hasAni() const { return this->ani_ != nullptr;};
        void deleteAni() { this->ani_ = nullptr;};
        inline string getAni() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
        inline List& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


        // answerPhone Field Functions 
        bool hasAnswerPhone() const { return this->answerPhone_ != nullptr;};
        void deleteAnswerPhone() { this->answerPhone_ = nullptr;};
        inline string getAnswerPhone() const { DARABONBA_PTR_GET_DEFAULT(answerPhone_, "") };
        inline List& setAnswerPhone(string answerPhone) { DARABONBA_PTR_SET_VALUE(answerPhone_, answerPhone) };


        // answerTime Field Functions 
        bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
        void deleteAnswerTime() { this->answerTime_ = nullptr;};
        inline int64_t getAnswerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, 0L) };
        inline List& setAnswerTime(int64_t answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


        // cause Field Functions 
        bool hasCause() const { return this->cause_ != nullptr;};
        void deleteCause() { this->cause_ = nullptr;};
        inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
        inline List& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


        // dnis Field Functions 
        bool hasDnis() const { return this->dnis_ != nullptr;};
        void deleteDnis() { this->dnis_ = nullptr;};
        inline string getDnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
        inline List& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // queueTime Field Functions 
        bool hasQueueTime() const { return this->queueTime_ != nullptr;};
        void deleteQueueTime() { this->queueTime_ = nullptr;};
        inline int64_t getQueueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
        inline List& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


        // statisticDate Field Functions 
        bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
        void deleteStatisticDate() { this->statisticDate_ = nullptr;};
        inline string getStatisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
        inline List& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline List& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // vq Field Functions 
        bool hasVq() const { return this->vq_ != nullptr;};
        void deleteVq() { this->vq_ = nullptr;};
        inline string getVq() const { DARABONBA_PTR_GET_DEFAULT(vq_, "") };
        inline List& setVq(string vq) { DARABONBA_PTR_SET_VALUE(vq_, vq) };


      protected:
        shared_ptr<string> acid_ {};
        shared_ptr<string> ani_ {};
        shared_ptr<string> answerPhone_ {};
        shared_ptr<int64_t> answerTime_ {};
        shared_ptr<string> cause_ {};
        shared_ptr<string> dnis_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> queueTime_ {};
        shared_ptr<string> statisticDate_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<string> vq_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLegacyQueueEventLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLegacyQueueEventLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLegacyQueueEventLogsResponseBody::Data) };
    inline ListLegacyQueueEventLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLegacyQueueEventLogsResponseBody::Data) };
    inline ListLegacyQueueEventLogsResponseBody& setData(const ListLegacyQueueEventLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLegacyQueueEventLogsResponseBody& setData(ListLegacyQueueEventLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLegacyQueueEventLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLegacyQueueEventLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLegacyQueueEventLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLegacyQueueEventLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListLegacyQueueEventLogsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
