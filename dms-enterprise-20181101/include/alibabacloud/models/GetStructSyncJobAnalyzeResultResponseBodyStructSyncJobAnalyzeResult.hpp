// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList.hpp>
#include <alibabacloud/models/GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& obj) { 
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
      DARABONBA_PTR_TO_JSON(SummaryList, summaryList_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
      DARABONBA_PTR_FROM_JSON(SummaryList, summaryList_);
    };
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult &&) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& operator=(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& operator=(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultList_ != nullptr
        && this->summaryList_ != nullptr; };
    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList>) };
    inline vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList>) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& setResultList(const vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& setResultList(vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


    // summaryList Field Functions 
    bool hasSummaryList() const { return this->summaryList_ != nullptr;};
    void deleteSummaryList() { this->summaryList_ = nullptr;};
    inline const vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList> & summaryList() const { DARABONBA_PTR_GET_CONST(summaryList_, vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList>) };
    inline vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList> summaryList() { DARABONBA_PTR_GET(summaryList_, vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList>) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& setSummaryList(const vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList> & summaryList) { DARABONBA_PTR_SET_VALUE(summaryList_, summaryList) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult& setSummaryList(vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList> && summaryList) { DARABONBA_PTR_SET_RVALUE(summaryList_, summaryList) };


  protected:
    // The details of the analysis results.
    std::shared_ptr<vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList>> resultList_ = nullptr;
    // The statistics on the analysis results.
    std::shared_ptr<vector<Models::GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList>> summaryList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
