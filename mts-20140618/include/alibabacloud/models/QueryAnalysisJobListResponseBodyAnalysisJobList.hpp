// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBodyAnalysisJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBodyAnalysisJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJob, analysisJob_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBodyAnalysisJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJob, analysisJob_);
    };
    QueryAnalysisJobListResponseBodyAnalysisJobList() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobList(const QueryAnalysisJobListResponseBodyAnalysisJobList &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobList(QueryAnalysisJobListResponseBodyAnalysisJobList &&) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBodyAnalysisJobList() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobList& operator=(const QueryAnalysisJobListResponseBodyAnalysisJobList &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobList& operator=(QueryAnalysisJobListResponseBodyAnalysisJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisJob_ == nullptr; };
    // analysisJob Field Functions 
    bool hasAnalysisJob() const { return this->analysisJob_ != nullptr;};
    void deleteAnalysisJob() { this->analysisJob_ = nullptr;};
    inline const vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob> & analysisJob() const { DARABONBA_PTR_GET_CONST(analysisJob_, vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob>) };
    inline vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob> analysisJob() { DARABONBA_PTR_GET(analysisJob_, vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob>) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobList& setAnalysisJob(const vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob> & analysisJob) { DARABONBA_PTR_SET_VALUE(analysisJob_, analysisJob) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobList& setAnalysisJob(vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob> && analysisJob) { DARABONBA_PTR_SET_RVALUE(analysisJob_, analysisJob) };


  protected:
    std::shared_ptr<vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJob>> analysisJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
