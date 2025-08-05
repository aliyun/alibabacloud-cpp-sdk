// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobInfosResponseBodyDataJobInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobInfosResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfosResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(jobInfoList, jobInfoList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfosResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(jobInfoList, jobInfoList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListJobInfosResponseBodyData() = default ;
    ListJobInfosResponseBodyData(const ListJobInfosResponseBodyData &) = default ;
    ListJobInfosResponseBodyData(ListJobInfosResponseBodyData &&) = default ;
    ListJobInfosResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfosResponseBodyData() = default ;
    ListJobInfosResponseBodyData& operator=(const ListJobInfosResponseBodyData &) = default ;
    ListJobInfosResponseBodyData& operator=(ListJobInfosResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobInfoList_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // jobInfoList Field Functions 
    bool hasJobInfoList() const { return this->jobInfoList_ != nullptr;};
    void deleteJobInfoList() { this->jobInfoList_ = nullptr;};
    inline const vector<Models::ListJobInfosResponseBodyDataJobInfoList> & jobInfoList() const { DARABONBA_PTR_GET_CONST(jobInfoList_, vector<Models::ListJobInfosResponseBodyDataJobInfoList>) };
    inline vector<Models::ListJobInfosResponseBodyDataJobInfoList> jobInfoList() { DARABONBA_PTR_GET(jobInfoList_, vector<Models::ListJobInfosResponseBodyDataJobInfoList>) };
    inline ListJobInfosResponseBodyData& setJobInfoList(const vector<Models::ListJobInfosResponseBodyDataJobInfoList> & jobInfoList) { DARABONBA_PTR_SET_VALUE(jobInfoList_, jobInfoList) };
    inline ListJobInfosResponseBodyData& setJobInfoList(vector<Models::ListJobInfosResponseBodyDataJobInfoList> && jobInfoList) { DARABONBA_PTR_SET_RVALUE(jobInfoList_, jobInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListJobInfosResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListJobInfosResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListJobInfosResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the jobs.
    std::shared_ptr<vector<Models::ListJobInfosResponseBodyDataJobInfoList>> jobInfoList_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
