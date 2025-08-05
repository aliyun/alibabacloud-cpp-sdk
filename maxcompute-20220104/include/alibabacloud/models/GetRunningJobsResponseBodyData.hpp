// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRunningJobsResponseBodyDataRunningJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetRunningJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(runningJobInfoList, runningJobInfoList_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(runningJobInfoList, runningJobInfoList_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetRunningJobsResponseBodyData() = default ;
    GetRunningJobsResponseBodyData(const GetRunningJobsResponseBodyData &) = default ;
    GetRunningJobsResponseBodyData(GetRunningJobsResponseBodyData &&) = default ;
    GetRunningJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningJobsResponseBodyData() = default ;
    GetRunningJobsResponseBodyData& operator=(const GetRunningJobsResponseBodyData &) = default ;
    GetRunningJobsResponseBodyData& operator=(GetRunningJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->runningJobInfoList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetRunningJobsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetRunningJobsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // runningJobInfoList Field Functions 
    bool hasRunningJobInfoList() const { return this->runningJobInfoList_ != nullptr;};
    void deleteRunningJobInfoList() { this->runningJobInfoList_ = nullptr;};
    inline const vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList> & runningJobInfoList() const { DARABONBA_PTR_GET_CONST(runningJobInfoList_, vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList>) };
    inline vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList> runningJobInfoList() { DARABONBA_PTR_GET(runningJobInfoList_, vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList>) };
    inline GetRunningJobsResponseBodyData& setRunningJobInfoList(const vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList> & runningJobInfoList) { DARABONBA_PTR_SET_VALUE(runningJobInfoList_, runningJobInfoList) };
    inline GetRunningJobsResponseBodyData& setRunningJobInfoList(vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList> && runningJobInfoList) { DARABONBA_PTR_SET_RVALUE(runningJobInfoList_, runningJobInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetRunningJobsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of jobs in the running state.
    std::shared_ptr<vector<Models::GetRunningJobsResponseBodyDataRunningJobInfoList>> runningJobInfoList_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
