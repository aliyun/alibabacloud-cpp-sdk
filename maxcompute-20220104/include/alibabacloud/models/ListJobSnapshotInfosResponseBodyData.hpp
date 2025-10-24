// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSNAPSHOTINFOSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobSnapshotInfosResponseBodyDataJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobSnapshotInfosResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSnapshotInfosResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(jobInfoList, jobInfoList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSnapshotInfosResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(jobInfoList, jobInfoList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListJobSnapshotInfosResponseBodyData() = default ;
    ListJobSnapshotInfosResponseBodyData(const ListJobSnapshotInfosResponseBodyData &) = default ;
    ListJobSnapshotInfosResponseBodyData(ListJobSnapshotInfosResponseBodyData &&) = default ;
    ListJobSnapshotInfosResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSnapshotInfosResponseBodyData() = default ;
    ListJobSnapshotInfosResponseBodyData& operator=(const ListJobSnapshotInfosResponseBodyData &) = default ;
    ListJobSnapshotInfosResponseBodyData& operator=(ListJobSnapshotInfosResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInfoList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // jobInfoList Field Functions 
    bool hasJobInfoList() const { return this->jobInfoList_ != nullptr;};
    void deleteJobInfoList() { this->jobInfoList_ = nullptr;};
    inline const vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList> & jobInfoList() const { DARABONBA_PTR_GET_CONST(jobInfoList_, vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList>) };
    inline vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList> jobInfoList() { DARABONBA_PTR_GET(jobInfoList_, vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList>) };
    inline ListJobSnapshotInfosResponseBodyData& setJobInfoList(const vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList> & jobInfoList) { DARABONBA_PTR_SET_VALUE(jobInfoList_, jobInfoList) };
    inline ListJobSnapshotInfosResponseBodyData& setJobInfoList(vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList> && jobInfoList) { DARABONBA_PTR_SET_RVALUE(jobInfoList_, jobInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListJobSnapshotInfosResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListJobSnapshotInfosResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListJobSnapshotInfosResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The job snapshots.
    std::shared_ptr<vector<Models::ListJobSnapshotInfosResponseBodyDataJobInfoList>> jobInfoList_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of returned results.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
