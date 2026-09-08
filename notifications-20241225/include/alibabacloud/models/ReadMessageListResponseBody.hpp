// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadMessageListResponseBody() = default ;
    ReadMessageListResponseBody(const ReadMessageListResponseBody &) = default ;
    ReadMessageListResponseBody(ReadMessageListResponseBody &&) = default ;
    ReadMessageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageListResponseBody() = default ;
    ReadMessageListResponseBody& operator=(const ReadMessageListResponseBody &) = default ;
    ReadMessageListResponseBody& operator=(ReadMessageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
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
      class Rows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rows& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(Class, class_);
          DARABONBA_PTR_TO_JSON(ClassId, classId_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtUpdate, gmtUpdate_);
          DARABONBA_PTR_TO_JSON(MassId, massId_);
          DARABONBA_PTR_TO_JSON(Memo, memo_);
          DARABONBA_PTR_TO_JSON(MsgId, msgId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(Titleh, titleh_);
        };
        friend void from_json(const Darabonba::Json& j, Rows& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(Class, class_);
          DARABONBA_PTR_FROM_JSON(ClassId, classId_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtUpdate, gmtUpdate_);
          DARABONBA_PTR_FROM_JSON(MassId, massId_);
          DARABONBA_PTR_FROM_JSON(Memo, memo_);
          DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(Titleh, titleh_);
        };
        Rows() = default ;
        Rows(const Rows &) = default ;
        Rows(Rows &&) = default ;
        Rows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rows() = default ;
        Rows& operator=(const Rows &) = default ;
        Rows& operator=(Rows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->categoryName_ == nullptr && this->class_ == nullptr && this->classId_ == nullptr && this->content_ == nullptr && this->deleted_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtUpdate_ == nullptr && this->massId_ == nullptr && this->memo_ == nullptr && this->msgId_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr && this->titleh_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
        inline Rows& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline Rows& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // class Field Functions 
        bool hasClass() const { return this->class_ != nullptr;};
        void deleteClass() { this->class_ = nullptr;};
        inline string getClass() const { DARABONBA_PTR_GET_DEFAULT(class_, "") };
        inline Rows& setClass(string _class) { DARABONBA_PTR_SET_VALUE(class_, _class) };


        // classId Field Functions 
        bool hasClassId() const { return this->classId_ != nullptr;};
        void deleteClassId() { this->classId_ = nullptr;};
        inline int64_t getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, 0L) };
        inline Rows& setClassId(int64_t classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Rows& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
        inline Rows& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
        inline Rows& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtUpdate Field Functions 
        bool hasGmtUpdate() const { return this->gmtUpdate_ != nullptr;};
        void deleteGmtUpdate() { this->gmtUpdate_ = nullptr;};
        inline int64_t getGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdate_, 0L) };
        inline Rows& setGmtUpdate(int64_t gmtUpdate) { DARABONBA_PTR_SET_VALUE(gmtUpdate_, gmtUpdate) };


        // massId Field Functions 
        bool hasMassId() const { return this->massId_ != nullptr;};
        void deleteMassId() { this->massId_ = nullptr;};
        inline int64_t getMassId() const { DARABONBA_PTR_GET_DEFAULT(massId_, 0L) };
        inline Rows& setMassId(int64_t massId) { DARABONBA_PTR_SET_VALUE(massId_, massId) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline Rows& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // msgId Field Functions 
        bool hasMsgId() const { return this->msgId_ != nullptr;};
        void deleteMsgId() { this->msgId_ = nullptr;};
        inline int64_t getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, 0L) };
        inline Rows& setMsgId(int64_t msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Rows& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Rows& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // titleh Field Functions 
        bool hasTitleh() const { return this->titleh_ != nullptr;};
        void deleteTitleh() { this->titleh_ = nullptr;};
        inline string getTitleh() const { DARABONBA_PTR_GET_DEFAULT(titleh_, "") };
        inline Rows& setTitleh(string titleh) { DARABONBA_PTR_SET_VALUE(titleh_, titleh) };


      protected:
        // The category code.
        shared_ptr<string> categoryCode_ {};
        // The message category name.
        shared_ptr<string> categoryName_ {};
        // A reserved field.
        shared_ptr<string> class_ {};
        // The message class ID.
        shared_ptr<int64_t> classId_ {};
        // The message content.
        shared_ptr<string> content_ {};
        // The deletion flag.
        shared_ptr<int32_t> deleted_ {};
        // The time when the message was created.
        shared_ptr<int64_t> gmtCreated_ {};
        // The time when the message was updated.
        shared_ptr<int64_t> gmtUpdate_ {};
        // A reserved field.
        shared_ptr<int64_t> massId_ {};
        // A reserved field.
        shared_ptr<string> memo_ {};
        // The message ID.
        shared_ptr<int64_t> msgId_ {};
        // The read status. A value of 0 indicates unread. A value of 1 indicates read.
        shared_ptr<int64_t> status_ {};
        // The message title.
        shared_ptr<string> title_ {};
        // The highlighted title.
        shared_ptr<string> titleh_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->rows_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
      inline Data& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline const vector<Data::Rows> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Data::Rows>) };
      inline vector<Data::Rows> getRows() { DARABONBA_PTR_GET(rows_, vector<Data::Rows>) };
      inline Data& setRows(const vector<Data::Rows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
      inline Data& setRows(vector<Data::Rows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    protected:
      // The number of messages.
      shared_ptr<int64_t> count_ {};
      // A reserved field.
      shared_ptr<int64_t> maxResults_ {};
      // A reserved field.
      shared_ptr<string> nextToken_ {};
      // The page number.
      shared_ptr<int32_t> page_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // The returned data.
      shared_ptr<vector<Data::Rows>> rows_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadMessageListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadMessageListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadMessageListResponseBody::Data) };
    inline ReadMessageListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ReadMessageListResponseBody::Data) };
    inline ReadMessageListResponseBody& setData(const ReadMessageListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadMessageListResponseBody& setData(ReadMessageListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadMessageListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadMessageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadMessageListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned when the call fails. For more information, see error codes.
    shared_ptr<string> code_ {};
    // The execution result.
    shared_ptr<ReadMessageListResponseBody::Data> data_ {};
    // The error message returned when the call fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values: true: The call was successful. false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
