// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMPLECONSISTENCYJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMPLECONSISTENCYJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSampleConsistencyJobsResponseBodySampleConsistencyJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListSampleConsistencyJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSampleConsistencyJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleConsistencyJobs, sampleConsistencyJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSampleConsistencyJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleConsistencyJobs, sampleConsistencyJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSampleConsistencyJobsResponseBody() = default ;
    ListSampleConsistencyJobsResponseBody(const ListSampleConsistencyJobsResponseBody &) = default ;
    ListSampleConsistencyJobsResponseBody(ListSampleConsistencyJobsResponseBody &&) = default ;
    ListSampleConsistencyJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSampleConsistencyJobsResponseBody() = default ;
    ListSampleConsistencyJobsResponseBody& operator=(const ListSampleConsistencyJobsResponseBody &) = default ;
    ListSampleConsistencyJobsResponseBody& operator=(ListSampleConsistencyJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sampleConsistencyJobs_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSampleConsistencyJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleConsistencyJobs Field Functions 
    bool hasSampleConsistencyJobs() const { return this->sampleConsistencyJobs_ != nullptr;};
    void deleteSampleConsistencyJobs() { this->sampleConsistencyJobs_ = nullptr;};
    inline const vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs> & sampleConsistencyJobs() const { DARABONBA_PTR_GET_CONST(sampleConsistencyJobs_, vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs>) };
    inline vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs> sampleConsistencyJobs() { DARABONBA_PTR_GET(sampleConsistencyJobs_, vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs>) };
    inline ListSampleConsistencyJobsResponseBody& setSampleConsistencyJobs(const vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs> & sampleConsistencyJobs) { DARABONBA_PTR_SET_VALUE(sampleConsistencyJobs_, sampleConsistencyJobs) };
    inline ListSampleConsistencyJobsResponseBody& setSampleConsistencyJobs(vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs> && sampleConsistencyJobs) { DARABONBA_PTR_SET_RVALUE(sampleConsistencyJobs_, sampleConsistencyJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSampleConsistencyJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSampleConsistencyJobsResponseBodySampleConsistencyJobs>> sampleConsistencyJobs_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
