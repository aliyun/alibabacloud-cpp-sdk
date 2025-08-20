// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackInstancesResponseBodyStackInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInstances, stackInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInstances, stackInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackInstancesResponseBody() = default ;
    ListStackInstancesResponseBody(const ListStackInstancesResponseBody &) = default ;
    ListStackInstancesResponseBody(ListStackInstancesResponseBody &&) = default ;
    ListStackInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackInstancesResponseBody() = default ;
    ListStackInstancesResponseBody& operator=(const ListStackInstancesResponseBody &) = default ;
    ListStackInstancesResponseBody& operator=(ListStackInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->stackInstances_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInstances Field Functions 
    bool hasStackInstances() const { return this->stackInstances_ != nullptr;};
    void deleteStackInstances() { this->stackInstances_ = nullptr;};
    inline const vector<ListStackInstancesResponseBodyStackInstances> & stackInstances() const { DARABONBA_PTR_GET_CONST(stackInstances_, vector<ListStackInstancesResponseBodyStackInstances>) };
    inline vector<ListStackInstancesResponseBodyStackInstances> stackInstances() { DARABONBA_PTR_GET(stackInstances_, vector<ListStackInstancesResponseBodyStackInstances>) };
    inline ListStackInstancesResponseBody& setStackInstances(const vector<ListStackInstancesResponseBodyStackInstances> & stackInstances) { DARABONBA_PTR_SET_VALUE(stackInstances_, stackInstances) };
    inline ListStackInstancesResponseBody& setStackInstances(vector<ListStackInstancesResponseBodyStackInstances> && stackInstances) { DARABONBA_PTR_SET_RVALUE(stackInstances_, stackInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stacks.
    std::shared_ptr<vector<ListStackInstancesResponseBodyStackInstances>> stackInstances_ = nullptr;
    // The total number of stacks.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
