// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHRESULTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBatchResultDetailResponseBodyBatchResultDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeBatchResultDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchResultDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchResultDetails, batchResultDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchResultDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchResultDetails, batchResultDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchResultDetailResponseBody() = default ;
    DescribeBatchResultDetailResponseBody(const DescribeBatchResultDetailResponseBody &) = default ;
    DescribeBatchResultDetailResponseBody(DescribeBatchResultDetailResponseBody &&) = default ;
    DescribeBatchResultDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchResultDetailResponseBody() = default ;
    DescribeBatchResultDetailResponseBody& operator=(const DescribeBatchResultDetailResponseBody &) = default ;
    DescribeBatchResultDetailResponseBody& operator=(DescribeBatchResultDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchResultDetails_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // batchResultDetails Field Functions 
    bool hasBatchResultDetails() const { return this->batchResultDetails_ != nullptr;};
    void deleteBatchResultDetails() { this->batchResultDetails_ = nullptr;};
    inline const DescribeBatchResultDetailResponseBodyBatchResultDetails & batchResultDetails() const { DARABONBA_PTR_GET_CONST(batchResultDetails_, DescribeBatchResultDetailResponseBodyBatchResultDetails) };
    inline DescribeBatchResultDetailResponseBodyBatchResultDetails batchResultDetails() { DARABONBA_PTR_GET(batchResultDetails_, DescribeBatchResultDetailResponseBodyBatchResultDetails) };
    inline DescribeBatchResultDetailResponseBody& setBatchResultDetails(const DescribeBatchResultDetailResponseBodyBatchResultDetails & batchResultDetails) { DARABONBA_PTR_SET_VALUE(batchResultDetails_, batchResultDetails) };
    inline DescribeBatchResultDetailResponseBody& setBatchResultDetails(DescribeBatchResultDetailResponseBodyBatchResultDetails && batchResultDetails) { DARABONBA_PTR_SET_RVALUE(batchResultDetails_, batchResultDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchResultDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBatchResultDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The detailed results of the batch operation.
    std::shared_ptr<DescribeBatchResultDetailResponseBodyBatchResultDetails> batchResultDetails_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
