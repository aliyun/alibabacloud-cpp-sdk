// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantBooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantBooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantBooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListTextbookAssistantBooksResponseBody() = default ;
    ListTextbookAssistantBooksResponseBody(const ListTextbookAssistantBooksResponseBody &) = default ;
    ListTextbookAssistantBooksResponseBody(ListTextbookAssistantBooksResponseBody &&) = default ;
    ListTextbookAssistantBooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantBooksResponseBody() = default ;
    ListTextbookAssistantBooksResponseBody& operator=(const ListTextbookAssistantBooksResponseBody &) = default ;
    ListTextbookAssistantBooksResponseBody& operator=(ListTextbookAssistantBooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(bookList, bookList_);
        DARABONBA_PTR_TO_JSON(paginationData, paginationData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(bookList, bookList_);
        DARABONBA_PTR_FROM_JSON(paginationData, paginationData_);
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
      class PaginationData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PaginationData& obj) { 
          DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PaginationData& obj) { 
          DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        PaginationData() = default ;
        PaginationData(const PaginationData &) = default ;
        PaginationData(PaginationData &&) = default ;
        PaginationData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PaginationData() = default ;
        PaginationData& operator=(const PaginationData &) = default ;
        PaginationData& operator=(PaginationData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->maxResults_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PaginationData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // maxResults Field Functions 
        bool hasMaxResults() const { return this->maxResults_ != nullptr;};
        void deleteMaxResults() { this->maxResults_ = nullptr;};
        inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
        inline PaginationData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline PaginationData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<int32_t> currentPage_ {};
        shared_ptr<int32_t> maxResults_ {};
        shared_ptr<int32_t> totalCount_ {};
      };

      class BookList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BookList& obj) { 
          DARABONBA_PTR_TO_JSON(author, author_);
          DARABONBA_PTR_TO_JSON(bookId, bookId_);
          DARABONBA_PTR_TO_JSON(bookName, bookName_);
          DARABONBA_PTR_TO_JSON(coverImage, coverImage_);
          DARABONBA_PTR_TO_JSON(edition, edition_);
          DARABONBA_PTR_TO_JSON(grade, grade_);
          DARABONBA_PTR_TO_JSON(impression, impression_);
          DARABONBA_PTR_TO_JSON(isbn, isbn_);
          DARABONBA_PTR_TO_JSON(publisher, publisher_);
          DARABONBA_PTR_TO_JSON(subject, subject_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, BookList& obj) { 
          DARABONBA_PTR_FROM_JSON(author, author_);
          DARABONBA_PTR_FROM_JSON(bookId, bookId_);
          DARABONBA_PTR_FROM_JSON(bookName, bookName_);
          DARABONBA_PTR_FROM_JSON(coverImage, coverImage_);
          DARABONBA_PTR_FROM_JSON(edition, edition_);
          DARABONBA_PTR_FROM_JSON(grade, grade_);
          DARABONBA_PTR_FROM_JSON(impression, impression_);
          DARABONBA_PTR_FROM_JSON(isbn, isbn_);
          DARABONBA_PTR_FROM_JSON(publisher, publisher_);
          DARABONBA_PTR_FROM_JSON(subject, subject_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(volume, volume_);
        };
        BookList() = default ;
        BookList(const BookList &) = default ;
        BookList(BookList &&) = default ;
        BookList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BookList() = default ;
        BookList& operator=(const BookList &) = default ;
        BookList& operator=(BookList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->author_ == nullptr
        && this->bookId_ == nullptr && this->bookName_ == nullptr && this->coverImage_ == nullptr && this->edition_ == nullptr && this->grade_ == nullptr
        && this->impression_ == nullptr && this->isbn_ == nullptr && this->publisher_ == nullptr && this->subject_ == nullptr && this->version_ == nullptr
        && this->volume_ == nullptr; };
        // author Field Functions 
        bool hasAuthor() const { return this->author_ != nullptr;};
        void deleteAuthor() { this->author_ = nullptr;};
        inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
        inline BookList& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


        // bookId Field Functions 
        bool hasBookId() const { return this->bookId_ != nullptr;};
        void deleteBookId() { this->bookId_ = nullptr;};
        inline string getBookId() const { DARABONBA_PTR_GET_DEFAULT(bookId_, "") };
        inline BookList& setBookId(string bookId) { DARABONBA_PTR_SET_VALUE(bookId_, bookId) };


        // bookName Field Functions 
        bool hasBookName() const { return this->bookName_ != nullptr;};
        void deleteBookName() { this->bookName_ = nullptr;};
        inline string getBookName() const { DARABONBA_PTR_GET_DEFAULT(bookName_, "") };
        inline BookList& setBookName(string bookName) { DARABONBA_PTR_SET_VALUE(bookName_, bookName) };


        // coverImage Field Functions 
        bool hasCoverImage() const { return this->coverImage_ != nullptr;};
        void deleteCoverImage() { this->coverImage_ = nullptr;};
        inline string getCoverImage() const { DARABONBA_PTR_GET_DEFAULT(coverImage_, "") };
        inline BookList& setCoverImage(string coverImage) { DARABONBA_PTR_SET_VALUE(coverImage_, coverImage) };


        // edition Field Functions 
        bool hasEdition() const { return this->edition_ != nullptr;};
        void deleteEdition() { this->edition_ = nullptr;};
        inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
        inline BookList& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


        // grade Field Functions 
        bool hasGrade() const { return this->grade_ != nullptr;};
        void deleteGrade() { this->grade_ = nullptr;};
        inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
        inline BookList& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


        // impression Field Functions 
        bool hasImpression() const { return this->impression_ != nullptr;};
        void deleteImpression() { this->impression_ = nullptr;};
        inline string getImpression() const { DARABONBA_PTR_GET_DEFAULT(impression_, "") };
        inline BookList& setImpression(string impression) { DARABONBA_PTR_SET_VALUE(impression_, impression) };


        // isbn Field Functions 
        bool hasIsbn() const { return this->isbn_ != nullptr;};
        void deleteIsbn() { this->isbn_ = nullptr;};
        inline string getIsbn() const { DARABONBA_PTR_GET_DEFAULT(isbn_, "") };
        inline BookList& setIsbn(string isbn) { DARABONBA_PTR_SET_VALUE(isbn_, isbn) };


        // publisher Field Functions 
        bool hasPublisher() const { return this->publisher_ != nullptr;};
        void deletePublisher() { this->publisher_ = nullptr;};
        inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
        inline BookList& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


        // subject Field Functions 
        bool hasSubject() const { return this->subject_ != nullptr;};
        void deleteSubject() { this->subject_ = nullptr;};
        inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
        inline BookList& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline BookList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
        inline BookList& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> author_ {};
        shared_ptr<string> bookId_ {};
        shared_ptr<string> bookName_ {};
        shared_ptr<string> coverImage_ {};
        shared_ptr<string> edition_ {};
        shared_ptr<string> grade_ {};
        shared_ptr<string> impression_ {};
        shared_ptr<string> isbn_ {};
        shared_ptr<string> publisher_ {};
        shared_ptr<string> subject_ {};
        shared_ptr<string> version_ {};
        shared_ptr<string> volume_ {};
      };

      virtual bool empty() const override { return this->bookList_ == nullptr
        && this->paginationData_ == nullptr; };
      // bookList Field Functions 
      bool hasBookList() const { return this->bookList_ != nullptr;};
      void deleteBookList() { this->bookList_ = nullptr;};
      inline const vector<Data::BookList> & getBookList() const { DARABONBA_PTR_GET_CONST(bookList_, vector<Data::BookList>) };
      inline vector<Data::BookList> getBookList() { DARABONBA_PTR_GET(bookList_, vector<Data::BookList>) };
      inline Data& setBookList(const vector<Data::BookList> & bookList) { DARABONBA_PTR_SET_VALUE(bookList_, bookList) };
      inline Data& setBookList(vector<Data::BookList> && bookList) { DARABONBA_PTR_SET_RVALUE(bookList_, bookList) };


      // paginationData Field Functions 
      bool hasPaginationData() const { return this->paginationData_ != nullptr;};
      void deletePaginationData() { this->paginationData_ = nullptr;};
      inline const Data::PaginationData & getPaginationData() const { DARABONBA_PTR_GET_CONST(paginationData_, Data::PaginationData) };
      inline Data::PaginationData getPaginationData() { DARABONBA_PTR_GET(paginationData_, Data::PaginationData) };
      inline Data& setPaginationData(const Data::PaginationData & paginationData) { DARABONBA_PTR_SET_VALUE(paginationData_, paginationData) };
      inline Data& setPaginationData(Data::PaginationData && paginationData) { DARABONBA_PTR_SET_RVALUE(paginationData_, paginationData) };


    protected:
      shared_ptr<vector<Data::BookList>> bookList_ {};
      shared_ptr<Data::PaginationData> paginationData_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTextbookAssistantBooksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTextbookAssistantBooksResponseBody::Data) };
    inline ListTextbookAssistantBooksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTextbookAssistantBooksResponseBody::Data) };
    inline ListTextbookAssistantBooksResponseBody& setData(const ListTextbookAssistantBooksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTextbookAssistantBooksResponseBody& setData(ListTextbookAssistantBooksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListTextbookAssistantBooksResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListTextbookAssistantBooksResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTextbookAssistantBooksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTextbookAssistantBooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTextbookAssistantBooksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListTextbookAssistantBooksResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
