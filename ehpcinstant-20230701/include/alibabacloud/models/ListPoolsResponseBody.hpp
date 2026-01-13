// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PoolList, poolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PoolList, poolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPoolsResponseBody() = default ;
    ListPoolsResponseBody(const ListPoolsResponseBody &) = default ;
    ListPoolsResponseBody(ListPoolsResponseBody &&) = default ;
    ListPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsResponseBody() = default ;
    ListPoolsResponseBody& operator=(const ListPoolsResponseBody &) = default ;
    ListPoolsResponseBody& operator=(ListPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PoolList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PoolList& obj) { 
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MaxExectorNum, maxExectorNum_);
        DARABONBA_PTR_TO_JSON(PoolName, poolName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PoolList& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MaxExectorNum, maxExectorNum_);
        DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PoolList() = default ;
      PoolList(const PoolList &) = default ;
      PoolList(PoolList &&) = default ;
      PoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PoolList() = default ;
      PoolList& operator=(const PoolList &) = default ;
      PoolList& operator=(PoolList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->maxExectorNum_ == nullptr && this->poolName_ == nullptr && this->priority_ == nullptr && this->status_ == nullptr; };
      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline PoolList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // maxExectorNum Field Functions 
      bool hasMaxExectorNum() const { return this->maxExectorNum_ != nullptr;};
      void deleteMaxExectorNum() { this->maxExectorNum_ = nullptr;};
      inline int32_t getMaxExectorNum() const { DARABONBA_PTR_GET_DEFAULT(maxExectorNum_, 0) };
      inline PoolList& setMaxExectorNum(int32_t maxExectorNum) { DARABONBA_PTR_SET_VALUE(maxExectorNum_, maxExectorNum) };


      // poolName Field Functions 
      bool hasPoolName() const { return this->poolName_ != nullptr;};
      void deletePoolName() { this->poolName_ = nullptr;};
      inline string getPoolName() const { DARABONBA_PTR_GET_DEFAULT(poolName_, "") };
      inline PoolList& setPoolName(string poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PoolList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PoolList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indices whether the resource pool is the default resource pool. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isDefault_ {};
      // The maximum number of execution nodes that can run concurrently in a resource pool.
      shared_ptr<int32_t> maxExectorNum_ {};
      // The name of the resource pool.
      // 
      // *   The value can be up to 15 characters in length.
      // *   It can contain digits, uppercase letters, lowercase letters, underscores (_), and dots (.).
      shared_ptr<string> poolName_ {};
      // The priority of the resource pool.
      // 
      // *   You can set a priority in the range of 1 to 99. The default value is 1, which is the lowest priority.
      // *   Jobs submitted to a resource pool with a higher priority level value will be scheduled before pending jobs in a resource pool with a lower priority level value, and the priority level of the resource pool takes precedence over the priority of the job.
      shared_ptr<int32_t> priority_ {};
      // The status of the resource pool. Valid values:
      // 
      // *   Creating: The resource pool is being created.
      // *   Updating: The resource pool is being updated.
      // *   Deleting: The resource pool is being deleted.
      // *   Working: The resource pool is working.
      // *   Deleted: The resource pool is deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->poolList_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // poolList Field Functions 
    bool hasPoolList() const { return this->poolList_ != nullptr;};
    void deletePoolList() { this->poolList_ = nullptr;};
    inline const vector<ListPoolsResponseBody::PoolList> & getPoolList() const { DARABONBA_PTR_GET_CONST(poolList_, vector<ListPoolsResponseBody::PoolList>) };
    inline vector<ListPoolsResponseBody::PoolList> getPoolList() { DARABONBA_PTR_GET(poolList_, vector<ListPoolsResponseBody::PoolList>) };
    inline ListPoolsResponseBody& setPoolList(const vector<ListPoolsResponseBody::PoolList> & poolList) { DARABONBA_PTR_SET_VALUE(poolList_, poolList) };
    inline ListPoolsResponseBody& setPoolList(vector<ListPoolsResponseBody::PoolList> && poolList) { DARABONBA_PTR_SET_RVALUE(poolList_, poolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Queries the resource pool list.
    shared_ptr<vector<ListPoolsResponseBody::PoolList>> poolList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of list entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
