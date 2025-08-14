// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENINTERREGIONBANDWIDTHLIMITSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenInterRegionBandwidthLimitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenInterRegionBandwidthLimitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenInterRegionBandwidthLimits, cenInterRegionBandwidthLimits_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenInterRegionBandwidthLimitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenInterRegionBandwidthLimits, cenInterRegionBandwidthLimits_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenInterRegionBandwidthLimitsResponseBody() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(const DescribeCenInterRegionBandwidthLimitsResponseBody &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(DescribeCenInterRegionBandwidthLimitsResponseBody &&) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenInterRegionBandwidthLimitsResponseBody() = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody& operator=(const DescribeCenInterRegionBandwidthLimitsResponseBody &) = default ;
    DescribeCenInterRegionBandwidthLimitsResponseBody& operator=(DescribeCenInterRegionBandwidthLimitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenInterRegionBandwidthLimits_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // cenInterRegionBandwidthLimits Field Functions 
    bool hasCenInterRegionBandwidthLimits() const { return this->cenInterRegionBandwidthLimits_ != nullptr;};
    void deleteCenInterRegionBandwidthLimits() { this->cenInterRegionBandwidthLimits_ = nullptr;};
    inline const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits & cenInterRegionBandwidthLimits() const { DARABONBA_PTR_GET_CONST(cenInterRegionBandwidthLimits_, DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits cenInterRegionBandwidthLimits() { DARABONBA_PTR_GET(cenInterRegionBandwidthLimits_, DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setCenInterRegionBandwidthLimits(const DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits & cenInterRegionBandwidthLimits) { DARABONBA_PTR_SET_VALUE(cenInterRegionBandwidthLimits_, cenInterRegionBandwidthLimits) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setCenInterRegionBandwidthLimits(DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits && cenInterRegionBandwidthLimits) { DARABONBA_PTR_SET_RVALUE(cenInterRegionBandwidthLimits_, cenInterRegionBandwidthLimits) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenInterRegionBandwidthLimitsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of inter-region connections.
    std::shared_ptr<DescribeCenInterRegionBandwidthLimitsResponseBodyCenInterRegionBandwidthLimits> cenInterRegionBandwidthLimits_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
