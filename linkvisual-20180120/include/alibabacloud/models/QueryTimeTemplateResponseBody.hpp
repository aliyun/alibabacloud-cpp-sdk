// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTIMETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTIMETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryTimeTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTimeTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTimeTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTimeTemplateResponseBody() = default ;
    QueryTimeTemplateResponseBody(const QueryTimeTemplateResponseBody &) = default ;
    QueryTimeTemplateResponseBody(QueryTimeTemplateResponseBody &&) = default ;
    QueryTimeTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTimeTemplateResponseBody() = default ;
    QueryTimeTemplateResponseBody& operator=(const QueryTimeTemplateResponseBody &) = default ;
    QueryTimeTemplateResponseBody& operator=(QueryTimeTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AllDay, allDay_);
          DARABONBA_PTR_TO_JSON(Default, default_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TimeSectionList, timeSectionList_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AllDay, allDay_);
          DARABONBA_PTR_FROM_JSON(Default, default_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TimeSectionList, timeSectionList_);
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
        class TimeSectionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimeSectionList& obj) { 
            DARABONBA_PTR_TO_JSON(Begin, begin_);
            DARABONBA_PTR_TO_JSON(DayOfWeek, dayOfWeek_);
            DARABONBA_PTR_TO_JSON(End, end_);
          };
          friend void from_json(const Darabonba::Json& j, TimeSectionList& obj) { 
            DARABONBA_PTR_FROM_JSON(Begin, begin_);
            DARABONBA_PTR_FROM_JSON(DayOfWeek, dayOfWeek_);
            DARABONBA_PTR_FROM_JSON(End, end_);
          };
          TimeSectionList() = default ;
          TimeSectionList(const TimeSectionList &) = default ;
          TimeSectionList(TimeSectionList &&) = default ;
          TimeSectionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimeSectionList() = default ;
          TimeSectionList& operator=(const TimeSectionList &) = default ;
          TimeSectionList& operator=(TimeSectionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->begin_ == nullptr
        && this->dayOfWeek_ == nullptr && this->end_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
          inline TimeSectionList& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // dayOfWeek Field Functions 
          bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
          void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
          inline int32_t getDayOfWeek() const { DARABONBA_PTR_GET_DEFAULT(dayOfWeek_, 0) };
          inline TimeSectionList& setDayOfWeek(int32_t dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
          inline TimeSectionList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        protected:
          // The start time of each day, in seconds.
          shared_ptr<int32_t> begin_ {};
          // The day of the week. Valid values: 0 to 6, which indicate Sunday to Saturday.
          shared_ptr<int32_t> dayOfWeek_ {};
          // The end time of each day, in seconds.
          shared_ptr<int32_t> end_ {};
        };

        virtual bool empty() const override { return this->allDay_ == nullptr
        && this->default_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr && this->timeSectionList_ == nullptr; };
        // allDay Field Functions 
        bool hasAllDay() const { return this->allDay_ != nullptr;};
        void deleteAllDay() { this->allDay_ = nullptr;};
        inline int32_t getAllDay() const { DARABONBA_PTR_GET_DEFAULT(allDay_, 0) };
        inline List& setAllDay(int32_t allDay) { DARABONBA_PTR_SET_VALUE(allDay_, allDay) };


        // default Field Functions 
        bool hasDefault() const { return this->default_ != nullptr;};
        void deleteDefault() { this->default_ = nullptr;};
        inline int32_t getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, 0) };
        inline List& setDefault(int32_t _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline List& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // timeSectionList Field Functions 
        bool hasTimeSectionList() const { return this->timeSectionList_ != nullptr;};
        void deleteTimeSectionList() { this->timeSectionList_ = nullptr;};
        inline const vector<List::TimeSectionList> & getTimeSectionList() const { DARABONBA_PTR_GET_CONST(timeSectionList_, vector<List::TimeSectionList>) };
        inline vector<List::TimeSectionList> getTimeSectionList() { DARABONBA_PTR_GET(timeSectionList_, vector<List::TimeSectionList>) };
        inline List& setTimeSectionList(const vector<List::TimeSectionList> & timeSectionList) { DARABONBA_PTR_SET_VALUE(timeSectionList_, timeSectionList) };
        inline List& setTimeSectionList(vector<List::TimeSectionList> && timeSectionList) { DARABONBA_PTR_SET_RVALUE(timeSectionList_, timeSectionList) };


      protected:
        // Indicates whether 24/7 recording is enabled. Valid values:
        // 
        // - 1: Yes.
        // - 0: No. For detailed configurations, see the TimeSectionList parameter.
        shared_ptr<int32_t> allDay_ {};
        // Indicates whether the template is the default template. Valid values:
        // 
        // - **1**: Default template.
        // - **0**: Custom template.
        shared_ptr<int32_t> default_ {};
        // The name of the time template.
        shared_ptr<string> name_ {};
        // The ID of the time template.
        shared_ptr<string> templateId_ {};
        // The time template information.
        shared_ptr<vector<List::TimeSectionList>> timeSectionList_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->page_ == nullptr && this->pageCount_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Data& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of returned templates.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The total number of pages.
      shared_ptr<int32_t> pageCount_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTimeTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTimeTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTimeTemplateResponseBody::Data) };
    inline QueryTimeTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTimeTemplateResponseBody::Data) };
    inline QueryTimeTemplateResponseBody& setData(const QueryTimeTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTimeTemplateResponseBody& setData(QueryTimeTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryTimeTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTimeTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTimeTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The time template information returned if the call is successful.
    shared_ptr<QueryTimeTemplateResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
