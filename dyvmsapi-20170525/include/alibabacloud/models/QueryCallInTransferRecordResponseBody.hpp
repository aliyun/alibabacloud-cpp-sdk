// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInTransferRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInTransferRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInTransferRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCallInTransferRecordResponseBody() = default ;
    QueryCallInTransferRecordResponseBody(const QueryCallInTransferRecordResponseBody &) = default ;
    QueryCallInTransferRecordResponseBody(QueryCallInTransferRecordResponseBody &&) = default ;
    QueryCallInTransferRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInTransferRecordResponseBody() = default ;
    QueryCallInTransferRecordResponseBody& operator=(const QueryCallInTransferRecordResponseBody &) = default ;
    QueryCallInTransferRecordResponseBody& operator=(QueryCallInTransferRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
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
      class Values : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Values& obj) { 
          DARABONBA_PTR_TO_JSON(CallInCalled, callInCalled_);
          DARABONBA_PTR_TO_JSON(CallInCaller, callInCaller_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
          DARABONBA_PTR_TO_JSON(TransferCalled, transferCalled_);
          DARABONBA_PTR_TO_JSON(TransferCaller, transferCaller_);
        };
        friend void from_json(const Darabonba::Json& j, Values& obj) { 
          DARABONBA_PTR_FROM_JSON(CallInCalled, callInCalled_);
          DARABONBA_PTR_FROM_JSON(CallInCaller, callInCaller_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
          DARABONBA_PTR_FROM_JSON(TransferCalled, transferCalled_);
          DARABONBA_PTR_FROM_JSON(TransferCaller, transferCaller_);
        };
        Values() = default ;
        Values(const Values &) = default ;
        Values(Values &&) = default ;
        Values(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Values() = default ;
        Values& operator=(const Values &) = default ;
        Values& operator=(Values &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callInCalled_ == nullptr
        && this->callInCaller_ == nullptr && this->gmtCreate_ == nullptr && this->recordUrl_ == nullptr && this->transferCalled_ == nullptr && this->transferCaller_ == nullptr; };
        // callInCalled Field Functions 
        bool hasCallInCalled() const { return this->callInCalled_ != nullptr;};
        void deleteCallInCalled() { this->callInCalled_ = nullptr;};
        inline string getCallInCalled() const { DARABONBA_PTR_GET_DEFAULT(callInCalled_, "") };
        inline Values& setCallInCalled(string callInCalled) { DARABONBA_PTR_SET_VALUE(callInCalled_, callInCalled) };


        // callInCaller Field Functions 
        bool hasCallInCaller() const { return this->callInCaller_ != nullptr;};
        void deleteCallInCaller() { this->callInCaller_ = nullptr;};
        inline string getCallInCaller() const { DARABONBA_PTR_GET_DEFAULT(callInCaller_, "") };
        inline Values& setCallInCaller(string callInCaller) { DARABONBA_PTR_SET_VALUE(callInCaller_, callInCaller) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Values& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // recordUrl Field Functions 
        bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
        void deleteRecordUrl() { this->recordUrl_ = nullptr;};
        inline string getRecordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
        inline Values& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


        // transferCalled Field Functions 
        bool hasTransferCalled() const { return this->transferCalled_ != nullptr;};
        void deleteTransferCalled() { this->transferCalled_ = nullptr;};
        inline string getTransferCalled() const { DARABONBA_PTR_GET_DEFAULT(transferCalled_, "") };
        inline Values& setTransferCalled(string transferCalled) { DARABONBA_PTR_SET_VALUE(transferCalled_, transferCalled) };


        // transferCaller Field Functions 
        bool hasTransferCaller() const { return this->transferCaller_ != nullptr;};
        void deleteTransferCaller() { this->transferCaller_ = nullptr;};
        inline string getTransferCaller() const { DARABONBA_PTR_GET_DEFAULT(transferCaller_, "") };
        inline Values& setTransferCaller(string transferCaller) { DARABONBA_PTR_SET_VALUE(transferCaller_, transferCaller) };


      protected:
        // The called number of the inbound call.
        shared_ptr<string> callInCalled_ {};
        // The calling number of the inbound call.
        shared_ptr<string> callInCaller_ {};
        // The time when the call was initiated.
        shared_ptr<int64_t> gmtCreate_ {};
        // The recording URL.
        shared_ptr<string> recordUrl_ {};
        // The phone number to which the call was transferred.
        shared_ptr<string> transferCalled_ {};
        // The calling number that transferred the call.
        shared_ptr<string> transferCaller_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr && this->values_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<Data::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Data::Values>) };
      inline vector<Data::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Data::Values>) };
      inline Data& setValues(const vector<Data::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Data& setValues(vector<Data::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
      // The call transfer records.
      shared_ptr<vector<Data::Values>> values_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCallInTransferRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCallInTransferRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCallInTransferRecordResponseBody::Data) };
    inline QueryCallInTransferRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCallInTransferRecordResponseBody::Data) };
    inline QueryCallInTransferRecordResponseBody& setData(const QueryCallInTransferRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCallInTransferRecordResponseBody& setData(QueryCallInTransferRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCallInTransferRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallInTransferRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<QueryCallInTransferRecordResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
