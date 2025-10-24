// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIASUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIASUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList(const QueryMediaListByURLResponseBodyMediaListMediaSummaryList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList(QueryMediaListByURLResponseBodyMediaListMediaSummaryList &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaSummaryList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList& operator=(const QueryMediaListByURLResponseBodyMediaListMediaSummaryList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSummaryList& operator=(QueryMediaListByURLResponseBodyMediaListMediaSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summary_ == nullptr; };
    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary> & summary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary>) };
    inline vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary> summary() { DARABONBA_PTR_GET(summary_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary>) };
    inline QueryMediaListByURLResponseBodyMediaListMediaSummaryList& setSummary(const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline QueryMediaListByURLResponseBodyMediaListMediaSummaryList& setSummary(vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSummaryListSummary>> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
