// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListExecutorGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
    };
    ListExecutorGroupRequest() = default ;
    ListExecutorGroupRequest(const ListExecutorGroupRequest &) = default ;
    ListExecutorGroupRequest(ListExecutorGroupRequest &&) = default ;
    ListExecutorGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorGroupRequest() = default ;
    ListExecutorGroupRequest& operator=(const ListExecutorGroupRequest &) = default ;
    ListExecutorGroupRequest& operator=(ListExecutorGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->timeType_ == nullptr && this->workerType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListExecutorGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutorGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExecutorGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutorGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListExecutorGroupRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorGroupRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline const vector<int32_t> & getTimeType() const { DARABONBA_PTR_GET_CONST(timeType_, vector<int32_t>) };
    inline vector<int32_t> getTimeType() { DARABONBA_PTR_GET(timeType_, vector<int32_t>) };
    inline ListExecutorGroupRequest& setTimeType(const vector<int32_t> & timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };
    inline ListExecutorGroupRequest& setTimeType(vector<int32_t> && timeType) { DARABONBA_PTR_SET_RVALUE(timeType_, timeType) };


    // workerType Field Functions 
    bool hasWorkerType() const { return this->workerType_ != nullptr;};
    void deleteWorkerType() { this->workerType_ = nullptr;};
    inline string getWorkerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
    inline ListExecutorGroupRequest& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The maximum number of entries to return for this request. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the executor group.
    shared_ptr<string> name_ {};
    // The token that specifies the position from which the current call returns data. An empty value indicates that all data has been read. You do not need to specify this parameter for the first query.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The list of time types.
    shared_ptr<vector<int32_t>> timeType_ {};
    // The executor type.
    shared_ptr<string> workerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
