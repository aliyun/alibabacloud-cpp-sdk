// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaProducingJobsResponseBodyMediaProducingJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaProducingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaProducingJobList, mediaProducingJobList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaProducingJobList, mediaProducingJobList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaProducingJobsResponseBody() = default ;
    ListMediaProducingJobsResponseBody(const ListMediaProducingJobsResponseBody &) = default ;
    ListMediaProducingJobsResponseBody(ListMediaProducingJobsResponseBody &&) = default ;
    ListMediaProducingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaProducingJobsResponseBody() = default ;
    ListMediaProducingJobsResponseBody& operator=(const ListMediaProducingJobsResponseBody &) = default ;
    ListMediaProducingJobsResponseBody& operator=(ListMediaProducingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->mediaProducingJobList_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListMediaProducingJobsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaProducingJobList Field Functions 
    bool hasMediaProducingJobList() const { return this->mediaProducingJobList_ != nullptr;};
    void deleteMediaProducingJobList() { this->mediaProducingJobList_ = nullptr;};
    inline const vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> & mediaProducingJobList() const { DARABONBA_PTR_GET_CONST(mediaProducingJobList_, vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>) };
    inline vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> mediaProducingJobList() { DARABONBA_PTR_GET(mediaProducingJobList_, vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>) };
    inline ListMediaProducingJobsResponseBody& setMediaProducingJobList(const vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> & mediaProducingJobList) { DARABONBA_PTR_SET_VALUE(mediaProducingJobList_, mediaProducingJobList) };
    inline ListMediaProducingJobsResponseBody& setMediaProducingJobList(vector<ListMediaProducingJobsResponseBodyMediaProducingJobList> && mediaProducingJobList) { DARABONBA_PTR_SET_RVALUE(mediaProducingJobList_, mediaProducingJobList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaProducingJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaProducingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries returned.
    // 
    // Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The queried media editing and production jobs.
    std::shared_ptr<vector<ListMediaProducingJobsResponseBodyMediaProducingJobList>> mediaProducingJobList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
