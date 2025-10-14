// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionIdResources, ensRegionIdResources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionIdResources, ensRegionIdResources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsRegionIdResourceResponseBody() = default ;
    DescribeEnsRegionIdResourceResponseBody(const DescribeEnsRegionIdResourceResponseBody &) = default ;
    DescribeEnsRegionIdResourceResponseBody(DescribeEnsRegionIdResourceResponseBody &&) = default ;
    DescribeEnsRegionIdResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdResourceResponseBody() = default ;
    DescribeEnsRegionIdResourceResponseBody& operator=(const DescribeEnsRegionIdResourceResponseBody &) = default ;
    DescribeEnsRegionIdResourceResponseBody& operator=(DescribeEnsRegionIdResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionIdResources_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // ensRegionIdResources Field Functions 
    bool hasEnsRegionIdResources() const { return this->ensRegionIdResources_ != nullptr;};
    void deleteEnsRegionIdResources() { this->ensRegionIdResources_ = nullptr;};
    inline const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources & ensRegionIdResources() const { DARABONBA_PTR_GET_CONST(ensRegionIdResources_, DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources ensRegionIdResources() { DARABONBA_PTR_GET(ensRegionIdResources_, DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBody& setEnsRegionIdResources(const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources & ensRegionIdResources) { DARABONBA_PTR_SET_VALUE(ensRegionIdResources_, ensRegionIdResources) };
    inline DescribeEnsRegionIdResourceResponseBody& setEnsRegionIdResources(DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources && ensRegionIdResources) { DARABONBA_PTR_SET_RVALUE(ensRegionIdResources_, ensRegionIdResources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionIdResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsRegionIdResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data. For more information, see EnsRegionIdResources in sample JSON responses.
    std::shared_ptr<DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources> ensRegionIdResources_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of queried nodes.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
