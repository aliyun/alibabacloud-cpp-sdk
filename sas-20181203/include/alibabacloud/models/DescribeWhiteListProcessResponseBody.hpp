// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWhiteListProcessResponseBody() = default ;
    DescribeWhiteListProcessResponseBody(const DescribeWhiteListProcessResponseBody &) = default ;
    DescribeWhiteListProcessResponseBody(DescribeWhiteListProcessResponseBody &&) = default ;
    DescribeWhiteListProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListProcessResponseBody() = default ;
    DescribeWhiteListProcessResponseBody& operator=(const DescribeWhiteListProcessResponseBody &) = default ;
    DescribeWhiteListProcessResponseBody& operator=(DescribeWhiteListProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Processes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Processes& obj) { 
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessType, processType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Processes& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Processes() = default ;
      Processes(const Processes &) = default ;
      Processes(Processes &&) = default ;
      Processes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Processes() = default ;
      Processes& operator=(const Processes &) = default ;
      Processes& operator=(Processes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->id_ == nullptr && this->level_ == nullptr && this->md5_ == nullptr && this->processId_ == nullptr && this->processName_ == nullptr
        && this->processType_ == nullptr && this->status_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Processes& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Processes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
      inline Processes& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Processes& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline int32_t getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, 0) };
      inline Processes& setProcessId(int32_t processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Processes& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processType Field Functions 
      bool hasProcessType() const { return this->processType_ != nullptr;};
      void deleteProcessType() { this->processType_ = nullptr;};
      inline int32_t getProcessType() const { DARABONBA_PTR_GET_DEFAULT(processType_, 0) };
      inline Processes& setProcessType(int32_t processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Processes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The path to the process startup file.
      shared_ptr<string> filePath_ {};
      // The primary key of the process information.
      shared_ptr<int64_t> id_ {};
      // The trust score of the process.
      shared_ptr<int32_t> level_ {};
      // The MD5 hash value of the process startup file.
      shared_ptr<string> md5_ {};
      // The ID of the process.
      shared_ptr<int32_t> processId_ {};
      // The name of the process.
      shared_ptr<string> processName_ {};
      // The type of the process. Valid values:
      // 
      // *   **1**: trusted
      // *   **2**: suspicious
      // *   **3**: malicious
      shared_ptr<int32_t> processType_ {};
      // Indicates whether the process is trusted. Valid values:
      // 
      // *   **1**: no
      // *   **2**: yes
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->processes_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWhiteListProcessResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListProcessResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListProcessResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<DescribeWhiteListProcessResponseBody::Processes> & getProcesses() const { DARABONBA_PTR_GET_CONST(processes_, vector<DescribeWhiteListProcessResponseBody::Processes>) };
    inline vector<DescribeWhiteListProcessResponseBody::Processes> getProcesses() { DARABONBA_PTR_GET(processes_, vector<DescribeWhiteListProcessResponseBody::Processes>) };
    inline DescribeWhiteListProcessResponseBody& setProcesses(const vector<DescribeWhiteListProcessResponseBody::Processes> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline DescribeWhiteListProcessResponseBody& setProcesses(vector<DescribeWhiteListProcessResponseBody::Processes> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWhiteListProcessResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the processes.
    shared_ptr<vector<DescribeWhiteListProcessResponseBody::Processes>> processes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
