// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEcGrantRelationResponseBodyEcGrantRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEcGrantRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcGrantRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EcGrantRelations, ecGrantRelations_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcGrantRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EcGrantRelations, ecGrantRelations_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEcGrantRelationResponseBody() = default ;
    DescribeEcGrantRelationResponseBody(const DescribeEcGrantRelationResponseBody &) = default ;
    DescribeEcGrantRelationResponseBody(DescribeEcGrantRelationResponseBody &&) = default ;
    DescribeEcGrantRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcGrantRelationResponseBody() = default ;
    DescribeEcGrantRelationResponseBody& operator=(const DescribeEcGrantRelationResponseBody &) = default ;
    DescribeEcGrantRelationResponseBody& operator=(DescribeEcGrantRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ecGrantRelations_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeEcGrantRelationResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ecGrantRelations Field Functions 
    bool hasEcGrantRelations() const { return this->ecGrantRelations_ != nullptr;};
    void deleteEcGrantRelations() { this->ecGrantRelations_ = nullptr;};
    inline const vector<DescribeEcGrantRelationResponseBodyEcGrantRelations> & ecGrantRelations() const { DARABONBA_PTR_GET_CONST(ecGrantRelations_, vector<DescribeEcGrantRelationResponseBodyEcGrantRelations>) };
    inline vector<DescribeEcGrantRelationResponseBodyEcGrantRelations> ecGrantRelations() { DARABONBA_PTR_GET(ecGrantRelations_, vector<DescribeEcGrantRelationResponseBodyEcGrantRelations>) };
    inline DescribeEcGrantRelationResponseBody& setEcGrantRelations(const vector<DescribeEcGrantRelationResponseBodyEcGrantRelations> & ecGrantRelations) { DARABONBA_PTR_SET_VALUE(ecGrantRelations_, ecGrantRelations) };
    inline DescribeEcGrantRelationResponseBody& setEcGrantRelations(vector<DescribeEcGrantRelationResponseBodyEcGrantRelations> && ecGrantRelations) { DARABONBA_PTR_SET_RVALUE(ecGrantRelations_, ecGrantRelations) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeEcGrantRelationResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEcGrantRelationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEcGrantRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEcGrantRelationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The query results.
    std::shared_ptr<vector<DescribeEcGrantRelationResponseBodyEcGrantRelations>> ecGrantRelations_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
