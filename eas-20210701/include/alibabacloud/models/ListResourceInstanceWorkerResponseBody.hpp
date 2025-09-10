// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCEWORKERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCEWORKERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceInstanceWorker.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListResourceInstanceWorkerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceInstanceWorkerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pods, pods_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceInstanceWorkerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pods, pods_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceInstanceWorkerResponseBody() = default ;
    ListResourceInstanceWorkerResponseBody(const ListResourceInstanceWorkerResponseBody &) = default ;
    ListResourceInstanceWorkerResponseBody(ListResourceInstanceWorkerResponseBody &&) = default ;
    ListResourceInstanceWorkerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceInstanceWorkerResponseBody() = default ;
    ListResourceInstanceWorkerResponseBody& operator=(const ListResourceInstanceWorkerResponseBody &) = default ;
    ListResourceInstanceWorkerResponseBody& operator=(ListResourceInstanceWorkerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->pods_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceInstanceWorkerResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceInstanceWorkerResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pods Field Functions 
    bool hasPods() const { return this->pods_ != nullptr;};
    void deletePods() { this->pods_ = nullptr;};
    inline const vector<ResourceInstanceWorker> & pods() const { DARABONBA_PTR_GET_CONST(pods_, vector<ResourceInstanceWorker>) };
    inline vector<ResourceInstanceWorker> pods() { DARABONBA_PTR_GET(pods_, vector<ResourceInstanceWorker>) };
    inline ListResourceInstanceWorkerResponseBody& setPods(const vector<ResourceInstanceWorker> & pods) { DARABONBA_PTR_SET_VALUE(pods_, pods) };
    inline ListResourceInstanceWorkerResponseBody& setPods(vector<ResourceInstanceWorker> && pods) { DARABONBA_PTR_SET_RVALUE(pods_, pods) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceInstanceWorkerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResourceInstanceWorkerResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The workers.
    std::shared_ptr<vector<ResourceInstanceWorker>> pods_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
