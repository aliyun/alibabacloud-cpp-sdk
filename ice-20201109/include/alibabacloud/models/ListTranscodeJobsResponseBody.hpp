// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTranscodeJobsResponseBody() = default ;
    ListTranscodeJobsResponseBody(const ListTranscodeJobsResponseBody &) = default ;
    ListTranscodeJobsResponseBody(ListTranscodeJobsResponseBody &&) = default ;
    ListTranscodeJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBody() = default ;
    ListTranscodeJobsResponseBody& operator=(const ListTranscodeJobsResponseBody &) = default ;
    ListTranscodeJobsResponseBody& operator=(ListTranscodeJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListTranscodeJobsResponseBodyJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListTranscodeJobsResponseBodyJobs>) };
    inline vector<ListTranscodeJobsResponseBodyJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<ListTranscodeJobsResponseBodyJobs>) };
    inline ListTranscodeJobsResponseBody& setJobs(const vector<ListTranscodeJobsResponseBodyJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListTranscodeJobsResponseBody& setJobs(vector<ListTranscodeJobsResponseBodyJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListTranscodeJobsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscodeJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of jobs.
    std::shared_ptr<vector<ListTranscodeJobsResponseBodyJobs>> jobs_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. The token of the next page is returned after you call this operation for the first time.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
