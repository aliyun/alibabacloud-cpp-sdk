// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIJobsResponseBodyPagingInfoDIJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobs, DIJobs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobs, DIJobs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDIJobsResponseBodyPagingInfo() = default ;
    ListDIJobsResponseBodyPagingInfo(const ListDIJobsResponseBodyPagingInfo &) = default ;
    ListDIJobsResponseBodyPagingInfo(ListDIJobsResponseBodyPagingInfo &&) = default ;
    ListDIJobsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobsResponseBodyPagingInfo() = default ;
    ListDIJobsResponseBodyPagingInfo& operator=(const ListDIJobsResponseBodyPagingInfo &) = default ;
    ListDIJobsResponseBodyPagingInfo& operator=(ListDIJobsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobs_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // DIJobs Field Functions 
    bool hasDIJobs() const { return this->DIJobs_ != nullptr;};
    void deleteDIJobs() { this->DIJobs_ = nullptr;};
    inline const vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs> & DIJobs() const { DARABONBA_PTR_GET_CONST(DIJobs_, vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs>) };
    inline vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs> DIJobs() { DARABONBA_PTR_GET(DIJobs_, vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs>) };
    inline ListDIJobsResponseBodyPagingInfo& setDIJobs(const vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs> & DIJobs) { DARABONBA_PTR_SET_VALUE(DIJobs_, DIJobs) };
    inline ListDIJobsResponseBodyPagingInfo& setDIJobs(vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs> && DIJobs) { DARABONBA_PTR_SET_RVALUE(DIJobs_, DIJobs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDIJobsResponseBodyPagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDIJobsResponseBodyPagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDIJobsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The synchronization tasks returned.
    std::shared_ptr<vector<Models::ListDIJobsResponseBodyPagingInfoDIJobs>> DIJobs_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
