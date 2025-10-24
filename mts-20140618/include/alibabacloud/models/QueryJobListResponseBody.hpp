// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyNonExistJobIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(NonExistJobIds, nonExistJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryJobListResponseBody() = default ;
    QueryJobListResponseBody(const QueryJobListResponseBody &) = default ;
    QueryJobListResponseBody(QueryJobListResponseBody &&) = default ;
    QueryJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBody() = default ;
    QueryJobListResponseBody& operator=(const QueryJobListResponseBody &) = default ;
    QueryJobListResponseBody& operator=(QueryJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobList_ == nullptr
        && return this->nonExistJobIds_ == nullptr && return this->requestId_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const QueryJobListResponseBodyJobList & jobList() const { DARABONBA_PTR_GET_CONST(jobList_, QueryJobListResponseBodyJobList) };
    inline QueryJobListResponseBodyJobList jobList() { DARABONBA_PTR_GET(jobList_, QueryJobListResponseBodyJobList) };
    inline QueryJobListResponseBody& setJobList(const QueryJobListResponseBodyJobList & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline QueryJobListResponseBody& setJobList(QueryJobListResponseBodyJobList && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // nonExistJobIds Field Functions 
    bool hasNonExistJobIds() const { return this->nonExistJobIds_ != nullptr;};
    void deleteNonExistJobIds() { this->nonExistJobIds_ = nullptr;};
    inline const QueryJobListResponseBodyNonExistJobIds & nonExistJobIds() const { DARABONBA_PTR_GET_CONST(nonExistJobIds_, QueryJobListResponseBodyNonExistJobIds) };
    inline QueryJobListResponseBodyNonExistJobIds nonExistJobIds() { DARABONBA_PTR_GET(nonExistJobIds_, QueryJobListResponseBodyNonExistJobIds) };
    inline QueryJobListResponseBody& setNonExistJobIds(const QueryJobListResponseBodyNonExistJobIds & nonExistJobIds) { DARABONBA_PTR_SET_VALUE(nonExistJobIds_, nonExistJobIds) };
    inline QueryJobListResponseBody& setNonExistJobIds(QueryJobListResponseBodyNonExistJobIds && nonExistJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistJobIds_, nonExistJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The transcoding jobs.
    std::shared_ptr<QueryJobListResponseBodyJobList> jobList_ = nullptr;
    // The list of nonexistent job IDs. If all queried job IDs exist, the response does not contain this parameter.
    std::shared_ptr<QueryJobListResponseBodyNonExistJobIds> nonExistJobIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
