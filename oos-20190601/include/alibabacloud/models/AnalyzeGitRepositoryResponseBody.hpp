// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANALYZEGITREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeGitRepositoryResponseBodyAnalysisResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class AnalyzeGitRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisResults, analysisResults_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisResults, analysisResults_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AnalyzeGitRepositoryResponseBody() = default ;
    AnalyzeGitRepositoryResponseBody(const AnalyzeGitRepositoryResponseBody &) = default ;
    AnalyzeGitRepositoryResponseBody(AnalyzeGitRepositoryResponseBody &&) = default ;
    AnalyzeGitRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeGitRepositoryResponseBody() = default ;
    AnalyzeGitRepositoryResponseBody& operator=(const AnalyzeGitRepositoryResponseBody &) = default ;
    AnalyzeGitRepositoryResponseBody& operator=(AnalyzeGitRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisResults_ == nullptr
        && return this->count_ == nullptr && return this->requestId_ == nullptr; };
    // analysisResults Field Functions 
    bool hasAnalysisResults() const { return this->analysisResults_ != nullptr;};
    void deleteAnalysisResults() { this->analysisResults_ = nullptr;};
    inline const vector<AnalyzeGitRepositoryResponseBodyAnalysisResults> & analysisResults() const { DARABONBA_PTR_GET_CONST(analysisResults_, vector<AnalyzeGitRepositoryResponseBodyAnalysisResults>) };
    inline vector<AnalyzeGitRepositoryResponseBodyAnalysisResults> analysisResults() { DARABONBA_PTR_GET(analysisResults_, vector<AnalyzeGitRepositoryResponseBodyAnalysisResults>) };
    inline AnalyzeGitRepositoryResponseBody& setAnalysisResults(const vector<AnalyzeGitRepositoryResponseBodyAnalysisResults> & analysisResults) { DARABONBA_PTR_SET_VALUE(analysisResults_, analysisResults) };
    inline AnalyzeGitRepositoryResponseBody& setAnalysisResults(vector<AnalyzeGitRepositoryResponseBodyAnalysisResults> && analysisResults) { DARABONBA_PTR_SET_RVALUE(analysisResults_, analysisResults) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline AnalyzeGitRepositoryResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnalyzeGitRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<AnalyzeGitRepositoryResponseBodyAnalysisResults>> analysisResults_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
