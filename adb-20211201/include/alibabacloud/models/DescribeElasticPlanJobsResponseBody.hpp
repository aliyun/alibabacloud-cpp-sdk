// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticPlanJobsResponseBodyJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticPlanJobsResponseBody() = default ;
    DescribeElasticPlanJobsResponseBody(const DescribeElasticPlanJobsResponseBody &) = default ;
    DescribeElasticPlanJobsResponseBody(DescribeElasticPlanJobsResponseBody &&) = default ;
    DescribeElasticPlanJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanJobsResponseBody() = default ;
    DescribeElasticPlanJobsResponseBody& operator=(const DescribeElasticPlanJobsResponseBody &) = default ;
    DescribeElasticPlanJobsResponseBody& operator=(DescribeElasticPlanJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobs_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<DescribeElasticPlanJobsResponseBodyJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<DescribeElasticPlanJobsResponseBodyJobs>) };
    inline vector<DescribeElasticPlanJobsResponseBodyJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<DescribeElasticPlanJobsResponseBodyJobs>) };
    inline DescribeElasticPlanJobsResponseBody& setJobs(const vector<DescribeElasticPlanJobsResponseBodyJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline DescribeElasticPlanJobsResponseBody& setJobs(vector<DescribeElasticPlanJobsResponseBodyJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticPlanJobsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried scaling plan jobs.
    std::shared_ptr<vector<DescribeElasticPlanJobsResponseBodyJobs>> jobs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of scaling plan jobs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
