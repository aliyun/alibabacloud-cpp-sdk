// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATADISTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataDistResultResponseBodyDistResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDataDistResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataDistResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistResults, distResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataDistResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistResults, distResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataDistResultResponseBody() = default ;
    DescribeDataDistResultResponseBody(const DescribeDataDistResultResponseBody &) = default ;
    DescribeDataDistResultResponseBody(DescribeDataDistResultResponseBody &&) = default ;
    DescribeDataDistResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataDistResultResponseBody() = default ;
    DescribeDataDistResultResponseBody& operator=(const DescribeDataDistResultResponseBody &) = default ;
    DescribeDataDistResultResponseBody& operator=(DescribeDataDistResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distResults_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // distResults Field Functions 
    bool hasDistResults() const { return this->distResults_ != nullptr;};
    void deleteDistResults() { this->distResults_ = nullptr;};
    inline const DescribeDataDistResultResponseBodyDistResults & distResults() const { DARABONBA_PTR_GET_CONST(distResults_, DescribeDataDistResultResponseBodyDistResults) };
    inline DescribeDataDistResultResponseBodyDistResults distResults() { DARABONBA_PTR_GET(distResults_, DescribeDataDistResultResponseBodyDistResults) };
    inline DescribeDataDistResultResponseBody& setDistResults(const DescribeDataDistResultResponseBodyDistResults & distResults) { DARABONBA_PTR_SET_VALUE(distResults_, distResults) };
    inline DescribeDataDistResultResponseBody& setDistResults(DescribeDataDistResultResponseBodyDistResults && distResults) { DARABONBA_PTR_SET_RVALUE(distResults_, distResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDataDistResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataDistResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataDistResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataDistResultResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The distribution status of data files on edge instances.
    std::shared_ptr<DescribeDataDistResultResponseBodyDistResults> distResults_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
