// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESOURCEUSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResourceUsageResponseBodyDataJobResourceUsageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetJobResourceUsageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(jobResourceUsageList, jobResourceUsageList_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResourceUsageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(jobResourceUsageList, jobResourceUsageList_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetJobResourceUsageResponseBodyData() = default ;
    GetJobResourceUsageResponseBodyData(const GetJobResourceUsageResponseBodyData &) = default ;
    GetJobResourceUsageResponseBodyData(GetJobResourceUsageResponseBodyData &&) = default ;
    GetJobResourceUsageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResourceUsageResponseBodyData() = default ;
    GetJobResourceUsageResponseBodyData& operator=(const GetJobResourceUsageResponseBodyData &) = default ;
    GetJobResourceUsageResponseBodyData& operator=(GetJobResourceUsageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobResourceUsageList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // jobResourceUsageList Field Functions 
    bool hasJobResourceUsageList() const { return this->jobResourceUsageList_ != nullptr;};
    void deleteJobResourceUsageList() { this->jobResourceUsageList_ = nullptr;};
    inline const vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList> & jobResourceUsageList() const { DARABONBA_PTR_GET_CONST(jobResourceUsageList_, vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList>) };
    inline vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList> jobResourceUsageList() { DARABONBA_PTR_GET(jobResourceUsageList_, vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList>) };
    inline GetJobResourceUsageResponseBodyData& setJobResourceUsageList(const vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList> & jobResourceUsageList) { DARABONBA_PTR_SET_VALUE(jobResourceUsageList_, jobResourceUsageList) };
    inline GetJobResourceUsageResponseBodyData& setJobResourceUsageList(vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList> && jobResourceUsageList) { DARABONBA_PTR_SET_RVALUE(jobResourceUsageList_, jobResourceUsageList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetJobResourceUsageResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetJobResourceUsageResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetJobResourceUsageResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data list returned.
    std::shared_ptr<vector<Models::GetJobResourceUsageResponseBodyDataJobResourceUsageList>> jobResourceUsageList_ = nullptr;
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
