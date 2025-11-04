// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDNAJOBLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDNAJobListResponseBodyJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryDNAJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDNAJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDNAJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDNAJobListResponseBody() = default ;
    QueryDNAJobListResponseBody(const QueryDNAJobListResponseBody &) = default ;
    QueryDNAJobListResponseBody(QueryDNAJobListResponseBody &&) = default ;
    QueryDNAJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDNAJobListResponseBody() = default ;
    QueryDNAJobListResponseBody& operator=(const QueryDNAJobListResponseBody &) = default ;
    QueryDNAJobListResponseBody& operator=(QueryDNAJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobList_ == nullptr
        && return this->requestId_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const vector<QueryDNAJobListResponseBodyJobList> & jobList() const { DARABONBA_PTR_GET_CONST(jobList_, vector<QueryDNAJobListResponseBodyJobList>) };
    inline vector<QueryDNAJobListResponseBodyJobList> jobList() { DARABONBA_PTR_GET(jobList_, vector<QueryDNAJobListResponseBodyJobList>) };
    inline QueryDNAJobListResponseBody& setJobList(const vector<QueryDNAJobListResponseBodyJobList> & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline QueryDNAJobListResponseBody& setJobList(vector<QueryDNAJobListResponseBodyJobList> && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDNAJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried media fingerprint analysis jobs.
    std::shared_ptr<vector<QueryDNAJobListResponseBodyJobList>> jobList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
