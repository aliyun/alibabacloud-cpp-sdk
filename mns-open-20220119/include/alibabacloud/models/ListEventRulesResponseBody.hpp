// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventMatchRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListEventRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEventRulesResponseBody() = default ;
    ListEventRulesResponseBody(const ListEventRulesResponseBody &) = default ;
    ListEventRulesResponseBody(ListEventRulesResponseBody &&) = default ;
    ListEventRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventRulesResponseBody() = default ;
    ListEventRulesResponseBody& operator=(const ListEventRulesResponseBody &) = default ;
    ListEventRulesResponseBody& operator=(ListEventRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Pages, pages_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Pages, pages_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
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
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(DeliveryMode, deliveryMode_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
          DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Subscriptions, subscriptions_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(DeliveryMode, deliveryMode_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
          DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Subscriptions, subscriptions_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Subscriptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Subscriptions& obj) { 
            DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
          };
          friend void from_json(const Darabonba::Json& j, Subscriptions& obj) { 
            DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
          };
          Subscriptions() = default ;
          Subscriptions(const Subscriptions &) = default ;
          Subscriptions(Subscriptions &&) = default ;
          Subscriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Subscriptions() = default ;
          Subscriptions& operator=(const Subscriptions &) = default ;
          Subscriptions& operator=(Subscriptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
          // endpointType Field Functions 
          bool hasEndpointType() const { return this->endpointType_ != nullptr;};
          void deleteEndpointType() { this->endpointType_ = nullptr;};
          inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
          inline Subscriptions& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


          // endpointValue Field Functions 
          bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
          void deleteEndpointValue() { this->endpointValue_ = nullptr;};
          inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
          inline Subscriptions& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


        protected:
          // The endpoint type.
          shared_ptr<string> endpointType_ {};
          // The actual value of the endpoint.
          shared_ptr<string> endpointValue_ {};
        };

        class Endpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Endpoint& obj) { 
            DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_TO_JSON(EndpointValue, endpointValue_);
          };
          friend void from_json(const Darabonba::Json& j, Endpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_FROM_JSON(EndpointValue, endpointValue_);
          };
          Endpoint() = default ;
          Endpoint(const Endpoint &) = default ;
          Endpoint(Endpoint &&) = default ;
          Endpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Endpoint() = default ;
          Endpoint& operator=(const Endpoint &) = default ;
          Endpoint& operator=(Endpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endpointType_ == nullptr
        && this->endpointValue_ == nullptr; };
          // endpointType Field Functions 
          bool hasEndpointType() const { return this->endpointType_ != nullptr;};
          void deleteEndpointType() { this->endpointType_ = nullptr;};
          inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
          inline Endpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


          // endpointValue Field Functions 
          bool hasEndpointValue() const { return this->endpointValue_ != nullptr;};
          void deleteEndpointValue() { this->endpointValue_ = nullptr;};
          inline string getEndpointValue() const { DARABONBA_PTR_GET_DEFAULT(endpointValue_, "") };
          inline Endpoint& setEndpointValue(string endpointValue) { DARABONBA_PTR_SET_VALUE(endpointValue_, endpointValue) };


        protected:
          // The endpoint type. Valid values:
          // 
          // - **topic**: A topic can deliver messages to multiple subscribers. You can add or remove subscribers later.
          // 
          // - **queue**: Messages are delivered directly to a queue. This simplifies the delivery path, but you cannot add new subscribers later.
          shared_ptr<string> endpointType_ {};
          // The actual value of the endpoint.
          shared_ptr<string> endpointValue_ {};
        };

        virtual bool empty() const override { return this->deliveryMode_ == nullptr
        && this->endpoint_ == nullptr && this->eventTypes_ == nullptr && this->matchRules_ == nullptr && this->ruleName_ == nullptr && this->subscriptions_ == nullptr
        && this->topicName_ == nullptr; };
        // deliveryMode Field Functions 
        bool hasDeliveryMode() const { return this->deliveryMode_ != nullptr;};
        void deleteDeliveryMode() { this->deliveryMode_ = nullptr;};
        inline string getDeliveryMode() const { DARABONBA_PTR_GET_DEFAULT(deliveryMode_, "") };
        inline PageData& setDeliveryMode(string deliveryMode) { DARABONBA_PTR_SET_VALUE(deliveryMode_, deliveryMode) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline const PageData::Endpoint & getEndpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, PageData::Endpoint) };
        inline PageData::Endpoint getEndpoint() { DARABONBA_PTR_GET(endpoint_, PageData::Endpoint) };
        inline PageData& setEndpoint(const PageData::Endpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
        inline PageData& setEndpoint(PageData::Endpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


        // eventTypes Field Functions 
        bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
        void deleteEventTypes() { this->eventTypes_ = nullptr;};
        inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
        inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
        inline PageData& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
        inline PageData& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


        // matchRules Field Functions 
        bool hasMatchRules() const { return this->matchRules_ != nullptr;};
        void deleteMatchRules() { this->matchRules_ = nullptr;};
        inline const vector<vector<EventMatchRule>> & getMatchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<EventMatchRule>>) };
        inline vector<vector<EventMatchRule>> getMatchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<EventMatchRule>>) };
        inline PageData& setMatchRules(const vector<vector<EventMatchRule>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
        inline PageData& setMatchRules(vector<vector<EventMatchRule>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline PageData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // subscriptions Field Functions 
        bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
        void deleteSubscriptions() { this->subscriptions_ = nullptr;};
        inline const vector<PageData::Subscriptions> & getSubscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<PageData::Subscriptions>) };
        inline vector<PageData::Subscriptions> getSubscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<PageData::Subscriptions>) };
        inline PageData& setSubscriptions(const vector<PageData::Subscriptions> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
        inline PageData& setSubscriptions(vector<PageData::Subscriptions> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline PageData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      protected:
        // This parameter is deprecated.
        shared_ptr<string> deliveryMode_ {};
        // The endpoint of the subscription.
        shared_ptr<PageData::Endpoint> endpoint_ {};
        // The list of event types.
        shared_ptr<vector<string>> eventTypes_ {};
        // The event matching rules. The rules have an OR relationship.
        shared_ptr<vector<vector<EventMatchRule>>> matchRules_ {};
        // The name of the event notification rule.
        shared_ptr<string> ruleName_ {};
        // The subscribers. A maximum of 20 entries are returned. If there are more subscribers, see [List Subscriptions](https://help.aliyun.com/document_detail/2804757.html).
        shared_ptr<vector<PageData::Subscriptions>> subscriptions_ {};
        // The name of the topic.
        shared_ptr<string> topicName_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageData_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pages_ == nullptr
        && this->size_ == nullptr && this->total_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Data::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Data::PageData>) };
      inline vector<Data::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Data::PageData>) };
      inline Data& setPageData(const vector<Data::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Data& setPageData(vector<Data::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
      inline Data& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pages Field Functions 
      bool hasPages() const { return this->pages_ != nullptr;};
      void deletePages() { this->pages_ = nullptr;};
      inline int64_t getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
      inline Data& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // This parameter is deprecated. The maximum number of entries is based on Total.
      shared_ptr<int32_t> maxResults_ {};
      // This parameter is deprecated. Paged queries are based on PageNum.
      shared_ptr<string> nextToken_ {};
      // The data entries.
      shared_ptr<vector<Data::PageData>> pageData_ {};
      // The page number of the returned results.
      shared_ptr<int64_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of pages.
      shared_ptr<int64_t> pages_ {};
      // The number of entries on the current page.
      shared_ptr<int64_t> size_ {};
      // The total number of entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListEventRulesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEventRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEventRulesResponseBody::Data) };
    inline ListEventRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEventRulesResponseBody::Data) };
    inline ListEventRulesResponseBody& setData(const ListEventRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEventRulesResponseBody& setData(ListEventRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEventRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEventRulesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEventRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int64_t> code_ {};
    // The response data.
    shared_ptr<ListEventRulesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the response.
    shared_ptr<string> status_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
