// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTSTATISTICALINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTSTATISTICALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpaceRecentListStatisticalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpaceRecentListStatisticalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpaceRecentListStatisticalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    QueryDentryResponseBodySpaceRecentListStatisticalInfo() = default ;
    QueryDentryResponseBodySpaceRecentListStatisticalInfo(const QueryDentryResponseBodySpaceRecentListStatisticalInfo &) = default ;
    QueryDentryResponseBodySpaceRecentListStatisticalInfo(QueryDentryResponseBodySpaceRecentListStatisticalInfo &&) = default ;
    QueryDentryResponseBodySpaceRecentListStatisticalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpaceRecentListStatisticalInfo() = default ;
    QueryDentryResponseBodySpaceRecentListStatisticalInfo& operator=(const QueryDentryResponseBodySpaceRecentListStatisticalInfo &) = default ;
    QueryDentryResponseBodySpaceRecentListStatisticalInfo& operator=(QueryDentryResponseBodySpaceRecentListStatisticalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wordCount_ != nullptr; };
    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline int64_t wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
    inline QueryDentryResponseBodySpaceRecentListStatisticalInfo& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    std::shared_ptr<int64_t> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
