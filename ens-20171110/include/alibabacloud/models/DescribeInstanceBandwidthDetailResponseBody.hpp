// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceBandwidthDetailResponseBodyBandwidths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceBandwidthDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBandwidthDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBandwidthDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceBandwidthDetailResponseBody() = default ;
    DescribeInstanceBandwidthDetailResponseBody(const DescribeInstanceBandwidthDetailResponseBody &) = default ;
    DescribeInstanceBandwidthDetailResponseBody(DescribeInstanceBandwidthDetailResponseBody &&) = default ;
    DescribeInstanceBandwidthDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBandwidthDetailResponseBody() = default ;
    DescribeInstanceBandwidthDetailResponseBody& operator=(const DescribeInstanceBandwidthDetailResponseBody &) = default ;
    DescribeInstanceBandwidthDetailResponseBody& operator=(DescribeInstanceBandwidthDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidths_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // bandwidths Field Functions 
    bool hasBandwidths() const { return this->bandwidths_ != nullptr;};
    void deleteBandwidths() { this->bandwidths_ = nullptr;};
    inline const vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths> & bandwidths() const { DARABONBA_PTR_GET_CONST(bandwidths_, vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths>) };
    inline vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths> bandwidths() { DARABONBA_PTR_GET(bandwidths_, vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths>) };
    inline DescribeInstanceBandwidthDetailResponseBody& setBandwidths(const vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths> & bandwidths) { DARABONBA_PTR_SET_VALUE(bandwidths_, bandwidths) };
    inline DescribeInstanceBandwidthDetailResponseBody& setBandwidths(vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths> && bandwidths) { DARABONBA_PTR_SET_RVALUE(bandwidths_, bandwidths) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceBandwidthDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeInstanceBandwidthDetailResponseBodyBandwidths>> bandwidths_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
