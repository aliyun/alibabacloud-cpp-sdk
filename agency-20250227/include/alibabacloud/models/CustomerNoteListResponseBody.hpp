// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CustomerNoteListResponseBody() = default ;
    CustomerNoteListResponseBody(const CustomerNoteListResponseBody &) = default ;
    CustomerNoteListResponseBody(CustomerNoteListResponseBody &&) = default ;
    CustomerNoteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteListResponseBody() = default ;
    CustomerNoteListResponseBody& operator=(const CustomerNoteListResponseBody &) = default ;
    CustomerNoteListResponseBody& operator=(CustomerNoteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Page, page_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Page, page_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
        // page Field Functions 
        bool hasPage() const { return this->page_ != nullptr;};
        void deletePage() { this->page_ = nullptr;};
        inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
        inline PageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
        inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int32_t> page_ {};
        shared_ptr<int32_t> pageSize_ {};
        shared_ptr<int32_t> total_ {};
      };

      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(ContactName, contactName_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(NoteContent, noteContent_);
          DARABONBA_PTR_TO_JSON(NoteId, noteId_);
          DARABONBA_PTR_TO_JSON(NoteType, noteType_);
          DARABONBA_PTR_TO_JSON(NoteTypeLabel, noteTypeLabel_);
          DARABONBA_PTR_TO_JSON(TouchDate, touchDate_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(NoteContent, noteContent_);
          DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
          DARABONBA_PTR_FROM_JSON(NoteType, noteType_);
          DARABONBA_PTR_FROM_JSON(NoteTypeLabel, noteTypeLabel_);
          DARABONBA_PTR_FROM_JSON(TouchDate, touchDate_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactName_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->gmtCreate_ == nullptr && this->noteContent_ == nullptr && this->noteId_ == nullptr
        && this->noteType_ == nullptr && this->noteTypeLabel_ == nullptr && this->touchDate_ == nullptr; };
        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline DataItem& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
        inline DataItem& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline DataItem& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline DataItem& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // noteContent Field Functions 
        bool hasNoteContent() const { return this->noteContent_ != nullptr;};
        void deleteNoteContent() { this->noteContent_ = nullptr;};
        inline string getNoteContent() const { DARABONBA_PTR_GET_DEFAULT(noteContent_, "") };
        inline DataItem& setNoteContent(string noteContent) { DARABONBA_PTR_SET_VALUE(noteContent_, noteContent) };


        // noteId Field Functions 
        bool hasNoteId() const { return this->noteId_ != nullptr;};
        void deleteNoteId() { this->noteId_ = nullptr;};
        inline int64_t getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
        inline DataItem& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


        // noteType Field Functions 
        bool hasNoteType() const { return this->noteType_ != nullptr;};
        void deleteNoteType() { this->noteType_ = nullptr;};
        inline string getNoteType() const { DARABONBA_PTR_GET_DEFAULT(noteType_, "") };
        inline DataItem& setNoteType(string noteType) { DARABONBA_PTR_SET_VALUE(noteType_, noteType) };


        // noteTypeLabel Field Functions 
        bool hasNoteTypeLabel() const { return this->noteTypeLabel_ != nullptr;};
        void deleteNoteTypeLabel() { this->noteTypeLabel_ = nullptr;};
        inline string getNoteTypeLabel() const { DARABONBA_PTR_GET_DEFAULT(noteTypeLabel_, "") };
        inline DataItem& setNoteTypeLabel(string noteTypeLabel) { DARABONBA_PTR_SET_VALUE(noteTypeLabel_, noteTypeLabel) };


        // touchDate Field Functions 
        bool hasTouchDate() const { return this->touchDate_ != nullptr;};
        void deleteTouchDate() { this->touchDate_ = nullptr;};
        inline string getTouchDate() const { DARABONBA_PTR_GET_DEFAULT(touchDate_, "") };
        inline DataItem& setTouchDate(string touchDate) { DARABONBA_PTR_SET_VALUE(touchDate_, touchDate) };


      protected:
        shared_ptr<string> contactName_ {};
        shared_ptr<int64_t> creator_ {};
        shared_ptr<string> creatorName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> noteContent_ {};
        shared_ptr<int64_t> noteId_ {};
        shared_ptr<string> noteType_ {};
        shared_ptr<string> noteTypeLabel_ {};
        shared_ptr<string> touchDate_ {};
      };

      virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->msg_ == nullptr
        && this->pageInfo_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
      // accessDeniedDetail Field Functions 
      bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
      void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
      inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
      inline Data& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // httpStatusCode Field Functions 
      bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
      void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
      inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
      inline Data& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<string> accessDeniedDetail_ {};
      shared_ptr<string> code_ {};
      shared_ptr<vector<Data::DataItem>> data_ {};
      shared_ptr<int32_t> httpStatusCode_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> msg_ {};
      shared_ptr<Data::PageInfo> pageInfo_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->msg_ == nullptr
        && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CustomerNoteListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CustomerNoteListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CustomerNoteListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CustomerNoteListResponseBody::Data) };
    inline CustomerNoteListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CustomerNoteListResponseBody::Data) };
    inline CustomerNoteListResponseBody& setData(const CustomerNoteListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CustomerNoteListResponseBody& setData(CustomerNoteListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CustomerNoteListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CustomerNoteListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CustomerNoteListResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CustomerNoteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CustomerNoteListResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
