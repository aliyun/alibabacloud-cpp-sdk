// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDynamicImageJobsResponseBodyJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListDynamicImageJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDynamicImageJobsResponseBody() = default ;
    ListDynamicImageJobsResponseBody(const ListDynamicImageJobsResponseBody &) = default ;
    ListDynamicImageJobsResponseBody(ListDynamicImageJobsResponseBody &&) = default ;
    ListDynamicImageJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageJobsResponseBody() = default ;
    ListDynamicImageJobsResponseBody& operator=(const ListDynamicImageJobsResponseBody &) = default ;
    ListDynamicImageJobsResponseBody& operator=(ListDynamicImageJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr
        && return this->nextPageToken_ == nullptr && return this->requestId_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListDynamicImageJobsResponseBodyJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListDynamicImageJobsResponseBodyJobs>) };
    inline vector<ListDynamicImageJobsResponseBodyJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<ListDynamicImageJobsResponseBodyJobs>) };
    inline ListDynamicImageJobsResponseBody& setJobs(const vector<ListDynamicImageJobsResponseBodyJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListDynamicImageJobsResponseBody& setJobs(vector<ListDynamicImageJobsResponseBodyJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListDynamicImageJobsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicImageJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of jobs.
    std::shared_ptr<vector<ListDynamicImageJobsResponseBodyJobs>> jobs_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
