// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSynchronizationJobsResponseBodySynchronizationJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobs, synchronizationJobs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSynchronizationJobsResponseBody() = default ;
    ListSynchronizationJobsResponseBody(const ListSynchronizationJobsResponseBody &) = default ;
    ListSynchronizationJobsResponseBody(ListSynchronizationJobsResponseBody &&) = default ;
    ListSynchronizationJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBody() = default ;
    ListSynchronizationJobsResponseBody& operator=(const ListSynchronizationJobsResponseBody &) = default ;
    ListSynchronizationJobsResponseBody& operator=(ListSynchronizationJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->synchronizationJobs_ == nullptr && return this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSynchronizationJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSynchronizationJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // synchronizationJobs Field Functions 
    bool hasSynchronizationJobs() const { return this->synchronizationJobs_ != nullptr;};
    void deleteSynchronizationJobs() { this->synchronizationJobs_ = nullptr;};
    inline const vector<ListSynchronizationJobsResponseBodySynchronizationJobs> & synchronizationJobs() const { DARABONBA_PTR_GET_CONST(synchronizationJobs_, vector<ListSynchronizationJobsResponseBodySynchronizationJobs>) };
    inline vector<ListSynchronizationJobsResponseBodySynchronizationJobs> synchronizationJobs() { DARABONBA_PTR_GET(synchronizationJobs_, vector<ListSynchronizationJobsResponseBodySynchronizationJobs>) };
    inline ListSynchronizationJobsResponseBody& setSynchronizationJobs(const vector<ListSynchronizationJobsResponseBodySynchronizationJobs> & synchronizationJobs) { DARABONBA_PTR_SET_VALUE(synchronizationJobs_, synchronizationJobs) };
    inline ListSynchronizationJobsResponseBody& setSynchronizationJobs(vector<ListSynchronizationJobsResponseBodySynchronizationJobs> && synchronizationJobs) { DARABONBA_PTR_SET_RVALUE(synchronizationJobs_, synchronizationJobs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSynchronizationJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSynchronizationJobsResponseBodySynchronizationJobs>> synchronizationJobs_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
