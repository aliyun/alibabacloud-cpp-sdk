// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackGroupOperationsResponseBodyStackGroupOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperations, stackGroupOperations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperations, stackGroupOperations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupOperationsResponseBody() = default ;
    ListStackGroupOperationsResponseBody(const ListStackGroupOperationsResponseBody &) = default ;
    ListStackGroupOperationsResponseBody(ListStackGroupOperationsResponseBody &&) = default ;
    ListStackGroupOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationsResponseBody() = default ;
    ListStackGroupOperationsResponseBody& operator=(const ListStackGroupOperationsResponseBody &) = default ;
    ListStackGroupOperationsResponseBody& operator=(ListStackGroupOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->stackGroupOperations_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupOperationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupOperationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperations Field Functions 
    bool hasStackGroupOperations() const { return this->stackGroupOperations_ != nullptr;};
    void deleteStackGroupOperations() { this->stackGroupOperations_ = nullptr;};
    inline const vector<ListStackGroupOperationsResponseBodyStackGroupOperations> & stackGroupOperations() const { DARABONBA_PTR_GET_CONST(stackGroupOperations_, vector<ListStackGroupOperationsResponseBodyStackGroupOperations>) };
    inline vector<ListStackGroupOperationsResponseBodyStackGroupOperations> stackGroupOperations() { DARABONBA_PTR_GET(stackGroupOperations_, vector<ListStackGroupOperationsResponseBodyStackGroupOperations>) };
    inline ListStackGroupOperationsResponseBody& setStackGroupOperations(const vector<ListStackGroupOperationsResponseBodyStackGroupOperations> & stackGroupOperations) { DARABONBA_PTR_SET_VALUE(stackGroupOperations_, stackGroupOperations) };
    inline ListStackGroupOperationsResponseBody& setStackGroupOperations(vector<ListStackGroupOperationsResponseBodyStackGroupOperations> && stackGroupOperations) { DARABONBA_PTR_SET_RVALUE(stackGroupOperations_, stackGroupOperations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupOperationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stack group operations.
    std::shared_ptr<vector<ListStackGroupOperationsResponseBodyStackGroupOperations>> stackGroupOperations_ = nullptr;
    // The total number of stack group operations.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
