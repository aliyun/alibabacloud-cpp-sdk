// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListAsynJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsynJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsynJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAsynJobsResponseBody() = default ;
    ListAsynJobsResponseBody(const ListAsynJobsResponseBody &) = default ;
    ListAsynJobsResponseBody(ListAsynJobsResponseBody &&) = default ;
    ListAsynJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsynJobsResponseBody() = default ;
    ListAsynJobsResponseBody& operator=(const ListAsynJobsResponseBody &) = default ;
    ListAsynJobsResponseBody& operator=(ListAsynJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Jobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Jobs() = default ;
      Jobs(const Jobs &) = default ;
      Jobs(Jobs &&) = default ;
      Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Jobs() = default ;
      Jobs& operator=(const Jobs &) = default ;
      Jobs& operator=(Jobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->status_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Jobs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Jobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The task ID.
      shared_ptr<string> id_ {};
      // The status of the task. Valid values:
      // 
      // *   Succeeded: The task is successful.
      // *   Failed: The task fails.
      // *   Processing: The task is being processed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->jobs_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<ListAsynJobsResponseBody::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<ListAsynJobsResponseBody::Jobs>) };
    inline vector<ListAsynJobsResponseBody::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<ListAsynJobsResponseBody::Jobs>) };
    inline ListAsynJobsResponseBody& setJobs(const vector<ListAsynJobsResponseBody::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline ListAsynJobsResponseBody& setJobs(vector<ListAsynJobsResponseBody::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAsynJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListAsynJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried tasks.
    shared_ptr<vector<ListAsynJobsResponseBody::Jobs>> jobs_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
