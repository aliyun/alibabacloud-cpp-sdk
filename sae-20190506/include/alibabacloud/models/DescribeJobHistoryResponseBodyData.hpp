// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeJobHistoryResponseBodyDataJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeJobHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Jobs, jobs_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Jobs, jobs_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeJobHistoryResponseBodyData() = default ;
    DescribeJobHistoryResponseBodyData(const DescribeJobHistoryResponseBodyData &) = default ;
    DescribeJobHistoryResponseBodyData(DescribeJobHistoryResponseBodyData &&) = default ;
    DescribeJobHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobHistoryResponseBodyData() = default ;
    DescribeJobHistoryResponseBodyData& operator=(const DescribeJobHistoryResponseBodyData &) = default ;
    DescribeJobHistoryResponseBodyData& operator=(DescribeJobHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->jobs_ == nullptr && return this->pageSize_ == nullptr && return this->totalSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline DescribeJobHistoryResponseBodyData& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // jobs Field Functions 
    bool hasJobs() const { return this->jobs_ != nullptr;};
    void deleteJobs() { this->jobs_ = nullptr;};
    inline const vector<Models::DescribeJobHistoryResponseBodyDataJobs> & jobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Models::DescribeJobHistoryResponseBodyDataJobs>) };
    inline vector<Models::DescribeJobHistoryResponseBodyDataJobs> jobs() { DARABONBA_PTR_GET(jobs_, vector<Models::DescribeJobHistoryResponseBodyDataJobs>) };
    inline DescribeJobHistoryResponseBodyData& setJobs(const vector<Models::DescribeJobHistoryResponseBodyDataJobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
    inline DescribeJobHistoryResponseBodyData& setJobs(vector<Models::DescribeJobHistoryResponseBodyDataJobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeJobHistoryResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeJobHistoryResponseBodyData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The jobs.
    std::shared_ptr<vector<Models::DescribeJobHistoryResponseBodyDataJobs>> jobs_ = nullptr;
    // The number of entries to return on each page. Valid values: 0 to 10000.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of jobs.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
