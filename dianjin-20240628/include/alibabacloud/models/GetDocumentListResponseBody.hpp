// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTLISTRESPONSEBODY_HPP_
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
  class GetDocumentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetDocumentListResponseBody() = default ;
    GetDocumentListResponseBody(const GetDocumentListResponseBody &) = default ;
    GetDocumentListResponseBody(GetDocumentListResponseBody &&) = default ;
    GetDocumentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentListResponseBody() = default ;
    GetDocumentListResponseBody& operator=(const GetDocumentListResponseBody &) = default ;
    GetDocumentListResponseBody& operator=(GetDocumentListResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(docId, docId_);
          DARABONBA_ANY_TO_JSON(documentMeta, documentMeta_);
          DARABONBA_PTR_TO_JSON(fileType, fileType_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
          DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(title, title_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(docId, docId_);
          DARABONBA_ANY_FROM_JSON(documentMeta, documentMeta_);
          DARABONBA_PTR_FROM_JSON(fileType, fileType_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
          DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(title, title_);
          DARABONBA_PTR_FROM_JSON(url, url_);
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
        virtual bool empty() const override { return this->docId_ == nullptr
        && this->documentMeta_ == nullptr && this->fileType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->libraryId_ == nullptr
        && this->statusCode_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
        // docId Field Functions 
        bool hasDocId() const { return this->docId_ != nullptr;};
        void deleteDocId() { this->docId_ = nullptr;};
        inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
        inline Records& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


        // documentMeta Field Functions 
        bool hasDocumentMeta() const { return this->documentMeta_ != nullptr;};
        void deleteDocumentMeta() { this->documentMeta_ = nullptr;};
        inline         const Darabonba::Json & getDocumentMeta() const { DARABONBA_GET(documentMeta_) };
        Darabonba::Json & getDocumentMeta() { DARABONBA_GET(documentMeta_) };
        inline Records& setDocumentMeta(const Darabonba::Json & documentMeta) { DARABONBA_SET_VALUE(documentMeta_, documentMeta) };
        inline Records& setDocumentMeta(Darabonba::Json && documentMeta) { DARABONBA_SET_RVALUE(documentMeta_, documentMeta) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline Records& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


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


        // libraryId Field Functions 
        bool hasLibraryId() const { return this->libraryId_ != nullptr;};
        void deleteLibraryId() { this->libraryId_ = nullptr;};
        inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
        inline Records& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline Records& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Records& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Records& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> docId_ {};
        Darabonba::Json documentMeta_ {};
        shared_ptr<string> fileType_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> libraryId_ {};
        shared_ptr<string> statusCode_ {};
        shared_ptr<string> title_ {};
        shared_ptr<string> url_ {};
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
    inline GetDocumentListResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocumentListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDocumentListResponseBody::Data) };
    inline GetDocumentListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDocumentListResponseBody::Data) };
    inline GetDocumentListResponseBody& setData(const GetDocumentListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocumentListResponseBody& setData(GetDocumentListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetDocumentListResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDocumentListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDocumentListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocumentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDocumentListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetDocumentListResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetDocumentListResponseBody::Data> data_ {};
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
