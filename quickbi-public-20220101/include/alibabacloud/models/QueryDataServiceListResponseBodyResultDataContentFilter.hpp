// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBodyResultDataContentFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBodyResultDataContentFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBodyResultDataContentFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryDataServiceListResponseBodyResultDataContentFilter() = default ;
    QueryDataServiceListResponseBodyResultDataContentFilter(const QueryDataServiceListResponseBodyResultDataContentFilter &) = default ;
    QueryDataServiceListResponseBodyResultDataContentFilter(QueryDataServiceListResponseBodyResultDataContentFilter &&) = default ;
    QueryDataServiceListResponseBodyResultDataContentFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBodyResultDataContentFilter() = default ;
    QueryDataServiceListResponseBodyResultDataContentFilter& operator=(const QueryDataServiceListResponseBodyResultDataContentFilter &) = default ;
    QueryDataServiceListResponseBodyResultDataContentFilter& operator=(QueryDataServiceListResponseBodyResultDataContentFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filters_ != nullptr
        && this->logicalOperator_ != nullptr && this->type_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Darabonba::Json> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> filters() { DARABONBA_PTR_GET(filters_, vector<Darabonba::Json>) };
    inline QueryDataServiceListResponseBodyResultDataContentFilter& setFilters(const vector<Darabonba::Json> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline QueryDataServiceListResponseBodyResultDataContentFilter& setFilters(vector<Darabonba::Json> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string logicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentFilter& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentFilter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Combined conditions.
    std::shared_ptr<vector<Darabonba::Json>> filters_ = nullptr;
    // Logical relationship between multiple SQL text keywords.
    // 
    // - **or**: or
    // - **and**: and
    std::shared_ptr<string> logicalOperator_ = nullptr;
    // Type.
    // 
    // - basic: basic
    // - combined: complex
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
