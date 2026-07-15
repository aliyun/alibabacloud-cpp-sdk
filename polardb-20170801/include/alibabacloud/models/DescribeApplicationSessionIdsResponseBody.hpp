// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSESSIONIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSESSIONIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationSessionIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSessionIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSessionIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeApplicationSessionIdsResponseBody() = default ;
    DescribeApplicationSessionIdsResponseBody(const DescribeApplicationSessionIdsResponseBody &) = default ;
    DescribeApplicationSessionIdsResponseBody(DescribeApplicationSessionIdsResponseBody &&) = default ;
    DescribeApplicationSessionIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSessionIdsResponseBody() = default ;
    DescribeApplicationSessionIdsResponseBody& operator=(const DescribeApplicationSessionIdsResponseBody &) = default ;
    DescribeApplicationSessionIdsResponseBody& operator=(DescribeApplicationSessionIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
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
      class ItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, ItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        ItemsItem() = default ;
        ItemsItem(const ItemsItem &) = default ;
        ItemsItem(ItemsItem &&) = default ;
        ItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemsItem() = default ;
        ItemsItem& operator=(const ItemsItem &) = default ;
        ItemsItem& operator=(ItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agent_ == nullptr
        && this->sessionId_ == nullptr && this->time_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline string getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
        inline ItemsItem& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline ItemsItem& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ItemsItem& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> agent_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Items::ItemsItem> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Items::ItemsItem>) };
      inline vector<Items::ItemsItem> getItems() { DARABONBA_PTR_GET(items_, vector<Items::ItemsItem>) };
      inline Items& setItems(const vector<Items::ItemsItem> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Items& setItems(vector<Items::ItemsItem> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<Items::ItemsItem>> items_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationSessionIdsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeApplicationSessionIdsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeApplicationSessionIdsResponseBody::Items) };
    inline DescribeApplicationSessionIdsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeApplicationSessionIdsResponseBody::Items) };
    inline DescribeApplicationSessionIdsResponseBody& setItems(const DescribeApplicationSessionIdsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApplicationSessionIdsResponseBody& setItems(DescribeApplicationSessionIdsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApplicationSessionIdsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeApplicationSessionIdsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationSessionIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeApplicationSessionIdsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    shared_ptr<DescribeApplicationSessionIdsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
