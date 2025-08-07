// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTEXTORIGINALQUERY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTEXTORIGINALQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class QueryContextOriginalQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContextOriginalQuery& obj) { 
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(timeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContextOriginalQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(timeRange, timeRange_);
    };
    QueryContextOriginalQuery() = default ;
    QueryContextOriginalQuery(const QueryContextOriginalQuery &) = default ;
    QueryContextOriginalQuery(QueryContextOriginalQuery &&) = default ;
    QueryContextOriginalQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContextOriginalQuery() = default ;
    QueryContextOriginalQuery& operator=(const QueryContextOriginalQuery &) = default ;
    QueryContextOriginalQuery& operator=(QueryContextOriginalQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->industry_ != nullptr
        && this->page_ != nullptr && this->query_ != nullptr && this->timeRange_ != nullptr; };
    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline QueryContextOriginalQuery& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string page() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline QueryContextOriginalQuery& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline QueryContextOriginalQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline string timeRange() const { DARABONBA_PTR_GET_DEFAULT(timeRange_, "") };
    inline QueryContextOriginalQuery& setTimeRange(string timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };


  protected:
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<string> page_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
