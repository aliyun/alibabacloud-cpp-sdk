// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeArchiveTableListResponseBodyDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeArchiveTableListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeArchiveTableListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PausedCount, pausedCount_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TobeArchivedConut, tobeArchivedConut_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeArchiveTableListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PausedCount, pausedCount_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TobeArchivedConut, tobeArchivedConut_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeArchiveTableListResponseBodyData() = default ;
    DescribeArchiveTableListResponseBodyData(const DescribeArchiveTableListResponseBodyData &) = default ;
    DescribeArchiveTableListResponseBodyData(DescribeArchiveTableListResponseBodyData &&) = default ;
    DescribeArchiveTableListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeArchiveTableListResponseBodyData() = default ;
    DescribeArchiveTableListResponseBodyData& operator=(const DescribeArchiveTableListResponseBodyData &) = default ;
    DescribeArchiveTableListResponseBodyData& operator=(DescribeArchiveTableListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->pausedCount_ != nullptr && this->runningCount_ != nullptr && this->successCount_ != nullptr && this->tables_ != nullptr
        && this->tobeArchivedConut_ != nullptr && this->total_ != nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline DescribeArchiveTableListResponseBodyData& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeArchiveTableListResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pausedCount Field Functions 
    bool hasPausedCount() const { return this->pausedCount_ != nullptr;};
    void deletePausedCount() { this->pausedCount_ = nullptr;};
    inline int32_t pausedCount() const { DARABONBA_PTR_GET_DEFAULT(pausedCount_, 0) };
    inline DescribeArchiveTableListResponseBodyData& setPausedCount(int32_t pausedCount) { DARABONBA_PTR_SET_VALUE(pausedCount_, pausedCount) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline DescribeArchiveTableListResponseBodyData& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeArchiveTableListResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::DescribeArchiveTableListResponseBodyDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::DescribeArchiveTableListResponseBodyDataTables>) };
    inline vector<Models::DescribeArchiveTableListResponseBodyDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::DescribeArchiveTableListResponseBodyDataTables>) };
    inline DescribeArchiveTableListResponseBodyData& setTables(const vector<Models::DescribeArchiveTableListResponseBodyDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeArchiveTableListResponseBodyData& setTables(vector<Models::DescribeArchiveTableListResponseBodyDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // tobeArchivedConut Field Functions 
    bool hasTobeArchivedConut() const { return this->tobeArchivedConut_ != nullptr;};
    void deleteTobeArchivedConut() { this->tobeArchivedConut_ = nullptr;};
    inline int32_t tobeArchivedConut() const { DARABONBA_PTR_GET_DEFAULT(tobeArchivedConut_, 0) };
    inline DescribeArchiveTableListResponseBodyData& setTobeArchivedConut(int32_t tobeArchivedConut) { DARABONBA_PTR_SET_VALUE(tobeArchivedConut_, tobeArchivedConut) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeArchiveTableListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> pausedCount_ = nullptr;
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    std::shared_ptr<int32_t> successCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeArchiveTableListResponseBodyDataTables>> tables_ = nullptr;
    std::shared_ptr<int32_t> tobeArchivedConut_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
