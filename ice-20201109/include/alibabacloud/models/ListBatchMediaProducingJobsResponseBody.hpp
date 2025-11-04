// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBatchMediaProducingJobsResponseBodyEditingBatchJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListBatchMediaProducingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingBatchJobList, editingBatchJobList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingBatchJobList, editingBatchJobList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBatchMediaProducingJobsResponseBody() = default ;
    ListBatchMediaProducingJobsResponseBody(const ListBatchMediaProducingJobsResponseBody &) = default ;
    ListBatchMediaProducingJobsResponseBody(ListBatchMediaProducingJobsResponseBody &&) = default ;
    ListBatchMediaProducingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchMediaProducingJobsResponseBody() = default ;
    ListBatchMediaProducingJobsResponseBody& operator=(const ListBatchMediaProducingJobsResponseBody &) = default ;
    ListBatchMediaProducingJobsResponseBody& operator=(ListBatchMediaProducingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingBatchJobList_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // editingBatchJobList Field Functions 
    bool hasEditingBatchJobList() const { return this->editingBatchJobList_ != nullptr;};
    void deleteEditingBatchJobList() { this->editingBatchJobList_ = nullptr;};
    inline const vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList> & editingBatchJobList() const { DARABONBA_PTR_GET_CONST(editingBatchJobList_, vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList>) };
    inline vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList> editingBatchJobList() { DARABONBA_PTR_GET(editingBatchJobList_, vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList>) };
    inline ListBatchMediaProducingJobsResponseBody& setEditingBatchJobList(const vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList> & editingBatchJobList) { DARABONBA_PTR_SET_VALUE(editingBatchJobList_, editingBatchJobList) };
    inline ListBatchMediaProducingJobsResponseBody& setEditingBatchJobList(vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList> && editingBatchJobList) { DARABONBA_PTR_SET_RVALUE(editingBatchJobList_, editingBatchJobList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBatchMediaProducingJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBatchMediaProducingJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBatchMediaProducingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried quick video production jobs.
    std::shared_ptr<vector<ListBatchMediaProducingJobsResponseBodyEditingBatchJobList>> editingBatchJobList_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
