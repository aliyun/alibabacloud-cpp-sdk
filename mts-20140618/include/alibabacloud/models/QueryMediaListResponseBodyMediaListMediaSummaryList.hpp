// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaSummaryListSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    QueryMediaListResponseBodyMediaListMediaSummaryList() = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryList(const QueryMediaListResponseBodyMediaListMediaSummaryList &) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryList(QueryMediaListResponseBodyMediaListMediaSummaryList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaSummaryList() = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryList& operator=(const QueryMediaListResponseBodyMediaListMediaSummaryList &) = default ;
    QueryMediaListResponseBodyMediaListMediaSummaryList& operator=(QueryMediaListResponseBodyMediaListMediaSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summary_ == nullptr; };
    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary>) };
    inline QueryMediaListResponseBodyMediaListMediaSummaryList& setSummary(const vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline QueryMediaListResponseBodyMediaListMediaSummaryList& setSummary(vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaSummaryListSummary>> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
