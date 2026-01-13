// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDocumentsResponseBody() = default ;
    ListDocumentsResponseBody(const ListDocumentsResponseBody &) = default ;
    ListDocumentsResponseBody(ListDocumentsResponseBody &&) = default ;
    ListDocumentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsResponseBody() = default ;
    ListDocumentsResponseBody& operator=(const ListDocumentsResponseBody &) = default ;
    ListDocumentsResponseBody& operator=(ListDocumentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DocumentList, documentList_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DocumentList, documentList_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DocumentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DocumentList& obj) { 
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, DocumentList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        DocumentList() = default ;
        DocumentList(const DocumentList &) = default ;
        DocumentList(DocumentList &&) = default ;
        DocumentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DocumentList() = default ;
        DocumentList& operator=(const DocumentList &) = default ;
        DocumentList& operator=(DocumentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileName_ == nullptr
        && this->source_ == nullptr; };
        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline DocumentList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline DocumentList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // The name of the document.
        shared_ptr<string> fileName_ {};
        // The source of the document.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->documentList_ == nullptr; };
      // documentList Field Functions 
      bool hasDocumentList() const { return this->documentList_ != nullptr;};
      void deleteDocumentList() { this->documentList_ = nullptr;};
      inline const vector<Items::DocumentList> & getDocumentList() const { DARABONBA_PTR_GET_CONST(documentList_, vector<Items::DocumentList>) };
      inline vector<Items::DocumentList> getDocumentList() { DARABONBA_PTR_GET(documentList_, vector<Items::DocumentList>) };
      inline Items& setDocumentList(const vector<Items::DocumentList> & documentList) { DARABONBA_PTR_SET_VALUE(documentList_, documentList) };
      inline Items& setDocumentList(vector<Items::DocumentList> && documentList) { DARABONBA_PTR_SET_RVALUE(documentList_, documentList) };


    protected:
      shared_ptr<vector<Items::DocumentList>> documentList_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListDocumentsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const ListDocumentsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, ListDocumentsResponseBody::Items) };
    inline ListDocumentsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, ListDocumentsResponseBody::Items) };
    inline ListDocumentsResponseBody& setItems(const ListDocumentsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListDocumentsResponseBody& setItems(ListDocumentsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDocumentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDocumentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDocumentsResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The queried documents.
    shared_ptr<ListDocumentsResponseBody::Items> items_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
