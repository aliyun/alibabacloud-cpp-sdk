// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTrigger, isTrigger_);
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchEventsResponseBody() = default ;
    SearchEventsResponseBody(const SearchEventsResponseBody &) = default ;
    SearchEventsResponseBody(SearchEventsResponseBody &&) = default ;
    SearchEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEventsResponseBody() = default ;
    SearchEventsResponseBody& operator=(const SearchEventsResponseBody &) = default ;
    SearchEventsResponseBody& operator=(SearchEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Event : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Event& obj) { 
          DARABONBA_PTR_TO_JSON(AlertId, alertId_);
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Links, links_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Event& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Links, links_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Event() = default ;
        Event(const Event &) = default ;
        Event(Event &&) = default ;
        Event(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Event() = default ;
        Event& operator=(const Event &) = default ;
        Event& operator=(Event &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertId_ == nullptr
        && this->alertName_ == nullptr && this->alertRule_ == nullptr && this->alertType_ == nullptr && this->eventLevel_ == nullptr && this->eventTime_ == nullptr
        && this->id_ == nullptr && this->links_ == nullptr && this->message_ == nullptr; };
        // alertId Field Functions 
        bool hasAlertId() const { return this->alertId_ != nullptr;};
        void deleteAlertId() { this->alertId_ = nullptr;};
        inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
        inline Event& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline Event& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // alertRule Field Functions 
        bool hasAlertRule() const { return this->alertRule_ != nullptr;};
        void deleteAlertRule() { this->alertRule_ = nullptr;};
        inline string getAlertRule() const { DARABONBA_PTR_GET_DEFAULT(alertRule_, "") };
        inline Event& setAlertRule(string alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline int32_t getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
        inline Event& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // eventLevel Field Functions 
        bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
        void deleteEventLevel() { this->eventLevel_ = nullptr;};
        inline string getEventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
        inline Event& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
        inline Event& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Event& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // links Field Functions 
        bool hasLinks() const { return this->links_ != nullptr;};
        void deleteLinks() { this->links_ = nullptr;};
        inline const vector<string> & getLinks() const { DARABONBA_PTR_GET_CONST(links_, vector<string>) };
        inline vector<string> getLinks() { DARABONBA_PTR_GET(links_, vector<string>) };
        inline Event& setLinks(const vector<string> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
        inline Event& setLinks(vector<string> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Event& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      protected:
        shared_ptr<int64_t> alertId_ {};
        shared_ptr<string> alertName_ {};
        shared_ptr<string> alertRule_ {};
        shared_ptr<int32_t> alertType_ {};
        shared_ptr<string> eventLevel_ {};
        shared_ptr<int64_t> eventTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<vector<string>> links_ {};
        shared_ptr<string> message_ {};
      };

      virtual bool empty() const override { return this->event_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline const vector<PageBean::Event> & getEvent() const { DARABONBA_PTR_GET_CONST(event_, vector<PageBean::Event>) };
      inline vector<PageBean::Event> getEvent() { DARABONBA_PTR_GET(event_, vector<PageBean::Event>) };
      inline PageBean& setEvent(const vector<PageBean::Event> & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
      inline PageBean& setEvent(vector<PageBean::Event> && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageBean::Event>> event_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->isTrigger_ == nullptr
        && this->pageBean_ == nullptr && this->requestId_ == nullptr; };
    // isTrigger Field Functions 
    bool hasIsTrigger() const { return this->isTrigger_ != nullptr;};
    void deleteIsTrigger() { this->isTrigger_ = nullptr;};
    inline int32_t getIsTrigger() const { DARABONBA_PTR_GET_DEFAULT(isTrigger_, 0) };
    inline SearchEventsResponseBody& setIsTrigger(int32_t isTrigger) { DARABONBA_PTR_SET_VALUE(isTrigger_, isTrigger) };


    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchEventsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchEventsResponseBody::PageBean) };
    inline SearchEventsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchEventsResponseBody::PageBean) };
    inline SearchEventsResponseBody& setPageBean(const SearchEventsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchEventsResponseBody& setPageBean(SearchEventsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> isTrigger_ {};
    shared_ptr<SearchEventsResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
