// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListIntervenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntervenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntervenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIntervenesResponseBody() = default ;
    ListIntervenesResponseBody(const ListIntervenesResponseBody &) = default ;
    ListIntervenesResponseBody(ListIntervenesResponseBody &&) = default ;
    ListIntervenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntervenesResponseBody() = default ;
    ListIntervenesResponseBody& operator=(const ListIntervenesResponseBody &) = default ;
    ListIntervenesResponseBody& operator=(ListIntervenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(InterveneList, interveneList_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(InterveneList, interveneList_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class InterveneList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InterveneList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Query, query_);
        };
        friend void from_json(const Darabonba::Json& j, InterveneList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Query, query_);
        };
        InterveneList() = default ;
        InterveneList(const InterveneList &) = default ;
        InterveneList(InterveneList &&) = default ;
        InterveneList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InterveneList() = default ;
        InterveneList& operator=(const InterveneList &) = default ;
        InterveneList& operator=(InterveneList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->query_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InterveneList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // query Field Functions 
        bool hasQuery() const { return this->query_ != nullptr;};
        void deleteQuery() { this->query_ = nullptr;};
        inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
        inline InterveneList& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      protected:
        // id
        shared_ptr<string> id_ {};
        shared_ptr<string> query_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->interveneList_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // interveneList Field Functions 
      bool hasInterveneList() const { return this->interveneList_ != nullptr;};
      void deleteInterveneList() { this->interveneList_ = nullptr;};
      inline const vector<Data::InterveneList> & getInterveneList() const { DARABONBA_PTR_GET_CONST(interveneList_, vector<Data::InterveneList>) };
      inline vector<Data::InterveneList> getInterveneList() { DARABONBA_PTR_GET(interveneList_, vector<Data::InterveneList>) };
      inline Data& setInterveneList(const vector<Data::InterveneList> & interveneList) { DARABONBA_PTR_SET_VALUE(interveneList_, interveneList) };
      inline Data& setInterveneList(vector<Data::InterveneList> && interveneList) { DARABONBA_PTR_SET_RVALUE(interveneList_, interveneList) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
      inline Data& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<vector<Data::InterveneList>> interveneList_ {};
      shared_ptr<int32_t> pageIndex_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIntervenesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIntervenesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIntervenesResponseBody::Data) };
    inline ListIntervenesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIntervenesResponseBody::Data) };
    inline ListIntervenesResponseBody& setData(const ListIntervenesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIntervenesResponseBody& setData(ListIntervenesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIntervenesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIntervenesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntervenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIntervenesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListIntervenesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
