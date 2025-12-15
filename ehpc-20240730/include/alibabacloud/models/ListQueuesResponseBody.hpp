// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueuesResponseBodyQueues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQueuesResponseBody() = default ;
    ListQueuesResponseBody(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody(ListQueuesResponseBody &&) = default ;
    ListQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBody() = default ;
    ListQueuesResponseBody& operator=(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody& operator=(ListQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->queues_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListQueuesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQueuesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQueuesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<ListQueuesResponseBodyQueues> & queues() const { DARABONBA_PTR_GET_CONST(queues_, vector<ListQueuesResponseBodyQueues>) };
    inline vector<ListQueuesResponseBodyQueues> queues() { DARABONBA_PTR_GET(queues_, vector<ListQueuesResponseBodyQueues>) };
    inline ListQueuesResponseBody& setQueues(const vector<ListQueuesResponseBodyQueues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListQueuesResponseBody& setQueues(vector<ListQueuesResponseBodyQueues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQueuesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about the queues.
    std::shared_ptr<vector<ListQueuesResponseBodyQueues>> queues_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
