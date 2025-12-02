// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIEWJOBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIEWJOBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OpenStructRefreshJobModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeViewJobsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeViewJobsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MvRefreshJobModels, mvRefreshJobModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeViewJobsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MvRefreshJobModels, mvRefreshJobModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeViewJobsResponseBodyData() = default ;
    DescribeViewJobsResponseBodyData(const DescribeViewJobsResponseBodyData &) = default ;
    DescribeViewJobsResponseBodyData(DescribeViewJobsResponseBodyData &&) = default ;
    DescribeViewJobsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeViewJobsResponseBodyData() = default ;
    DescribeViewJobsResponseBodyData& operator=(const DescribeViewJobsResponseBodyData &) = default ;
    DescribeViewJobsResponseBodyData& operator=(DescribeViewJobsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mvRefreshJobModels_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // mvRefreshJobModels Field Functions 
    bool hasMvRefreshJobModels() const { return this->mvRefreshJobModels_ != nullptr;};
    void deleteMvRefreshJobModels() { this->mvRefreshJobModels_ = nullptr;};
    inline const vector<Models::OpenStructRefreshJobModel> & mvRefreshJobModels() const { DARABONBA_PTR_GET_CONST(mvRefreshJobModels_, vector<Models::OpenStructRefreshJobModel>) };
    inline vector<Models::OpenStructRefreshJobModel> mvRefreshJobModels() { DARABONBA_PTR_GET(mvRefreshJobModels_, vector<Models::OpenStructRefreshJobModel>) };
    inline DescribeViewJobsResponseBodyData& setMvRefreshJobModels(const vector<Models::OpenStructRefreshJobModel> & mvRefreshJobModels) { DARABONBA_PTR_SET_VALUE(mvRefreshJobModels_, mvRefreshJobModels) };
    inline DescribeViewJobsResponseBodyData& setMvRefreshJobModels(vector<Models::OpenStructRefreshJobModel> && mvRefreshJobModels) { DARABONBA_PTR_SET_RVALUE(mvRefreshJobModels_, mvRefreshJobModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeViewJobsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeViewJobsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeViewJobsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The refresh tasks.
    std::shared_ptr<vector<Models::OpenStructRefreshJobModel>> mvRefreshJobModels_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
