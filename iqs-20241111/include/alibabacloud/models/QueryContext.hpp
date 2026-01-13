// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
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
      inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
      inline OriginalQuery& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


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
      shared_ptr<string> page_ {};
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

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
