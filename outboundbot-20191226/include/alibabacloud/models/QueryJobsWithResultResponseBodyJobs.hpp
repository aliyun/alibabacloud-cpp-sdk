// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryJobsWithResultResponseBodyJobsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsWithResultResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
    };
    QueryJobsWithResultResponseBodyJobs() = default ;
    QueryJobsWithResultResponseBodyJobs(const QueryJobsWithResultResponseBodyJobs &) = default ;
    QueryJobsWithResultResponseBodyJobs(QueryJobsWithResultResponseBodyJobs &&) = default ;
    QueryJobsWithResultResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultResponseBodyJobs() = default ;
    QueryJobsWithResultResponseBodyJobs& operator=(const QueryJobsWithResultResponseBodyJobs &) = default ;
    QueryJobsWithResultResponseBodyJobs& operator=(QueryJobsWithResultResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageCount_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->rowCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::QueryJobsWithResultResponseBodyJobsList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::QueryJobsWithResultResponseBodyJobsList>) };
    inline vector<Models::QueryJobsWithResultResponseBodyJobsList> list() { DARABONBA_PTR_GET(list_, vector<Models::QueryJobsWithResultResponseBodyJobsList>) };
    inline QueryJobsWithResultResponseBodyJobs& setList(const vector<Models::QueryJobsWithResultResponseBodyJobsList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline QueryJobsWithResultResponseBodyJobs& setList(vector<Models::QueryJobsWithResultResponseBodyJobsList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline QueryJobsWithResultResponseBodyJobs& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryJobsWithResultResponseBodyJobs& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryJobsWithResultResponseBodyJobs& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int32_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
    inline QueryJobsWithResultResponseBodyJobs& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


  protected:
    std::shared_ptr<vector<Models::QueryJobsWithResultResponseBodyJobsList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> rowCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
