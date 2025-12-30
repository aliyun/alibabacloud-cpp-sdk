// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIACONVERTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIACONVERTJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MediaConvertJobWithoutDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaConvertJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaConvertJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaConvertJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMediaConvertJobsResponseBody() = default ;
    ListMediaConvertJobsResponseBody(const ListMediaConvertJobsResponseBody &) = default ;
    ListMediaConvertJobsResponseBody(ListMediaConvertJobsResponseBody &&) = default ;
    ListMediaConvertJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaConvertJobsResponseBody() = default ;
    ListMediaConvertJobsResponseBody& operator=(const ListMediaConvertJobsResponseBody &) = default ;
    ListMediaConvertJobsResponseBody& operator=(ListMediaConvertJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<MediaConvertJobWithoutDetail> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<MediaConvertJobWithoutDetail>) };
    inline vector<MediaConvertJobWithoutDetail> getJobs() { DARABONBA_PTR_GET(jobs_, vector<MediaConvertJobWithoutDetail>) };
    inline ListMediaConvertJobsResponseBody& setJobs(const vector<MediaConvertJobWithoutDetail> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListMediaConvertJobsResponseBody& setJobs(vector<MediaConvertJobWithoutDetail> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListMediaConvertJobsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaConvertJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tasks.
    shared_ptr<vector<MediaConvertJobWithoutDetail>> jobs_ {};
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> nextPageToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
