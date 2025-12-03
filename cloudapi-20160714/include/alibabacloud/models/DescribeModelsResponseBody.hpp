// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeModelsResponseBodyModelDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelDetails, modelDetails_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelDetails, modelDetails_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeModelsResponseBody() = default ;
    DescribeModelsResponseBody(const DescribeModelsResponseBody &) = default ;
    DescribeModelsResponseBody(DescribeModelsResponseBody &&) = default ;
    DescribeModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelsResponseBody() = default ;
    DescribeModelsResponseBody& operator=(const DescribeModelsResponseBody &) = default ;
    DescribeModelsResponseBody& operator=(DescribeModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelDetails_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // modelDetails Field Functions 
    bool hasModelDetails() const { return this->modelDetails_ != nullptr;};
    void deleteModelDetails() { this->modelDetails_ = nullptr;};
    inline const DescribeModelsResponseBodyModelDetails & modelDetails() const { DARABONBA_PTR_GET_CONST(modelDetails_, DescribeModelsResponseBodyModelDetails) };
    inline DescribeModelsResponseBodyModelDetails modelDetails() { DARABONBA_PTR_GET(modelDetails_, DescribeModelsResponseBodyModelDetails) };
    inline DescribeModelsResponseBody& setModelDetails(const DescribeModelsResponseBodyModelDetails & modelDetails) { DARABONBA_PTR_SET_VALUE(modelDetails_, modelDetails) };
    inline DescribeModelsResponseBody& setModelDetails(DescribeModelsResponseBodyModelDetails && modelDetails) { DARABONBA_PTR_SET_RVALUE(modelDetails_, modelDetails) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeModelsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeModelsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeModelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned information about models. It is an array consisting of ModelDetail data.
    std::shared_ptr<DescribeModelsResponseBodyModelDetails> modelDetails_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
