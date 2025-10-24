// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobList.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJobList, analysisJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAnalysisJobIds, nonExistAnalysisJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJobList, analysisJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAnalysisJobIds, nonExistAnalysisJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAnalysisJobListResponseBody() = default ;
    QueryAnalysisJobListResponseBody(const QueryAnalysisJobListResponseBody &) = default ;
    QueryAnalysisJobListResponseBody(QueryAnalysisJobListResponseBody &&) = default ;
    QueryAnalysisJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBody() = default ;
    QueryAnalysisJobListResponseBody& operator=(const QueryAnalysisJobListResponseBody &) = default ;
    QueryAnalysisJobListResponseBody& operator=(QueryAnalysisJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisJobList_ == nullptr
        && return this->nonExistAnalysisJobIds_ == nullptr && return this->requestId_ == nullptr; };
    // analysisJobList Field Functions 
    bool hasAnalysisJobList() const { return this->analysisJobList_ != nullptr;};
    void deleteAnalysisJobList() { this->analysisJobList_ = nullptr;};
    inline const QueryAnalysisJobListResponseBodyAnalysisJobList & analysisJobList() const { DARABONBA_PTR_GET_CONST(analysisJobList_, QueryAnalysisJobListResponseBodyAnalysisJobList) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobList analysisJobList() { DARABONBA_PTR_GET(analysisJobList_, QueryAnalysisJobListResponseBodyAnalysisJobList) };
    inline QueryAnalysisJobListResponseBody& setAnalysisJobList(const QueryAnalysisJobListResponseBodyAnalysisJobList & analysisJobList) { DARABONBA_PTR_SET_VALUE(analysisJobList_, analysisJobList) };
    inline QueryAnalysisJobListResponseBody& setAnalysisJobList(QueryAnalysisJobListResponseBodyAnalysisJobList && analysisJobList) { DARABONBA_PTR_SET_RVALUE(analysisJobList_, analysisJobList) };


    // nonExistAnalysisJobIds Field Functions 
    bool hasNonExistAnalysisJobIds() const { return this->nonExistAnalysisJobIds_ != nullptr;};
    void deleteNonExistAnalysisJobIds() { this->nonExistAnalysisJobIds_ = nullptr;};
    inline const QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds & nonExistAnalysisJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAnalysisJobIds_, QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds nonExistAnalysisJobIds() { DARABONBA_PTR_GET(nonExistAnalysisJobIds_, QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBody& setNonExistAnalysisJobIds(const QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds & nonExistAnalysisJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAnalysisJobIds_, nonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBody& setNonExistAnalysisJobIds(QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds && nonExistAnalysisJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAnalysisJobIds_, nonExistAnalysisJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAnalysisJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of template analysis jobs.
    std::shared_ptr<QueryAnalysisJobListResponseBodyAnalysisJobList> analysisJobList_ = nullptr;
    // The message sent by Message Service (MNS) to notify the user of the job result.
    std::shared_ptr<QueryAnalysisJobListResponseBodyNonExistAnalysisJobIds> nonExistAnalysisJobIds_ = nullptr;
    // The status of the job. Valid values:
    // 
    // *   **Submitted**: The job has been submitted.
    // *   **Analyzing**: The job is being run.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
