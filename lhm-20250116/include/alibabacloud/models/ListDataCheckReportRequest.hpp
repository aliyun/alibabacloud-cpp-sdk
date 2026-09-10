// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACHECKREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACHECKREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListDataCheckReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCheckReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(checkResult, checkResult_);
      DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCheckReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(checkResult, checkResult_);
      DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
    };
    ListDataCheckReportRequest() = default ;
    ListDataCheckReportRequest(const ListDataCheckReportRequest &) = default ;
    ListDataCheckReportRequest(ListDataCheckReportRequest &&) = default ;
    ListDataCheckReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCheckReportRequest() = default ;
    ListDataCheckReportRequest& operator=(const ListDataCheckReportRequest &) = default ;
    ListDataCheckReportRequest& operator=(ListDataCheckReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->checkResult_ == nullptr && this->jobStatus_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->tableName_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ListDataCheckReportRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t getCheckResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline ListDataCheckReportRequest& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline ListDataCheckReportRequest& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDataCheckReportRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataCheckReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDataCheckReportRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> batchId_ {};
    shared_ptr<int32_t> checkResult_ {};
    shared_ptr<int32_t> jobStatus_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
