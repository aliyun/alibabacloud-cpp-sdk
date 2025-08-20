// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListStackGroupOperationResultsResponseBodyStackGroupOperationResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupOperationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperationResults, stackGroupOperationResults_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperationResults, stackGroupOperationResults_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupOperationResultsResponseBody() = default ;
    ListStackGroupOperationResultsResponseBody(const ListStackGroupOperationResultsResponseBody &) = default ;
    ListStackGroupOperationResultsResponseBody(ListStackGroupOperationResultsResponseBody &&) = default ;
    ListStackGroupOperationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationResultsResponseBody() = default ;
    ListStackGroupOperationResultsResponseBody& operator=(const ListStackGroupOperationResultsResponseBody &) = default ;
    ListStackGroupOperationResultsResponseBody& operator=(ListStackGroupOperationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->stackGroupOperationResults_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupOperationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperationResults Field Functions 
    bool hasStackGroupOperationResults() const { return this->stackGroupOperationResults_ != nullptr;};
    void deleteStackGroupOperationResults() { this->stackGroupOperationResults_ = nullptr;};
    inline const vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults> & stackGroupOperationResults() const { DARABONBA_PTR_GET_CONST(stackGroupOperationResults_, vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>) };
    inline vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults> stackGroupOperationResults() { DARABONBA_PTR_GET(stackGroupOperationResults_, vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>) };
    inline ListStackGroupOperationResultsResponseBody& setStackGroupOperationResults(const vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults> & stackGroupOperationResults) { DARABONBA_PTR_SET_VALUE(stackGroupOperationResults_, stackGroupOperationResults) };
    inline ListStackGroupOperationResultsResponseBody& setStackGroupOperationResults(vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults> && stackGroupOperationResults) { DARABONBA_PTR_SET_RVALUE(stackGroupOperationResults_, stackGroupOperationResults) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the results of the operation.
    std::shared_ptr<vector<ListStackGroupOperationResultsResponseBodyStackGroupOperationResults>> stackGroupOperationResults_ = nullptr;
    // The total number of results.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
