// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTBRIDGEINTEGRATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTBRIDGEINTEGRATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEventBridgeIntegrationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventBridgeIntegrationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventBridgeIntegrationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEventBridgeIntegrationsResponseBody() = default ;
    ListEventBridgeIntegrationsResponseBody(const ListEventBridgeIntegrationsResponseBody &) = default ;
    ListEventBridgeIntegrationsResponseBody(ListEventBridgeIntegrationsResponseBody &&) = default ;
    ListEventBridgeIntegrationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventBridgeIntegrationsResponseBody() = default ;
    ListEventBridgeIntegrationsResponseBody& operator=(const ListEventBridgeIntegrationsResponseBody &) = default ;
    ListEventBridgeIntegrationsResponseBody& operator=(ListEventBridgeIntegrationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(EventBridgeIntegrations, eventBridgeIntegrations_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(EventBridgeIntegrations, eventBridgeIntegrations_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class EventBridgeIntegrations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventBridgeIntegrations& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EventBridgeIntegrations& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EventBridgeIntegrations() = default ;
        EventBridgeIntegrations(const EventBridgeIntegrations &) = default ;
        EventBridgeIntegrations(EventBridgeIntegrations &&) = default ;
        EventBridgeIntegrations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventBridgeIntegrations() = default ;
        EventBridgeIntegrations& operator=(const EventBridgeIntegrations &) = default ;
        EventBridgeIntegrations& operator=(EventBridgeIntegrations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline EventBridgeIntegrations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline EventBridgeIntegrations& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EventBridgeIntegrations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The description of the EventBridge integration.
        shared_ptr<string> description_ {};
        // The ID of the EventBridge integration.
        shared_ptr<int64_t> id_ {};
        // The name of the EventBridge integration.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->eventBridgeIntegrations_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // eventBridgeIntegrations Field Functions 
      bool hasEventBridgeIntegrations() const { return this->eventBridgeIntegrations_ != nullptr;};
      void deleteEventBridgeIntegrations() { this->eventBridgeIntegrations_ = nullptr;};
      inline const vector<PageBean::EventBridgeIntegrations> & getEventBridgeIntegrations() const { DARABONBA_PTR_GET_CONST(eventBridgeIntegrations_, vector<PageBean::EventBridgeIntegrations>) };
      inline vector<PageBean::EventBridgeIntegrations> getEventBridgeIntegrations() { DARABONBA_PTR_GET(eventBridgeIntegrations_, vector<PageBean::EventBridgeIntegrations>) };
      inline PageBean& setEventBridgeIntegrations(const vector<PageBean::EventBridgeIntegrations> & eventBridgeIntegrations) { DARABONBA_PTR_SET_VALUE(eventBridgeIntegrations_, eventBridgeIntegrations) };
      inline PageBean& setEventBridgeIntegrations(vector<PageBean::EventBridgeIntegrations> && eventBridgeIntegrations) { DARABONBA_PTR_SET_RVALUE(eventBridgeIntegrations_, eventBridgeIntegrations) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The EventBridge integrations.
      shared_ptr<vector<PageBean::EventBridgeIntegrations>> eventBridgeIntegrations_ {};
      // The number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of EventBridge integrations that are returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListEventBridgeIntegrationsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListEventBridgeIntegrationsResponseBody::PageBean) };
    inline ListEventBridgeIntegrationsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, ListEventBridgeIntegrationsResponseBody::PageBean) };
    inline ListEventBridgeIntegrationsResponseBody& setPageBean(const ListEventBridgeIntegrationsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListEventBridgeIntegrationsResponseBody& setPageBean(ListEventBridgeIntegrationsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventBridgeIntegrationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about EventBridge integrations that is returned on each page.
    shared_ptr<ListEventBridgeIntegrationsResponseBody::PageBean> pageBean_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
