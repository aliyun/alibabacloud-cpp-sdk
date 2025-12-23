// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWQUERYQUERIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWQUERYQUERIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSlowQueryQueriesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowQueryQueriesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appQuery, appQuery_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowQueryQueriesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appQuery, appQuery_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    ListSlowQueryQueriesResponseBodyResult() = default ;
    ListSlowQueryQueriesResponseBodyResult(const ListSlowQueryQueriesResponseBodyResult &) = default ;
    ListSlowQueryQueriesResponseBodyResult(ListSlowQueryQueriesResponseBodyResult &&) = default ;
    ListSlowQueryQueriesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowQueryQueriesResponseBodyResult() = default ;
    ListSlowQueryQueriesResponseBodyResult& operator=(const ListSlowQueryQueriesResponseBodyResult &) = default ;
    ListSlowQueryQueriesResponseBodyResult& operator=(ListSlowQueryQueriesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appQuery_ == nullptr
        && return this->end_ == nullptr && return this->index_ == nullptr && return this->start_ == nullptr; };
    // appQuery Field Functions 
    bool hasAppQuery() const { return this->appQuery_ != nullptr;};
    void deleteAppQuery() { this->appQuery_ = nullptr;};
    inline string appQuery() const { DARABONBA_PTR_GET_DEFAULT(appQuery_, "") };
    inline ListSlowQueryQueriesResponseBodyResult& setAppQuery(string appQuery) { DARABONBA_PTR_SET_VALUE(appQuery_, appQuery) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline ListSlowQueryQueriesResponseBodyResult& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListSlowQueryQueriesResponseBodyResult& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline ListSlowQueryQueriesResponseBodyResult& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The content of the optimization suggestion for the query.
    std::shared_ptr<string> appQuery_ = nullptr;
    // The end of the time range that was queried.
    std::shared_ptr<int32_t> end_ = nullptr;
    // The ID of the optimization suggestion.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The beginning of the time range that was queried.
    std::shared_ptr<int32_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
