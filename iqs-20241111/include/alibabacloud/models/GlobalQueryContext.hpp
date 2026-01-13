// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALQUERYCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GLOBALQUERYCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GlobalQueryContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalQueryContext& obj) { 
      DARABONBA_PTR_TO_JSON(originalQuery, originalQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalQueryContext& obj) { 
      DARABONBA_PTR_FROM_JSON(originalQuery, originalQuery_);
    };
    GlobalQueryContext() = default ;
    GlobalQueryContext(const GlobalQueryContext &) = default ;
    GlobalQueryContext(GlobalQueryContext &&) = default ;
    GlobalQueryContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalQueryContext() = default ;
    GlobalQueryContext& operator=(const GlobalQueryContext &) = default ;
    GlobalQueryContext& operator=(GlobalQueryContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginalQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginalQuery& obj) { 
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(query, query_);
        DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
      };
      friend void from_json(const Darabonba::Json& j, OriginalQuery& obj) { 
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
      virtual bool empty() const override { return this->page_ == nullptr
        && this->query_ == nullptr && this->timeRange_ == nullptr; };
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
      shared_ptr<string> page_ {};
      shared_ptr<string> query_ {};
      shared_ptr<string> timeRange_ {};
    };

    virtual bool empty() const override { return this->originalQuery_ == nullptr; };
    // originalQuery Field Functions 
    bool hasOriginalQuery() const { return this->originalQuery_ != nullptr;};
    void deleteOriginalQuery() { this->originalQuery_ = nullptr;};
    inline const GlobalQueryContext::OriginalQuery & getOriginalQuery() const { DARABONBA_PTR_GET_CONST(originalQuery_, GlobalQueryContext::OriginalQuery) };
    inline GlobalQueryContext::OriginalQuery getOriginalQuery() { DARABONBA_PTR_GET(originalQuery_, GlobalQueryContext::OriginalQuery) };
    inline GlobalQueryContext& setOriginalQuery(const GlobalQueryContext::OriginalQuery & originalQuery) { DARABONBA_PTR_SET_VALUE(originalQuery_, originalQuery) };
    inline GlobalQueryContext& setOriginalQuery(GlobalQueryContext::OriginalQuery && originalQuery) { DARABONBA_PTR_SET_RVALUE(originalQuery_, originalQuery) };


  protected:
    shared_ptr<GlobalQueryContext::OriginalQuery> originalQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
