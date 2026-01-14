// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListIndexDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListIndexDocumentsResponseBody() = default ;
    ListIndexDocumentsResponseBody(const ListIndexDocumentsResponseBody &) = default ;
    ListIndexDocumentsResponseBody(ListIndexDocumentsResponseBody &&) = default ;
    ListIndexDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexDocumentsResponseBody() = default ;
    ListIndexDocumentsResponseBody& operator=(const ListIndexDocumentsResponseBody &) = default ;
    ListIndexDocumentsResponseBody& operator=(ListIndexDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Documents, documents_);
        DARABONBA_PTR_TO_JSON(IndexId, indexId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Documents, documents_);
        DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
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
      class Documents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Documents& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DocumentType, documentType_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Documents& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DocumentType, documentType_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Documents() = default ;
        Documents(const Documents &) = default ;
        Documents(Documents &&) = default ;
        Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Documents() = default ;
        Documents& operator=(const Documents &) = default ;
        Documents& operator=(Documents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->documentType_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->name_ == nullptr
        && this->size_ == nullptr && this->sourceId_ == nullptr && this->status_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Documents& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // documentType Field Functions 
        bool hasDocumentType() const { return this->documentType_ != nullptr;};
        void deleteDocumentType() { this->documentType_ = nullptr;};
        inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
        inline Documents& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Documents& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Documents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Documents& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Documents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline Documents& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline Documents& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Documents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The error status code of document import.
        shared_ptr<string> code_ {};
        // The format of the document. Valid values: pdf, docx, doc, txt, md, pptx, ppt, and EXCEL.
        shared_ptr<string> documentType_ {};
        shared_ptr<int64_t> gmtModified_ {};
        // The primary key ID of the document.
        shared_ptr<string> id_ {};
        // The error message of document import.
        shared_ptr<string> message_ {};
        // The name of the document.
        shared_ptr<string> name_ {};
        // The size of the document. Unit: bytes.
        shared_ptr<int32_t> size_ {};
        // For unstructured knowledge base, this parameter is the category ID. To view the category ID, you can click the ID icon next to the category name on the Unstructured Data tab of the [Data Management](https://bailian.console.aliyun.com/#/data-center) page.
        // 
        // For structured knowledge base, this parameter is the data table ID. To view the table ID, you can click the ID icon next to the table name on the Structured Data tab of the [Data Management](https://bailian.console.aliyun.com/#/data-center) page.
        shared_ptr<string> sourceId_ {};
        // The import status of the document. Valid values:
        // 
        // *   INSERT_ERROR
        // *   RUNNING
        // *   DELETED
        // *   FINISH
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->documents_ == nullptr
        && this->indexId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // documents Field Functions 
      bool hasDocuments() const { return this->documents_ != nullptr;};
      void deleteDocuments() { this->documents_ = nullptr;};
      inline const vector<Data::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<Data::Documents>) };
      inline vector<Data::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<Data::Documents>) };
      inline Data& setDocuments(const vector<Data::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
      inline Data& setDocuments(vector<Data::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


      // indexId Field Functions 
      bool hasIndexId() const { return this->indexId_ != nullptr;};
      void deleteIndexId() { this->indexId_ = nullptr;};
      inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
      inline Data& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


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
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of documents in the knowledge base.
      shared_ptr<vector<Data::Documents>> documents_ {};
      // The primary key ID of the knowledge base.
      shared_ptr<string> indexId_ {};
      // The specified page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The specified number of documents on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of documents returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIndexDocumentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIndexDocumentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIndexDocumentsResponseBody::Data) };
    inline ListIndexDocumentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIndexDocumentsResponseBody::Data) };
    inline ListIndexDocumentsResponseBody& setData(const ListIndexDocumentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIndexDocumentsResponseBody& setData(ListIndexDocumentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIndexDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIndexDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListIndexDocumentsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIndexDocumentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListIndexDocumentsResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status code.
    shared_ptr<string> status_ {};
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
