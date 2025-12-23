// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWQUERYCATEGORIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWQUERYCATEGORIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSlowQueryCategoriesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowQueryCategoriesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(analyzeStatus, analyzeStatus_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowQueryCategoriesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzeStatus, analyzeStatus_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    ListSlowQueryCategoriesResponseBodyResult() = default ;
    ListSlowQueryCategoriesResponseBodyResult(const ListSlowQueryCategoriesResponseBodyResult &) = default ;
    ListSlowQueryCategoriesResponseBodyResult(ListSlowQueryCategoriesResponseBodyResult &&) = default ;
    ListSlowQueryCategoriesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowQueryCategoriesResponseBodyResult() = default ;
    ListSlowQueryCategoriesResponseBodyResult& operator=(const ListSlowQueryCategoriesResponseBodyResult &) = default ;
    ListSlowQueryCategoriesResponseBodyResult& operator=(ListSlowQueryCategoriesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzeStatus_ == nullptr
        && return this->end_ == nullptr && return this->start_ == nullptr; };
    // analyzeStatus Field Functions 
    bool hasAnalyzeStatus() const { return this->analyzeStatus_ != nullptr;};
    void deleteAnalyzeStatus() { this->analyzeStatus_ = nullptr;};
    inline string analyzeStatus() const { DARABONBA_PTR_GET_DEFAULT(analyzeStatus_, "") };
    inline ListSlowQueryCategoriesResponseBodyResult& setAnalyzeStatus(string analyzeStatus) { DARABONBA_PTR_SET_VALUE(analyzeStatus_, analyzeStatus) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline ListSlowQueryCategoriesResponseBodyResult& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline ListSlowQueryCategoriesResponseBodyResult& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The status of the analysis. Valid values:
    // 
    // *   PENDING: preparing
    // *   SUCCESS: succeeded
    // *   RUNNING: running
    // *   FAILED: failed
    // *   N/A: unknown
    std::shared_ptr<string> analyzeStatus_ = nullptr;
    // The timestamp that indicates the end of the time range to query.
    std::shared_ptr<int32_t> end_ = nullptr;
    // The timestamp that indicates the beginning of the time range to query.
    std::shared_ptr<int32_t> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
