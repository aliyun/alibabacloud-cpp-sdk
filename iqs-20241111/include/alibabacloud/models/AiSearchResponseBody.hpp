// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AiSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AiSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AiSearchResponseBody() = default ;
    AiSearchResponseBody(const AiSearchResponseBody &) = default ;
    AiSearchResponseBody(AiSearchResponseBody &&) = default ;
    AiSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiSearchResponseBody() = default ;
    AiSearchResponseBody& operator=(const AiSearchResponseBody &) = default ;
    AiSearchResponseBody& operator=(AiSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(event, event_);
        DARABONBA_PTR_TO_JSON(eventId, eventId_);
        DARABONBA_PTR_TO_JSON(queryContext, queryContext_);
        DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(event, event_);
        DARABONBA_PTR_FROM_JSON(eventId, eventId_);
        DARABONBA_PTR_FROM_JSON(queryContext, queryContext_);
        DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
      };
      Header() = default ;
      Header(const Header &) = default ;
      Header(Header &&) = default ;
      Header(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Header() = default ;
      Header& operator=(const Header &) = default ;
      Header& operator=(Header &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryContext& obj) { 
          DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
          DARABONBA_PTR_TO_JSON(rewrite, rewrite_);
        };
        friend void from_json(const Darabonba::Json& j, QueryContext& obj) { 
          DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
          DARABONBA_PTR_FROM_JSON(rewrite, rewrite_);
        };
        QueryContext() = default ;
        QueryContext(const QueryContext &) = default ;
        QueryContext(QueryContext &&) = default ;
        QueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QueryContext() = default ;
        QueryContext& operator=(const QueryContext &) = default ;
        QueryContext& operator=(QueryContext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rewrite : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rewrite& obj) { 
            DARABONBA_PTR_TO_JSON(enabled, enabled_);
            DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
          };
          friend void from_json(const Darabonba::Json& j, Rewrite& obj) { 
            DARABONBA_PTR_FROM_JSON(enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
          };
          Rewrite() = default ;
          Rewrite(const Rewrite &) = default ;
          Rewrite(Rewrite &&) = default ;
          Rewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rewrite() = default ;
          Rewrite& operator=(const Rewrite &) = default ;
          Rewrite& operator=(Rewrite &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->enabled_ == nullptr
        && this->timeRange_ == nullptr; };
          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Rewrite& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // timeRange Field Functions 
          bool hasTimeRange() const { return this->timeRange_ != nullptr;};
          void deleteTimeRange() { this->timeRange_ = nullptr;};
          inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
          inline Rewrite& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


        protected:
          shared_ptr<bool> enabled_ {};
          shared_ptr<string> timeRange_ {};
        };

        class OriginalQuery : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OriginalQuery& obj) { 
            DARABONBA_PTR_TO_JSON(industry, industry_);
            DARABONBA_PTR_TO_JSON(page, page_);
            DARABONBA_PTR_TO_JSON(query, query_);
            DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
          };
          friend void from_json(const Darabonba::Json& j, OriginalQuery& obj) { 
            DARABONBA_PTR_FROM_JSON(industry, industry_);
            DARABONBA_PTR_FROM_JSON(page, page_);
            DARABONBA_PTR_FROM_JSON(query, query_);
            DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
          };
          OriginalQuery() = default ;
          OriginalQuery(const OriginalQuery &) = default ;
          OriginalQuery(OriginalQuery &&) = default ;
          OriginalQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OriginalQuery() = default ;
          OriginalQuery& operator=(const OriginalQuery &) = default ;
          OriginalQuery& operator=(OriginalQuery &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->industry_ == nullptr
        && this->page_ == nullptr && this->query_ == nullptr && this->timeRange_ == nullptr; };
          // industry Field Functions 
          bool hasIndustry() const { return this->industry_ != nullptr;};
          void deleteIndustry() { this->industry_ = nullptr;};
          inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
          inline OriginalQuery& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


          // page Field Functions 
          bool hasPage() const { return this->page_ != nullptr;};
          void deletePage() { this->page_ = nullptr;};
          inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
          inline OriginalQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


          // query Field Functions 
          bool hasQuery() const { return this->query_ != nullptr;};
          void deleteQuery() { this->query_ = nullptr;};
          inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
          inline OriginalQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


          // timeRange Field Functions 
          bool hasTimeRange() const { return this->timeRange_ != nullptr;};
          void deleteTimeRange() { this->timeRange_ = nullptr;};
          inline string getTimeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
          inline OriginalQuery& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


        protected:
          shared_ptr<string> industry_ {};
          shared_ptr<int32_t> page_ {};
          shared_ptr<string> query_ {};
          shared_ptr<string> timeRange_ {};
        };

        virtual bool empty() const override { return this->originalQuery_ == nullptr
        && this->rewrite_ == nullptr; };
        // originalQuery Field Functions 
        bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
        void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
        inline const QueryContext::OriginalQuery & getOriginalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, QueryContext::OriginalQuery) };
        inline QueryContext::OriginalQuery getOriginalQuery() { DARABONBA_PTR_GET(originalQuery_, QueryContext::OriginalQuery) };
        inline QueryContext& setOriginalQuery(const QueryContext::OriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
        inline QueryContext& setOriginalQuery(QueryContext::OriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


        // rewrite Field Functions 
        bool hasRewrite() const { return this->rewrite_ != nullptr;};
        void deleteRewrite() { this->rewrite_ = nullptr;};
        inline const QueryContext::Rewrite & getRewrite() const { DARABONBA_PTR_GET_CONST(rewrite_, QueryContext::Rewrite) };
        inline QueryContext::Rewrite getRewrite() { DARABONBA_PTR_GET(rewrite_, QueryContext::Rewrite) };
        inline QueryContext& setRewrite(const QueryContext::Rewrite & rewrite) { DARABONBA_PTR_SET_VALUE(rewrite_, rewrite) };
        inline QueryContext& setRewrite(QueryContext::Rewrite && rewrite) { DARABONBA_PTR_SET_RVALUE(rewrite_, rewrite) };


      protected:
        shared_ptr<QueryContext::OriginalQuery> originalQuery_ {};
        shared_ptr<QueryContext::Rewrite> rewrite_ {};
      };

      virtual bool empty() const override { return this->event_ == nullptr
        && this->eventId_ == nullptr && this->queryContext_ == nullptr && this->responseTime_ == nullptr; };
      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Header& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // queryContext Field Functions 
      bool hasQueryContext() const { return this->queryContext_ != nullptr;};
      void deleteQueryContext() { this->queryContext_ = nullptr;};
      inline const Header::QueryContext & getQueryContext() const { DARABONBA_PTR_GET_CONST(queryContext_, Header::QueryContext) };
      inline Header::QueryContext getQueryContext() { DARABONBA_PTR_GET(queryContext_, Header::QueryContext) };
      inline Header& setQueryContext(const Header::QueryContext & queryContext) { DARABONBA_PTR_SET_VALUE(queryContext_, queryContext) };
      inline Header& setQueryContext(Header::QueryContext && queryContext) { DARABONBA_PTR_SET_RVALUE(queryContext_, queryContext) };


      // responseTime Field Functions 
      bool hasResponseTime() const { return this->responseTime_ != nullptr;};
      void deleteResponseTime() { this->responseTime_ = nullptr;};
      inline int64_t getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
      inline Header& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


    protected:
      shared_ptr<string> event_ {};
      shared_ptr<string> eventId_ {};
      shared_ptr<Header::QueryContext> queryContext_ {};
      shared_ptr<int64_t> responseTime_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const AiSearchResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, AiSearchResponseBody::Header) };
    inline AiSearchResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, AiSearchResponseBody::Header) };
    inline AiSearchResponseBody& setHeader(const AiSearchResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline AiSearchResponseBody& setHeader(AiSearchResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline AiSearchResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AiSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<AiSearchResponseBody::Header> header_ {};
    shared_ptr<string> payload_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
