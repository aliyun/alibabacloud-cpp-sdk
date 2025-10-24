// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsTasksRequestSorter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_TO_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_TO_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dstDbName, dstDbName_);
      DARABONBA_PTR_FROM_JSON(dstTableName, dstTableName_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
      DARABONBA_PTR_FROM_JSON(srcTableName, srcTableName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListMmsTasksRequest() = default ;
    ListMmsTasksRequest(const ListMmsTasksRequest &) = default ;
    ListMmsTasksRequest(ListMmsTasksRequest &&) = default ;
    ListMmsTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTasksRequest() = default ;
    ListMmsTasksRequest& operator=(const ListMmsTasksRequest &) = default ;
    ListMmsTasksRequest& operator=(ListMmsTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sorter_ == nullptr
        && return this->dstDbName_ == nullptr && return this->dstTableName_ == nullptr && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->partition_ == nullptr && return this->srcDbName_ == nullptr && return this->srcTableName_ == nullptr && return this->status_ == nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsTasksRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsTasksRequestSorter) };
    inline ListMmsTasksRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsTasksRequestSorter) };
    inline ListMmsTasksRequest& setSorter(const ListMmsTasksRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsTasksRequest& setSorter(ListMmsTasksRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dstDbName Field Functions 
    bool hasDstDbName() const { return this->dstDbName_ != nullptr;};
    void deleteDstDbName() { this->dstDbName_ = nullptr;};
    inline string dstDbName() const { DARABONBA_PTR_GET_DEFAULT(dstDbName_, "") };
    inline ListMmsTasksRequest& setDstDbName(string dstDbName) { DARABONBA_PTR_SET_VALUE(dstDbName_, dstDbName) };


    // dstTableName Field Functions 
    bool hasDstTableName() const { return this->dstTableName_ != nullptr;};
    void deleteDstTableName() { this->dstTableName_ = nullptr;};
    inline string dstTableName() const { DARABONBA_PTR_GET_DEFAULT(dstTableName_, "") };
    inline ListMmsTasksRequest& setDstTableName(string dstTableName) { DARABONBA_PTR_SET_VALUE(dstTableName_, dstTableName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListMmsTasksRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListMmsTasksRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTasksRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ListMmsTasksRequest& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // srcDbName Field Functions 
    bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
    void deleteSrcDbName() { this->srcDbName_ = nullptr;};
    inline string srcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
    inline ListMmsTasksRequest& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


    // srcTableName Field Functions 
    bool hasSrcTableName() const { return this->srcTableName_ != nullptr;};
    void deleteSrcTableName() { this->srcTableName_ = nullptr;};
    inline string srcTableName() const { DARABONBA_PTR_GET_DEFAULT(srcTableName_, "") };
    inline ListMmsTasksRequest& setSrcTableName(string srcTableName) { DARABONBA_PTR_SET_VALUE(srcTableName_, srcTableName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<ListMmsTasksRequestSorter> sorter_ = nullptr;
    std::shared_ptr<string> dstDbName_ = nullptr;
    std::shared_ptr<string> dstTableName_ = nullptr;
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> partition_ = nullptr;
    std::shared_ptr<string> srcDbName_ = nullptr;
    std::shared_ptr<string> srcTableName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
